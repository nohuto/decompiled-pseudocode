/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1402081F0
 * Callers:
 *     KiUpdateTime @ 0x14021F020 (KiUpdateTime.c)
 *     KiSetClockTickRate @ 0x14021F6C0 (KiSetClockTickRate.c)
 *     KiUpdateRunTime @ 0x140220DB0 (KiUpdateRunTime.c)
 *     KiCheckWaitNext @ 0x140221A60 (KiCheckWaitNext.c)
 *     HalpTimerClockInterrupt @ 0x140221DE0 (HalpTimerClockInterrupt.c)
 *     KeClockInterruptNotify @ 0x140223050 (KeClockInterruptNotify.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KeIntSteerSnapPerf @ 0x140256EE0 (KeIntSteerSnapPerf.c)
 *     PpmCheckStart @ 0x14025832C (PpmCheckStart.c)
 *     PpmCheckBeginNewAccountingPeriod @ 0x1402585C4 (PpmCheckBeginNewAccountingPeriod.c)
 *     PpmEventTracePerfCheckStop @ 0x140258628 (PpmEventTracePerfCheckStop.c)
 *     PpmUpdatePerformanceFeedback @ 0x1402F7CD0 (PpmUpdatePerformanceFeedback.c)
 *     PpmBeginActiveTimeAccumulation @ 0x1402F9AE4 (PpmBeginActiveTimeAccumulation.c)
 *     KeUpdatePendingQosRequest @ 0x140332658 (KeUpdatePendingQosRequest.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140335C00 (KiTransitionSchedulingGroupGeneration.c)
 *     KiResetForceIdle @ 0x1403389B4 (KiResetForceIdle.c)
 *     KiCheckAndRearmForceIdle @ 0x140338EAC (KiCheckAndRearmForceIdle.c)
 *     KiExpireTimer2 @ 0x140338F88 (KiExpireTimer2.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14037AE50 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetNextClockTickDueTime @ 0x14037B480 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x14037BA10 (KiSetClockTimerKTimerDeadlines.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     PopFxResidentTimeoutRoutine @ 0x140395980 (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x140396DA0 (PopFxIdleComponent.c)
 *     PopSetWatchdog @ 0x1403B4B68 (PopSetWatchdog.c)
 *     KiSetClockInterval @ 0x14040CD6C (KiSetClockInterval.c)
 *     KiSetClockIntervalOneShot @ 0x14040D19C (KiSetClockIntervalOneShot.c)
 *     KiSetClockTimer @ 0x14040D440 (KiSetClockTimer.c)
 *     KiShouldRearmClockTimer @ 0x14040D55C (KiShouldRearmClockTimer.c)
 *     KiCancelClockTimer @ 0x14040D864 (KiCancelClockTimer.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14040D968 (KiSetClockIntervalToMinimumRequested.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140420F9C (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmUpdateIdleVeto @ 0x140421540 (PpmUpdateIdleVeto.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x140421964 (PopIdleWakeNotifyDevicesActive.c)
 *     PopCalculateCsSummary @ 0x140422F4C (PopCalculateCsSummary.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x140433E70 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140434048 (HalpVpptUpdatePhysicalTimer.c)
 *     PpmExecutePeriodicPerfCheck @ 0x140463F90 (PpmExecutePeriodicPerfCheck.c)
 *     KeSetForceIdle @ 0x1404BEC18 (KeSetForceIdle.c)
 *     PpmEventTracePreVetoAccounting @ 0x1404BF8CC (PpmEventTracePreVetoAccounting.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x1404D5540 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x1404E36FC (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopSetModernStandbyTransitionReason @ 0x1404F2714 (PopSetModernStandbyTransitionReason.c)
 *     PpmIdleEvaluateConstraints @ 0x140501844 (PpmIdleEvaluateConstraints.c)
 *     KiResumeClockTimer @ 0x1405262C8 (KiResumeClockTimer.c)
 *     HalpVpptArmTimer @ 0x140585660 (HalpVpptArmTimer.c)
 *     HalpWatchdogCheckPreResetNMI @ 0x140587B94 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpWatchdogDelayExpiration @ 0x140587C80 (HalpWatchdogDelayExpiration.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x140599440 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x140599830 (HalpTimerWatchdogPreResetInterrupt.c)
 *     KeGetNextClockTickDuration @ 0x1405EFB60 (KeGetNextClockTickDuration.c)
 *     KePrepareClockTimerForIdle @ 0x1405EFCA8 (KePrepareClockTimerForIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405EFFA4 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405F03F4 (KeResumeClockTimerFromIdle.c)
 *     KiResetClockInterval @ 0x1405F0FDC (KiResetClockInterval.c)
 *     PpmIdlePrevetoWatchdog @ 0x140604DE0 (PpmIdlePrevetoWatchdog.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14060A1F8 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopWatchdogDpc @ 0x140610800 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x1406108A0 (PopWatchdogWorker.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x140616474 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     ExProcessCounterSetCallback @ 0x14091D960 (ExProcessCounterSetCallback.c)
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 *     PopPowerAggregatorRecordIntent @ 0x1409FAD60 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1409FBB74 (PopPowerAggregatorAllocateLogEntry.c)
 *     PsSessionCreate @ 0x140A0975C (PsSessionCreate.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140B2A9B0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140B3EEA0 (PopEnableSystemSleepCheckpoint.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140B49BC4 (PopSleepstudySnapModernStandbySessionData.c)
 *     PopInvokeSystemStateHandler @ 0x140C0A314 (PopInvokeSystemStateHandler.c)
 *     PopSleepstudyInitialize @ 0x140D0FD08 (PopSleepstudyInitialize.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

LARGE_INTEGER __cdecl RtlGetInterruptTimePrecise(PLARGE_INTEGER PerformanceCounter)
{
  __int64 v1; // r13
  __int64 i; // rbx
  ULONG_PTR v3; // rbp
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r12
  signed __int64 v11; // rdx
  unsigned __int64 v12; // r11
  __int64 v13; // r11
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int32 v17; // edx
  unsigned __int32 v18; // edx
  __int64 v19; // rdi
  unsigned __int64 v20; // r10
  signed __int64 v21; // rax
  int v22; // r9d
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // r8
  __int64 v27; // r8
  unsigned __int64 v28; // r8
  _QWORD *v29; // r8
  __int64 CounterSafe; // rax
  __int64 v31; // r12
  signed __int64 v32; // rdx
  __int64 v33; // rdi
  unsigned __int64 v34; // r10
  signed __int64 v35; // rax
  int v36; // r9d
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  unsigned __int64 v39; // r8
  __int64 v40; // rdx
  signed __int32 v41[8]; // [rsp+0h] [rbp-68h] BYREF

  v1 = 0LL;
  while ( 1 )
  {
    for ( i = MEMORY[0xFFFFF78000000340]; (MEMORY[0xFFFFF78000000340] & 1) != 0; i = MEMORY[0xFFFFF78000000340] )
      _mm_pause();
    v3 = HalpPerformanceCounter;
    v4 = MEMORY[0xFFFFF78000000350];
    v5 = MEMORY[0xFFFFF78000000008];
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    {
      v6 = 10000000LL;
      if ( HalpTimerReferencePage )
      {
        while ( 1 )
        {
          v15 = *(unsigned int *)(v3 + 188);
          if ( (unsigned int)v15 < HalpTimerQueryCounterHandlerCount )
            break;
          v18 = 0;
          if ( HalpTimerQueryCounterHandlerCount )
          {
            v29 = &unk_140FBB7E8;
            do
            {
              if ( v3 == *v29 )
                break;
              ++v18;
              v29 += 2;
            }
            while ( v18 < HalpTimerQueryCounterHandlerCount );
          }
          if ( v18 >= HalpTimerQueryCounterHandlerCount
            || (_DWORD)v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 188), v18, v15) )
          {
            KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v3, *(int *)(v3 + 228));
          }
        }
        v16 = (*(_DWORD *)(v3 + 224) & 0x10000) != 0
            ? *(_QWORD *)(v3 + 72) + *(_DWORD *)(v3 + 80) * KeGetPcr()->Prcb.Number
            : *(_QWORD *)(v3 + 72);
        v12 = (((unsigned __int64)((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v15])(v16)
              * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
            + MEMORY[0xFFFFF780000003B8];
      }
      else
      {
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          CounterSafe = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
          v31 = *(_QWORD *)(v3 + 208);
          v32 = CounterSafe;
        }
        else
        {
          do
          {
            v31 = *(_QWORD *)(v3 + 208);
            do
            {
              v33 = *(_QWORD *)(v3 + 200);
              v34 = HalpTimerQueryCounterSafe(v3);
              _InterlockedOr(v41, 0);
              v35 = *(_QWORD *)(v3 + 200);
            }
            while ( v33 != v35 );
          }
          while ( v31 != *(_QWORD *)(v3 + 208) );
          v36 = *(_DWORD *)(v3 + 220);
          v37 = v33 ^ v34;
          if ( _bittest64((const __int64 *)&v37, (unsigned __int8)(v36 - 1)) )
          {
            v38 = -1LL;
            if ( v36 != 64 )
              v38 = (1LL << v36) - 1;
            v39 = v33 & v38;
            v32 = (v34 | v33 ^ v39) + (1LL << v36);
            if ( v34 >= v39 )
              v32 = v34 | v33 ^ v39;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), v32, v35);
          }
          else
          {
            v40 = v36 == 64 ? -1LL : (1LL << v36) - 1;
            v32 = v34 | v33 & ~v40;
          }
        }
        v12 = HalpTimerScaleCounter(v31 + v32, *(_QWORD *)(v3 + 192), 10000000LL);
      }
    }
    else
    {
      v6 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        while ( 1 )
        {
          v7 = *(unsigned int *)(v3 + 188);
          if ( (unsigned int)v7 < HalpTimerQueryCounterHandlerCount )
            break;
          v17 = 0;
          if ( HalpTimerQueryCounterHandlerCount )
          {
            v26 = &unk_140FBB7E8;
            do
            {
              if ( v3 == *v26 )
                break;
              ++v17;
              v26 += 2;
            }
            while ( v17 < HalpTimerQueryCounterHandlerCount );
          }
          if ( v17 >= HalpTimerQueryCounterHandlerCount
            || (_DWORD)v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 188), v17, v7) )
          {
            KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v3, *(int *)(v3 + 228));
          }
        }
        v8 = (*(_DWORD *)(v3 + 224) & 0x10000) != 0
           ? *(_QWORD *)(v3 + 72) + *(_DWORD *)(v3 + 80) * KeGetPcr()->Prcb.Number
           : *(_QWORD *)(v3 + 72);
        v9 = ((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v7])(v8);
        v10 = *(_QWORD *)(v3 + 208);
        v11 = v9;
      }
      else
      {
        do
        {
          v10 = *(_QWORD *)(v3 + 208);
          do
          {
            v19 = *(_QWORD *)(v3 + 200);
            v20 = HalpTimerQueryCounterSafe(v3);
            _InterlockedOr(v41, 0);
            v21 = *(_QWORD *)(v3 + 200);
          }
          while ( v19 != v21 );
        }
        while ( v10 != *(_QWORD *)(v3 + 208) );
        v22 = *(_DWORD *)(v3 + 220);
        v23 = v19 ^ v20;
        if ( _bittest64((const __int64 *)&v23, (unsigned __int8)(v22 - 1)) )
        {
          v27 = -1LL;
          if ( v22 != 64 )
            v27 = (1LL << v22) - 1;
          v28 = v19 & v27;
          v11 = (v20 | v19 ^ v28) + (1LL << v22);
          if ( v20 >= v28 )
            v11 = v20 | v19 ^ v28;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), v11, v21);
        }
        else
        {
          v24 = v22 == 64 ? -1LL : (1LL << v22) - 1;
          v11 = v20 | v19 & ~v24;
        }
      }
      v12 = v10 + v11;
    }
    if ( v3 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v25 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v25 = 10000000LL;
      v12 = HalpTimerScaleCounter(v12, v6, v25);
    }
    if ( MEMORY[0xFFFFF78000000340] == i )
      break;
    _mm_pause();
  }
  PerformanceCounter->QuadPart = v12;
  if ( v12 > v4 )
  {
    v13 = v12 - v4 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v13 <<= MEMORY[0xFFFFF78000000369];
    v1 = ((unsigned __int64)v13 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
  }
  return (LARGE_INTEGER)(v5 + v1);
}
