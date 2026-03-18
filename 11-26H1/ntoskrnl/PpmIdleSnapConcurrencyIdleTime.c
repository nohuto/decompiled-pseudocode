/*
 * XREFs of PpmIdleSnapConcurrencyIdleTime @ 0x14042D820
 * Callers:
 *     PopAccumulateNonDripsIdleCpuTime @ 0x14042D634 (PopAccumulateNonDripsIdleCpuTime.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x14042D72C (PopAccumulateNonActivatedCpuTime.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PpmIdleSnapConcurrencyIdleTime(PKSPIN_LOCK SpinLock, _QWORD *a2, _QWORD *a3)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  bool v7; // bp
  KSPIN_LOCK v8; // r9
  __int64 v9; // rax
  __int64 v10; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v13; // eax
  __int64 v14; // rdx
  unsigned __int32 v15; // ett

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = KeDisableInterrupts();
  KxAcquireSpinLock(SpinLock);
  v8 = SpinLock[2];
  if ( PerformanceCounter.QuadPart > v8 )
  {
    v9 = *((unsigned int *)SpinLock + 3);
    SpinLock[2] = PerformanceCounter.QuadPart;
    SpinLock[3] += PerformanceCounter.QuadPart - v8;
    SpinLock[v9 + 41] += PerformanceCounter.QuadPart - v8;
  }
  *a2 = SpinLock[3];
  *a3 = SpinLock[41];
  KxReleaseSpinLock(SpinLock);
  if ( v7 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v13 = *SchedulerAssist;
      do
      {
        v14 = v13;
        LODWORD(v14) = v13 & 0xFFDFFFFF;
        v15 = v13;
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v13 & 0xFFDFFFFF, v13);
      }
      while ( v15 != v13 );
      if ( (v13 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v14, SchedulerAssist, v10);
    }
    _enable();
  }
}
