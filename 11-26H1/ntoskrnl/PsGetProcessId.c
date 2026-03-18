/*
 * XREFs of PsGetProcessId @ 0x140466BE0
 * Callers:
 *     EtwpObjectHandleRundown @ 0x14077B8B4 (EtwpObjectHandleRundown.c)
 *     TtmpCloseTerminalHandle @ 0x1407EC690 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1407EC790 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x1407ED260 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x1407ED350 (TtmpOpenQueueHandle.c)
 *     PspSetProcessBamPpmPolicy @ 0x1407F0990 (PspSetProcessBamPpmPolicy.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     PsForceCrashForInvalidAccess @ 0x1407FD140 (PsForceCrashForInvalidAccess.c)
 *     VmpLogAccessFault @ 0x14081DF48 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x14081E118 (VmpLogAccessFaultRange.c)
 *     VmpLogCreateDeleteMemoryRange @ 0x14081E2F4 (VmpLogCreateDeleteMemoryRange.c)
 *     VmpLogCreateMemoryProcess @ 0x14081E534 (VmpLogCreateMemoryProcess.c)
 *     VmpLogPin @ 0x14081E76C (VmpLogPin.c)
 *     VmpLogSplitMergeMemoryRange @ 0x14081EA20 (VmpLogSplitMergeMemoryRange.c)
 *     EtwpUpdateProcessTracingCallback @ 0x140828630 (EtwpUpdateProcessTracingCallback.c)
 *     WheaTerminateProcess @ 0x140848620 (WheaTerminateProcess.c)
 *     MiLogHotPatchManagement @ 0x140871768 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x140871AAC (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x140871F28 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1408725A0 (MiLogHotPatchPagesLocked.c)
 *     PsOpenProcess @ 0x1408EFC40 (PsOpenProcess.c)
 *     EtwpNotifyGuid @ 0x140938434 (EtwpNotifyGuid.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093E008 (EtwQueryPerformanceTraceInformation.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x140950C88 (PopEtAggregateKeyCopyFromProcess.c)
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140AEA0E8 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     PspPostFreezeOperationWorker @ 0x140AEF430 (PspPostFreezeOperationWorker.c)
 *     EtwTraceWorkingSetSwap @ 0x140AF3D1C (EtwTraceWorkingSetSwap.c)
 *     VmpTracingEnabledCallback @ 0x140B1FF10 (VmpTracingEnabledCallback.c)
 *     sub_140B38E0C @ 0x140B38E0C (sub_140B38E0C.c)
 *     PspProcessQosChangeNotificationWorker @ 0x140B47740 (PspProcessQosChangeNotificationWorker.c)
 *     VmpLogFaultResolveFailure @ 0x140B5A1B0 (VmpLogFaultResolveFailure.c)
 *     EtwTraceSystemTimeChange @ 0x140C099D4 (EtwTraceSystemTimeChange.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
