/*
 * XREFs of CmpReleaseHiveLoadUnloadRundown @ 0x140C5EF14
 * Callers:
 *     CmpLoadHiveVolatile @ 0x140853B84 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140854058 (CmpRefreshHive.c)
 *     NtReplaceKey @ 0x140856030 (NtReplaceKey.c)
 *     CmpSyncNextBackupHive @ 0x140860C5C (CmpSyncNextBackupHive.c)
 *     CmpLazyCommitWorker @ 0x140861FB0 (CmpLazyCommitWorker.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmpInitHiveFromFile @ 0x1408BAE88 (CmpInitHiveFromFile.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 *     CmUnloadKey @ 0x140A3E88C (CmUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD1A90 (CmpLateUnloadHiveWorker.c)
 *     CmLoadKey @ 0x140ADEAD4 (CmLoadKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

void CmpReleaseHiveLoadUnloadRundown()
{
  ExReleaseRundownProtection_0(&CmpHiveLoadUnloadRundown);
  KeLeaveCriticalRegion();
}
