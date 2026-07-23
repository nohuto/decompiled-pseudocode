/*
 * XREFs of PopFxDeviceCriticalRegionLeave @ 0x140397358
 * Callers:
 *     PopFxActivateComponentWorker @ 0x14037CC20 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorker @ 0x140397080 (PopFxIdleWorker.c)
 *     PopFxIdleWorkerTail @ 0x140397384 (PopFxIdleWorkerTail.c)
 *     PopFxCompleteComponentActivation @ 0x1403B8A04 (PopFxCompleteComponentActivation.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 */

void __fastcall PopFxDeviceCriticalRegionLeave(__int64 a1)
{
  if ( KeGetCurrentIrql() < 2u && (*(_DWORD *)(a1 + 864) & 0x1000) != 0 )
    KeLeaveGuardedRegion();
}
