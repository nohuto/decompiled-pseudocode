/*
 * XREFs of PsGetProcessServerSilo @ 0x140470370
 * Callers:
 *     MmMapApiSetView @ 0x14086A2B4 (MmMapApiSetView.c)
 *     ObpDecrementHandleCount2 @ 0x1408F6920 (ObpDecrementHandleCount2.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14090A400 (ObpIncrementHandleCountEx.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140917BB8 (EtwpTrackGuidEntryRegistrations.c)
 *     ObCloseHandleTableEntry2 @ 0x14092AF00 (ObCloseHandleTableEntry2.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     PspTerminateAllThreads @ 0x14094AA84 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x14094B010 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     EtwpProcessEnumCallback @ 0x1409BC0E0 (EtwpProcessEnumCallback.c)
 *     EtwpWriteProcessEvent @ 0x1409D04C4 (EtwpWriteProcessEvent.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1409D0688 (EtwpWriteAppStateChangeSummary.c)
 *     PspSetupUserProcessAddressSpace @ 0x1409E53DC (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x1409E6308 (PspMapSiloSharedDataView.c)
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 *     PerfInfoLogVirtualFree @ 0x140A06DC0 (PerfInfoLogVirtualFree.c)
 *     ObQueryDeviceMapInformation @ 0x140A21800 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140A21A50 (ObpReferenceCurrentDeviceMap.c)
 *     EtwTraceThread @ 0x140A7C440 (EtwTraceThread.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140AADF2C (CmpDoesProcessBelongToServiceSession.c)
 *     PerfInfoLogVirtualAlloc @ 0x140ABF324 (PerfInfoLogVirtualAlloc.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 *     ObClearProcessDeviceMap @ 0x140ADA628 (ObClearProcessDeviceMap.c)
 *     PspEstimateNewProcessServerSilo @ 0x140AE0144 (PspEstimateNewProcessServerSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140AF36D0 (PspValidateJobAssignmentSiloPolicy.c)
 *     SepRmLsaConnectRequest @ 0x140AF39DC (SepRmLsaConnectRequest.c)
 *     DbgkFlushErrorPort @ 0x140AF614C (DbgkFlushErrorPort.c)
 *     EtwpLogProcessPerfCtrs @ 0x140B3D598 (EtwpLogProcessPerfCtrs.c)
 *     DbgkRegisterErrorPort @ 0x140B5AFE4 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 1520);
}
