/*
 * XREFs of ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140099250
 * Callers:
 *     <none>
 * Callees:
 *     TlgAggregateFlushTimerCallback @ 0x1400992A4 (TlgAggregateFlushTimerCallback.c)
 */

void __fastcall TlgAggregateInternalFlushWorkItemRoutineKernelMode(_QWORD *a1)
{
  TlgAggregateFlushTimerCallback();
  if ( _InterlockedCompareExchange16((volatile signed __int16 *)(a1[33] + 56LL), 0, 1) == 2 )
    KeSetEvent((PRKEVENT)(a1[33] + 32LL), 0, 0);
}
