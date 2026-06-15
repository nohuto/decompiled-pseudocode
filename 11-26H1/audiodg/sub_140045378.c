/*
 * XREFs of sub_140045378 @ 0x140045378
 * Callers:
 *     sub_140045320 @ 0x140045320 (sub_140045320.c)
 *     sub_14005DEF4 @ 0x14005DEF4 (sub_14005DEF4.c)
 *     sub_1400AF3A6 @ 0x1400AF3A6 (sub_1400AF3A6.c)
 *     sub_1400B1EBD @ 0x1400B1EBD (sub_1400B1EBD.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_140045378(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return sub_1400453E4(v1, 56LL);
  return result;
}
