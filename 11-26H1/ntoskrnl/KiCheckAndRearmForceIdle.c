/*
 * XREFs of KiCheckAndRearmForceIdle @ 0x140338EAC
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14032F7F0 (KiCallInterruptServiceRoutine.c)
 *     KiForceIdleInterruptNotify @ 0x140338970 (KiForceIdleInterruptNotify.c)
 *     KiTimer2Expiration @ 0x140338AC0 (KiTimer2Expiration.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeRemoveQueueDpcEx @ 0x140430460 (KeRemoveQueueDpcEx.c)
 *     KiSetForceIdleState @ 0x1404BEDD8 (KiSetForceIdleState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiCheckAndRearmForceIdle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v6; // eax
  __int64 v7; // rdx
  unsigned __int32 v8; // ett
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  if ( KiForceIdleDisabled )
    return;
  _disable();
  PerformanceCounter.LowPart = 0;
  while ( _interlockedbittestandset64(&KiSupervisorXStateFeaturesLock.Timer.Header.LockNV, 0LL) )
  {
    do
      KeYieldProcessorEx(&PerformanceCounter);
    while ( *(_QWORD *)&KiSupervisorXStateFeaturesLock.Timer.Header.Lock );
  }
  if ( KiForceIdleState == 1 )
  {
    KeRemoveQueueDpcEx(&KiSupervisorXStateFeaturesLock.ApcStateFill[40], 0LL);
    KiSetForceIdleState(2LL);
  }
  else if ( KiForceIdleState != 2 )
  {
    goto LABEL_8;
  }
  KiSupervisorXStateFeaturesLock.ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)(*(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter)
                                                                                      + 10000000LL
                                                                                      * (unsigned int)KiForceIdleGracePeriodInSec);
LABEL_8:
  _InterlockedAnd64((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.Timer.Header.Lock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v6 = *SchedulerAssist;
    do
    {
      v7 = v6;
      LODWORD(v7) = v6 & 0xFFDFFFFF;
      v8 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v6 & 0xFFDFFFFF, v6);
    }
    while ( v8 != v6 );
    if ( (v6 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v7, SchedulerAssist, a4);
  }
  _enable();
}
