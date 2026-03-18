/*
 * XREFs of TlgAggregateFlushTimerCallback @ 0x1400992A4
 * Callers:
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140099250 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 * Callees:
 *     EnableFlushTimer @ 0x14005ACA4 (EnableFlushTimer.c)
 *     LookUpTableFlushPartial @ 0x1400992F4 (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x14011C9C0 (LookUpTableFlushComplete.c)
 */

__int64 __fastcall TlgAggregateFlushTimerCallback(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 372) )
  {
    *(_BYTE *)(a1 + 372) = 0;
    result = LookUpTableFlushComplete();
  }
  else
  {
    result = LookUpTableFlushPartial();
  }
  if ( *(_DWORD *)(a1 + 256) )
    return EnableFlushTimer(*(_QWORD *)(a1 + 360), *(_DWORD *)(a1 + 368));
  return result;
}
