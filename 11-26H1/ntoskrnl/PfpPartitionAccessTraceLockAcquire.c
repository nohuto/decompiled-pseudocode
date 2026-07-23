/*
 * XREFs of PfpPartitionAccessTraceLockAcquire @ 0x140BEF5B0
 * Callers:
 *     PfTSetTraceWorkerPriority @ 0x1406029F4 (PfTSetTraceWorkerPriority.c)
 *     PfGenerateTrace @ 0x14077C418 (PfGenerateTrace.c)
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfLockExclusiveAcquire @ 0x1404BD3F0 (PfLockExclusiveAcquire.c)
 */

void __fastcall PfpPartitionAccessTraceLockAcquire(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PfLockExclusiveAcquire((unsigned __int64 *)(a1 + 64), a2, a3, a4);
}
