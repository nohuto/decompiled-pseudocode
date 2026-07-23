/*
 * XREFs of CmpTransUowIsEqual @ 0x140779DF0
 * Callers:
 *     CmEqualTrans @ 0x1408C2FA0 (CmEqualTrans.c)
 *     CmGetKCBCacheSecurity @ 0x1408C5C50 (CmGetKCBCacheSecurity.c)
 *     CmpIsKeyDeleted @ 0x1408C8400 (CmpIsKeyDeleted.c)
 *     CmpIsKeyStackDeleted @ 0x1408D52A0 (CmpIsKeyStackDeleted.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1408D7310 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 *     CmpQueryKeySecurity @ 0x1408F3D50 (CmpQueryKeySecurity.c)
 *     CmpCheckKeyBodyAccess @ 0x14090C4C0 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14090CA40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140A28160 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmRmIsKCBVisible @ 0x140A41AB0 (CmRmIsKCBVisible.c)
 *     CmRmIsKcbStackVisible @ 0x140A4E080 (CmRmIsKcbStackVisible.c)
 *     CmpSearchForTrans @ 0x140AC0B44 (CmpSearchForTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
