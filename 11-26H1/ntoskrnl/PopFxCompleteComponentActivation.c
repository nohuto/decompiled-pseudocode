/*
 * XREFs of PopFxCompleteComponentActivation @ 0x1403AECF4
 * Callers:
 *     PopFxActivateComponentWorker @ 0x14037AE70 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140395604 (PopFxIdleWorkerTail.c)
 *     PopFxProcessWork @ 0x1403AEEC0 (PopFxProcessWork.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PopFxIdleComponent @ 0x140395020 (PopFxIdleComponent.c)
 *     PopFxDeviceCriticalRegionEnter @ 0x1403955A8 (PopFxDeviceCriticalRegionEnter.c)
 *     PopFxDeviceCriticalRegionLeave @ 0x1403955D8 (PopFxDeviceCriticalRegionLeave.c)
 *     PopFxActivateComponentDependents @ 0x1403B25D0 (PopFxActivateComponentDependents.c)
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
