/*
 * XREFs of sub_18002AA30 @ 0x18002AA30
 * Callers:
 *     sub_18002A5E0 @ 0x18002A5E0 (sub_18002A5E0.c)
 *     sub_18002A740 @ 0x18002A740 (sub_18002A740.c)
 *     sub_18006F450 @ 0x18006F450 (sub_18006F450.c)
 * Callees:
 *     sub_18002A448 @ 0x18002A448 (sub_18002A448.c)
 *     sub_18002AB54 @ 0x18002AB54 (sub_18002AB54.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002AA30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 152LL )
  {
    sub_18002AB54(a1, a3, i);
    a3 += 152LL;
  }
  sub_18002A448(a3, a3);
  return a3;
}
