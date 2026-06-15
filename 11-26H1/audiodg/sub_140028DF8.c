/*
 * XREFs of sub_140028DF8 @ 0x140028DF8
 * Callers:
 *     sub_1400AF834 @ 0x1400AF834 (sub_1400AF834.c)
 * Callees:
 *     sub_140029510 @ 0x140029510 (sub_140029510.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140028DF8(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return sub_140029510();
  }
  return result;
}
