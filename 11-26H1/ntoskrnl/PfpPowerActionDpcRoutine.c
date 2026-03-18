/*
 * XREFs of PfpPowerActionDpcRoutine @ 0x1405FFD60
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfpPowerActionDpcRoutine(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // ebx
  PVOID v5; // rdi
  int v6; // eax

  v4 = DeferredContext[40];
  v5 = DeferredContext;
  KxAcquireSpinLock(&stru_140E66B30.InGlobalUpdateVpThreadPriorityList);
  v6 = *((_DWORD *)v5 + 41);
  if ( v4 )
  {
    if ( stru_140E66B30.SchedulerAssistPriorityFloor == v6 && stru_140E66B30.UserWaitTime )
    {
      *((_QWORD *)v5 + 19) = v5;
      *((_QWORD *)v5 + 18) = PfpServiceMainThreadUnboost;
      *((_QWORD *)v5 + 16) = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v5 + 4, DelayedWorkQueue);
      v5 = 0LL;
    }
  }
  else if ( stru_140E66B30.RealtimePriorityFloor == v6 )
  {
    _InterlockedAnd((_DWORD *)&stru_140F12D20.Padding[2] + 1, 0xFFFFFFFE);
  }
  KxReleaseSpinLock(&stru_140E66B30.InGlobalUpdateVpThreadPriorityList);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
