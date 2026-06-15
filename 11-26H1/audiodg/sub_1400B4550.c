/*
 * XREFs of sub_1400B4550 @ 0x1400B4550
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400409B0 @ 0x1400409B0 (sub_1400409B0.c)
 *     sub_140045508 @ 0x140045508 (sub_140045508.c)
 *     sub_140045540 @ 0x140045540 (sub_140045540.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400B4550(__int64 a1)
{
  if ( !sub_140045508(a1) )
    return sub_1400409B0((__int64)&byte_1400E7528);
  byte_1400E7528 = 0;
  return sub_140045540((__int64)&off_1400E7530);
}
