#include <reg52.h>

sbit LED = P2^0;     //λ��ַ������ע�⣺sbit����Сд��P��д��

void main()
{
    LED = 1;        //����С��
    while (1);      //����ֹͣ������
}