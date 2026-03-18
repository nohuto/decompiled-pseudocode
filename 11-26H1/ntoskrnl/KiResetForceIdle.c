/*
 * XREFs of KiResetForceIdle @ 0x140336934
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14032D7C0 (KiCallInterruptServiceRoutine.c)
 *     KeClearForceIdle @ 0x1404C533C (KeClearForceIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405EDA84 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KeIsForceIdleEngaged @ 0x1403377D0 (KeIsForceIdleEngaged.c)
 *     KiSetForceIdleState @ 0x1404C5428 (KiSetForceIdleState.c)
 *     PoTraceForceIdleReset @ 0x14052F2F8 (PoTraceForceIdleReset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiResetForceIdle(unsigned int a1, char a2)
{
  bool v2; // bl
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v10; // rdx
  int v11; // ett
  int v12; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v2 = KeDisableInterrupts();
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( KiForceIdleLock );
    }
  }
  result = KeIsForceIdleEngaged();
  if ( (_BYTE)result )
  {
    KiSetForceIdleState(3LL);
    if ( a1 == 3 )
      v7 = 0LL;
    else
      v7 = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec + RtlGetInterruptTimePrecise(&v13);
    KiForceIdleStartTime = v7;
    if ( !*(&KiForceIdleStopDpc + 7) )
      WORD1(KiForceIdleStopDpc) = KiClockTimerOwner + 2048;
    KiInsertQueueDpc((ULONG_PTR)&KiForceIdleStopDpc, 0LL, 0LL, 0LL, 0);
    result = PoTraceForceIdleReset(a1);
  }
  if ( !a2 )
  {
    _InterlockedAnd64(&KiForceIdleLock, 0LL);
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
