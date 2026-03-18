/*
 * XREFs of PfpPartitionAccessTraceLockRelease @ 0x140BF90AC
 * Callers:
 *     PfTSetTraceWorkerPriority @ 0x1405FFF44 (PfTSetTraceWorkerPriority.c)
 *     PfGenerateTrace @ 0x1407794E8 (PfGenerateTrace.c)
 *     PfSetSuperfetchInformation @ 0x140B5DB14 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfLockExclusiveRelease @ 0x1404C761C (PfLockExclusiveRelease.c)
 */

void __fastcall PfpPartitionAccessTraceLockRelease(__int64 a1)
{
  PfLockExclusiveRelease((struct _KTHREAD *)(a1 + 64));
}
