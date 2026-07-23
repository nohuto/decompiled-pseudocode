/*
 * XREFs of PfTSetTraceWorkerPriority @ 0x1406029F4
 * Callers:
 *     PfpLogScenarioEventCallback @ 0x1407C87C0 (PfpLogScenarioEventCallback.c)
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 *     PfpPowerActionSleepSystemPhaseCallback @ 0x140BFE770 (PfpPowerActionSleepSystemPhaseCallback.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     PfpPartitionAccessTraceLockAcquire @ 0x140BEF5B0 (PfpPartitionAccessTraceLockAcquire.c)
 *     PfpPartitionAccessTraceLockRelease @ 0x140BFF0AC (PfpPartitionAccessTraceLockRelease.c)
 */

__int64 __fastcall PfTSetTraceWorkerPriority(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *v4; // rcx
  unsigned int v5; // ebx

  if ( a2 > 0x1F )
  {
    return 32;
  }
  else
  {
    PfpPartitionAccessTraceLockAcquire();
    v4 = *(struct _KTHREAD **)(a1 + 168);
    if ( v4 )
      v5 = KeSetPriorityThread(v4, a2);
    else
      v5 = 33;
    PfpPartitionAccessTraceLockRelease(a1);
  }
  return v5;
}
