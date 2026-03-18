/*
 * XREFs of CmpReleaseHiveLoadUnloadRundown @ 0x140C58F14
 * Callers:
 *     CmpLoadHiveVolatile @ 0x14084D878 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14084DD4C (CmpRefreshHive.c)
 *     NtReplaceKey @ 0x14084FD20 (NtReplaceKey.c)
 *     CmpSyncNextBackupHive @ 0x14085A968 (CmpSyncNextBackupHive.c)
 *     CmpLazyCommitWorker @ 0x14085BCC0 (CmpLazyCommitWorker.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     CmpInitHiveFromFile @ 0x1408B48B4 (CmpInitHiveFromFile.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD4630 (CmpLateUnloadHiveWorker.c)
 *     CmLoadKey @ 0x140AE15E4 (CmLoadKey.c)
 *     CmUnloadKey @ 0x140B0A63C (CmUnloadKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

void CmpReleaseHiveLoadUnloadRundown()
{
  ExReleaseRundownProtection_0(&CmpHiveLoadUnloadRundown);
  KeLeaveCriticalRegion();
}
