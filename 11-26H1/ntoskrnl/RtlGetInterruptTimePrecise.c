/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x140208110
 * Callers:
 *     KiUpdateTime @ 0x14021D690 (KiUpdateTime.c)
 *     KiSetClockTickRate @ 0x14021DD30 (KiSetClockTickRate.c)
 *     KiUpdateRunTime @ 0x14021F420 (KiUpdateRunTime.c)
 *     KiCheckWaitNext @ 0x1402200D0 (KiCheckWaitNext.c)
 *     HalpTimerClockInterrupt @ 0x140220450 (HalpTimerClockInterrupt.c)
 *     KeClockInterruptNotify @ 0x1402216C0 (KeClockInterruptNotify.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KeIntSteerSnapPerf @ 0x140255580 (KeIntSteerSnapPerf.c)
 *     PpmCheckStart @ 0x14025699C (PpmCheckStart.c)
 *     PpmCheckBeginNewAccountingPeriod @ 0x140256C34 (PpmCheckBeginNewAccountingPeriod.c)
 *     PpmEventTracePerfCheckStop @ 0x140256C98 (PpmEventTracePerfCheckStop.c)
 *     KeUpdatePendingQosRequest @ 0x140330628 (KeUpdatePendingQosRequest.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140333BD0 (KiTransitionSchedulingGroupGeneration.c)
 *     KiResetForceIdle @ 0x140336934 (KiResetForceIdle.c)
 *     KiCheckAndRearmForceIdle @ 0x140336E2C (KiCheckAndRearmForceIdle.c)
 *     KiExpireTimer2 @ 0x140336F08 (KiExpireTimer2.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x1403790A0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetNextClockTickDueTime @ 0x1403796D0 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140379C60 (KiSetClockTimerKTimerDeadlines.c)
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     PopFxResidentTimeoutRoutine @ 0x140393C00 (PopFxResidentTimeoutRoutine.c)
 *     PopFxIdleComponent @ 0x140395020 (PopFxIdleComponent.c)
 *     PopSetWatchdog @ 0x1403AAE58 (PopSetWatchdog.c)
 *     PpmBeginActiveTimeAccumulation @ 0x1403ECAA4 (PpmBeginActiveTimeAccumulation.c)
 *     PpmUpdatePerformanceFeedback @ 0x1403ECDF0 (PpmUpdatePerformanceFeedback.c)
 *     KiSetClockInterval @ 0x140418834 (KiSetClockInterval.c)
 *     KiSetClockIntervalOneShot @ 0x140418C6C (KiSetClockIntervalOneShot.c)
 *     KiSetClockTimer @ 0x140418F10 (KiSetClockTimer.c)
 *     KiShouldRearmClockTimer @ 0x14041902C (KiShouldRearmClockTimer.c)
 *     KiCancelClockTimer @ 0x140419334 (KiCancelClockTimer.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140419438 (KiSetClockIntervalToMinimumRequested.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x140426D60 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140426F38 (HalpVpptUpdatePhysicalTimer.c)
 *     PopCalculateCsSummary @ 0x14042A4C8 (PopCalculateCsSummary.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x14042C8CC (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmUpdateIdleVeto @ 0x14042CE70 (PpmUpdateIdleVeto.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x14042D294 (PopIdleWakeNotifyDevicesActive.c)
 *     PpmExecutePeriodicPerfCheck @ 0x14046A810 (PpmExecutePeriodicPerfCheck.c)
 *     KeSetForceIdle @ 0x1404C5268 (KeSetForceIdle.c)
 *     PpmEventTracePreVetoAccounting @ 0x1404C5F1C (PpmEventTracePreVetoAccounting.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x1404DBE60 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x1404EA34C (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopSetModernStandbyTransitionReason @ 0x1404F9104 (PopSetModernStandbyTransitionReason.c)
 *     PpmIdleEvaluateConstraints @ 0x140507E70 (PpmIdleEvaluateConstraints.c)
 *     KiResumeClockTimer @ 0x140523C58 (KiResumeClockTimer.c)
 *     HalpVpptArmTimer @ 0x140583140 (HalpVpptArmTimer.c)
 *     HalpWatchdogCheckPreResetNMI @ 0x140585674 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpWatchdogDelayExpiration @ 0x140585760 (HalpWatchdogDelayExpiration.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x140596CC0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x1405970B0 (HalpTimerWatchdogPreResetInterrupt.c)
 *     KeGetNextClockTickDuration @ 0x1405ED1F0 (KeGetNextClockTickDuration.c)
 *     KePrepareClockTimerForIdle @ 0x1405ED338 (KePrepareClockTimerForIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405ED634 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405EDA84 (KeResumeClockTimerFromIdle.c)
 *     KiResetClockInterval @ 0x1405EE66C (KiResetClockInterval.c)
 *     PpmIdlePrevetoWatchdog @ 0x140602330 (PpmIdlePrevetoWatchdog.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14060769C (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopWatchdogDpc @ 0x14060D700 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x14060D7A0 (PopWatchdogWorker.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1406135B8 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PsSessionCreate @ 0x1409638D4 (PsSessionCreate.c)
 *     ExProcessCounterSetCallback @ 0x140969300 (ExProcessCounterSetCallback.c)
 *     PopSleepstudyStartNextSession @ 0x140A39120 (PopSleepstudyStartNextSession.c)
 *     PopPowerAggregatorRecordIntent @ 0x140A3F340 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140A40154 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140B284E0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140B3CC20 (PopEnableSystemSleepCheckpoint.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140B47E34 (PopSleepstudySnapModernStandbySessionData.c)
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
 *     PopSleepstudyInitialize @ 0x140D09A38 (PopSleepstudyInitialize.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402085F0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerScaleCounter @ 0x140208D00 (HalpTimerScaleCounter.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlGetInterruptTimePrecise(unsigned __int64 *a1)
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
            v29 = &unk_140FBB448;
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
            v26 = &unk_140FBB448;
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
  *a1 = v12;
  if ( v12 > v4 )
  {
    v13 = v12 - v4 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v13 <<= MEMORY[0xFFFFF78000000369];
    v1 = ((unsigned __int64)v13 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
  }
  return v5 + v1;
}
