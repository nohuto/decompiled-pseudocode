/*
 * XREFs of HvUnlockHiveFlusherExclusive @ 0x140C5ED14
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140468310 (CmpRecheckHiveVolumePolicy.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x1404FB8E4 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmShutdownSystem1 @ 0x1406E64F0 (CmShutdownSystem1.c)
 *     HvpMakeHiveReadOnly @ 0x1406E6C04 (HvpMakeHiveReadOnly.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     CmDumpKeyToFile @ 0x1408534F4 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x140853684 (CmSaveMergedKeys.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14085D050 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14085D0E0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmReplaceKey @ 0x14085F020 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140860750 (CmpFlushBackupHive.c)
 *     CmpTransMgrPrepare @ 0x1408B52AC (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1408B57AC (CmpTransMgrSyncHive.c)
 *     CmpUnblockTwoHiveWrites @ 0x1408B7C2C (CmpUnblockTwoHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408B8450 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpBlockTwoHiveWrites @ 0x1408B86EC (CmpBlockTwoHiveWrites.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1408DF920 (CmpVEExecuteOpenLogic.c)
 *     HvpFinishPrimaryWrite @ 0x140AA82C8 (HvpFinishPrimaryWrite.c)
 *     CmpUnblockHiveWrites @ 0x140ADBC68 (CmpUnblockHiveWrites.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140B35738 (CmpWaitOnHiveWriteQueue.c)
 * Callees:
 *     CmSiRWLockReleaseExclusive @ 0x140A8992C (CmSiRWLockReleaseExclusive.c)
 */

void __fastcall HvUnlockHiveFlusherExclusive(__int64 a1)
{
  CmSiRWLockReleaseExclusive((struct _KTHREAD *)(a1 + 72));
}
