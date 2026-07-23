/*
 * XREFs of KiResetForceIdle @ 0x1403389B4
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14032F7F0 (KiCallInterruptServiceRoutine.c)
 *     KiForceIdleInterruptNotify @ 0x140338970 (KiForceIdleInterruptNotify.c)
 *     KeClearForceIdle @ 0x1404BECEC (KeClearForceIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405F03F4 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KeIsForceIdleEngaged @ 0x140339850 (KeIsForceIdleEngaged.c)
 *     KiSetForceIdleState @ 0x1404BEDD8 (KiSetForceIdleState.c)
 *     PoTraceForceIdleReset @ 0x140531818 (PoTraceForceIdleReset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiResetForceIdle(unsigned int a1, char a2)
{
  bool v2; // bl
  __int64 result; // rax
  __int64 v6; // r9
  LARGE_INTEGER v7; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v10; // rdx
  int v11; // ett
  int v12; // [rsp+48h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v2 = KeDisableInterrupts();
    v12 = 0;
    while ( _interlockedbittestandset64(&KiSupervisorXStateFeaturesLock.Timer.Header.LockNV, 0LL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( *(_QWORD *)&KiSupervisorXStateFeaturesLock.Timer.Header.Lock );
    }
  }
  result = KeIsForceIdleEngaged();
  if ( (_BYTE)result )
  {
    KiSetForceIdleState(3LL);
    if ( a1 == 3 )
      v7.QuadPart = 0LL;
    else
      v7.QuadPart = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
                  + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
    KiSupervisorXStateFeaturesLock.ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)v7.QuadPart;
    if ( !*(&KiForceIdleStopDpc + 7) )
      WORD1(KiForceIdleStopDpc) = KiClockTimerOwner + 2048;
    KiInsertQueueDpc((ULONG_PTR)&KiForceIdleStopDpc, 0LL, 0LL, 0LL, 0);
    result = PoTraceForceIdleReset(a1);
  }
  if ( !a2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.Timer.Header.Lock, 0LL);
    if ( v2 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        LODWORD(result) = *SchedulerAssist;
        do
        {
          v10 = (unsigned int)result;
          LODWORD(v10) = result & 0xFFDFFFFF;
          v11 = result;
          result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
        }
        while ( v11 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb, v10, SchedulerAssist, v6);
      }
      _enable();
    }
  }
  return result;
}
