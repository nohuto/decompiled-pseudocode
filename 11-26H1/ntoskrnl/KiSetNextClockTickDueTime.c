/*
 * XREFs of KiSetNextClockTickDueTime @ 0x14037B480
 * Callers:
 *     KeClockInterruptNotify @ 0x140223050 (KeClockInterruptNotify.c)
 *     KeUpdatePendingQosRequest @ 0x140332658 (KeUpdatePendingQosRequest.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14037AE50 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetClockInterval @ 0x14040CD6C (KiSetClockInterval.c)
 *     KiRestoreClockTickRate @ 0x14040CECC (KiRestoreClockTickRate.c)
 *     KiSetClockIntervalOneShot @ 0x14040D19C (KiSetClockIntervalOneShot.c)
 *     KiSetClockTimer @ 0x14040D440 (KiSetClockTimer.c)
 *     KiCancelClockTimer @ 0x14040D864 (KiCancelClockTimer.c)
 *     KePrepareClockTimerForIdle @ 0x1405EFCA8 (KePrepareClockTimerForIdle.c)
 *     KiResetClockInterval @ 0x1405F0FDC (KiResetClockInterval.c)
 *     KeInitializeClock @ 0x140D117AC (KeInitializeClock.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiSetClockTickRate @ 0x14021F6C0 (KiSetClockTickRate.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KiSetNextClockTickDueTime(LARGE_INTEGER a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  LARGE_INTEGER InterruptTimePrecise; // r11
  unsigned __int8 TypeFlags; // cl
  int v6; // edi
  unsigned __int64 v7; // rdx
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  unsigned int v14; // r14d
  __int64 TolerableDelay; // rcx
  unsigned __int64 DueTime; // r8
  bool v17; // cf
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rcx
  unsigned __int64 Min; // rax
  __int64 v21; // r9
  char v22; // cl
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r13
  char v25; // dl
  unsigned int TimeIncrement; // r15d
  unsigned int v28; // eax
  struct _KPRCB *v29; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v31; // eax
  __int64 v32; // rdx
  unsigned __int32 v33; // ett
  char v34; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 ClockOwner; // [rsp+31h] [rbp-CFh] BYREF
  char v36; // [rsp+32h] [rbp-CEh] BYREF
  char v37; // [rsp+33h] [rbp-CDh] BYREF
  bool v38; // [rsp+34h] [rbp-CCh]
  LARGE_INTEGER v39; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v40; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER v44; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER *v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  unsigned __int8 *p_ClockOwner; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  unsigned int *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  LONGLONG *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  char *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  char *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  __int64 *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  LARGE_INTEGER *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  __int64 *v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  char *v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]

  CurrentPrcb = KeGetCurrentPrcb();
  v39 = a1;
  v38 = KeDisableInterrupts();
  if ( !KiClockTimerReducePreciseTimeQueries )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v39 = InterruptTimePrecise;
  }
  TypeFlags = CurrentPrcb->ClockTimerState.ClockTimerEntries[0].TypeFlags;
  v6 = 7;
  v7 = -1LL;
  if ( (TypeFlags & 1) != 0
    && (a2 || (TypeFlags & 2) == 0)
    && CurrentPrcb->ClockTimerState.ClockTimerEntries[0].DueTime
     + CurrentPrcb->ClockTimerState.ClockTimerEntries[0].TolerableDelay != -1LL )
  {
    v7 = CurrentPrcb->ClockTimerState.ClockTimerEntries[0].DueTime
       + CurrentPrcb->ClockTimerState.ClockTimerEntries[0].TolerableDelay;
    v6 = 0;
  }
  v8 = CurrentPrcb->ClockTimerState.ClockTimerEntries[1].TypeFlags;
  if ( (v8 & 1) != 0
    && (a2 || (v8 & 2) == 0)
    && CurrentPrcb->ClockTimerState.ClockTimerEntries[1].DueTime
     + CurrentPrcb->ClockTimerState.ClockTimerEntries[1].TolerableDelay < v7 )
  {
    v7 = CurrentPrcb->ClockTimerState.ClockTimerEntries[1].DueTime
       + CurrentPrcb->ClockTimerState.ClockTimerEntries[1].TolerableDelay;
    v6 = 1;
  }
  v9 = CurrentPrcb->ClockTimerState.ClockTimerEntries[2].TypeFlags;
  if ( (v9 & 1) != 0
    && (a2 || (v9 & 2) == 0)
    && CurrentPrcb->ClockTimerState.ClockTimerEntries[2].DueTime
     + CurrentPrcb->ClockTimerState.ClockTimerEntries[2].TolerableDelay < v7 )
  {
    v7 = CurrentPrcb->ClockTimerState.ClockTimerEntries[2].DueTime
       + CurrentPrcb->ClockTimerState.ClockTimerEntries[2].TolerableDelay;
    v6 = 2;
  }
  v10 = CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TypeFlags;
  if ( (v10 & 1) != 0
    && (a2 || (v10 & 2) == 0)
    && CurrentPrcb->ClockTimerState.ClockTimerEntries[3].DueTime
     + CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TolerableDelay < v7 )
  {
    v7 = CurrentPrcb->ClockTimerState.ClockTimerEntries[3].DueTime
       + CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TolerableDelay;
    v6 = 3;
  }
  v11 = CurrentPrcb->ClockTimerState.ClockTimerEntries[4].TypeFlags;
  if ( (v11 & 1) != 0
    && (a2 || (v11 & 2) == 0)
    && CurrentPrcb->ClockTimerState.ClockTimerEntries[4].DueTime
     + CurrentPrcb->ClockTimerState.ClockTimerEntries[4].TolerableDelay < v7 )
  {
    v7 = CurrentPrcb->ClockTimerState.ClockTimerEntries[4].DueTime
       + CurrentPrcb->ClockTimerState.ClockTimerEntries[4].TolerableDelay;
    v6 = 4;
  }
  v12 = CurrentPrcb->ClockTimerState.ClockTimerEntries[5].TypeFlags;
  if ( (v12 & 1) != 0
    && (a2 || (v12 & 2) == 0)
    && CurrentPrcb->ClockTimerState.ClockTimerEntries[5].DueTime
     + CurrentPrcb->ClockTimerState.ClockTimerEntries[5].TolerableDelay < v7 )
  {
    v7 = CurrentPrcb->ClockTimerState.ClockTimerEntries[5].DueTime
       + CurrentPrcb->ClockTimerState.ClockTimerEntries[5].TolerableDelay;
    v6 = 5;
  }
  v13 = CurrentPrcb->ClockTimerState.ClockTimerEntries[6].TypeFlags;
  if ( (v13 & 1) != 0
    && (a2 || (v13 & 2) == 0)
    && CurrentPrcb->ClockTimerState.ClockTimerEntries[6].DueTime
     + CurrentPrcb->ClockTimerState.ClockTimerEntries[6].TolerableDelay < v7 )
  {
    v6 = 6;
  }
  v14 = KeMinimumIncrement;
  TolerableDelay = CurrentPrcb->ClockTimerState.ClockTimerEntries[v6].TolerableDelay;
  DueTime = CurrentPrcb->ClockTimerState.ClockTimerEntries[v6].DueTime;
  v17 = (unsigned int)TolerableDelay < KeMinimumIncrement;
  v18 = DueTime + TolerableDelay;
  v19 = DueTime + TolerableDelay;
  if ( !v17 )
    v19 -= (unsigned int)KeMinimumIncrement;
  if ( v19 > InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KeMinimumIncrement )
    v14 = ((int)v19 - InterruptTimePrecise.LowPart + KeMinimumIncrement - 1) / KeMinimumIncrement * KeMinimumIncrement;
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
  v21 = *(unsigned int *)(Min + 28);
  v22 = 1;
  v42 = v21;
  v34 = 1;
  v23 = v21 + InterruptTimePrecise.QuadPart;
  v41 = v21 + InterruptTimePrecise.QuadPart;
  v24 = InterruptTimePrecise.QuadPart + (unsigned int)KeQuantumEndTimerIncrement;
  if ( DueTime <= v21 + InterruptTimePrecise.QuadPart && v23 <= v18 )
  {
    v14 = v21;
    goto LABEL_21;
  }
  if ( v24 <= v18 && DueTime <= v24 )
  {
    v14 = KeQuantumEndTimerIncrement;
LABEL_21:
    v22 = 0;
    v34 = 0;
  }
  v25 = 0;
  if ( CurrentPrcb->ClockTimerState.OneShotState != KClockTimerOneShotRearmRequired
    && (v14 == CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement
     || v14 == CurrentPrcb->ClockTimerState.TimeIncrement) )
  {
    TimeIncrement = CurrentPrcb->ClockTimerState.TimeIncrement;
  }
  else
  {
    v28 = KiSetClockTickRate(InterruptTimePrecise, v14, v22);
    v21 = v42;
    TimeIncrement = v28;
    v23 = v41;
    v25 = 1;
    InterruptTimePrecise = v39;
  }
  CurrentPrcb->ClockTimerState.ExpectedWakeReason = v6;
  CurrentPrcb->ClockTimerState.NextTickDueTime = InterruptTimePrecise.QuadPart + TimeIncrement;
  if ( (unsigned int)dword_140E06F90 > 5 )
  {
    v45 = v18;
    v49 = &v44;
    ClockOwner = CurrentPrcb->ClockOwner;
    v36 = v25;
    p_ClockOwner = &ClockOwner;
    v39.LowPart = v21;
    v53 = &v40;
    v44 = InterruptTimePrecise;
    v55 = (LONGLONG *)&v41;
    v57 = &v34;
    v59 = &v36;
    v61 = &v42;
    v63 = &v39;
    v65 = &v45;
    v67 = (__int64 *)&v46;
    v69 = &v47;
    p_PerformanceCounter = &PerformanceCounter;
    v73 = &v37;
    v50 = 8LL;
    v52 = 1LL;
    v40 = v14;
    v54 = 4LL;
    LODWORD(v41) = TimeIncrement;
    v56 = 4LL;
    v58 = 1LL;
    v60 = 1LL;
    LODWORD(v42) = v6;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 8LL;
    v46 = v23;
    v68 = 8LL;
    v47 = v24;
    v70 = 8LL;
    PerformanceCounter.QuadPart = v18 - InterruptTimePrecise.QuadPart;
    v72 = 8LL;
    v37 = a2;
    v74 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06F90,
      (unsigned __int8 *)byte_14004915B,
      0LL,
      0LL,
      0xFu,
      &v48);
  }
  if ( v38 )
  {
    v29 = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)v29->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v31 = *SchedulerAssist;
      do
      {
        v32 = v31;
        LODWORD(v32) = v31 & 0xFFDFFFFF;
        v33 = v31;
        v31 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v31 & 0xFFDFFFFF, v31);
      }
      while ( v33 != v31 );
      if ( (v31 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v29, v32, SchedulerAssist, v21);
    }
    _enable();
  }
  return TimeIncrement;
}
