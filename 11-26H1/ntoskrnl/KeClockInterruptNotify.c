/*
 * XREFs of KeClockInterruptNotify @ 0x1402216C0
 * Callers:
 *     HalpTimerClockInterrupt @ 0x140220450 (HalpTimerClockInterrupt.c)
 *     HalpTimerClockIpiRoutine @ 0x1404681D0 (HalpTimerClockIpiRoutine.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x140596CC0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiUpdateTime @ 0x14021D690 (KiUpdateTime.c)
 *     KiUpdateTimeAssist @ 0x14021E0C8 (KiUpdateTimeAssist.c)
 *     KiUpdateRunTime @ 0x14021F420 (KiUpdateRunTime.c)
 *     KiRcuCheckQuiescent @ 0x140221E10 (KiRcuCheckQuiescent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KeIsForceIdleEngaged @ 0x1403377D0 (KeIsForceIdleEngaged.c)
 *     KiSetNextClockTickDueTime @ 0x1403796D0 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140379C60 (KiSetClockTimerKTimerDeadlines.c)
 *     KiRestoreClockTickRate @ 0x140418994 (KiRestoreClockTickRate.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140419438 (KiSetClockIntervalToMinimumRequested.c)
 *     KiEventClockStateChange @ 0x14048CBA0 (KiEventClockStateChange.c)
 *     KiSetForceIdleState @ 0x1404C5428 (KiSetForceIdleState.c)
 *     PoExecuteIdleCheck @ 0x1404F04E4 (PoExecuteIdleCheck.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     PoTraceForceIdleReset @ 0x14052F2F8 (PoTraceForceIdleReset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeClockInterruptNotify(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  char v3; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v5; // r14
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edi
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v12; // bl
  __int64 ClockTickTraceIndex; // rcx
  __int64 v14; // r14
  __int64 v15; // r15
  unsigned __int8 v16; // r14
  __int64 v17; // r14
  unsigned __int64 v18; // rdx
  bool v19; // zf
  unsigned __int8 v20; // bl
  __int64 v21; // r13
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // r14
  unsigned __int8 v25; // si
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  char v28; // bl
  unsigned __int8 CurrentIrql; // bl
  int v30; // ett
  signed __int32 *v31; // r8
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  unsigned __int8 v34; // bl
  __int64 InterruptTimePrecise; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  unsigned __int8 v40; // si
  char v41; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int8 v42; // [rsp+31h] [rbp-68h]
  __int64 v43; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v44; // [rsp+40h] [rbp-59h]
  unsigned __int64 v45; // [rsp+48h] [rbp-51h] BYREF
  char *v46; // [rsp+50h] [rbp-49h]
  __int64 v47; // [rsp+58h] [rbp-41h] BYREF
  __int64 v48; // [rsp+60h] [rbp-39h] BYREF
  _KCLOCK_TIMER_STATE *p_ClockTimerState; // [rsp+68h] [rbp-31h]
  __int64 v50; // [rsp+70h] [rbp-29h]
  unsigned __int64 v51; // [rsp+78h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int64 *v53; // [rsp+A0h] [rbp+7h]
  __int64 v54; // [rsp+A8h] [rbp+Fh]
  char *v55; // [rsp+B0h] [rbp+17h]
  __int64 v56; // [rsp+B8h] [rbp+1Fh]

  v50 = a1;
  v48 = 0LL;
  v3 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0LL;
  v44 = a3;
  v42 = a2;
  v45 = 0LL;
  v46 = 0LL;
  p_ClockTimerState = &CurrentPrcb->ClockTimerState;
  v47 = 0LL;
  v43 = 0LL;
  result = KiRcuCheckQuiescent(CurrentPrcb);
  if ( KiForceIdleDisabled || !CurrentPrcb->ClockOwner )
    goto LABEL_17;
  _disable();
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8, v7, v9) )
      {
        HvlNotifyLongSpinWait(v10);
      }
      else
      {
        _mm_pause();
      }
      result = KiForceIdleLock;
    }
    while ( KiForceIdleLock );
  }
  if ( !KiForceIdleDisabled )
  {
    result = (unsigned int)KiForceIdleState;
    if ( KiForceIdleState == 4 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v45);
      v5 = InterruptTimePrecise;
      v43 = InterruptTimePrecise;
      if ( !KiClockTimerPerCpuTickScheduling )
        PoExecuteIdleCheck(InterruptTimePrecise);
      if ( KiForceIdleWatchdogResetCount == 32 )
      {
        guard_dispatch_icall_no_overrides(v37, v36, v38);
        v39 = 0;
      }
      else
      {
        v39 = KiForceIdleWatchdogResetCount + 1;
      }
      KiForceIdleWatchdogResetCount = v39;
      if ( (unsigned __int64)(v5 - KiForceIdleActiveLastStartTime) > 0x1312D00 )
      {
        result = KeIsForceIdleEngaged();
        if ( (_BYTE)result )
        {
          KiSetForceIdleState(3LL);
          KiForceIdleStartTime = RtlGetInterruptTimePrecise(&v51)
                               + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
          if ( !*(&KiForceIdleStopDpc + 7) )
            WORD1(KiForceIdleStopDpc) = KiClockTimerOwner + 2048;
          KiInsertQueueDpc((ULONG_PTR)&KiForceIdleStopDpc, 0);
          result = PoTraceForceIdleReset(2LL);
        }
      }
      else
      {
        ++qword_140F25CB0;
        v3 = 1;
        v7 = (unsigned __int64)&KiClockTickSkipTraces + 16 * (unsigned int)KiClockTickSkipTraceIndex;
        result = ((_BYTE)KiClockTickSkipTraceIndex + 1) & 0xF;
        v46 = (char *)v7;
        KiClockTickSkipTraceIndex = ((_BYTE)KiClockTickSkipTraceIndex + 1) & 0xF;
        *(_BYTE *)v7 = 0;
        *(_QWORD *)(v7 + 8) = v5;
      }
    }
  }
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v7 = (unsigned int)result;
      LODWORD(v7) = result & 0xFFDFFFFF;
      v30 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v30 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick();
  }
  _enable();
  if ( !v3 )
  {
LABEL_17:
    ClockTickTraceIndex = CurrentPrcb->ClockTimerState.ClockTickTraceIndex;
    v14 = v50;
    v15 = (__int64)&CurrentPrcb->ClockTimerState.ClockTickTraces[ClockTickTraceIndex];
    CurrentPrcb->ClockTimerState.ClockTickTraceIndex = ((_BYTE)ClockTickTraceIndex + 1) & 0xF;
    *(_QWORD *)(v15 + 8) = MEMORY[0xFFFFF78000000008];
    v16 = *(_BYTE *)(v14 + 368) & 1;
    v41 = v16;
    if ( !CurrentPrcb->ClockOwner )
    {
      if ( KiSerializeTimerExpiration || !KiClockTimerPerCpuTickScheduling )
      {
        v17 = RtlGetInterruptTimePrecise(&v45);
      }
      else
      {
        v28 = KeDisableInterrupts();
        KiUpdateTimeAssist(0LL, 0, &v43, &v45);
        if ( v28 )
        {
          v31 = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
          if ( v31 )
          {
            _m_prefetchw(v31);
            v32 = *v31;
            do
            {
              v33 = v32;
              v32 = _InterlockedCompareExchange(v31, v32 & 0xFFDFFFFF, v32);
            }
            while ( v33 != v32 );
            if ( (v32 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick();
          }
          _enable();
        }
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 15 )
          __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
        v17 = v43;
        KiSetClockTimerKTimerDeadlines(CurrentPrcb, v43, 0LL);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      KiUpdateRunTime(v17, v41, v42, v44);
      *(_QWORD *)(v15 + 16) = v17;
      *(_QWORD *)v15 = MEMORY[0xFFFFF78000000350];
      result = __rdtsc();
      v18 = (unsigned __int64)HIDWORD(result) << 32;
      *(_BYTE *)(v15 + 32) = 0;
      v19 = KiClockTimerPerCpuTickScheduling == 0;
      *(_QWORD *)(v15 + 24) = result;
      if ( !v19 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 != 15 )
          __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v20, 15LL);
        if ( CurrentPrcb->ClockTimerState.OneShotState == KClockTimerOneShotArmed )
          CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
        LOBYTE(v18) = 1;
        KiSetNextClockTickDueTime(v17, v18);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
        result = v20;
        __writecr8(v20);
      }
      return result;
    }
    v21 = 40LL * (unsigned int)KiClockTickTraceIndex + 15883488;
    KiClockTickTraceIndex = ((_BYTE)KiClockTickTraceIndex + 1) & 0xF;
    v22 = 0x140000000LL + v21;
    v19 = KiClockTimerPerCpuTickScheduling == 0;
    *(_QWORD *)(v22 + 8) = MEMORY[0xFFFFF78000000008];
    if ( v19 )
    {
      if ( KiClockOwnerOneShotRequestState != 1 )
        goto LABEL_33;
      v40 = KeGetCurrentIrql();
      if ( v40 != 15 )
        __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v40, 15LL);
      KiClockOwnerOneShotRequestState = 2;
      KiClockOwnerOneShotRequest = 0LL;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v40);
      v27 = v40;
    }
    else
    {
      if ( CurrentPrcb->ClockTimerState.OneShotState != KClockTimerOneShotArmed )
        goto LABEL_33;
      v27 = KeGetCurrentIrql();
      v43 = v27;
      if ( (_BYTE)v27 != 15 )
        __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v27, 15LL);
        LOBYTE(v27) = v43;
      }
      CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
      KiClockOwnerOneShotRequestState = 2;
      KiClockOwnerOneShotRequest = 0LL;
      CurrentPrcb->ClockTimerState.ClockTimerEntries[2].TypeFlags &= ~1u;
      if ( (unsigned int)dword_140E06F58 > 5 )
      {
        LODWORD(v45) = 2;
        v53 = &v45;
        v54 = 4LL;
        v55 = &v41;
        v41 = 0;
        v56 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06F58,
          (unsigned __int8 *)byte_140048E4D,
          0LL,
          0LL,
          4u,
          &v52);
        LOBYTE(v27) = v43;
      }
      if ( KiIrqlFlags )
      {
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v27);
        LOBYTE(v27) = v43;
      }
      v27 = (unsigned __int8)v27;
    }
    __writecr8(v27);
LABEL_33:
    KiUpdateTime(v16, v42, v44);
    v24 = MEMORY[0xFFFFF78000000008];
    if ( KiClockTimerPerCpuTickScheduling )
    {
      v25 = KeGetCurrentIrql();
      if ( v25 != 15 )
        __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v25, 15LL);
      LOBYTE(v23) = 1;
      KiSetNextClockTickDueTime(v24, v23);
      if ( !KiIrqlFlags )
        goto LABEL_40;
    }
    else
    {
      if ( KiClockOwnerOneShotRequestState != 2 )
      {
LABEL_41:
        *(_QWORD *)v22 = MEMORY[0xFFFFF78000000350];
        *(_QWORD *)v15 = MEMORY[0xFFFFF78000000350];
        *(_QWORD *)(v22 + 24) = __rdtsc();
        *(_DWORD *)(v22 + 32) = KeGetPcr()->Prcb.Number;
        v26 = __rdtsc();
        *(_BYTE *)(v15 + 32) = 1;
        *(_QWORD *)(v15 + 24) = ((unsigned __int64)HIDWORD(v26) << 32) | (unsigned int)v26;
        if ( KiClockState == 2 )
        {
          KiRestoreClockTickRate(v24, &v47, &v48);
          if ( !KiClockTimerPerCpuTickScheduling )
          {
            _InterlockedExchange(&KiClockState, 0);
            KiEventClockStateChange(0LL, 2LL, &v48, &v47);
          }
        }
        KiClockTimerNextTickTime = v24 + (unsigned int)KeTimeIncrement;
        result = v24 + p_ClockTimerState->TimeIncrement;
        p_ClockTimerState->NextTickDueTime = result;
        *(_QWORD *)(v22 + 16) = v24;
        *(_QWORD *)(v15 + 16) = v24;
        return result;
      }
      v25 = KeGetCurrentIrql();
      if ( v25 != 15 )
        __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v25, 15LL);
      KiSetClockIntervalToMinimumRequested();
      if ( !KiIrqlFlags )
      {
LABEL_40:
        __writecr8(v25);
        goto LABEL_41;
      }
    }
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v25);
    goto LABEL_40;
  }
  if ( KiClockTimerPerCpuTickScheduling && CurrentPrcb->ClockTimerState.OneShotState == KClockTimerOneShotArmed )
  {
    v34 = KeGetCurrentIrql();
    if ( v34 != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = 15;
      KiRaiseIrqlProcessIrqlFlags(v34, v7);
    }
    LOBYTE(v7) = 1;
    CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
    KiSetNextClockTickDueTime(v5, v7);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v34);
    __writecr8(v34);
    result = (__int64)v46;
    if ( !v46 )
      goto LABEL_85;
    goto LABEL_84;
  }
  if ( KiClockOwnerOneShotRequestState == 1 )
  {
    v12 = KeGetCurrentIrql();
    if ( v12 != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = 15;
      KiRaiseIrqlProcessIrqlFlags(v12, v7);
    }
    KiClockOwnerOneShotRequestState = 2;
    KiSetClockIntervalToMinimumRequested();
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    __writecr8(v12);
    result = (__int64)v46;
    if ( !v46 )
      goto LABEL_85;
LABEL_84:
    *(_BYTE *)result = 1;
LABEL_85:
    ++qword_140F25CB8;
  }
  return result;
}
