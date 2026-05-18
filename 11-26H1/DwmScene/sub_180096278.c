/*
 * XREFs of sub_180096278 @ 0x180096278
 * Callers:
 *     sub_18009609C @ 0x18009609C (sub_18009609C.c)
 *     sub_180096320 @ 0x180096320 (sub_180096320.c)
 * Callees:
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 */

__int64 *__fastcall sub_180096278(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 15LL;
  do
  {
    sub_180013540(v4, (__int64 *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
