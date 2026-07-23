/*
 * XREFs of MmGetDefaultPagePriority @ 0x1404AFDB0
 * Callers:
 *     PspApplyIFEOPerfOptions @ 0x14077BC3C (PspApplyIFEOPerfOptions.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     PfSnAsyncPrefetchWorker @ 0x1409887A0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnCheckActionsNeeded @ 0x1409D21C0 (PfSnCheckActionsNeeded.c)
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 *     PfpLogEventRequest @ 0x140B51D4C (PfpLogEventRequest.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     PfTAccessTracingCleanup @ 0x140BFEDFC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140BFEEDC (PfTAccessTracingStart.c)
 *     ExpDebuggerWorker @ 0x140C1CD60 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
