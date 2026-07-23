/*
 * XREFs of PfpPartitionAccessTraceLockRelease @ 0x140BFF0AC
 * Callers:
 *     PfTSetTraceWorkerPriority @ 0x1406029F4 (PfTSetTraceWorkerPriority.c)
 *     PfGenerateTrace @ 0x14077C418 (PfGenerateTrace.c)
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfLockExclusiveRelease @ 0x1404C0F38 (PfLockExclusiveRelease.c)
 */

void __fastcall PfpPartitionAccessTraceLockRelease(__int64 a1)
{
  PfLockExclusiveRelease((struct _KTHREAD *)(a1 + 64));
}
