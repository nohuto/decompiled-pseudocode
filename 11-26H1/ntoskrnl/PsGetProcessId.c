/*
 * XREFs of PsGetProcessId @ 0x140460330
 * Callers:
 *     EtwpObjectHandleRundown @ 0x14077E4F4 (EtwpObjectHandleRundown.c)
 *     TtmpCloseTerminalHandle @ 0x1407F21F0 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1407F22F0 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x1407F2DC0 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x1407F2EB0 (TtmpOpenQueueHandle.c)
 *     PspSetProcessBamPpmPolicy @ 0x1407F64F0 (PspSetProcessBamPpmPolicy.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     PsForceCrashForInvalidAccess @ 0x140802B70 (PsForceCrashForInvalidAccess.c)
 *     VmpLogAccessFault @ 0x140824158 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x140824328 (VmpLogAccessFaultRange.c)
 *     VmpLogCreateDeleteMemoryRange @ 0x140824504 (VmpLogCreateDeleteMemoryRange.c)
 *     VmpLogCreateMemoryProcess @ 0x140824744 (VmpLogCreateMemoryProcess.c)
 *     VmpLogPin @ 0x14082497C (VmpLogPin.c)
 *     VmpLogSplitMergeMemoryRange @ 0x140824C30 (VmpLogSplitMergeMemoryRange.c)
 *     EtwpUpdateProcessTracingCallback @ 0x14082E870 (EtwpUpdateProcessTracingCallback.c)
 *     WheaTerminateProcess @ 0x14084E8F0 (WheaTerminateProcess.c)
 *     MiLogHotPatchManagement @ 0x140877AC8 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x140877E0C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140878288 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x140878900 (MiLogHotPatchPagesLocked.c)
 *     PsOpenProcess @ 0x1408F6200 (PsOpenProcess.c)
 *     EtwpNotifyGuid @ 0x140913FD4 (EtwpNotifyGuid.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1409CC5C8 (PopEtAggregateKeyCopyFromProcess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140A31120 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140AECBD8 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     PspPostFreezeOperationWorker @ 0x140AF23D0 (PspPostFreezeOperationWorker.c)
 *     EtwTraceWorkingSetSwap @ 0x140AF673C (EtwTraceWorkingSetSwap.c)
 *     VmpTracingEnabledCallback @ 0x140B22330 (VmpTracingEnabledCallback.c)
 *     sub_140B3B01C @ 0x140B3B01C (sub_140B3B01C.c)
 *     VmpLogFaultResolveFailure @ 0x140B5D4CC (VmpLogFaultResolveFailure.c)
 *     PspProcessQosChangeNotificationWorker @ 0x140B77F30 (PspProcessQosChangeNotificationWorker.c)
 *     EtwTraceSystemTimeChange @ 0x140C0FBE4 (EtwTraceSystemTimeChange.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
