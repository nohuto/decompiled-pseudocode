/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x140239B30
 * Callers:
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140493E74 (KiTryScheduleNextForegroundBoost.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 */

void __fastcall KiScheduleNextForegroundBoost(__int64 a1)
{
  volatile unsigned int **v1; // rbx
  bool v2; // di
  volatile unsigned int ***v3; // rax

  v1 = (volatile unsigned int **)(a1 + 880);
  if ( *(_QWORD *)(a1 + 880) == 1LL )
  {
    v2 = 0;
    KxAcquireSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.SchedulerAssist);
    if ( *v1 == (volatile unsigned int *)1 )
    {
      v3 = (volatile unsigned int ***)KiSupervisorXStateFeaturesLock.TracingPrivate[0];
      v2 = *(_QWORD *)&KiSupervisorXStateFeaturesLock.ThreadTimerDelay == (_QWORD)&KiSupervisorXStateFeaturesLock.ThreadTimerDelay;
      if ( *(struct _KTHREAD **)KiSupervisorXStateFeaturesLock.TracingPrivate[0] != (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.ThreadTimerDelay )
        __fastfail(3u);
      *v1 = &KiSupervisorXStateFeaturesLock.ThreadTimerDelay;
      v1[1] = (volatile unsigned int *)v3;
      *v3 = v1;
      KiSupervisorXStateFeaturesLock.TracingPrivate[0] = (unsigned __int64)v1;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.SchedulerAssist);
    if ( v2 )
      KiInsertQueueDpc((ULONG_PTR)&KiSupervisorXStateFeaturesLock.InGlobalForegroundList, 0);
  }
}
