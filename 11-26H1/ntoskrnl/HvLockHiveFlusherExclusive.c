/*
 * XREFs of HvLockHiveFlusherExclusive @ 0x140C58D30
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14046EB90 (CmpRecheckHiveVolumePolicy.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1404F39FC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 *     HvpMakeHiveReadOnly @ 0x1406E2924 (HvpMakeHiveReadOnly.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 *     CmDumpKeyToFile @ 0x14084D1E8 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x14084D378 (CmSaveMergedKeys.c)
 *     NtCompressKey @ 0x14084EBA0 (NtCompressKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140856CB8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140856D48 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmReplaceKey @ 0x140858C90 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14085A45C (CmpFlushBackupHive.c)
 *     CmpTransMgrPrepare @ 0x1408AEE6C (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1408AF3A0 (CmpTransMgrSyncHive.c)
 *     CmpBlockHiveWrites @ 0x1408B1DD0 (CmpBlockHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408B1E74 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpBlockTwoHiveWrites @ 0x1408B2110 (CmpBlockTwoHiveWrites.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1408D9360 (CmpVEExecuteOpenLogic.c)
 *     HvpFinishPrimaryWrite @ 0x140AAACE8 (HvpFinishPrimaryWrite.c)
 * Callees:
 *     CmpVolumeManagerLockContextListExclusive @ 0x140905BD0 (CmpVolumeManagerLockContextListExclusive.c)
 */

void __fastcall HvLockHiveFlusherExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  CmpVolumeManagerLockContextListExclusive((unsigned __int64 *)(a1 + 72), a2, a3, a4);
}
