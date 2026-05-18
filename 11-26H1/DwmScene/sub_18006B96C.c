/*
 * XREFs of sub_18006B96C @ 0x18006B96C
 * Callers:
 *     sub_18006B814 @ 0x18006B814 (sub_18006B814.c)
 * Callees:
 *     sub_18006B7DC @ 0x18006B7DC (sub_18006B7DC.c)
 *     sub_18006BA64 @ 0x18006BA64 (sub_18006BA64.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006B96C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 128LL )
  {
    sub_18006BA64(a1, a3, i);
    a3 += 128LL;
  }
  sub_18006B7DC(a3, a3);
  return a3;
}
