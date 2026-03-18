/*
 * XREFs of CmpLockRegistry @ 0x140C58850
 * Callers:
 *     CmpDoQueryKeyName @ 0x140261160 (CmpDoQueryKeyName.c)
 *     CmpRecheckHiveVolumePolicy @ 0x14046EB90 (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 *     CmDumpKeyToFile @ 0x14084D1E8 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x14084D378 (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x14084DD4C (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x14084E670 (CmOpenKeyForBugCheckRecovery.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140856D48 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmReplaceKey @ 0x140858C90 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14085A45C (CmpFlushBackupHive.c)
 *     CmpAssignKeySecurity @ 0x14085AB60 (CmpAssignKeySecurity.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x14085C268 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpDoReOpenTransKey @ 0x140863A58 (CmpDoReOpenTransKey.c)
 *     CmpStopRMLog @ 0x1408ACBAC (CmpStopRMLog.c)
 *     CmpCleanupTransactionState @ 0x1408ACEE8 (CmpCleanupTransactionState.c)
 *     CmpTransMgrPrepare @ 0x1408AEE6C (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1408AF3A0 (CmpTransMgrSyncHive.c)
 *     CmSetKeyFlags @ 0x1408B09D8 (CmSetKeyFlags.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1408B3FA0 (CmpLockRegistryFreezeAware.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 *     CmpTrimHive @ 0x1408B781C (CmpTrimHive.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1408C0050 (CmCallbackGetKeyObjectIDEx.c)
 *     CmCallbackGetKeyObjectID @ 0x1408C0E90 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateKey @ 0x1408C21A0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1408C5660 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmpParseKey @ 0x1408CB3F0 (CmpParseKey.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpDelayCloseWorker @ 0x1408CE720 (CmpDelayCloseWorker.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmQueryValueKey @ 0x1408D88E0 (CmQueryValueKey.c)
 *     CmpQueryKeySecurity @ 0x1408ED790 (CmpQueryKeySecurity.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F3730 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpFreeParseContext @ 0x1409756C0 (CmpFreeParseContext.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     CmReleaseLoadKeyContext @ 0x14097B260 (CmReleaseLoadKeyContext.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 *     CmpLinkHiveToMaster @ 0x14097C11C (CmpLinkHiveToMaster.c)
 *     CmpCleanupParseContext @ 0x14097C850 (CmpCleanupParseContext.c)
 *     CmQueryMultipleValueKey @ 0x14097EB2C (CmQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 *     CmpEnumerateLayeredKey @ 0x140982A88 (CmpEnumerateLayeredKey.c)
 *     CmLockKeyForWrite @ 0x140A30B0C (CmLockKeyForWrite.c)
 *     CmpStartSiloRegistryNamespace @ 0x140A31298 (CmpStartSiloRegistryNamespace.c)
 *     CmpCloseKeyObject @ 0x140A59A10 (CmpCloseKeyObject.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A67634 (CmpStopSiloKeyLockTracker.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 *     CmSaveKey @ 0x140A7626C (CmSaveKey.c)
 *     HvpFinishPrimaryWrite @ 0x140AAACE8 (HvpFinishPrimaryWrite.c)
 *     NtDeleteKey @ 0x140AB2390 (NtDeleteKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140AB2878 (CmKeyBodyNeedsVirtualImage.c)
 *     CmNotifyRunDown @ 0x140ABE29C (CmNotifyRunDown.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD4630 (CmpLateUnloadHiveWorker.c)
 *     CmpDoLocalizeNextHive @ 0x140AD63C0 (CmpDoLocalizeNextHive.c)
 *     CmpReorganizeHive @ 0x140AE35CC (CmpReorganizeHive.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140AFF7BC (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B3181C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4BD9C (CmKeyBodyRemapToVirtual.c)
 *     CmSetLastWriteTimeKey @ 0x140B53BB0 (CmSetLastWriteTimeKey.c)
 *     CmpDumpKeyToBuffer @ 0x140C5812C (CmpDumpKeyToBuffer.c)
 * Callees:
 *     CmpTestRegistryLock @ 0x140261EB0 (CmpTestRegistryLock.c)
 *     CmpRecordRegistryLockSharedAcquire @ 0x140262610 (CmpRecordRegistryLockSharedAcquire.c)
 *     ExfAcquireCacheAwarePushLockSharedEx @ 0x1402777C0 (ExfAcquireCacheAwarePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     PsBoostThreadIo @ 0x1402BA700 (PsBoostThreadIo.c)
 */

void CmpLockRegistry()
{
  bool v0; // bl
  __int64 v1; // r8
  struct _SINGLE_LIST_ENTRY *v2; // r9
  struct _KLOCK_ENTRIES *v3; // r9
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int64 *v5; // rax
  struct _KTHREAD *v6; // rbx
  AutoBoost *v7; // rdi
  void *v8; // rdx

  if ( !BYTE4(NlsMbOemCodePageTag) )
  {
    v0 = CmpTestRegistryLock();
    PsBoostThreadIo((LegacyAutoBoost *)KeGetCurrentThread(), 0LL, v1, v2);
    CurrentThread = KeGetCurrentThread();
    v5 = 0LL;
    --CurrentThread->KernelApcDisable;
    if ( !v0 )
    {
      v6 = CmpRegistryLock;
      v7 = (AutoBoost *)KeAbPreAcquire((__int64)CmpRegistryLock, 0LL, 0LL, v3);
      v5 = ExfAcquireCacheAwarePushLockSharedEx((__int64)v6, 0LL, (__int64)v7, (__int64)v6);
      if ( v7 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v7, v8);
        else
          *((_BYTE *)v7 + 10) = 1;
      }
    }
    CmpRecordRegistryLockSharedAcquire((unsigned __int64)v5);
  }
}
