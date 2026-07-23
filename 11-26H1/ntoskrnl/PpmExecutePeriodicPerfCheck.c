/*
 * XREFs of PpmExecutePeriodicPerfCheck @ 0x140463F90
 * Callers:
 *     KiUpdateTime @ 0x14021F020 (KiUpdateTime.c)
 *     PpmCheckTimerCallback @ 0x14060D250 (PpmCheckTimerCallback.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

void PpmExecutePeriodicPerfCheck()
{
  signed __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  LARGE_INTEGER InterruptTimePrecise; // rbp
  bool v3; // r14
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  signed __int64 QuadPart; // rcx
  unsigned __int64 v7; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v10; // eax
  __int64 v11; // rdx
  unsigned __int32 v12; // ett
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+8h] BYREF

  v0 = PpmCheckLastEffectiveExecutionTime;
  if ( PpmCheckLastEffectiveExecutionTime )
  {
    if ( PpmCheckTimerImplementation )
    {
      v1 = (unsigned int)KeMinimumIncrement;
      if ( PpmCheckPeriod > (unsigned __int64)(unsigned int)KeMinimumIncrement )
        v1 = PpmCheckPeriod;
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    }
    else
    {
      v1 = (unsigned int)KeTimeIncrement;
      if ( PpmCheckPeriod > (unsigned __int64)(unsigned int)KeTimeIncrement )
        v1 = PpmCheckPeriod;
      InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000008];
    }
    if ( v1 + v0 <= InterruptTimePrecise.QuadPart )
    {
      v3 = KeDisableInterrupts();
      KxAcquireSpinLock(&PpmCheckExecutionLock);
      v4 = PpmCheckLastActualExecutionTime;
      if ( PpmCheckLastActualExecutionTime + (v1 >> 1) <= InterruptTimePrecise.QuadPart )
      {
        LODWORD(v5) = 0;
        QuadPart = InterruptTimePrecise.QuadPart;
        if ( v0 != 1 )
        {
          if ( !PpmCheckTimerImplementation && v0 + v1 + KeMaximumIncrement > InterruptTimePrecise.QuadPart )
            QuadPart = v1 + v0;
          v7 = QuadPart - v1 - v0;
          if ( PpmCheckTimerImplementation )
          {
            if ( PpmCheckLastActualExecutionTime + v1 < InterruptTimePrecise.QuadPart && v7 >= v1 )
            {
              if ( v7 >= 0x989680 )
                v7 = 10000000LL;
              v5 = v7 / v1;
            }
          }
          else if ( v1 + PpmCheckLastActualExecutionTime + KeMaximumIncrement < InterruptTimePrecise.QuadPart
                 && v7 >= v1 )
          {
            LODWORD(v5) = 64;
            if ( (unsigned int)(v7 / v1) < 0x40 )
              LODWORD(v5) = v7 / v1;
          }
        }
        if ( v0 == _InterlockedCompareExchange64(&PpmCheckLastEffectiveExecutionTime, QuadPart, v0) )
        {
          PpmCheckLastActualExecutionTime = InterruptTimePrecise.QuadPart;
          KiInsertQueueDpc((ULONG_PTR)&PpmCheckStartDpc, (unsigned int)v5, 0LL, 0LL, 0);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64((volatile signed __int64 *)&PpmCheckExecutionLock, 0LL);
      else
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)&PpmCheckExecutionLock, retaddr);
      if ( v3 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v10 = *SchedulerAssist;
          do
          {
            v11 = v10;
            LODWORD(v11) = v10 & 0xFFDFFFFF;
            v12 = v10;
            v10 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v10 & 0xFFDFFFFF, v10);
          }
          while ( v12 != v10 );
          if ( (v10 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v11, SchedulerAssist, v4);
        }
        _enable();
      }
    }
  }
}
