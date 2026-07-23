/*
 * XREFs of PopFxCompleteComponentActivation @ 0x1403B8A04
 * Callers:
 *     PopFxActivateComponentWorker @ 0x14037CC20 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140397384 (PopFxIdleWorkerTail.c)
 *     PopFxProcessWork @ 0x1403B8BD0 (PopFxProcessWork.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PopFxIdleComponent @ 0x140396DA0 (PopFxIdleComponent.c)
 *     PopFxDeviceCriticalRegionEnter @ 0x140397328 (PopFxDeviceCriticalRegionEnter.c)
 *     PopFxDeviceCriticalRegionLeave @ 0x140397358 (PopFxDeviceCriticalRegionLeave.c)
 *     PopFxActivateComponentDependents @ 0x1403BC2E0 (PopFxActivateComponentDependents.c)
 */

void __fastcall PopFxCompleteComponentActivation(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v6; // rdx

  PopFxDeviceCriticalRegionEnter(BugCheckParameter2);
  _InterlockedOr((volatile signed __int32 *)(v6 + 88), 0x80000000);
  KeSetEvent((PRKEVENT)(v6 + 104), 0, 0);
  if ( a3 )
    PopFxActivateComponentDependents(a2);
  PopFxIdleComponent(BugCheckParameter2, *(unsigned int *)(a2 + 16), 1);
  _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 304));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 244), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(BugCheckParameter2 + 248), 0, 0);
  PopFxDeviceCriticalRegionLeave(BugCheckParameter2);
}
