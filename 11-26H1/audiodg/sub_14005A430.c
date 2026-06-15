/*
 * XREFs of sub_14005A430 @ 0x14005A430
 * Callers:
 *     sub_14005A234 @ 0x14005A234 (sub_14005A234.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_14005A430(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_1400453E4(*(_QWORD *)(a1 + 8), 16LL * *(_QWORD *)(a1 + 16));
  return result;
}
