/*
 * XREFs of KePrepareClockTimerForPlatformIdle @ 0x1405ED634
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1403EB78C (PpmIdleExecuteTransition.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiLogClockIncrementUpdate @ 0x14021D628 (KiLogClockIncrementUpdate.c)
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     KeIsForceIdleEngaged @ 0x1403377D0 (KeIsForceIdleEngaged.c)
 *     KiSetPendingTick @ 0x14047CCA4 (KiSetPendingTick.c)
 *     KiSetVpThreadHrTimerActive @ 0x14048BE34 (KiSetVpThreadHrTimerActive.c)
 *     KiEventClockStateChange @ 0x14048CBA0 (KiEventClockStateChange.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1404FC8E0 (KiGetNextTimerExpirationDueTime.c)
 *     KePrepareClockTimerForIdle @ 0x1405ED338 (KePrepareClockTimerForIdle.c)
 *     KiCancelClockTimerKTimerDeadlines @ 0x1405EE360 (KiCancelClockTimerKTimerDeadlines.c)
 *     PoAllProcessorsDeepIdle @ 0x1406013E0 (PoAllProcessorsDeepIdle.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
  int v7; // edi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // r15
  __int32 v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r14
  unsigned __int64 v16; // rbx
  __int64 InterruptTimePrecise; // r14
  unsigned __int64 v18; // rbx
  bool v19; // zf
  bool v20; // cf
  char v21; // dl
  __int64 *v22; // r10
  __int64 v23; // r10
  __int64 v24; // r11
  unsigned __int64 v27; // [rsp+60h] [rbp-79h] BYREF
  int v28; // [rsp+68h] [rbp-71h] BYREF
  __int64 v29; // [rsp+70h] [rbp-69h] BYREF
  _QWORD *v30; // [rsp+78h] [rbp-61h] BYREF
  _QWORD v31[3]; // [rsp+80h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+98h] [rbp-41h] BYREF
  _QWORD **v33; // [rsp+B8h] [rbp-21h]
  __int64 v34; // [rsp+C0h] [rbp-19h]
  unsigned __int64 *v35; // [rsp+C8h] [rbp-11h]
  __int64 v36; // [rsp+D0h] [rbp-9h]
  int *v37; // [rsp+D8h] [rbp-1h]
  __int64 v38; // [rsp+E0h] [rbp+7h]

  v7 = 0;
  v30 = a6;
  v8 = a4;
  LOBYTE(v9) = a7;
  v29 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = 4;
  v31[0] = a7;
  v27 = 0LL;
  v28 = 13;
  if ( !KiDynamicTickInitialized || (_BYTE)KiDynamicTickDisableReason )
  {
LABEL_26:
    if ( KiClockTimerPerCpuTickScheduling )
      LOBYTE(v9) = KePrepareClockTimerForIdle(0LL);
    goto LABEL_28;
  }
  LOBYTE(v9) = KiLastRequestedTimeIncrement;
  if ( a4 <= (unsigned int)KiLastRequestedTimeIncrement )
  {
LABEL_4:
    v7 = 2;
    goto LABEL_26;
  }
  if ( a4 > KiMaxDynamicTickDuration )
  {
    ++dword_140F25C68;
    v8 = KiMaxDynamicTickDuration;
  }
  v13 = _InterlockedExchange(&KiClockState, 3);
  LOBYTE(v9) = PoAllProcessorsDeepIdle();
  if ( !(_BYTE)v9 )
  {
    v7 = 1;
    goto LABEL_26;
  }
  if ( !a1 )
  {
    LOBYTE(v9) = KeIsForceIdleEngaged();
    if ( (_BYTE)v9 )
    {
      v7 = 6;
      goto LABEL_26;
    }
  }
  LOBYTE(v14) = 1;
  v15 = MEMORY[0xFFFFF78000000008];
  KiGetNextTimerExpirationDueTime((__int64)CurrentPrcb, v14, MEMORY[0xFFFFF78000000008], a1, a2, a3, &v27, &v28, v30);
  v16 = v27;
  if ( a5 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v27);
  }
  else
  {
    v9 = v15 + (unsigned int)KiLastRequestedTimeIncrement;
    if ( v27 <= v9 )
      goto LABEL_4;
    if ( !a1 && KiClockTimerHighLatency )
    {
      if ( KiClockTimerOneShotStartTime )
      {
        if ( (unsigned __int64)(KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime) < 0x2710 )
          ++KiDynamicTickCancellations;
        KiClockTimerOneShotStartTime = 0LL;
      }
      LOBYTE(v9) = KeMaximumIncrement;
      if ( v15 - KiClockTimerOneShotEndTime >= (unsigned __int64)(unsigned int)KeMaximumIncrement )
      {
        KiDynamicTickCancellations = 0;
      }
      else if ( (unsigned int)KiDynamicTickCancellations > 3 )
      {
        v7 = 3;
        goto LABEL_26;
      }
    }
    v9 = RtlGetInterruptTimePrecise(&v27);
    InterruptTimePrecise = v9;
    if ( v16 <= v9 + (unsigned int)KiLastRequestedTimeIncrement )
      goto LABEL_25;
  }
  v9 = InterruptTimePrecise + (unsigned int)KiMinDynamicTickDuration;
  if ( v16 <= v9 )
  {
LABEL_25:
    v7 = 4;
    goto LABEL_26;
  }
  v18 = v16 - InterruptTimePrecise;
  if ( v18 > v8 )
    v18 = v8;
  v27 = v18;
  if ( a5 && !a1 )
  {
    if ( v18 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
      v18 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
    v27 = v18;
  }
  guard_dispatch_icall_no_overrides(1LL, v18);
  KiLogClockIncrementUpdate((__int64)CurrentPrcb, InterruptTimePrecise, v18, v29, 1);
  KiSetPendingTick(1);
  KiClockTimerOneShotStartTime = InterruptTimePrecise;
  KiEventClockStateChange(1, v13, &v29, (__int64 *)&v27);
  if ( (unsigned int)dword_140E06F58 > 5 )
  {
    LODWORD(v30) = v18;
    v33 = &v30;
    LODWORD(v27) = v29;
    v34 = 4LL;
    v35 = &v27;
    v37 = &v28;
    v36 = 4LL;
    v38 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06F58, (unsigned __int8 *)&word_140048CC6, 0LL, 0LL, 5u, &v32);
  }
  if ( a5 )
    KiClockLatencyMeasurementEnabled = 1;
  if ( KeIsForceIdleEngaged() )
    KiForceIdleReset = 1;
  v19 = KiClockTimerPerCpuTickScheduling == 0;
  CurrentPrcb->ClockOwner = 0;
  if ( !v19 )
    KiCancelClockTimerKTimerDeadlines(CurrentPrcb);
  ++qword_140F25C70;
  v13 = 1;
  v20 = v18 < qword_140F25CA8;
  CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotArmed;
  if ( v20 )
    qword_140F25CA8 = v18;
  if ( v18 > qword_140F25CA0 )
    qword_140F25CA0 = v18;
  if ( a1 )
    KiConsiderTimerRebasing = 1;
  LOBYTE(v9) = KeNumberProcessors_0;
  v21 = KiHrTimerActiveCount > 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v22 = KiProcessorBlock;
    do
    {
      LOBYTE(v9) = KiSetVpThreadHrTimerActive(*v22, v21);
      v22 = (__int64 *)(v23 + 8);
    }
    while ( v24 != 1 );
  }
  KiClockTimerNextTickTime = InterruptTimePrecise + v29;
  CurrentPrcb->ClockTimerState.NextTickDueTime = InterruptTimePrecise + v29;
  CurrentPrcb->ClockTimerState.ClockArmedForIdle = 1;
LABEL_28:
  if ( v31[0] )
  {
    LOBYTE(v9) = KiClockTimerNextTickTime;
    *(_QWORD *)v31[0] = KiClockTimerNextTickTime;
  }
  if ( v13 != 4 )
    _InterlockedExchange(&KiClockState, v13);
  if ( v7 )
  {
    LODWORD(v27) = v7;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v31[1] = 1LL;
      v31[0] = &v27;
      LOBYTE(v9) = EtwTraceKernelEvent((int)v31, 1, 0x40100000u, 3929, 1538);
    }
  }
  return v9;
}
