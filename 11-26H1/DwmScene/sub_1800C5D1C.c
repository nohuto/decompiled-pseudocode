/*
 * XREFs of sub_1800C5D1C @ 0x1800C5D1C
 * Callers:
 *     sub_1800C54F0 @ 0x1800C54F0 (sub_1800C54F0.c)
 *     sub_1800C6D50 @ 0x1800C6D50 (sub_1800C6D50.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 */

_QWORD *__fastcall sub_1800C5D1C(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)(a1 + 256);
  v7 = a3;
  v5 = sub_180042544(a1 + 256, (__int64)&v7);
  if ( v5 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180012C40(a2, (_QWORD *)(v5 + 40));
  }
  return a2;
}
