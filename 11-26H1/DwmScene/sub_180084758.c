/*
 * XREFs of sub_180084758 @ 0x180084758
 * Callers:
 *     sub_18008465C @ 0x18008465C (sub_18008465C.c)
 * Callees:
 *     sub_180076340 @ 0x180076340 (sub_180076340.c)
 *     sub_18007FBC4 @ 0x18007FBC4 (sub_18007FBC4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180084758(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 i; // rdi

  v4 = a2;
  for ( i = a1; v4; --v4 )
  {
    sub_18007FBC4(a1, a3, i);
    a3 += 48LL;
    i += 48LL;
  }
  sub_180076340(a3, a3);
  return a3;
}
