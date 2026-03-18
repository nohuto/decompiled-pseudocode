/*
 * XREFs of CmpIsKcbInsideVirtualizedHive @ 0x1408F40F0
 * Callers:
 *     KCBIsVirtualizable @ 0x14044F810 (KCBIsVirtualizable.c)
 *     KCBNeedsVirtualImage_0 @ 0x1404CD70C (KCBNeedsVirtualImage_0.c)
 *     CmQueryKey @ 0x1408C5660 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F3730 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualizedHive(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4120LL) & 0x10) != 0;
}
