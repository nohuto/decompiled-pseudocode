/*
 * XREFs of sub_140026CF0 @ 0x140026CF0
 * Callers:
 *     sub_14003FE00 @ 0x14003FE00 (sub_14003FE00.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140026CF0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    result = sub_1400B6010(v2);
    *(_BYTE *)(a1 + 16) = 1;
  }
  return result;
}
