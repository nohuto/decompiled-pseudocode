/*
 * XREFs of CmpUnlockRegistry @ 0x140C58970
 * Callers:
 *     CmpDoQueryKeyName @ 0x140261160 (CmpDoQueryKeyName.c)
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmpTryToRundownHive @ 0x140463B48 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmpRecheckHiveVolumePolicy @ 0x14046EB90 (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406E24C0 (CmShutdownSystem2.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x14084C024 (CmpMarkCurrentProfileDirty.c)
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 *     CmpSaveBootControlSet @ 0x14084CBB8 (CmpSaveBootControlSet.c)
 *     CmDumpKeyToFile @ 0x14084D1E8 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x14084D378 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14084D878 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14084DD4C (CmpRefreshHive.c)
 *     CmCompleteRegistryInitialization @ 0x14084E49C (CmCompleteRegistryInitialization.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x14084E670 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x14084E8F0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14084EBA0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x14084F320 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14084F540 (NtQueryOpenSubKeysEx.c)
 *     CmpCloneHwProfile @ 0x140852134 (CmpCloneHwProfile.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140856CB8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140856D48 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmThawRegistry @ 0x1408571F0 (CmThawRegistry.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmReplaceKey @ 0x140858C90 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14085A45C (CmpFlushBackupHive.c)
 *     CmpAssignKeySecurity @ 0x14085AB60 (CmpAssignKeySecurity.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x14085C268 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpDoReOpenTransKey @ 0x140863A58 (CmpDoReOpenTransKey.c)
 *     CmpStartRMLogs @ 0x1408ACB38 (CmpStartRMLogs.c)
 *     CmpStopRMLog @ 0x1408ACBAC (CmpStopRMLog.c)
 *     CmpCleanupTransactionState @ 0x1408ACEE8 (CmpCleanupTransactionState.c)
 *     CmpCommitLightWeightTransaction @ 0x1408AE64C (CmpCommitLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1408AECE8 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrPrepare @ 0x1408AEE6C (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1408AF3A0 (CmpTransMgrSyncHive.c)
 *     CmpPerformUnloadKey @ 0x1408AFC14 (CmpPerformUnloadKey.c)
 *     CmSetKeyFlags @ 0x1408B09D8 (CmSetKeyFlags.c)
 *     CmpDoFlushNextHive @ 0x1408B1C20 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1408B3FA0 (CmpLockRegistryFreezeAware.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 *     CmpTrimHive @ 0x1408B781C (CmpTrimHive.c)
 *     CmpCompleteUnloadKey @ 0x1408B9ACC (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408BC6D0 (CmpTransMgrFreeVolatileData.c)
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
 *     ExpWatchProductTypeWork @ 0x140973C50 (ExpWatchProductTypeWork.c)
 *     CmpFreeParseContext @ 0x1409756C0 (CmpFreeParseContext.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     CmReleaseLoadKeyContext @ 0x14097B260 (CmReleaseLoadKeyContext.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 *     CmpLinkHiveToMaster @ 0x14097C11C (CmpLinkHiveToMaster.c)
 *     CmpCleanupParseContext @ 0x14097C850 (CmpCleanupParseContext.c)
 *     CmQueryMultipleValueKey @ 0x14097EB2C (CmQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 *     CmpEnumerateLayeredKey @ 0x140982A88 (CmpEnumerateLayeredKey.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
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
 *     CmpResolveHiveLoadConflict @ 0x140AE1F04 (CmpResolveHiveLoadConflict.c)
 *     CmFreezeRegistry @ 0x140AE3390 (CmFreezeRegistry.c)
 *     CmpReorganizeHive @ 0x140AE35CC (CmpReorganizeHive.c)
 *     CmEtwRunDown @ 0x140AFF0F8 (CmEtwRunDown.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140AFF7BC (CmEnumerateValueKeyFromMergedView.c)
 *     NtFlushKey @ 0x140AFFC30 (NtFlushKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B3181C (CmKeyBodyReplicateToVirtual.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140B332E8 (CmpWaitOnHiveWriteQueue.c)
 *     CmpDelayFreeRMWorker @ 0x140B43590 (CmpDelayFreeRMWorker.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4BD9C (CmKeyBodyRemapToVirtual.c)
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 *     CmSetLastWriteTimeKey @ 0x140B53BB0 (CmSetLastWriteTimeKey.c)
 *     CmpDumpKeyToBuffer @ 0x140C5812C (CmpDumpKeyToBuffer.c)
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140D04720 (CmGetSystemDriverList.c)
 * Callees:
 *     CmpGetSharedLockHandle @ 0x1402619C0 (CmpGetSharedLockHandle.c)
 *     CmpTestRegistryLockExclusive @ 0x140261C30 (CmpTestRegistryLockExclusive.c)
 *     CmpIsRegistryLockAcquiredRecursively @ 0x140262130 (CmpIsRegistryLockAcquiredRecursively.c)
 *     CmpRecordRegistryLockRelease @ 0x1402623A0 (CmpRecordRegistryLockRelease.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     PsBoostThreadIo @ 0x1402BA700 (PsBoostThreadIo.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void CmpUnlockRegistry()
{
  unsigned __int64 SharedLockHandle; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _SINGLE_LIST_ENTRY *v5; // r9
  struct _KTHREAD *v6; // rbx
  volatile signed __int64 **v7; // rdi
  _KTIMER *p_Timer; // rsi
  volatile signed __int64 *v9; // rcx

  if ( !BYTE4(NlsMbOemCodePageTag) )
  {
    if ( !CmpIsRegistryLockAcquiredRecursively() )
    {
      if ( CmpTestRegistryLockExclusive() )
      {
        v6 = CmpRegistryLock;
        v7 = (volatile signed __int64 **)CmpRegistryLock;
        p_Timer = &CmpRegistryLock->Timer;
        if ( CmpRegistryLock < (struct _KTHREAD *)&CmpRegistryLock->Timer )
        {
          do
          {
            v9 = *v7;
            if ( (_InterlockedExchangeAdd64(*v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v9);
            ++v7;
          }
          while ( v7 < (volatile signed __int64 **)p_Timer );
        }
        KeAbPostRelease((unsigned __int64)v6);
      }
      else
      {
        SharedLockHandle = CmpGetSharedLockHandle();
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)SharedLockHandle, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)SharedLockHandle);
        KeAbPostRelease(*(_QWORD *)(SharedLockHandle + 16));
      }
    }
    CmpRecordRegistryLockRelease();
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v1, v2);
    LOBYTE(v3) = 1;
    PsBoostThreadIo((LegacyAutoBoost *)KeGetCurrentThread(), v3, v4, v5);
  }
}
