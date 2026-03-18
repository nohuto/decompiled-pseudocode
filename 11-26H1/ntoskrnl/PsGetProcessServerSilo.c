/*
 * XREFs of PsGetProcessServerSilo @ 0x140476BF0
 * Callers:
 *     MmMapApiSetView @ 0x140863ED4 (MmMapApiSetView.c)
 *     ObpDecrementHandleCount2 @ 0x1408F0360 (ObpDecrementHandleCount2.c)
 *     ObCloseHandleTableEntry2 @ 0x1408FAF70 (ObCloseHandleTableEntry2.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14092E8D0 (ObpIncrementHandleCountEx.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14093C018 (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1409546CC (EtwpWriteAppStateChangeSummary.c)
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 *     PspTerminateAllThreads @ 0x14095705C (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1409575E0 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     PerfInfoLogVirtualFree @ 0x140961510 (PerfInfoLogVirtualFree.c)
 *     EtwpWriteProcessEvent @ 0x14096E304 (EtwpWriteProcessEvent.c)
 *     EtwpProcessEnumCallback @ 0x14096EA90 (EtwpProcessEnumCallback.c)
 *     EtwTraceThread @ 0x140A045B0 (EtwTraceThread.c)
 *     ObQueryDeviceMapInformation @ 0x140A181D0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140A18420 (ObpReferenceCurrentDeviceMap.c)
 *     PspExitLastThread @ 0x140A41964 (PspExitLastThread.c)
 *     DbgkFlushErrorPort @ 0x140A43A48 (DbgkFlushErrorPort.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     PspSetupUserProcessAddressSpace @ 0x140A9A3AC (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x140A9B2D8 (PspMapSiloSharedDataView.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140AB02DC (CmpDoesProcessBelongToServiceSession.c)
 *     PerfInfoLogVirtualAlloc @ 0x140ABCEC0 (PerfInfoLogVirtualAlloc.c)
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 *     ObClearProcessDeviceMap @ 0x140ADD8B8 (ObClearProcessDeviceMap.c)
 *     PspEstimateNewProcessServerSilo @ 0x140AE25C4 (PspEstimateNewProcessServerSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140AF0A90 (PspValidateJobAssignmentSiloPolicy.c)
 *     SepRmLsaConnectRequest @ 0x140AF0D9C (SepRmLsaConnectRequest.c)
 *     EtwpLogProcessPerfCtrs @ 0x140B3B318 (EtwpLogProcessPerfCtrs.c)
 *     DbgkRegisterErrorPort @ 0x140B581C4 (DbgkRegisterErrorPort.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 1520);
}
