/*
 * XREFs of MmGetDefaultPagePriority @ 0x1404B6960
 * Callers:
 *     PspApplyIFEOPerfOptions @ 0x140778D9C (PspApplyIFEOPerfOptions.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PfSnCheckActionsNeeded @ 0x14096FED8 (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncPrefetchWorker @ 0x1409B77C0 (PfSnAsyncPrefetchWorker.c)
 *     NtQueryInformationThread @ 0x140A1F330 (NtQueryInformationThread.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     PfpLogEventRequest @ 0x140B4F4BC (PfpLogEventRequest.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     PfTAccessTracingCleanup @ 0x140BF8DFC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140BF8EDC (PfTAccessTracingStart.c)
 *     ExpDebuggerWorker @ 0x140C16D60 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
