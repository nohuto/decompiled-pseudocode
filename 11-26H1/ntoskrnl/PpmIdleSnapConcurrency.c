/*
 * XREFs of PpmIdleSnapConcurrency @ 0x1404212F0
 * Callers:
 *     PpmParkSnapNodeStatistics @ 0x14041FFA4 (PpmParkSnapNodeStatistics.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

void __fastcall PpmIdleSnapConcurrency(volatile signed __int32 *SpinLock, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  bool v5; // bp
  KSPIN_LOCK v6; // rax
  KSPIN_LOCK v7; // rcx
  __int64 v8; // rax
  void *v9; // rcx
  size_t v10; // r8
  __int64 v11; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v14; // eax
  __int64 v15; // rdx
  unsigned __int32 v16; // ett

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = KeDisableInterrupts();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    if ( _interlockedbittestandset64(SpinLock, 0LL) )
      KxWaitForSpinLockAndAcquire(SpinLock);
  }
  else
  {
    KiAcquireSpinLockInstrumented(SpinLock);
  }
  v6 = *((_QWORD *)SpinLock + 2);
  if ( PerformanceCounter.QuadPart > v6 )
  {
    *((LARGE_INTEGER *)SpinLock + 2) = PerformanceCounter;
    v7 = PerformanceCounter.QuadPart - v6;
    v8 = *((unsigned int *)SpinLock + 3);
    *((_QWORD *)SpinLock + 3) += v7;
    *(_QWORD *)&SpinLock[2 * v8 + 82] += v7;
  }
  v9 = *(void **)a2;
  v10 = 8LL * *(unsigned int *)(a2 + 48);
  *(_QWORD *)(a2 + 24) = *((_QWORD *)SpinLock + 3);
  memmove(v9, (const void *)(SpinLock + 82), v10);
  KxReleaseSpinLock((PKSPIN_LOCK)SpinLock);
  if ( v5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v14 = *SchedulerAssist;
      do
      {
        v15 = v14;
        LODWORD(v15) = v14 & 0xFFDFFFFF;
        v16 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v14 & 0xFFDFFFFF, v14);
      }
      while ( v16 != v14 );
      if ( (v14 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v15, SchedulerAssist, v11);
    }
    _enable();
  }
}
