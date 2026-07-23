/*
 * XREFs of HvLockHiveFlusherExclusive @ 0x140C5ED30
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140468310 (CmpRecheckHiveVolumePolicy.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1404ECFDC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmShutdownSystem1 @ 0x1406E64F0 (CmShutdownSystem1.c)
 *     HvpMakeHiveReadOnly @ 0x1406E6C04 (HvpMakeHiveReadOnly.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     CmDumpKeyToFile @ 0x1408534F4 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x140853684 (CmSaveMergedKeys.c)
 *     NtCompressKey @ 0x140854EB0 (NtCompressKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14085D050 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14085D0E0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmReplaceKey @ 0x14085F020 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140860750 (CmpFlushBackupHive.c)
 *     CmpTransMgrPrepare @ 0x1408B52AC (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1408B57AC (CmpTransMgrSyncHive.c)
 *     CmpBlockHiveWrites @ 0x1408B83AC (CmpBlockHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408B8450 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpBlockTwoHiveWrites @ 0x1408B86EC (CmpBlockTwoHiveWrites.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1408DF920 (CmpVEExecuteOpenLogic.c)
 *     HvpFinishPrimaryWrite @ 0x140AA82C8 (HvpFinishPrimaryWrite.c)
 * Callees:
 *     CmpVolumeManagerLockContextListExclusive @ 0x140A2E304 (CmpVolumeManagerLockContextListExclusive.c)
 */

void __fastcall HvLockHiveFlusherExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  CmpVolumeManagerLockContextListExclusive((unsigned __int64 *)(a1 + 72), a2, a3, a4);
}
