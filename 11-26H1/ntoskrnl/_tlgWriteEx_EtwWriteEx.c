/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x1404DC958
 * Callers:
 *     MiLogSlabEntryAllocateFailure @ 0x1402070A8 (MiLogSlabEntryAllocateFailure.c)
 *     MiLogNoStealNonPagedPool @ 0x140250E98 (MiLogNoStealNonPagedPool.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x14025727C (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MiLogPartitionState @ 0x1402A5678 (MiLogPartitionState.c)
 *     MiLogPeriodicTelemetry @ 0x1402A7B80 (MiLogPeriodicTelemetry.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14031284C (MmNotifyProcessInSwapTrigger.c)
 *     PopPlNotifyDeviceFState @ 0x1403B7D3C (PopPlNotifyDeviceFState.c)
 *     PopPlNotifyDeviceDState @ 0x1403BD6EC (PopPlNotifyDeviceDState.c)
 *     MiLogTrimWs @ 0x1403C491C (MiLogTrimWs.c)
 *     MiLogBadMapper @ 0x140451340 (MiLogBadMapper.c)
 *     PopDiagTraceDIrpAfterSx @ 0x14048093C (PopDiagTraceDIrpAfterSx.c)
 *     MiLogSystemImageReadOnlyPageViolation @ 0x1404BCA70 (MiLogSystemImageReadOnlyPageViolation.c)
 *     MiStoreLogNotCandidate @ 0x1404BDB30 (MiStoreLogNotCandidate.c)
 *     MiLogProcessWorkingSetsStart @ 0x1404DAE84 (MiLogProcessWorkingSetsStart.c)
 *     PopPlRegisterComponent @ 0x1404DC810 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x1404E8C8C (PopPlRegisterDevice.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x1404EF7A0 (HalpTimerQueryAndResetRtcErrors.c)
 *     MiLogWsAging @ 0x14050545C (MiLogWsAging.c)
 *     PopPlRegisterPowerPlane @ 0x140507D2C (PopPlRegisterPowerPlane.c)
 *     VmpLogTbFlushSlatFlushEntire @ 0x14052C2F8 (VmpLogTbFlushSlatFlushEntire.c)
 *     MmStoreLogConsumedPoison @ 0x14053040C (MmStoreLogConsumedPoison.c)
 *     MiLogProcessWorkingSetsStop @ 0x14053095C (MiLogProcessWorkingSetsStop.c)
 *     VmpLogTbFlushSlatInvalidateInsert @ 0x1405323D0 (VmpLogTbFlushSlatInvalidateInsert.c)
 *     MiStoreLogWriteIssueFailure @ 0x140532610 (MiStoreLogWriteIssueFailure.c)
 *     PopDiagTraceFxDeviceInvalidTransition @ 0x14060B798 (PopDiagTraceFxDeviceInvalidTransition.c)
 *     PopPlPublishInitialPowerDraw @ 0x1406155C0 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x140615730 (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x140615840 (PopPlRegisterDeviceIterator.c)
 *     PopPlTraceLogPowerPlane @ 0x1406159DC (PopPlTraceLogPowerPlane.c)
 *     VmpLogColdHint @ 0x1406C6924 (VmpLogColdHint.c)
 *     VmpLogLargeSlatFill @ 0x1406C6A0C (VmpLogLargeSlatFill.c)
 *     VmpLogQueryAccessedState @ 0x1406C6B18 (VmpLogQueryAccessedState.c)
 *     VmpLogSlatFillFailure @ 0x1406C6C70 (VmpLogSlatFillFailure.c)
 *     VmpLogSparseSlatFill @ 0x1406C6DC0 (VmpLogSparseSlatFill.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x1406C6EEC (VmpLogTbFlushSlatInvalidate.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x1406E91C4 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1406E9314 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x1406E93EC (MiLogResetPagesCommitRelease.c)
 *     MiLogAddPhysicalMemory @ 0x1406EE42C (MiLogAddPhysicalMemory.c)
 *     MiLogContinueTrim @ 0x1406FC9F0 (MiLogContinueTrim.c)
 *     MiLogSystemDllUnmap @ 0x1406FCCA4 (MiLogSystemDllUnmap.c)
 *     MiLogPagefileExtension @ 0x1406FDA1C (MiLogPagefileExtension.c)
 *     MiLogHotPatchRundownForProcess @ 0x14070101C (MiLogHotPatchRundownForProcess.c)
 *     MiLogDelayFaultingThread @ 0x1407043BC (MiLogDelayFaultingThread.c)
 *     MiLogWsEmptyControl @ 0x14070900C (MiLogWsEmptyControl.c)
 *     MiLogNotifyPageHeat @ 0x140709AA0 (MiLogNotifyPageHeat.c)
 *     MiLogSlabEntryDemote @ 0x14070C538 (MiLogSlabEntryDemote.c)
 *     MiStoreLogDiscardPoisonedPage @ 0x14070F668 (MiStoreLogDiscardPoisonedPage.c)
 *     MiStoreLogFullPagefile @ 0x14070F76C (MiStoreLogFullPagefile.c)
 *     MiStoreLogReadFailure @ 0x14070F7D8 (MiStoreLogReadFailure.c)
 *     MiStoreLogWriteCompleteFailure @ 0x14070F954 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreLogWriteDisabled @ 0x14070F9E4 (MiStoreLogWriteDisabled.c)
 *     MmStoreLogDecompressionFailure @ 0x14070FC70 (MmStoreLogDecompressionFailure.c)
 *     MmStoreLogRegionInPageError @ 0x14070FEB8 (MmStoreLogRegionInPageError.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140775CFC (MiLogStrongCodeDriverLoadFailure.c)
 *     VmpLogAccessFault @ 0x140824158 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x140824328 (VmpLogAccessFaultRange.c)
 *     VmpLogCreateDeleteMemoryRange @ 0x140824504 (VmpLogCreateDeleteMemoryRange.c)
 *     VmpLogCreateMemoryProcess @ 0x140824744 (VmpLogCreateMemoryProcess.c)
 *     VmpLogPin @ 0x14082497C (VmpLogPin.c)
 *     VmpLogSplitMergeMemoryRange @ 0x140824C30 (VmpLogSplitMergeMemoryRange.c)
 *     MiLogHotPatchManagement @ 0x140877AC8 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x140877E0C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140878288 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x140878900 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x140878A8C (MiLogHotPatchRundown.c)
 *     MiLogInsertSecureImageActivePatch @ 0x1408790B0 (MiLogInsertSecureImageActivePatch.c)
 *     MiLogCommitRequestFailed @ 0x140881BEC (MiLogCommitRequestFailed.c)
 *     MiLogCreateImageFileMapFailure @ 0x140886120 (MiLogCreateImageFileMapFailure.c)
 *     VmpTracingEnabledCallback @ 0x140B22330 (VmpTracingEnabledCallback.c)
 *     MiLogReserveVaFailed @ 0x140B3F7A0 (MiLogReserveVaFailed.c)
 *     VmpLogFaultResolveFailure @ 0x140B5D4CC (VmpLogFaultResolveFailure.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140CFA8B8 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
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
