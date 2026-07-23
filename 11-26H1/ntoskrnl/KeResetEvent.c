/*
 * XREFs of KeResetEvent @ 0x140397930
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BEAC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopFxAllocatePowerIrp @ 0x14021BA28 (PopFxAllocatePowerIrp.c)
 *     MiRetryNonPagedAllocation @ 0x1403681E0 (MiRetryNonPagedAllocation.c)
 *     PopFxIdleWorker @ 0x140397080 (PopFxIdleWorker.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140397560 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     SmKmStoreHelperWorker @ 0x1403977F0 (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140397DB0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcUnmapVacbArray @ 0x14039CC50 (CcUnmapVacbArray.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1403B4F30 (PopUpdateWatchdogNoWorkersEvent.c)
 *     PopPepUpdateConstraints @ 0x1403BD4FC (PopPepUpdateConstraints.c)
 *     MiRebuildLargePagesThread @ 0x1403D1720 (MiRebuildLargePagesThread.c)
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1403E6E08 (CcInsertPrivateVolumeCacheMap.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1403E8DF0 (MiUpdateAvailableEventsAtDpc.c)
 *     SmKmStoreHelperSendCommand @ 0x1403E9BDC (SmKmStoreHelperSendCommand.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x1403E9D34 (SmKmStoreHelperCheckWaitCommand.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403EEB50 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403FDED0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiModifiedWriterShouldWrite @ 0x1403FF7EC (MiModifiedWriterShouldWrite.c)
 *     MiModifiedWriterWakeMdls @ 0x1403FFA38 (MiModifiedWriterWakeMdls.c)
 *     MiSignalCommitSignals @ 0x14042F350 (MiSignalCommitSignals.c)
 *     MiUpdateCommitCounts @ 0x14045BB84 (MiUpdateCommitCounts.c)
 *     MiSyncCommitSignals @ 0x140479400 (MiSyncCommitSignals.c)
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14049FD78 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     MiDereferenceSegmentThread @ 0x1404A62C0 (MiDereferenceSegmentThread.c)
 *     MiStoreEvictThread @ 0x1404A9A20 (MiStoreEvictThread.c)
 *     IopValidateAndGetWriteParameters @ 0x1404B3AFC (IopValidateAndGetWriteParameters.c)
 *     MiWaitForAvailablePages @ 0x1404D0118 (MiWaitForAvailablePages.c)
 *     PnpLockDeviceActionQueue @ 0x1404D1004 (PnpLockDeviceActionQueue.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404DE92C (MmStoreFlushOutstandingEvictions.c)
 *     ExUnregisterCallback @ 0x1404E6530 (ExUnregisterCallback.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404F2DC0 (PopFxIssueComponentPerfStateChanges.c)
 *     EtwpCovSampCaptureContextStop @ 0x1404F7B1C (EtwpCovSampCaptureContextStop.c)
 *     HvlPhase2Initialize @ 0x1405BB378 (HvlPhase2Initialize.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14060AA0C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopIdleWakeAssignAccountingToSource @ 0x1406138FC (PopIdleWakeAssignAccountingToSource.c)
 *     SmTerminateStoreProcess @ 0x1406423FC (SmTerminateStoreProcess.c)
 *     DifKeClearEventWrapper @ 0x1406646E0 (DifKeClearEventWrapper.c)
 *     DifKeResetEventWrapper @ 0x140667AC0 (DifKeResetEventWrapper.c)
 *     MiDrainCrossPartitionUsage @ 0x1406F51F0 (MiDrainCrossPartitionUsage.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1406FA7D0 (MiSignalNonPagedPoolWatchers.c)
 *     sub_140717D80 @ 0x140717D80 (sub_140717D80.c)
 *     WdtpTimerCallback @ 0x14071E910 (WdtpTimerCallback.c)
 *     sub_14077AFD8 @ 0x14077AFD8 (sub_14077AFD8.c)
 *     PfGenerateTrace @ 0x14077C418 (PfGenerateTrace.c)
 *     ArbArbiterHandler @ 0x14078A970 (ArbArbiterHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140799330 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PnpWaitForQuiescentDeviceActionQueue @ 0x1407AFEE0 (PnpWaitForQuiescentDeviceActionQueue.c)
 *     PfTInitialize @ 0x1407C9604 (PfTInitialize.c)
 *     PopSetSystemAwayMode @ 0x1407D4430 (PopSetSystemAwayMode.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407DA120 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     TtmiRetrieveEventFromQueue @ 0x1407F2B00 (TtmiRetrieveEventFromQueue.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140836EB0 (EtwpCovSampCaptureWorkerThread.c)
 *     CmpLockRegistryFreezeAware @ 0x1408BA574 (CmpLockRegistryFreezeAware.c)
 *     IopInvalidateVolumesForDevice @ 0x14091958C (IopInvalidateVolumesForDevice.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     NtClearEvent @ 0x140928E70 (NtClearEvent.c)
 *     IoCancelFileOpen @ 0x1409337C0 (IoCancelFileOpen.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 *     CmpLinkHiveToMaster @ 0x14093E12C (CmpLinkHiveToMaster.c)
 *     IopCancelIrpsInThreadList @ 0x14094A788 (IopCancelIrpsInThreadList.c)
 *     BuildQueryDirectoryIrp @ 0x140982F50 (BuildQueryDirectoryIrp.c)
 *     NtResetEvent @ 0x140989AA0 (NtResetEvent.c)
 *     IopQueryXxxInformation @ 0x140989BF0 (IopQueryXxxInformation.c)
 *     PnpInsertEventInQueue @ 0x1409AB21C (PnpInsertEventInQueue.c)
 *     PfTLoggingWorker @ 0x1409F1030 (PfTLoggingWorker.c)
 *     EtwpLogger @ 0x140A12D80 (EtwpLogger.c)
 *     SPCallServerHandleQueryPolicy @ 0x140A27458 (SPCallServerHandleQueryPolicy.c)
 *     IopDeleteFile @ 0x140A282F0 (IopDeleteFile.c)
 *     CmUnloadKey @ 0x140A3E88C (CmUnloadKey.c)
 *     PopThermalReadCounters @ 0x140A766C8 (PopThermalReadCounters.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AAAD60 (NtNotifyChangeDirectoryFileEx.c)
 *     EtwpStopTrace @ 0x140AB2D10 (EtwpStopTrace.c)
 *     EtwpSynchronizeWithLogger @ 0x140AB31F8 (EtwpSynchronizeWithLogger.c)
 *     NtCopyFileChunk @ 0x140ADF550 (NtCopyFileChunk.c)
 *     NtWaitForDebugEvent @ 0x140AEBFD0 (NtWaitForDebugEvent.c)
 *     WmipCopyFromEventQueues @ 0x140AF0B88 (WmipCopyFromEventQueues.c)
 *     DbgkpRemoveErrorPort @ 0x140AF6254 (DbgkpRemoveErrorPort.c)
 *     IopWriteFileGather @ 0x140B03A10 (IopWriteFileGather.c)
 *     IopReadFileScatter @ 0x140B0EB28 (IopReadFileScatter.c)
 *     PoUnregisterPowerSettingCallback @ 0x140B1B9C0 (PoUnregisterPowerSettingCallback.c)
 *     IopCreateArcName @ 0x140B1EBE8 (IopCreateArcName.c)
 *     IopMountVolume @ 0x140B208FC (IopMountVolume.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x140B25F64 (SPCallServerHandleWaitForDisplayWindow.c)
 *     RawQueryFsSizeInfo @ 0x140B28108 (RawQueryFsSizeInfo.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 *     IoSetInformation @ 0x140B34AF0 (IoSetInformation.c)
 *     PopFxUpdateVetoMaskWork @ 0x140B420B0 (PopFxUpdateVetoMaskWork.c)
 *     IopSendMessageToTrackService @ 0x140B51334 (IopSendMessageToTrackService.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140B63860 (PopCancelIgnoreBatteryStatusChange.c)
 *     NtLockFile @ 0x140B720D0 (NtLockFile.c)
 *     PopPowerAdapterQueryStatus @ 0x140B76DFC (PopPowerAdapterQueryStatus.c)
 *     IopShutdownBaseFileSystems @ 0x140BF750C (IopShutdownBaseFileSystems.c)
 *     PfpScenCtxPrefetchWait @ 0x140BFEAD8 (PfpScenCtxPrefetchWait.c)
 *     PopNewWakeInfo @ 0x140C0F218 (PopNewWakeInfo.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140C10638 (PfpScenCtxQueryScenarioInformation.c)
 *     IoShutdownSystem @ 0x140C12A68 (IoShutdownSystem.c)
 *     AnFwDisplayFade @ 0x140C58BA0 (AnFwDisplayFade.c)
 *     IopGetBootDiskInformation @ 0x140CC4748 (IopGetBootDiskInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140D000F4 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  unsigned __int8 CurrentIrql; // di
  char v3; // dl
  unsigned int v4; // esi
  LONG SignalState; // esi

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    v3 = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v3);
  }
  v4 = 0;
  if ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (Event->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Event->Header.Lock, 7u) );
  }
  SignalState = Event->Header.SignalState;
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return SignalState;
}
