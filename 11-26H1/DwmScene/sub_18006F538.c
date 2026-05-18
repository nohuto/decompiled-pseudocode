/*
 * XREFs of sub_18006F538 @ 0x18006F538
 * Callers:
 *     sub_18006F450 @ 0x18006F450 (sub_18006F450.c)
 *     sub_18006F5C4 @ 0x18006F5C4 (sub_18006F5C4.c)
 * Callees:
 *     sub_18002A448 @ 0x18002A448 (sub_18002A448.c)
 *     sub_18006F598 @ 0x18006F598 (sub_18006F598.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006F538(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 i; // rbx

  v2 = a2;
  for ( i = a1; v2; --v2 )
  {
    sub_18006F598(a1, i);
    i += 152LL;
  }
  sub_18002A448(i, i);
  return i;
}
