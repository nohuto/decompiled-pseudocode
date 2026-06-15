/*
 * XREFs of sub_1400935F8 @ 0x1400935F8
 * Callers:
 *     sub_140093678 @ 0x140093678 (sub_140093678.c)
 *     sub_1400B4010 @ 0x1400B4010 (sub_1400B4010.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_1400935F8(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return sub_1400453E4(v1, 0x30uLL);
  return result;
}
