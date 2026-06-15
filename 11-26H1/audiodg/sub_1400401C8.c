/*
 * XREFs of sub_1400401C8 @ 0x1400401C8
 * Callers:
 *     sub_140048784 @ 0x140048784 (sub_140048784.c)
 *     sub_14005AC94 @ 0x14005AC94 (sub_14005AC94.c)
 *     sub_140073F98 @ 0x140073F98 (sub_140073F98.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400401C8(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return CoRevokeDeviceCatalog();
  return result;
}
