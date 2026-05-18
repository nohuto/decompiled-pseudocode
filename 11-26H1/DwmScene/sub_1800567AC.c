/*
 * XREFs of sub_1800567AC @ 0x1800567AC
 * Callers:
 *     sub_180055FB0 @ 0x180055FB0 (sub_180055FB0.c)
 * Callees:
 *     sub_18001EB54 @ 0x18001EB54 (sub_18001EB54.c)
 *     sub_1800251F4 @ 0x1800251F4 (sub_1800251F4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800567AC(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rsi
  __int64 i; // rdi

  v4 = a2;
  for ( i = a1; v4; --v4 )
  {
    sub_1800251F4(a1, a3, i);
    a3 += 4;
    i += 32LL;
  }
  sub_18001EB54((__int64)a3, (__int64)a3);
  return a3;
}
