/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x140419438
 * Callers:
 *     KeClockInterruptNotify @ 0x1402216C0 (KeClockInterruptNotify.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x1403790A0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetClockInterval @ 0x140418834 (KiSetClockInterval.c)
 *     KiResetClockIntervalOneShot @ 0x140418B34 (KiResetClockIntervalOneShot.c)
 *     KiSetClockIntervalOneShot @ 0x140418C6C (KiSetClockIntervalOneShot.c)
 *     KiResetClockInterval @ 0x1405EE66C (KiResetClockInterval.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KiSetClockTickRate @ 0x14021DD30 (KiSetClockTickRate.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140418DA0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiGetClockIntervalOneShot @ 0x14046F550 (KiGetClockIntervalOneShot.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 KiSetClockIntervalToMinimumRequested()
{
  unsigned __int64 v0; // rax
  unsigned int v1; // ebx
  bool v2; // si
  __int64 InterruptTimePrecise; // rax
  unsigned int v4; // r10d
  unsigned __int64 v5; // r11
  __int64 ClockIntervalOneShot; // r9
  __int64 v7; // rcx
  __int64 v8; // r10
  unsigned int v9; // r8d
  char v10; // r8
  char v11; // di
  unsigned int v12; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v15; // eax
  __int64 v16; // rdx
  unsigned __int32 v17; // ett
  unsigned __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  if ( (qword_140E66748 & 1) != 0 )
  {
    if ( qword_140E66748 == 1 )
      v0 = 0LL;
    else
      v0 = qword_140E66748 ^ ((unsigned __int64)&KiClockIntervalRequests + 1);
  }
  else
  {
    v0 = qword_140E66748;
  }
  v1 = *(_DWORD *)(v0 + 28);
  v2 = KeDisableInterrupts();
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v19);
  v4 = -1;
  v5 = InterruptTimePrecise;
  ClockIntervalOneShot = 0xFFFFFFFFLL;
  if ( KiClockOwnerOneShotRequest )
    ClockIntervalOneShot = (unsigned int)KiGetClockIntervalOneShot(KiClockOwnerOneShotRequest, InterruptTimePrecise);
  v7 = KiClockOwnerOneShotCorrectiveRequest;
  if ( KiClockOwnerOneShotCorrectiveRequest > v5
    || KiClockOwnerOneShotRequestState == 2 && !KiClockOwnerOneShotCorrectiveRequest )
  {
    v8 = KiLastPseudoHrTimerExpiration;
    if ( KiLastPseudoHrTimerExpiration + (unsigned __int64)(unsigned int)KePseudoHrTimeIncrement > KiLastNonHrTimerExpiration
                                                                                                 + (unsigned __int64)(unsigned int)KeNonHrTimeIncrement )
    {
      v8 = KiLastNonHrTimerExpiration;
      v9 = KeNonHrTimeIncrement;
    }
    else
    {
      v9 = KePseudoHrTimeIncrement;
    }
    v4 = KiGetClockIntervalOneShot(v5 + v9 - (v5 - v8) % v9, v5);
  }
  v10 = 0;
  v11 = 0;
  if ( (unsigned int)ClockIntervalOneShot > v1 || (unsigned int)ClockIntervalOneShot > v4 )
  {
    if ( v4 >= v1 )
    {
      ClockIntervalOneShot = v1;
      KiClockOwnerOneShotCorrectiveRequest = v5;
    }
    else
    {
      v10 = 1;
      KiClockOwnerOneShotCorrectiveRequest = v7;
      v11 = 1;
      ClockIntervalOneShot = v4;
    }
  }
  else
  {
    KiClockOwnerOneShotCorrectiveRequest = 0LL;
    v10 = 1;
  }
  if ( KiClockOwnerOneShotRequestState != 2
    && ((_DWORD)ClockIntervalOneShot == KiLastRequestedTimeIncrement || (_DWORD)ClockIntervalOneShot == KeTimeIncrement) )
  {
    v12 = KeTimeIncrement;
  }
  else
  {
    v12 = KiSetClockTickRate(v5, ClockIntervalOneShot, v10);
  }
  if ( v11 )
    PoTraceSystemTimerResolutionKernel(v12, 1129271880, 1);
  if ( v2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v15 = *SchedulerAssist;
      do
      {
        v16 = v15;
        LODWORD(v16) = v15 & 0xFFDFFFFF;
        v17 = v15;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v15 & 0xFFDFFFFF, v15);
      }
      while ( v17 != v15 );
      if ( (v15 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v16, SchedulerAssist, ClockIntervalOneShot);
    }
    _enable();
  }
  return v12;
}
