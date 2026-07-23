/*
 * XREFs of KeSetForceIdle @ 0x1404BEC18
 * Callers:
 *     PopDeepSleepClearDisengageReason @ 0x1403BE204 (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSetForceIdleState @ 0x1404BEDD8 (KiSetForceIdleState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KeSetForceIdle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  int v6; // edi
  LARGE_INTEGER v7; // rbx
  unsigned __int32 v8; // eax
  __int64 v9; // rdx
  unsigned __int32 v10; // ett
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  _disable();
  PerformanceCounter.LowPart = 0;
  while ( _interlockedbittestandset64(&KiSupervisorXStateFeaturesLock.Timer.Header.LockNV, 0LL) )
  {
    do
      KeYieldProcessorEx(&PerformanceCounter);
    while ( *(_QWORD *)&KiSupervisorXStateFeaturesLock.Timer.Header.Lock );
  }
  if ( !KiForceIdleDisabled )
  {
    v6 = KiForceIdleState;
    v7.QuadPart = *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter)
                + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
    if ( v6 )
    {
      if ( v6 != 3 )
        goto LABEL_6;
    }
    else
    {
      KiSetForceIdleState(2LL);
    }
    KiSupervisorXStateFeaturesLock.ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)v7.QuadPart;
  }
LABEL_6:
  _InterlockedAnd64((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.Timer.Header.Lock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v8 = *SchedulerAssist;
    do
    {
      v9 = v8;
      LODWORD(v9) = v8 & 0xFFDFFFFF;
      v10 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v8 & 0xFFDFFFFF, v8);
    }
    while ( v10 != v8 );
    if ( (v8 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v9, SchedulerAssist, a4);
  }
  _enable();
}
