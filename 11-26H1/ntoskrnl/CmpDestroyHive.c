/*
 * XREFs of CmpDestroyHive @ 0x1408BD394
 * Callers:
 *     CmpLoadKeyCommon @ 0x140467F14 (CmpLoadKeyCommon.c)
 *     CmSaveMergedKeys @ 0x140853684 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140853B84 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140854058 (CmpRefreshHive.c)
 *     CmpFreeAllMemory @ 0x14085A5F0 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x14085F020 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140860750 (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x140862384 (CmpCreateEmptyHiveClone.c)
 *     CmpHiveCacheEntryCleanup @ 0x14086815C (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140868610 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 *     CmLoadKey @ 0x140ADEAD4 (CmLoadKey.c)
 *     CmpReorganizeHive @ 0x140AE10D4 (CmpReorganizeHive.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x1404CD4DC (CmpUnJoinClassOfTrust.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1408BE49C (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1408BE560 (CmpVolumeContextDecrementRefCount.c)
 *     CmpCmdHiveClose @ 0x1408BE78C (CmpCmdHiveClose.c)
 *     HvHiveCleanup @ 0x1408BF5E0 (HvHiveCleanup.c)
 *     CmpDestroySecurityCache @ 0x1408BFF6C (CmpDestroySecurityCache.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 */

__int64 __fastcall CmpDestroyHive(_QWORD *P)
{
  struct _PRIVILEGE_SET *v2; // rcx

  CmpDestroySecurityCache();
  CmpUnJoinClassOfTrust((__int64)P);
  CmpVERemoveHiveFromSIDMappingTable(P);
  HvHiveCleanup(P);
  CmpCmdHiveClose(P);
  v2 = (struct _PRIVILEGE_SET *)P[600];
  if ( v2 )
    CmpVolumeContextDecrementRefCount(v2);
  return CmpDereferenceHive(P);
}
