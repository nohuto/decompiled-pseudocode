/*
 * XREFs of sub_180095868 @ 0x180095868
 * Callers:
 *     sub_1800956F0 @ 0x1800956F0 (sub_1800956F0.c)
 *     sub_180095910 @ 0x180095910 (sub_180095910.c)
 * Callees:
 *     sub_18003AC0C @ 0x18003AC0C (sub_18003AC0C.c)
 */

_QWORD *__fastcall sub_180095868(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 12LL;
  do
  {
    sub_18003AC0C(v4, (_QWORD *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
