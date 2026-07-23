/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x14040D968
 * Callers:
 *     KeClockInterruptNotify @ 0x140223050 (KeClockInterruptNotify.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14037AE50 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetClockInterval @ 0x14040CD6C (KiSetClockInterval.c)
 *     KiResetClockIntervalOneShot @ 0x14040D06C (KiResetClockIntervalOneShot.c)
 *     KiSetClockIntervalOneShot @ 0x14040D19C (KiSetClockIntervalOneShot.c)
 *     KiResetClockInterval @ 0x1405F0FDC (KiResetClockInterval.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KiSetClockTickRate @ 0x14021F6C0 (KiSetClockTickRate.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x14040D2D0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiGetClockIntervalOneShot @ 0x140468CD0 (KiGetClockIntervalOneShot.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 KiSetClockIntervalToMinimumRequested()
{
  unsigned __int64 Min; // rax
  unsigned int v1; // ebx
  bool v2; // si
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned int v4; // r10d
  LARGE_INTEGER v5; // r11
  __int64 v6; // r9
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
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
  {
    if ( KiClockIntervalRequests.Min == (_RTL_BALANCED_NODE *)1 )
      Min = 0LL;
    else
      Min = (unsigned __int64)KiClockIntervalRequests.Min ^ ((unsigned __int64)&KiClockIntervalRequests.Root + 1);
  }
  else
  {
    Min = (unsigned __int64)KiClockIntervalRequests.Min;
  }
  v1 = *(_DWORD *)(Min + 28);
  v2 = KeDisableInterrupts();
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v4 = -1;
  v5 = InterruptTimePrecise;
  v6 = 0xFFFFFFFFLL;
  if ( KiClockOwnerOneShotRequest )
    v6 = (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))KiGetClockIntervalOneShot)(
                         KiClockOwnerOneShotRequest,
                         (LARGE_INTEGER)InterruptTimePrecise.QuadPart);
  v7 = KiClockOwnerOneShotCorrectiveRequest;
  if ( (unsigned __int64)KiClockOwnerOneShotCorrectiveRequest > v5.QuadPart
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
    v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD))KiGetClockIntervalOneShot)(
           v5.QuadPart + v9 - (v5.QuadPart - v8) % (unsigned __int64)v9,
           (LARGE_INTEGER)v5.QuadPart);
  }
  v10 = 0;
  v11 = 0;
  if ( (unsigned int)v6 > v1 || (unsigned int)v6 > v4 )
  {
    if ( v4 >= v1 )
    {
      v6 = v1;
      KiClockOwnerOneShotCorrectiveRequest = v5.QuadPart;
    }
    else
    {
      v10 = 1;
      KiClockOwnerOneShotCorrectiveRequest = v7;
      v11 = 1;
      v6 = v4;
    }
  }
  else
  {
    KiClockOwnerOneShotCorrectiveRequest = 0LL;
    v10 = 1;
  }
  if ( KiClockOwnerOneShotRequestState != 2
    && ((_DWORD)v6 == KiLastRequestedTimeIncrement || (_DWORD)v6 == KeTimeIncrement) )
  {
    v12 = KeTimeIncrement;
  }
  else
  {
    v12 = KiSetClockTickRate(v5, v6, v10);
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
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v16, SchedulerAssist, v6);
    }
    _enable();
  }
  return v12;
}
