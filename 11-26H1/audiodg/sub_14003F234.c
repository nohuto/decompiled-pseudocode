/*
 * XREFs of sub_14003F234 @ 0x14003F234
 * Callers:
 *     sub_140014350 @ 0x140014350 (sub_140014350.c)
 *     sub_1400156A0 @ 0x1400156A0 (sub_1400156A0.c)
 *     sub_14003F2C0 @ 0x14003F2C0 (sub_14003F2C0.c)
 * Callees:
 *     sub_14004BF90 @ 0x14004BF90 (sub_14004BF90.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14003F234(int a1, int a2, int a3, int a4)
{
  if ( a4 < 0 )
    sub_14004BF90(a1, a2, a3, a4);
  return (unsigned int)a4;
}
