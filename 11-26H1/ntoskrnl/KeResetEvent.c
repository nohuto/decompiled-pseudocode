/*
 * XREFs of KeResetEvent @ 0x140395BB0
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BDCC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopFxAllocatePowerIrp @ 0x14021A098 (PopFxAllocatePowerIrp.c)
 *     MiRetryNonPagedAllocation @ 0x140366440 (MiRetryNonPagedAllocation.c)
 *     PopFxIdleWorker @ 0x140395300 (PopFxIdleWorker.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1403957E0 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     SmKmStoreHelperWorker @ 0x140395A70 (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140396030 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcUnmapVacbArray @ 0x14039AEF0 (CcUnmapVacbArray.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1403AB220 (PopUpdateWatchdogNoWorkersEvent.c)
 *     PopPepUpdateConstraints @ 0x1403B37EC (PopPepUpdateConstraints.c)
 *     MiRebuildLargePagesThread @ 0x1403C7830 (MiRebuildLargePagesThread.c)
 *     MiWaitForFreePage @ 0x1403D1DB4 (MiWaitForFreePage.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1403E3C18 (CcInsertPrivateVolumeCacheMap.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1403E5C00 (MiUpdateAvailableEventsAtDpc.c)
 *     SmKmStoreHelperSendCommand @ 0x1403F020C (SmKmStoreHelperSendCommand.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x1403F0364 (SmKmStoreHelperCheckWaitCommand.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403F51A0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140404DD0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiModifiedWriterShouldWrite @ 0x1404066FC (MiModifiedWriterShouldWrite.c)
 *     MiModifiedWriterWakeMdls @ 0x140406948 (MiModifiedWriterWakeMdls.c)
 *     MiSignalCommitSignals @ 0x14043CAA0 (MiSignalCommitSignals.c)
 *     MiUpdateCommitCounts @ 0x140462BC4 (MiUpdateCommitCounts.c)
 *     MiSyncCommitSignals @ 0x14047FAB8 (MiSyncCommitSignals.c)
 *     PnpRequestDeviceAction @ 0x140482588 (PnpRequestDeviceAction.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x1404A66E8 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     MiDereferenceSegmentThread @ 0x1404ACC30 (MiDereferenceSegmentThread.c)
 *     MiStoreEvictThread @ 0x1404B0390 (MiStoreEvictThread.c)
 *     IopValidateAndGetWriteParameters @ 0x1404BA26C (IopValidateAndGetWriteParameters.c)
 *     MiWaitForAvailablePages @ 0x1404D6948 (MiWaitForAvailablePages.c)
 *     PnpLockDeviceActionQueue @ 0x1404D783C (PnpLockDeviceActionQueue.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404E538C (MmStoreFlushOutstandingEvictions.c)
 *     ExUnregisterCallback @ 0x1404ECF50 (ExUnregisterCallback.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404F97B0 (PopFxIssueComponentPerfStateChanges.c)
 *     EtwpCovSampCaptureContextStop @ 0x1404FE56C (EtwpCovSampCaptureContextStop.c)
 *     HvlPhase2Initialize @ 0x1405B8B08 (HvlPhase2Initialize.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x140607E5C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopIdleWakeAssignAccountingToSource @ 0x140610698 (PopIdleWakeAssignAccountingToSource.c)
 *     SmTerminateStoreProcess @ 0x14063E81C (SmTerminateStoreProcess.c)
 *     DifKeClearEventWrapper @ 0x140660B00 (DifKeClearEventWrapper.c)
 *     DifKeResetEventWrapper @ 0x140663EE0 (DifKeResetEventWrapper.c)
 *     MiDrainCrossPartitionUsage @ 0x1406F0580 (MiDrainCrossPartitionUsage.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1406F5B60 (MiSignalNonPagedPoolWatchers.c)
 *     sub_140713090 @ 0x140713090 (sub_140713090.c)
 *     WdtpTimerCallback @ 0x140719C80 (WdtpTimerCallback.c)
 *     sub_140778138 @ 0x140778138 (sub_140778138.c)
 *     PfGenerateTrace @ 0x1407794E8 (PfGenerateTrace.c)
 *     ArbArbiterHandler @ 0x140787E40 (ArbArbiterHandler.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140796800 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PnpWaitForQuiescentDeviceActionQueue @ 0x1407ACE7C (PnpWaitForQuiescentDeviceActionQueue.c)
 *     PfTInitialize @ 0x1407C65A4 (PfTInitialize.c)
 *     PopSetSystemAwayMode @ 0x1407D1390 (PopSetSystemAwayMode.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407D6FF0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     TtmiRetrieveEventFromQueue @ 0x1407ECFA0 (TtmiRetrieveEventFromQueue.c)
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140830C70 (EtwpCovSampCaptureWorkerThread.c)
 *     CmpLockRegistryFreezeAware @ 0x1408B3FA0 (CmpLockRegistryFreezeAware.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 *     NtClearEvent @ 0x1408F8EE0 (NtClearEvent.c)
 *     IoCancelFileOpen @ 0x140903830 (IoCancelFileOpen.c)
 *     PnpInsertEventInQueue @ 0x14090965C (PnpInsertEventInQueue.c)
 *     IopCancelIrpsInThreadList @ 0x140956D60 (IopCancelIrpsInThreadList.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     CmpLinkHiveToMaster @ 0x14097C11C (CmpLinkHiveToMaster.c)
 *     BuildQueryDirectoryIrp @ 0x1409B1E90 (BuildQueryDirectoryIrp.c)
 *     NtResetEvent @ 0x1409B8AC0 (NtResetEvent.c)
 *     IopQueryXxxInformation @ 0x1409B8C10 (IopQueryXxxInformation.c)
 *     PfTLoggingWorker @ 0x140A05840 (PfTLoggingWorker.c)
 *     EtwpLogger @ 0x140A13B90 (EtwpLogger.c)
 *     SPCallServerHandleQueryPolicy @ 0x140A1DE2C (SPCallServerHandleQueryPolicy.c)
 *     IopDeleteFile @ 0x140A1ECD0 (IopDeleteFile.c)
 *     IopInvalidateVolumesForDevice @ 0x140A34D8C (IopInvalidateVolumesForDevice.c)
 *     PopThermalReadCounters @ 0x140A696F8 (PopThermalReadCounters.c)
 *     EtwpStopTrace @ 0x140A6F2F8 (EtwpStopTrace.c)
 *     EtwpSynchronizeWithLogger @ 0x140A6FD00 (EtwpSynchronizeWithLogger.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AACCA0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtCopyFileChunk @ 0x140AE2060 (NtCopyFileChunk.c)
 *     NtWaitForDebugEvent @ 0x140AE94E0 (NtWaitForDebugEvent.c)
 *     WmipCopyFromEventQueues @ 0x140AEDBF0 (WmipCopyFromEventQueues.c)
 *     IopWriteFileGather @ 0x140B01CE0 (IopWriteFileGather.c)
 *     CmUnloadKey @ 0x140B0A63C (CmUnloadKey.c)
 *     IopReadFileScatter @ 0x140B0D3D8 (IopReadFileScatter.c)
 *     PoUnregisterPowerSettingCallback @ 0x140B19570 (PoUnregisterPowerSettingCallback.c)
 *     IopCreateArcName @ 0x140B1C9D8 (IopCreateArcName.c)
 *     IopMountVolume @ 0x140B1E87C (IopMountVolume.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x140B23B64 (SPCallServerHandleWaitForDisplayWindow.c)
 *     RawQueryFsSizeInfo @ 0x140B25EA8 (RawQueryFsSizeInfo.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B2FF48 (SshpSessionManagerSendControlEvent.c)
 *     IoSetInformation @ 0x140B326A0 (IoSetInformation.c)
 *     DbgkpRemoveErrorPort @ 0x140B3A9A0 (DbgkpRemoveErrorPort.c)
 *     PopFxUpdateVetoMaskWork @ 0x140B40080 (PopFxUpdateVetoMaskWork.c)
 *     IopSendMessageToTrackService @ 0x140B4EAA4 (IopSendMessageToTrackService.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140B607C0 (PopCancelIgnoreBatteryStatusChange.c)
 *     NtLockFile @ 0x140B6ECE0 (NtLockFile.c)
 *     PopPowerAdapterQueryStatus @ 0x140B71E04 (PopPowerAdapterQueryStatus.c)
 *     IopShutdownBaseFileSystems @ 0x140BF150C (IopShutdownBaseFileSystems.c)
 *     PfpScenCtxPrefetchWait @ 0x140BF8AD8 (PfpScenCtxPrefetchWait.c)
 *     PopNewWakeInfo @ 0x140C09008 (PopNewWakeInfo.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140C0A428 (PfpScenCtxQueryScenarioInformation.c)
 *     IoShutdownSystem @ 0x140C0C858 (IoShutdownSystem.c)
 *     AnFwDisplayFade @ 0x140C52BA0 (AnFwDisplayFade.c)
 *     IopGetBootDiskInformation @ 0x140CBE678 (IopGetBootDiskInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140CF9D74 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
