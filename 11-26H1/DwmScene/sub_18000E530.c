/*
 * XREFs of sub_18000E530 @ 0x18000E530
 * Callers:
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 * Callees:
 *     sub_18000E5DC @ 0x18000E5DC (sub_18000E5DC.c)
 *     sub_18000E740 @ 0x18000E740 (sub_18000E740.c)
 */

__int64 __fastcall sub_18000E530(__int64 a1)
{
  sub_18000E5DC(a1 + 40);
  sub_18000E740(a1 + 16);
  return sub_18000E6C8(a1 + 8);
}
