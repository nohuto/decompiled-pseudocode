/*
 * XREFs of KePrepareClockTimerForPlatformIdle @ 0x1405EFFA4
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiLogClockIncrementUpdate @ 0x14021EFB8 (KiLogClockIncrementUpdate.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     KeIsForceIdleEngaged @ 0x140339850 (KeIsForceIdleEngaged.c)
 *     KiSetPendingTick @ 0x140476614 (KiSetPendingTick.c)
 *     KiSetVpThreadHrTimerActive @ 0x140485974 (KiSetVpThreadHrTimerActive.c)
 *     KiEventClockStateChange @ 0x1404866E0 (KiEventClockStateChange.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1404F5E20 (KiGetNextTimerExpirationDueTime.c)
 *     KePrepareClockTimerForIdle @ 0x1405EFCA8 (KePrepareClockTimerForIdle.c)
 *     KiCancelClockTimerKTimerDeadlines @ 0x1405F0CD0 (KiCancelClockTimerKTimerDeadlines.c)
 *     PoAllProcessorsDeepIdle @ 0x140603E90 (PoAllProcessorsDeepIdle.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KePrepareClockTimerForPlatformIdle(
        char a1,
        char a2,
        char a3,
        unsigned __int64 a4,
        char a5,
        _QWORD *a6,
        __int64 a7)
{
  ULONG v7; // edi
  unsigned __int64 v8; // r12
  LARGE_INTEGER InterruptTimePrecise; // rax
  struct _KPRCB *CurrentPrcb; // r15
  __int32 v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r14
  LARGE_INTEGER v16; // rbx
  __int64 QuadPart; // r14
  unsigned __int64 v18; // rbx
  bool v19; // zf
  bool v20; // cf
  char v21; // dl
  __int64 *v22; // r10
  __int64 v23; // r10
  __int64 v24; // r11
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-79h] BYREF
  int v28; // [rsp+68h] [rbp-71h] BYREF
  __int64 v29; // [rsp+70h] [rbp-69h] BYREF
  _QWORD *v30; // [rsp+78h] [rbp-61h] BYREF
  _QWORD v31[3]; // [rsp+80h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+98h] [rbp-41h] BYREF
  _QWORD **v33; // [rsp+B8h] [rbp-21h]
  __int64 v34; // [rsp+C0h] [rbp-19h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+C8h] [rbp-11h]
  __int64 v36; // [rsp+D0h] [rbp-9h]
  int *v37; // [rsp+D8h] [rbp-1h]
  __int64 v38; // [rsp+E0h] [rbp+7h]

  v7 = 0;
  v30 = a6;
  v8 = a4;
  LOBYTE(InterruptTimePrecise.LowPart) = a7;
  v29 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = 4;
  v31[0] = a7;
  PerformanceCounter.QuadPart = 0LL;
  v28 = 13;
  if ( !KiDynamicTickInitialized || (_BYTE)KiDynamicTickDisableReason )
  {
LABEL_26:
    if ( KiClockTimerPerCpuTickScheduling )
      LOBYTE(InterruptTimePrecise.LowPart) = KePrepareClockTimerForIdle(0LL);
    goto LABEL_28;
  }
  LOBYTE(InterruptTimePrecise.LowPart) = KiLastRequestedTimeIncrement;
  if ( a4 <= (unsigned int)KiLastRequestedTimeIncrement )
  {
LABEL_4:
    v7 = 2;
    goto LABEL_26;
  }
  if ( a4 > KiMaxDynamicTickDuration )
  {
    ++dword_140F25F88;
    v8 = KiMaxDynamicTickDuration;
  }
  v13 = _InterlockedExchange(&KiClockState, 3);
  LOBYTE(InterruptTimePrecise.LowPart) = PoAllProcessorsDeepIdle();
  if ( !LOBYTE(InterruptTimePrecise.LowPart) )
  {
    v7 = 1;
    goto LABEL_26;
  }
  if ( !a1 )
  {
    LOBYTE(InterruptTimePrecise.LowPart) = KeIsForceIdleEngaged();
    if ( LOBYTE(InterruptTimePrecise.LowPart) )
    {
      v7 = 6;
      goto LABEL_26;
    }
  }
  LOBYTE(v14) = 1;
  v15 = MEMORY[0xFFFFF78000000008];
  KiGetNextTimerExpirationDueTime(
    (__int64)CurrentPrcb,
    v14,
    MEMORY[0xFFFFF78000000008],
    a1,
    a2,
    a3,
    (unsigned __int64 *)&PerformanceCounter.QuadPart,
    &v28,
    v30);
  v16 = PerformanceCounter;
  if ( a5 )
  {
    QuadPart = RtlGetInterruptTimePrecise(&PerformanceCounter).QuadPart;
  }
  else
  {
    InterruptTimePrecise.QuadPart = v15 + (unsigned int)KiLastRequestedTimeIncrement;
    if ( PerformanceCounter.QuadPart <= (unsigned __int64)InterruptTimePrecise.QuadPart )
      goto LABEL_4;
    if ( !a1 && KiClockTimerHighLatency )
    {
      if ( KiClockTimerOneShotStartTime )
      {
        if ( (unsigned __int64)(KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime) < 0x2710 )
          ++KiDynamicTickCancellations;
        KiClockTimerOneShotStartTime = 0LL;
      }
      LOBYTE(InterruptTimePrecise.LowPart) = KeMaximumIncrement;
      if ( v15 - KiClockTimerOneShotEndTime >= (unsigned __int64)KeMaximumIncrement )
      {
        KiDynamicTickCancellations = 0;
      }
      else if ( (unsigned int)KiDynamicTickCancellations > 3 )
      {
        v7 = 3;
        goto LABEL_26;
      }
    }
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    QuadPart = InterruptTimePrecise.QuadPart;
    if ( v16.QuadPart <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
      goto LABEL_25;
  }
  InterruptTimePrecise.QuadPart = QuadPart + (unsigned int)KiMinDynamicTickDuration;
  if ( v16.QuadPart <= (unsigned __int64)InterruptTimePrecise.QuadPart )
  {
LABEL_25:
    v7 = 4;
    goto LABEL_26;
  }
  v18 = v16.QuadPart - QuadPart;
  if ( v18 > v8 )
    v18 = v8;
  PerformanceCounter.QuadPart = v18;
  if ( a5 && !a1 )
  {
    if ( v18 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
      v18 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
    PerformanceCounter.QuadPart = v18;
  }
  guard_dispatch_icall_no_overrides(1LL, v18);
  KiLogClockIncrementUpdate((__int64)CurrentPrcb, QuadPart, v18, v29, 1);
  KiSetPendingTick(1);
  KiClockTimerOneShotStartTime = QuadPart;
  KiEventClockStateChange(1, v13, &v29, (__int64 *)&PerformanceCounter);
  if ( (unsigned int)dword_140E06F90 > 5 )
  {
    LODWORD(v30) = v18;
    v33 = &v30;
    PerformanceCounter.LowPart = v29;
    v34 = 4LL;
    p_PerformanceCounter = &PerformanceCounter;
    v37 = &v28;
    v36 = 4LL;
    v38 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06F90,
      (unsigned __int8 *)&dword_1400492FC,
      0LL,
      0LL,
      5u,
      &v32);
  }
  if ( a5 )
    KiClockLatencyMeasurementEnabled = 1;
  if ( KeIsForceIdleEngaged() )
    KiForceIdleReset = 1;
  v19 = KiClockTimerPerCpuTickScheduling == 0;
  CurrentPrcb->ClockOwner = 0;
  if ( !v19 )
    KiCancelClockTimerKTimerDeadlines(CurrentPrcb);
  ++qword_140F25F90;
  v13 = 1;
  v20 = v18 < qword_140F25FC8;
  CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotArmed;
  if ( v20 )
    qword_140F25FC8 = v18;
  if ( v18 > qword_140F25FC0 )
    qword_140F25FC0 = v18;
  if ( a1 )
    KiConsiderTimerRebasing = 1;
  LOBYTE(InterruptTimePrecise.LowPart) = KeNumberProcessors_0;
  v21 = KiHrTimerActiveCount > 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v22 = KiProcessorBlock;
    do
    {
      LOBYTE(InterruptTimePrecise.LowPart) = KiSetVpThreadHrTimerActive(*v22, v21);
      v22 = (__int64 *)(v23 + 8);
    }
    while ( v24 != 1 );
  }
  KiClockTimerNextTickTime = QuadPart + v29;
  CurrentPrcb->ClockTimerState.NextTickDueTime = QuadPart + v29;
  CurrentPrcb->ClockTimerState.ClockArmedForIdle = 1;
LABEL_28:
  if ( v31[0] )
  {
    LOBYTE(InterruptTimePrecise.LowPart) = KiClockTimerNextTickTime;
    *(_QWORD *)v31[0] = KiClockTimerNextTickTime;
  }
  if ( v13 != 4 )
    _InterlockedExchange(&KiClockState, v13);
  if ( v7 )
  {
    PerformanceCounter.LowPart = v7;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v31[1] = 1LL;
      v31[0] = &PerformanceCounter;
      LOBYTE(InterruptTimePrecise.LowPart) = EtwTraceKernelEvent((int)v31, 1, 0x40100000u, 3929, 1538);
    }
  }
  return InterruptTimePrecise.LowPart;
}
