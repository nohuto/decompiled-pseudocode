/*
 * XREFs of sub_180053314 @ 0x180053314
 * Callers:
 *     sub_1800531D0 @ 0x1800531D0 (sub_1800531D0.c)
 *     sub_1800C253C @ 0x1800C253C (sub_1800C253C.c)
 *     sub_1800C50F4 @ 0x1800C50F4 (sub_1800C50F4.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800531F0 @ 0x1800531F0 (sub_1800531F0.c)
 */

__int64 __fastcall sub_180053314(__int64 a1, void **a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    sub_1800531F0(a2);
    return sub_18000C444(a2);
  }
  return result;
}
