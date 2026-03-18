/*
 * XREFs of PopFxDeviceCriticalRegionLeave @ 0x1403955D8
 * Callers:
 *     PopFxActivateComponentWorker @ 0x14037AE70 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorker @ 0x140395300 (PopFxIdleWorker.c)
 *     PopFxIdleWorkerTail @ 0x140395604 (PopFxIdleWorkerTail.c)
 *     PopFxCompleteComponentActivation @ 0x1403AECF4 (PopFxCompleteComponentActivation.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 */

void __fastcall PopFxDeviceCriticalRegionLeave(__int64 a1)
{
  if ( KeGetCurrentIrql() < 2u && (*(_DWORD *)(a1 + 864) & 0x1000) != 0 )
    KeLeaveGuardedRegion();
}
