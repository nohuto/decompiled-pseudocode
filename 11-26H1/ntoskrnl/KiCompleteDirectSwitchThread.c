/*
 * XREFs of KiCompleteDirectSwitchThread @ 0x14042C2A8
 * Callers:
 *     KiInsertQueue @ 0x140267210 (KiInsertQueue.c)
 *     AlpcpQueueIoCompletionPort @ 0x140267FE0 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpQueueIoCompletion @ 0x1402686B0 (AlpcpQueueIoCompletion.c)
 *     KeReleaseSemaphoreEx @ 0x14042BF80 (KeReleaseSemaphoreEx.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140228920 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiRemoveBoostThread @ 0x140273850 (KiRemoveBoostThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiCompleteDirectSwitchThread(struct _KPRCB *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 updated; // rax
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int32 *SchedulerAssist; // r8
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned __int64 v11; // rax
  unsigned __int32 v12; // eax
  __int64 v13; // rdx
  unsigned __int32 v14; // ett

  result = *(unsigned int *)(a2 + 120);
  if ( (result & 0x20) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
    _disable();
    updated = KiUpdateTotalCyclesCurrentThread((__int64)a1, a2, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = updated;
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v12 = *SchedulerAssist;
      do
      {
        v13 = v12;
        LODWORD(v13) = v12 & 0xFFDFFFFF;
        v14 = v12;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v12 & 0xFFDFFFFF, v12);
      }
      while ( v14 != v12 );
      if ( (v12 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v13, SchedulerAssist, v6);
    }
    _enable();
    Next = a1->DeferredReadyListHead.Next;
    if ( Next )
    {
      v11 = *(_QWORD *)(a2 + 32);
      if ( v11 > v8 )
        Next[-23].Next = (struct _SINGLE_LIST_ENTRY *)((char *)Next[-23].Next + v11 - v8);
    }
    result = KiRemoveBoostThread(a1, a2, (__int64)SchedulerAssist);
    *(_QWORD *)(a2 + 32) = v8;
  }
  return result;
}
