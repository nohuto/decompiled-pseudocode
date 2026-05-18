/*
 * XREFs of sub_1800968F4 @ 0x1800968F4
 * Callers:
 *     sub_180096734 @ 0x180096734 (sub_180096734.c)
 *     sub_180096A20 @ 0x180096A20 (sub_180096A20.c)
 * Callees:
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 */

__int64 *__fastcall sub_1800968F4(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 8LL;
  do
  {
    sub_180013540(v4, (__int64 *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
