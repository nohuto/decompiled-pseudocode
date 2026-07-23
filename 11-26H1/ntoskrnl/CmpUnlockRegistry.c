/*
 * XREFs of CmpUnlockRegistry @ 0x140C5E970
 * Callers:
 *     CmpDoQueryKeyName @ 0x1402606D0 (CmpDoQueryKeyName.c)
 *     CmDeleteLayeredKey @ 0x14043F510 (CmDeleteLayeredKey.c)
 *     CmpTryToRundownHive @ 0x14045CB08 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x140467F14 (CmpLoadKeyCommon.c)
 *     CmpRecheckHiveVolumePolicy @ 0x140468310 (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x1406E64F0 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406E6740 (CmShutdownSystem2.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x140852334 (CmpMarkCurrentProfileDirty.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     CmpSaveBootControlSet @ 0x140852EC8 (CmpSaveBootControlSet.c)
 *     CmDumpKeyToFile @ 0x1408534F4 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x140853684 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140853B84 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140854058 (CmpRefreshHive.c)
 *     CmCompleteRegistryInitialization @ 0x1408547AC (CmCompleteRegistryInitialization.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140854980 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x140854C00 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140854EB0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140855630 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140855850 (NtQueryOpenSubKeysEx.c)
 *     CmpCloneHwProfile @ 0x140858444 (CmpCloneHwProfile.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14085D050 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14085D0E0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmThawRegistry @ 0x14085D580 (CmThawRegistry.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmReplaceKey @ 0x14085F020 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140860750 (CmpFlushBackupHive.c)
 *     CmpAssignKeySecurity @ 0x140860E54 (CmpAssignKeySecurity.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140862558 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpDoReOpenTransKey @ 0x140869E38 (CmpDoReOpenTransKey.c)
 *     CmpStartRMLogs @ 0x1408B2F7C (CmpStartRMLogs.c)
 *     CmpStopRMLog @ 0x1408B2FF0 (CmpStopRMLog.c)
 *     CmpCleanupTransactionState @ 0x1408B3328 (CmpCleanupTransactionState.c)
 *     CmpCommitLightWeightTransaction @ 0x1408B4A8C (CmpCommitLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1408B5128 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrPrepare @ 0x1408B52AC (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1408B57AC (CmpTransMgrSyncHive.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmSetKeyFlags @ 0x1408B6EC8 (CmSetKeyFlags.c)
 *     CmpDoLocalizeNextHive @ 0x1408B76E0 (CmpDoLocalizeNextHive.c)
 *     CmpDoFlushNextHive @ 0x1408B8230 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1408BA574 (CmpLockRegistryFreezeAware.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 *     CmpTrimHive @ 0x1408BDDEC (CmpTrimHive.c)
 *     CmpCompleteUnloadKey @ 0x1408C009C (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408C2CA0 (CmpTransMgrFreeVolatileData.c)
 *     CmpSetKeySecurity @ 0x1408C45DC (CmpSetKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1408C6620 (CmCallbackGetKeyObjectIDEx.c)
 *     CmCallbackGetKeyObjectID @ 0x1408C7460 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateKey @ 0x1408C8770 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1408CFA20 (CmpDeleteKeyObject.c)
 *     CmpParseKey @ 0x1408D19A0 (CmpParseKey.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpDelayCloseWorker @ 0x1408D4CD0 (CmpDelayCloseWorker.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmQueryValueKey @ 0x1408DEEA0 (CmQueryValueKey.c)
 *     CmpQueryKeySecurity @ 0x1408F3D50 (CmpQueryKeySecurity.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F9CF0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ExpWatchProductTypeWork @ 0x140935C60 (ExpWatchProductTypeWork.c)
 *     CmpFreeParseContext @ 0x1409376D0 (CmpFreeParseContext.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 *     CmReleaseLoadKeyContext @ 0x14093D270 (CmReleaseLoadKeyContext.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 *     CmpLinkHiveToMaster @ 0x14093E12C (CmpLinkHiveToMaster.c)
 *     CmpCleanupParseContext @ 0x14093E860 (CmpCleanupParseContext.c)
 *     CmQueryMultipleValueKey @ 0x140940B3C (CmQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 *     CmpEnumerateLayeredKey @ 0x140944A98 (CmpEnumerateLayeredKey.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     CmNotifyRunDown @ 0x14094BC20 (CmNotifyRunDown.c)
 *     CmLockKeyForWrite @ 0x140A4BA6C (CmLockKeyForWrite.c)
 *     CmpStartSiloRegistryNamespace @ 0x140A4C1F8 (CmpStartSiloRegistryNamespace.c)
 *     CmpCloseKeyObject @ 0x140A66980 (CmpCloseKeyObject.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A74604 (CmpStopSiloKeyLockTracker.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 *     HvpFinishPrimaryWrite @ 0x140AA82C8 (HvpFinishPrimaryWrite.c)
 *     NtDeleteKey @ 0x140AB0060 (NtDeleteKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140AB0548 (CmKeyBodyNeedsVirtualImage.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD1A90 (CmpLateUnloadHiveWorker.c)
 *     CmpResolveHiveLoadConflict @ 0x140ADF3F4 (CmpResolveHiveLoadConflict.c)
 *     CmFreezeRegistry @ 0x140AE0F10 (CmFreezeRegistry.c)
 *     CmpReorganizeHive @ 0x140AE10D4 (CmpReorganizeHive.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140B0144C (CmEnumerateValueKeyFromMergedView.c)
 *     NtFlushKey @ 0x140B018C0 (NtFlushKey.c)
 *     CmEtwRunDown @ 0x140B07438 (CmEtwRunDown.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B33A1C (CmKeyBodyReplicateToVirtual.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140B35738 (CmpWaitOnHiveWriteQueue.c)
 *     CmpDelayFreeRMWorker @ 0x140B45480 (CmpDelayFreeRMWorker.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4DB2C (CmKeyBodyRemapToVirtual.c)
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 *     CmSetLastWriteTimeKey @ 0x140B56450 (CmSetLastWriteTimeKey.c)
 *     CmpDumpKeyToBuffer @ 0x140C5E12C (CmpDumpKeyToBuffer.c)
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140D0A9F0 (CmGetSystemDriverList.c)
 * Callees:
 *     CmpGetSharedLockHandle @ 0x140260F30 (CmpGetSharedLockHandle.c)
 *     CmpTestRegistryLockExclusive @ 0x1402611A0 (CmpTestRegistryLockExclusive.c)
 *     CmpIsRegistryLockAcquiredRecursively @ 0x1402616A0 (CmpIsRegistryLockAcquiredRecursively.c)
 *     CmpRecordRegistryLockRelease @ 0x140261910 (CmpRecordRegistryLockRelease.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void CmpUnlockRegistry()
{
  unsigned __int64 SharedLockHandle; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _SINGLE_LIST_ENTRY *v3; // r9
  struct _KTHREAD *v4; // rbx
  volatile signed __int64 **v5; // rdi
  _KTIMER *p_Timer; // rsi
  volatile signed __int64 *v7; // rcx

  if ( !BYTE5(NlsMbOemCodePageTag) )
  {
    if ( !CmpIsRegistryLockAcquiredRecursively() )
    {
      if ( CmpTestRegistryLockExclusive() )
      {
        v4 = CmpRegistryLock;
        v5 = (volatile signed __int64 **)CmpRegistryLock;
        p_Timer = &CmpRegistryLock->Timer;
        if ( CmpRegistryLock < (struct _KTHREAD *)&CmpRegistryLock->Timer )
        {
          do
          {
            v7 = *v5;
            if ( (_InterlockedExchangeAdd64(*v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v7);
            ++v5;
          }
          while ( v5 < (volatile signed __int64 **)p_Timer );
        }
        KeAbPostRelease((unsigned __int64)v4);
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    LOBYTE(v1) = 1;
    PsBoostThreadIo((LegacyAutoBoost *)KeGetCurrentThread(), v1, v2, v3);
  }
}
