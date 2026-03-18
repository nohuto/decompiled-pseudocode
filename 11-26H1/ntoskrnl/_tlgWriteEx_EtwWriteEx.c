/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x1404E33C4
 * Callers:
 *     MiLogSlabEntryAllocateFailure @ 0x140206FC8 (MiLogSlabEntryAllocateFailure.c)
 *     MiLogNoStealNonPagedPool @ 0x14024F538 (MiLogNoStealNonPagedPool.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1402558F8 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MiLogPartitionState @ 0x1402A6280 (MiLogPartitionState.c)
 *     MiLogPeriodicTelemetry @ 0x1402A8770 (MiLogPeriodicTelemetry.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402C7BAC (MmNotifyProcessInSwapTrigger.c)
 *     PopPlNotifyDeviceFState @ 0x1403AE02C (PopPlNotifyDeviceFState.c)
 *     PopPlNotifyDeviceDState @ 0x1403B39DC (PopPlNotifyDeviceDState.c)
 *     MiLogTrimWs @ 0x1403BAAAC (MiLogTrimWs.c)
 *     MiLogBadMapper @ 0x140459AC0 (MiLogBadMapper.c)
 *     PopDiagTraceDIrpAfterSx @ 0x140486F6C (PopDiagTraceDIrpAfterSx.c)
 *     MiLogSystemImageReadOnlyPageViolation @ 0x1404C3220 (MiLogSystemImageReadOnlyPageViolation.c)
 *     MiStoreLogNotCandidate @ 0x1404C4250 (MiStoreLogNotCandidate.c)
 *     MiLogProcessWorkingSetsStart @ 0x1404E17A4 (MiLogProcessWorkingSetsStart.c)
 *     PopPlRegisterComponent @ 0x1404E327C (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1404EF6AC (PopPlRegisterDevice.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x1404F61E0 (HalpTimerQueryAndResetRtcErrors.c)
 *     MiLogWsAging @ 0x14050B9EC (MiLogWsAging.c)
 *     PopPlRegisterPowerPlane @ 0x14050E2BC (PopPlRegisterPowerPlane.c)
 *     VmpLogTbFlushSlatFlushEntire @ 0x140529DD8 (VmpLogTbFlushSlatFlushEntire.c)
 *     MmStoreLogConsumedPoison @ 0x14052DEEC (MmStoreLogConsumedPoison.c)
 *     MiLogProcessWorkingSetsStop @ 0x14052E43C (MiLogProcessWorkingSetsStop.c)
 *     VmpLogTbFlushSlatInvalidateInsert @ 0x14052FED0 (VmpLogTbFlushSlatInvalidateInsert.c)
 *     MiStoreLogWriteIssueFailure @ 0x140530110 (MiStoreLogWriteIssueFailure.c)
 *     PopDiagTraceFxDeviceInvalidTransition @ 0x140608BD8 (PopDiagTraceFxDeviceInvalidTransition.c)
 *     PopPlPublishInitialPowerDraw @ 0x140612780 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x1406128F0 (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x140612A00 (PopPlRegisterDeviceIterator.c)
 *     PopPlTraceLogPowerPlane @ 0x140612B9C (PopPlTraceLogPowerPlane.c)
 *     VmpLogColdHint @ 0x1406C2D44 (VmpLogColdHint.c)
 *     VmpLogLargeSlatFill @ 0x1406C2E2C (VmpLogLargeSlatFill.c)
 *     VmpLogQueryAccessedState @ 0x1406C2F38 (VmpLogQueryAccessedState.c)
 *     VmpLogSlatFillFailure @ 0x1406C3090 (VmpLogSlatFillFailure.c)
 *     VmpLogSparseSlatFill @ 0x1406C31E0 (VmpLogSparseSlatFill.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x1406C330C (VmpLogTbFlushSlatInvalidate.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1406E4514 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1406E4664 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1406E473C (MiLogResetPagesCommitRelease.c)
 *     MiLogAddPhysicalMemory @ 0x1406E978C (MiLogAddPhysicalMemory.c)
 *     MiLogContinueTrim @ 0x1406F7D24 (MiLogContinueTrim.c)
 *     MiLogSystemDllUnmap @ 0x1406F7FD4 (MiLogSystemDllUnmap.c)
 *     MiLogPagefileExtension @ 0x1406F8D4C (MiLogPagefileExtension.c)
 *     MiLogHotPatchRundownForProcess @ 0x1406FC34C (MiLogHotPatchRundownForProcess.c)
 *     MiLogDelayFaultingThread @ 0x1406FF6EC (MiLogDelayFaultingThread.c)
 *     MiLogWsEmptyControl @ 0x14070433C (MiLogWsEmptyControl.c)
 *     MiLogNotifyPageHeat @ 0x140704DD0 (MiLogNotifyPageHeat.c)
 *     MiLogSlabEntryDemote @ 0x140707868 (MiLogSlabEntryDemote.c)
 *     MiStoreLogDiscardPoisonedPage @ 0x14070A9B4 (MiStoreLogDiscardPoisonedPage.c)
 *     MiStoreLogFullPagefile @ 0x14070AAB8 (MiStoreLogFullPagefile.c)
 *     MiStoreLogReadFailure @ 0x14070AB24 (MiStoreLogReadFailure.c)
 *     MiStoreLogWriteCompleteFailure @ 0x14070ACA0 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x14070AD30 (MiStoreLogWriteDisabled.c)
 *     MmStoreLogDecompressionFailure @ 0x14070AFC0 (MmStoreLogDecompressionFailure.c)
 *     MmStoreLogRegionInPageError @ 0x14070B208 (MmStoreLogRegionInPageError.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140772CFC (MiLogStrongCodeDriverLoadFailure.c)
 *     VmpLogAccessFault @ 0x14081DF48 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x14081E118 (VmpLogAccessFaultRange.c)
 *     VmpLogCreateDeleteMemoryRange @ 0x14081E2F4 (VmpLogCreateDeleteMemoryRange.c)
 *     VmpLogCreateMemoryProcess @ 0x14081E534 (VmpLogCreateMemoryProcess.c)
 *     VmpLogPin @ 0x14081E76C (VmpLogPin.c)
 *     VmpLogSplitMergeMemoryRange @ 0x14081EA20 (VmpLogSplitMergeMemoryRange.c)
 *     MiLogHotPatchManagement @ 0x140871768 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x140871AAC (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140871F28 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1408725A0 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x14087272C (MiLogHotPatchRundown.c)
 *     MiLogInsertSecureImageActivePatch @ 0x140872D50 (MiLogInsertSecureImageActivePatch.c)
 *     MiLogCommitRequestFailed @ 0x14087B7EC (MiLogCommitRequestFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x14087FD20 (MiLogCreateImageFileMapFailure.c)
 *     VmpTracingEnabledCallback @ 0x140B1FF10 (VmpTracingEnabledCallback.c)
 *     MiLogReserveVaFailed @ 0x140B3D6D0 (MiLogReserveVaFailed.c)
 *     VmpLogFaultResolveFailure @ 0x140B5A1B0 (VmpLogFaultResolveFailure.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140CF4538 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
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
