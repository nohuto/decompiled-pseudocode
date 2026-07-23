/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x14023B490
 * Callers:
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiTryScheduleNextForegroundBoost @ 0x14048D9C4 (KiTryScheduleNextForegroundBoost.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 */

void __fastcall KiScheduleNextForegroundBoost(__int64 a1)
{
  void ***v1; // rbx
  bool v2; // di
  void **KernelShadowStackInitial; // rax

  v1 = (void ***)(a1 + 880);
  if ( *(_QWORD *)(a1 + 880) == 1LL )
  {
    v2 = 0;
    KxAcquireSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.KernelShadowStackBase);
    if ( *v1 == (void **)1 )
    {
      KernelShadowStackInitial = (void **)KiSupervisorXStateFeaturesLock.KernelShadowStackInitial;
      v2 = KiSupervisorXStateFeaturesLock.KernelShadowStack == &KiSupervisorXStateFeaturesLock.KernelShadowStack;
      if ( *(struct _KTHREAD **)KiSupervisorXStateFeaturesLock.KernelShadowStackInitial != (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.KernelShadowStack )
        __fastfail(3u);
      *v1 = &KiSupervisorXStateFeaturesLock.KernelShadowStack;
      v1[1] = KernelShadowStackInitial;
      *KernelShadowStackInitial = v1;
      KiSupervisorXStateFeaturesLock.KernelShadowStackInitial = v1;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.KernelShadowStackBase);
    if ( v2 )
      KiInsertQueueDpc((ULONG_PTR)&KiSupervisorXStateFeaturesLock.SchedulerAssist, 0);
  }
}
