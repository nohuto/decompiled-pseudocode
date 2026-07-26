/*
 * XREFs of ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1401527E0
 * Callers:
 *     <none>
 * Callees:
 *     EnableFlushTimer @ 0x1400E8CC4 (EnableFlushTimer.c)
 *     LookUpTableFlushComplete @ 0x1401523C8 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x140152768 (LookUpTableFlushPartial.c)
 */

void __fastcall TlgAggregateInternalFlushWorkItemRoutineKernelMode(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 372) )
  {
    *(_BYTE *)(a1 + 372) = 0;
    LookUpTableFlushComplete(a1);
  }
  else
  {
    LookUpTableFlushPartial(a1);
  }
  if ( *(_DWORD *)(a1 + 256) )
    EnableFlushTimer(*(_QWORD *)(a1 + 360), *(_DWORD *)(a1 + 368));
  if ( _InterlockedCompareExchange16((volatile signed __int16 *)(*(_QWORD *)(a1 + 264) + 56LL), 0, 1) == 2 )
    KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 264) + 32LL), 0, 0);
}
