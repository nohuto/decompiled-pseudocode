/*
 * XREFs of PfpPartitionAccessTraceLockAcquire @ 0x140BE95B0
 * Callers:
 *     PfTSetTraceWorkerPriority @ 0x1405FFF44 (PfTSetTraceWorkerPriority.c)
 *     PfGenerateTrace @ 0x1407794E8 (PfGenerateTrace.c)
 *     PfSetSuperfetchInformation @ 0x140B5DB14 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfLockExclusiveAcquire @ 0x1404C3BA0 (PfLockExclusiveAcquire.c)
 */

void __fastcall PfpPartitionAccessTraceLockAcquire(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PfLockExclusiveAcquire((unsigned __int64 *)(a1 + 64), a2, a3, a4);
}
