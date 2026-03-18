/*
 * XREFs of KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x140224840
 * Callers:
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiAddThreadToScbQueue @ 0x1404AC16C (KiAddThreadToScbQueue.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1403C0494 (KiReadGuestSchedulerAssistPriority.c)
 */

void __fastcall KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion(__int64 a1)
{
  bool v2; // di
  void *volatile **v3; // rbx
  void *volatile ***v4; // rax

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
  {
    v2 = 0;
    if ( (unsigned int)KiReadGuestSchedulerAssistPriority(a1, 0LL) != *(_DWORD *)(a1 + 1024) )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Blink);
      v3 = (void *volatile **)(a1 + 1008);
      if ( *v3 == (void *volatile *)1 )
      {
        v4 = *(void *volatile ****)&KiSupervisorXStateFeaturesLock.ReservedPreviousReadyTimeValue;
        v2 = KiSupervisorXStateFeaturesLock.AbWaitObject == &KiSupervisorXStateFeaturesLock.AbWaitObject;
        if ( **(struct _KTHREAD ***)&KiSupervisorXStateFeaturesLock.ReservedPreviousReadyTimeValue != (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.AbWaitObject )
          __fastfail(3u);
        *v3 = &KiSupervisorXStateFeaturesLock.AbWaitObject;
        v3[1] = (void *volatile *)v4;
        *v4 = v3;
        *(_QWORD *)&KiSupervisorXStateFeaturesLock.ReservedPreviousReadyTimeValue = v3;
      }
      KxReleaseSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Blink);
      if ( v2 )
        KiInsertQueueDpc((ULONG_PTR)&KiSupervisorXStateFeaturesLock.1008, 0);
    }
  }
}
