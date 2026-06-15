/*
 * XREFs of sub_14006CAB4 @ 0x14006CAB4
 * Callers:
 *     sub_14006CAD8 @ 0x14006CAD8 (sub_14006CAD8.c)
 *     sub_1400B2E3B @ 0x1400B2E3B (sub_1400B2E3B.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_14006CAB4(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return sub_1400453E4(v1, 0x18uLL);
  return result;
}
