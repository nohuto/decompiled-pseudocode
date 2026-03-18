/*
 * XREFs of CmpDestroyHive @ 0x1408B6DC4
 * Callers:
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmSaveMergedKeys @ 0x14084D378 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14084D878 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14084DD4C (CmpRefreshHive.c)
 *     CmpFreeAllMemory @ 0x1408542E0 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x140858C90 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14085A45C (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x14085C094 (CmpCreateEmptyHiveClone.c)
 *     CmpHiveCacheEntryCleanup @ 0x140861D7C (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140862230 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140A7626C (CmSaveKey.c)
 *     CmLoadKey @ 0x140AE15E4 (CmLoadKey.c)
 *     CmpReorganizeHive @ 0x140AE35CC (CmpReorganizeHive.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x1404D3C6C (CmpUnJoinClassOfTrust.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1408B7ECC (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1408B7F90 (CmpVolumeContextDecrementRefCount.c)
 *     CmpCmdHiveClose @ 0x1408B81BC (CmpCmdHiveClose.c)
 *     HvHiveCleanup @ 0x1408B9010 (HvHiveCleanup.c)
 *     CmpDestroySecurityCache @ 0x1408B999C (CmpDestroySecurityCache.c)
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
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
