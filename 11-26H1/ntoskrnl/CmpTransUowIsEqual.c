/*
 * XREFs of CmpTransUowIsEqual @ 0x140776F48
 * Callers:
 *     CmEqualTrans @ 0x1408BC9D0 (CmEqualTrans.c)
 *     CmGetKCBCacheSecurity @ 0x1408BF680 (CmGetKCBCacheSecurity.c)
 *     CmpIsKeyDeleted @ 0x1408C1E30 (CmpIsKeyDeleted.c)
 *     CmpIsKeyStackDeleted @ 0x1408CECF0 (CmpIsKeyStackDeleted.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1408D0D50 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 *     CmpQueryKeySecurity @ 0x1408ED790 (CmpQueryKeySecurity.c)
 *     CmpCheckKeyBodyAccess @ 0x140930990 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140A1EB40 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmRmIsKCBVisible @ 0x140A2FC30 (CmRmIsKCBVisible.c)
 *     CmRmIsKcbStackVisible @ 0x140A33120 (CmRmIsKcbStackVisible.c)
 *     CmpSearchForTrans @ 0x140ABEAA4 (CmpSearchForTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
