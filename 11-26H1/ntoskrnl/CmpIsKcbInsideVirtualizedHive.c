/*
 * XREFs of CmpIsKcbInsideVirtualizedHive @ 0x1408FA6B0
 * Callers:
 *     KCBIsVirtualizable @ 0x140447940 (KCBIsVirtualizable.c)
 *     KCBNeedsVirtualImage_0 @ 0x1404C713C (KCBNeedsVirtualImage_0.c)
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F9CF0 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualizedHive(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4120LL) & 0x10) != 0;
}
