/*
 * XREFs of KeResumeClockTimerFromIdle @ 0x1405F03F4
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiUpdateTimeAssist @ 0x14021FA58 (KiUpdateTimeAssist.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     KiResetForceIdle @ 0x1403389B4 (KiResetForceIdle.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x14037B19C (KiSendClockInterruptToTargetProcessor.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x14037BA10 (KiSetClockTimerKTimerDeadlines.c)
 *     KiRestoreClockTickRate @ 0x14040CECC (KiRestoreClockTickRate.c)
 *     KiSetClockTimer @ 0x14040D440 (KiSetClockTimer.c)
 *     KiSetPendingTick @ 0x140476614 (KiSetPendingTick.c)
 *     KiSetVpThreadHrTimerActive @ 0x140485974 (KiSetVpThreadHrTimerActive.c)
 *     KiEventClockStateChange @ 0x1404866E0 (KiEventClockStateChange.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1405F0BC8 (KiAdjustTimersAfterDripsExit.c)
 *     KiGetNextClockOwner @ 0x1405F0D04 (KiGetNextClockOwner.c)
 *     KiGetPendingTick @ 0x1405F0F6C (KiGetPendingTick.c)
 *     KiOnlyClockInterruptPending @ 0x1405F0FA0 (KiOnlyClockInterruptPending.c)
 *     KiGetPastDueIRTimerInfo @ 0x1405FA844 (KiGetPastDueIRTimerInfo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KeResumeClockTimerFromIdle(__int64 a1, __int64 a2, _DWORD *a3)
{
  _UNKNOWN **v3; // rax
  char v5; // r14
  unsigned __int8 v6; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  char v8; // r15
  signed __int32 v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  LARGE_INTEGER v12; // rdi
  __int64 v13; // rdx
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // r10
  __int64 v17; // rdx
  char *v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  unsigned int NextClockOwner; // eax
  __int64 v22; // rdx
  unsigned int Number; // ecx
  unsigned int v24; // r14d
  __int32 v25; // esi
  unsigned int v26; // ecx
  __int64 v27; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 NextTickDueTime; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // edx
  LARGE_INTEGER InterruptTimePrecise; // rsi
  unsigned __int8 v34; // di
  char ClockOwner; // r8
  unsigned __int8 v37; // [rsp+48h] [rbp-59h] BYREF
  unsigned __int8 ClockArmedForIdle; // [rsp+49h] [rbp-58h] BYREF
  char v39; // [rsp+4Ah] [rbp-57h] BYREF
  _BYTE v40[5]; // [rsp+4Bh] [rbp-56h] BYREF
  __int64 v41; // [rsp+50h] [rbp-51h] BYREF
  __int64 v42; // [rsp+58h] [rbp-49h] BYREF
  int v43; // [rsp+60h] [rbp-41h] BYREF
  __int64 v44[2]; // [rsp+68h] [rbp-39h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+78h] [rbp-29h] BYREF
  int v46; // [rsp+80h] [rbp-21h]
  int v47; // [rsp+84h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+88h] [rbp-19h] BYREF
  unsigned __int8 *p_ClockArmedForIdle; // [rsp+A8h] [rbp+7h]
  __int64 v50; // [rsp+B0h] [rbp+Fh]
  unsigned __int8 *v51; // [rsp+B8h] [rbp+17h]
  __int64 v52; // [rsp+C0h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+5Fh] BYREF

  v3 = &retaddr;
  v5 = a2;
  v6 = a1;
  v42 = 0LL;
  v44[0] = 0LL;
  v41 = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  v37 = 0;
  ClockArmedForIdle = 0;
  v43 = 0;
  if ( (_BYTE)KiDynamicTickDisableReason )
    return (char)v3;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  v40[0] = 0;
  v39 = 0;
  if ( a3 )
    *a3 = -1;
  while ( 1 )
  {
    v9 = KiClockState;
    v10 = 3LL;
    if ( KiClockState == 1 )
    {
      v9 = _InterlockedCompareExchange(&KiClockState, 3, 1);
      if ( v9 == 1 )
        break;
    }
    if ( v9 != 3 )
      goto LABEL_39;
    KeYieldProcessorEx(&v43);
  }
  KiUpdateTimeAssist(0LL, 1, v44, &PerformanceCounter);
  v12 = (LARGE_INTEGER)v44[0];
  KiClockTimerOneShotEndTime = v44[0];
  if ( KeMinimumIncrement - 1 + LODWORD(v44[0]) - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v44[0];
  if ( KeMinimumIncrement - 1 + LODWORD(v44[0]) - (int)KiLastPseudoHrTimerExpiration >= (unsigned int)KePseudoHrTimeIncrement )
    KiLastPseudoHrTimerExpiration = v44[0];
  if ( KiClockLatencyMeasurementEnabled )
  {
    if ( a3
      && (_DWORD)KiClockTimerOwner == CurrentPrcb->Number
      && v44[0] >= (unsigned __int64)KiClockTimerNextTickTime
      && (unsigned __int8)KiOnlyClockInterruptPending(v40, &v39) )
    {
      *a3 = v12.LowPart - KiClockTimerNextTickTime;
    }
    KiClockLatencyMeasurementEnabled = 0;
  }
  if ( v12.QuadPart - KiClockTimerOneShotStartTime < (unsigned __int64)qword_140F25FA8 )
    qword_140F25FA8 = v12.QuadPart - KiClockTimerOneShotStartTime;
  if ( v12.QuadPart - KiClockTimerOneShotStartTime > (unsigned __int64)qword_140F25FA0 )
    qword_140F25FA0 = v12.QuadPart - KiClockTimerOneShotStartTime;
  if ( KiConsiderTimerRebasing )
  {
    LOBYTE(v11) = v5;
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiGetPastDueIRTimerInfo)(
                         (LARGE_INTEGER)v12.QuadPart,
                         v11,
                         &v37,
                         &ClockArmedForIdle)
      && (unsigned __int8)KiOnlyClockInterruptPending(v40, &v39)
      && ExSaPageGroupDescriptorArrayLock.KernelShadowStackInitial )
    {
      v13 = v37 < 0x14u ? v37 : 0;
      v14 = v37 < 0x14u ? ClockArmedForIdle : 0;
      v15 = byte_140E091C0[24 * v13];
      v16 = v14 < v15 ? v13 : 0;
      v17 = v14 < v15 ? v14 : 0;
      if ( v16 )
      {
        v18 = byte_140E091C0;
        v19 = v16;
        do
        {
          v20 = (unsigned __int8)*v18;
          v18 += 24;
          v17 = (unsigned int)(v20 + v17);
          --v19;
        }
        while ( v19 );
      }
      ++*((_DWORD *)ExSaPageGroupDescriptorArrayLock.KernelShadowStackInitial + v17);
    }
    ((void (__fastcall *)(_QWORD, _QWORD))KiAdjustTimersAfterDripsExit)(CurrentPrcb, (LARGE_INTEGER)v12.QuadPart);
    KiConsiderTimerRebasing = 0;
  }
  NextClockOwner = KiGetNextClockOwner(CurrentPrcb);
  Number = CurrentPrcb->Number;
  v24 = NextClockOwner;
  if ( Number == NextClockOwner )
  {
    if ( v12.QuadPart + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement <= KiClockTimerNextTickTime )
    {
      if ( KiClockTimerPerCpu )
      {
        CurrentPrcb->ClockOwner = 1;
        LODWORD(KiClockTimerOwner) = Number;
        if ( !(unsigned __int8)((__int64 (*)(void))KiGetPendingTick)() )
          guard_dispatch_icall_no_overrides(v27, v22);
      }
      if ( CurrentPrcb->ClockOwner && KiClockTimerPerCpuTickScheduling )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 15 )
          __writecr8(0xFuLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v22) = 15;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v22);
        }
        KiSetClockTimer(
          (__int64)CurrentPrcb,
          v12,
          -(__int64)(unsigned int)KeQuantumEndTimerIncrement,
          KeMinimumIncrement,
          3,
          1,
          0);
        KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, v12, 1);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      v25 = 0;
      KiRestoreClockTickRate(v12.QuadPart, &v41, (int *)&v42);
      if ( KiClockTimerPerCpuTickScheduling )
        NextTickDueTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
      else
        NextTickDueTime = v12.QuadPart + (unsigned int)KeTimeIncrement;
      KiClockTimerNextTickTime = NextTickDueTime;
      KiEventClockStateChange(0, 1, &v42, &v41);
      goto LABEL_36;
    }
  }
  else
  {
    v8 = 1;
  }
  ++qword_140F25F98;
  v25 = 2;
  KiEventClockStateChange(2, 1, 0LL, 0LL);
  if ( v8 )
  {
    LODWORD(KiClockTimerOwner) = v24;
    KiSendClockInterruptToTargetProcessor(v24);
  }
LABEL_36:
  a1 = (unsigned int)KiClockTimerOwner;
  v47 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v46 = KiClockTimerOwner;
    v44[0] = (__int64)&PerformanceCounter;
    PerformanceCounter = v12;
    v44[1] = 16LL;
    EtwTraceKernelEvent((int)v44, 1, 0x40100000u, 3928, 1538);
  }
  _InterlockedExchange(&KiClockState, v25);
LABEL_39:
  if ( (_DWORD)KiClockTimerOwner == CurrentPrcb->Number )
  {
    if ( CurrentPrcb->ClockOwner )
      goto LABEL_43;
    CurrentPrcb->ClockOwner = 1;
  }
  if ( !CurrentPrcb->ClockOwner )
  {
LABEL_64:
    KiSetVpThreadHrTimerActive(KiProcessorBlock[CurrentPrcb->Number], 0);
    goto LABEL_65;
  }
LABEL_43:
  if ( !v6 && KiForceIdleReset )
  {
    KiForceIdleReset = 0;
    v26 = (unsigned __int8)KiOnlyClockInterruptPending(v40, &v39) == 0;
    KiResetForceIdle(v26, 0);
  }
  if ( !CurrentPrcb->ClockOwner )
    goto LABEL_64;
LABEL_65:
  LOBYTE(v3) = KiGetPendingTick(a1, a2, v10);
  if ( !(_BYTE)v3 )
  {
    if ( !CurrentPrcb->ClockOwner && !KiClockTimerPerCpuTickScheduling )
      goto LABEL_85;
    LOBYTE(v3) = guard_dispatch_icall_no_overrides(v31, v30);
  }
  if ( !KiClockTimerPerCpuTickScheduling )
    goto LABEL_85;
  if ( (unsigned int)dword_140E06F90 > 5 )
  {
    ClockArmedForIdle = CurrentPrcb->ClockTimerState.ClockArmedForIdle;
    v50 = 1LL;
    p_ClockArmedForIdle = &ClockArmedForIdle;
    v37 = v6;
    v51 = &v37;
    v52 = 1LL;
    LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                   (__int64)&dword_140E06F90,
                   (unsigned __int8 *)byte_140049353,
                   0LL,
                   0LL,
                   4u,
                   &v48);
  }
  if ( !CurrentPrcb->ClockTimerState.ClockArmedForIdle )
  {
LABEL_85:
    if ( CurrentPrcb->ClockOwner )
      return (char)v3;
    goto LABEL_86;
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v34 = KeGetCurrentIrql();
  if ( v34 != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v32) = 15;
    KiRaiseIrqlProcessIrqlFlags(v34, v32);
  }
  KiSetClockTimer(
    (__int64)CurrentPrcb,
    InterruptTimePrecise,
    -(__int64)(unsigned int)KeQuantumEndTimerIncrement,
    KeMinimumIncrement,
    3,
    1,
    0);
  ClockOwner = CurrentPrcb->ClockOwner;
  if ( ClockOwner || !KiSerializeTimerExpiration )
    KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, InterruptTimePrecise, ClockOwner);
  KiRestoreClockTickRate(InterruptTimePrecise.QuadPart, &v41, (int *)&v42);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v34);
  LOBYTE(v3) = v34;
  __writecr8(v34);
  if ( CurrentPrcb->ClockOwner )
  {
    KiClockTimerNextTickTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
    LOBYTE(v3) = KiClockState;
    if ( KiClockState == 2 )
    {
      _InterlockedExchange(&KiClockState, 0);
      LOBYTE(v3) = KiEventClockStateChange(0, 2, &v42, &v41);
    }
    goto LABEL_85;
  }
LABEL_86:
  if ( (CurrentPrcb->PendingTickFlags & 1) != 0 && !KiClockTimerPerCpuTickScheduling )
  {
    guard_dispatch_icall_no_overrides(v31, v30);
    LOBYTE(v3) = KiSetPendingTick(0);
    CurrentPrcb->ClockTimerState.ClockActive = 0;
  }
  return (char)v3;
}
