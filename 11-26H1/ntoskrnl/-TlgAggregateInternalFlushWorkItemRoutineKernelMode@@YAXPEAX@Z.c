/*
 * XREFs of ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140AED210
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     EnableFlushTimer @ 0x14045A2F8 (EnableFlushTimer.c)
 *     LookUpTableFlushPartial @ 0x140AED298 (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x140AED3DC (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalFlushWorkItemRoutineKernelMode(void *a1)
{
  if ( *((_BYTE *)a1 + 372) )
  {
    *((_BYTE *)a1 + 372) = 0;
    LookUpTableFlushComplete(a1);
  }
  else
  {
    LookUpTableFlushPartial();
  }
  if ( *((_DWORD *)a1 + 64) )
    EnableFlushTimer(*((_QWORD *)a1 + 45), *((_DWORD *)a1 + 92));
  if ( _InterlockedCompareExchange16((volatile signed __int16 *)(*((_QWORD *)a1 + 33) + 56LL), 0, 1) == 2 )
    KeSetEvent((PRKEVENT)(*((_QWORD *)a1 + 33) + 32LL), 0, 0);
}
