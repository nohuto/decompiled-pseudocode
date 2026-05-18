/*
 * XREFs of sub_180095BDC @ 0x180095BDC
 * Callers:
 *     sub_180095A60 @ 0x180095A60 (sub_180095A60.c)
 *     sub_180095C80 @ 0x180095C80 (sub_180095C80.c)
 *     sub_180095DF4 @ 0x180095DF4 (sub_180095DF4.c)
 * Callees:
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 */

__int64 *__fastcall sub_180095BDC(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 16LL;
  do
  {
    sub_180013540(v4, (__int64 *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
