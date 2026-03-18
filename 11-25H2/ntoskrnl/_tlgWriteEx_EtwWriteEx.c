/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x1404A1010
 * Callers:
 *     MiStoreLogNotCandidate @ 0x1402CC35C (MiStoreLogNotCandidate.c)
 *     MiStoreLogWriteIssueFailure @ 0x1402CC8D0 (MiStoreLogWriteIssueFailure.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402F2AAC (MmNotifyProcessInSwapTrigger.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x14034D694 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PopDiagTraceDIrpAfterSx @ 0x1403565F8 (PopDiagTraceDIrpAfterSx.c)
 *     PopPlNotifyDeviceDState @ 0x1403566D8 (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x140357D50 (PopPlNotifyDeviceFState.c)
 *     MiLogBadMapper @ 0x1403BB168 (MiLogBadMapper.c)
 *     MiLogPartitionState @ 0x1403C3BC4 (MiLogPartitionState.c)
 *     MiLogProcessWorkingSetsStart @ 0x1403C3CFC (MiLogProcessWorkingSetsStart.c)
 *     MiLogProcessWorkingSetsStop @ 0x1403C3EF8 (MiLogProcessWorkingSetsStop.c)
 *     MiLogTrimWs @ 0x1403C4A28 (MiLogTrimWs.c)
 *     MiLogWsAging @ 0x140449E2C (MiLogWsAging.c)
 *     MiStoreLogWriteCompleteFailure @ 0x14046390C (MiStoreLogWriteCompleteFailure.c)
 *     PopPlRegisterComponent @ 0x1404A0EC4 (PopPlRegisterComponent.c)
 *     MiStoreLogWriteDisabled @ 0x1404A821C (MiStoreLogWriteDisabled.c)
 *     PopPlRegisterDevice @ 0x1404AC8BC (PopPlRegisterDevice.c)
 *     MiLogWsEmptyControl @ 0x1404AE0C0 (MiLogWsEmptyControl.c)
 *     MmStoreLogConsumedPoison @ 0x1404BC600 (MmStoreLogConsumedPoison.c)
 *     MiLogSlabEntryDemote @ 0x1404CC160 (MiLogSlabEntryDemote.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x1404D02F0 (HalpTimerQueryAndResetRtcErrors.c)
 *     PopPlRegisterPowerPlane @ 0x1404D1E28 (PopPlRegisterPowerPlane.c)
 *     MiStoreLogFullPagefile @ 0x1404F86A8 (MiStoreLogFullPagefile.c)
 *     PopPlPublishInitialPowerDraw @ 0x1405D7910 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x1405D7A8C (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x1405D7BA0 (PopPlRegisterDeviceIterator.c)
 *     PopPlTraceLogPowerPlane @ 0x1405D7D34 (PopPlTraceLogPowerPlane.c)
 *     VmpLogColdHint @ 0x14063F910 (VmpLogColdHint.c)
 *     VmpLogLargeSlatFill @ 0x14063F9F8 (VmpLogLargeSlatFill.c)
 *     VmpLogQueryAccessedState @ 0x14063FB10 (VmpLogQueryAccessedState.c)
 *     VmpLogSparseSlatFill @ 0x14063FC68 (VmpLogSparseSlatFill.c)
 *     VmpLogTbFlushSlatFlushEntire @ 0x14063FD94 (VmpLogTbFlushSlatFlushEntire.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x14063FE68 (VmpLogTbFlushSlatInvalidate.c)
 *     VmpLogTbFlushSlatInvalidateInsert @ 0x14063FF80 (VmpLogTbFlushSlatInvalidateInsert.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14065E3F8 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14065E558 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14065E640 (MiLogResetPagesCommitRelease.c)
 *     MiLogAddPhysicalMemory @ 0x140662354 (MiLogAddPhysicalMemory.c)
 *     MiLogDelayFaultingThread @ 0x140674C14 (MiLogDelayFaultingThread.c)
 *     MiLogNotifyPageHeat @ 0x140679EF0 (MiLogNotifyPageHeat.c)
 *     MiStoreLogDiscardPoisonedPage @ 0x140680C30 (MiStoreLogDiscardPoisonedPage.c)
 *     MiStoreLogReadFailure @ 0x140680D70 (MiStoreLogReadFailure.c)
 *     MmStoreLogDecompressionFailure @ 0x1406810A8 (MmStoreLogDecompressionFailure.c)
 *     MmStoreLogRegionInPageError @ 0x1406812F0 (MmStoreLogRegionInPageError.c)
 *     VmpLogAccessFault @ 0x140790534 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x1407906FC (VmpLogAccessFaultRange.c)
 *     VmpLogCreateDeleteMemoryRange @ 0x140790898 (VmpLogCreateDeleteMemoryRange.c)
 *     VmpLogCreateMemoryProcess @ 0x140790AD8 (VmpLogCreateMemoryProcess.c)
 *     VmpLogPin @ 0x140790D10 (VmpLogPin.c)
 *     VmpLogSplitMergeMemoryRange @ 0x140790F50 (VmpLogSplitMergeMemoryRange.c)
 *     MiLogCreateImageFileMapFailure @ 0x1407DC1AC (MiLogCreateImageFileMapFailure.c)
 *     MiLogHotPatchOperation @ 0x1407E399C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1407E3E1C (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1407E4494 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1407E463C (MiLogHotPatchRundown.c)
 *     MiLogInsertSecureImageActivePatch @ 0x1407E5198 (MiLogInsertSecureImageActivePatch.c)
 *     VmpLogFaultResolveFailure @ 0x1409FE324 (VmpLogFaultResolveFailure.c)
 *     VmpTracingEnabledCallback @ 0x140A80370 (VmpTracingEnabledCallback.c)
 *     MiLogReserveVaFailed @ 0x140A8B44C (MiLogReserveVaFailed.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AA5D1C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogCommitRequestFailed @ 0x140AA6FF0 (MiLogCommitRequestFailed.c)
 *     MiLogHotPatchManagement @ 0x140AD5BD4 (MiLogHotPatchManagement.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140C3F6D0 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 */

NTSTATUS __fastcall tlgWriteEx_EtwWriteEx(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        ULONG a4,
        int a5,
        int a6,
        ULONG UserDataCount,
        struct _EVENT_DATA_DESCRIPTOR *a8)
{
  unsigned __int64 v8; // rax
  unsigned __int16 *v9; // rdx
  EVENT_DESCRIPTOR v11; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&v11.Id = *a2 << 24;
  *(_DWORD *)&v11.Level = *(unsigned __int16 *)(a2 + 1);
  v8 = *(_QWORD *)(a2 + 3);
  v9 = (unsigned __int16 *)(a2 + 11);
  v11.Keyword = v8;
  a8->Ptr = *(_QWORD *)(a1 + 8);
  a8->Size = **(unsigned __int16 **)(a1 + 8);
  a8[1].Ptr = (ULONGLONG)v9;
  a8->Reserved = 2;
  a8[1].Size = *v9;
  a8[1].Reserved = 1;
  return EtwWriteEx(*(_QWORD *)(a1 + 32), &v11, 0LL, a4, 0LL, 0LL, UserDataCount, a8);
}
