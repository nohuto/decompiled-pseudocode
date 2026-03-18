/*
 * XREFs of KeInitializeClock @ 0x140D0B7A4
 * Callers:
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     KiSetNextClockTickDueTime @ 0x1403796D0 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140379C60 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockTimer @ 0x140418F10 (KiSetClockTimer.c)
 *     KiSetPendingTick @ 0x14047CCA4 (KiSetPendingTick.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052D25C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140532A10 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     strstr @ 0x140535B20 (strstr.c)
 *     KiInitializeProcessorCycleAccumulation @ 0x1405E51A4 (KiInitializeProcessorCycleAccumulation.c)
 *     KiSetupTimeIncrement @ 0x1405E53C8 (KiSetupTimeIncrement.c)
 *     Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_IsEnabledDeviceUsageNoInline @ 0x1405ED128 (Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PoTraceDynamicTickDisabled @ 0x140607F90 (PoTraceDynamicTickDisabled.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     EmClientQueryRuleState @ 0x140C03950 (EmClientQueryRuleState.c)
 */

char __fastcall KeInitializeClock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r12
  char result; // al
  int v4; // eax
  __int64 v5; // r14
  struct _KPRCB *v6; // r15
  __int64 *v7; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  bool v15; // r8
  __int64 v16; // rax
  int v17; // eax
  const char *v18; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 ClockTickDueTime; // [rsp+48h] [rbp-38h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-30h] BYREF
  __int128 v23; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-18h]
  unsigned int v25; // [rsp+70h] [rbp-10h]
  char v26; // [rsp+74h] [rbp-Ch]

  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  ClockTickDueTime = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v23 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (_DWORD)BugCheckParameter2 )
  {
    if ( (_DWORD)BugCheckParameter2 == 1 )
    {
      v20 = (unsigned int)Feature_TickAccumulationFromAccountingPeriods__private_featureState;
      if ( (Feature_TickAccumulationFromAccountingPeriods__private_featureState & 0x10) == 0 )
      {
        LODWORD(v20) = Feature_TickAccumulationFromAccountingPeriods__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_TickAccumulationFromAccountingPeriods__private_descriptor,
          Feature_TickAccumulationFromAccountingPeriods__private_featureState | 1,
          3);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v20,
          3,
          (__int64)&Feature_TickAccumulationFromAccountingPeriods__private_descriptor);
      }
      KiTickAccumulationFromAccountingPeriods = 1;
      if ( KiClockTimerPerCpu )
      {
        if ( !KiSerializeTimerExpiration )
        {
          v20 = (unsigned int)Feature_PerProcessorClockTickServer__private_featureState;
          if ( (Feature_PerProcessorClockTickServer__private_featureState & 0x10) == 0 )
          {
            LODWORD(v20) = Feature_PerProcessorClockTickServer__private_featureState | 1;
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_PerProcessorClockTickServer__private_descriptor,
              Feature_PerProcessorClockTickServer__private_featureState | 1,
              3);
            wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
              v20,
              3,
              (__int64)&Feature_PerProcessorClockTickServer__private_descriptor);
          }
        }
        KiClockTimerPerCpuTickScheduling = 1;
      }
      if ( KiEnableTickAccumulationFromAccountingPeriods )
        KiTickAccumulationFromAccountingPeriods = KiEnableTickAccumulationFromAccountingPeriods == 1;
      if ( KiEnableClockTimerPerCpuTickScheduling && KiClockTimerPerCpu )
        KiClockTimerPerCpuTickScheduling = KiEnableClockTimerPerCpuTickScheduling == 1;
      v4 = KeMaximumIncrement;
      if ( (KiVelocityFlags & 0x40000) != 0 )
        v4 = 17400;
      stru_140FC01F0.SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)500;
      KeQuantumEndTimerIncrement = v4;
      if ( (unsigned int)Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_IsEnabledDeviceUsageNoInline() )
      {
        KiTimeUpdateTryAcquireTickLock = 1;
        KiClockTimerReducePreciseTimeQueries = 1;
      }
      v5 = MEMORY[0xFFFFF78000000008];
      v6 = KeGetCurrentPrcb();
      KeQueryPerformanceCounter(&PerformanceFrequency);
      KiClockStateUpdateTimeout = 5 * PerformanceFrequency.QuadPart;
      v7 = KiProcessorBlock;
      *(_BYTE *)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 33) = 1;
      CurrentIrql = KeGetCurrentIrql();
      v9 = 15LL;
      if ( CurrentIrql != 15 )
        __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
      *(_WORD *)&v6->ClockTimerState.ClockActive = 1;
      KiClockState = 0;
      guard_dispatch_icall_no_overrides((__int64)v7, v9);
      KiSetPendingTick(0);
      guard_dispatch_icall_no_overrides(v11, v10);
      LOBYTE(v12) = 1;
      guard_dispatch_icall_no_overrides(v12, v13);
      KeNonHrTimeIncrement = KeMaximumIncrement;
      KePseudoHrTimeIncrement = KeMaximumIncrement;
      KiLastPseudoHrTimerExpiration = v5;
      KiLastNonHrTimerExpiration = v5;
      dword_140F262DC = KeMaximumIncrement;
      if ( (qword_140E66748 & 1) != 0 )
      {
        if ( KiClockIntervalRequests )
          v14 = KiClockIntervalRequests ^ (unsigned __int64)&KiClockIntervalRequests;
        else
          v14 = 0LL;
      }
      else
      {
        v14 = KiClockIntervalRequests;
      }
      v15 = 0;
      if ( v14 )
      {
        while ( 1 )
        {
          if ( (unsigned int)KeMaximumIncrement < *(_DWORD *)(v14 + 28) )
          {
            v16 = *(_QWORD *)v14;
            if ( (qword_140E66748 & 1) != 0 )
            {
              if ( !v16 )
                break;
              v16 ^= v14;
            }
            if ( !v16 )
              break;
          }
          else
          {
            v16 = *(_QWORD *)(v14 + 8);
            if ( (qword_140E66748 & 1) != 0 )
            {
              if ( !v16 )
                goto LABEL_44;
              v16 ^= v14;
            }
            if ( !v16 )
            {
LABEL_44:
              v15 = 1;
              break;
            }
          }
          v14 = v16;
        }
      }
      RtlRbInsertNodeEx(
        (unsigned __int64)&KiClockIntervalRequests,
        v14,
        v15,
        (unsigned __int64)&KiDefaultClockIntervalRequest);
      byte_140F262D8 = 1;
      if ( KiClockTimerPerCpuTickScheduling )
      {
        KiSetClockTimer(
          (__int64)CurrentPrcb,
          v5,
          -(__int64)(unsigned int)KeQuantumEndTimerIncrement,
          KeMinimumIncrement,
          3,
          1,
          0);
        KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, v5, 0);
        ClockTickDueTime = (unsigned int)KiSetNextClockTickDueTime(v5, 1);
      }
      else
      {
        guard_dispatch_icall_no_overrides(0LL, (unsigned int)KeMaximumIncrement);
        KiSetPendingTick(1);
        v17 = KeMaximumIncrement;
        KeTimeIncrement = ClockTickDueTime;
        v6->ClockTimerState.TimeIncrement = ClockTickDueTime;
        v6->ClockTimerState.LastRequestedTimeIncrement = v17;
        KiLastRequestedTimeIncrement = v17;
        v6->ClockTimerState.NextTickDueTime = v5 + ClockTickDueTime;
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      dword_140F25C90 = KeTimeIncrement;
      dword_140F25C94 = KeTimeIncrement;
      result = KiLastRequestedTimeIncrement;
      dword_140F25C98 = KiLastRequestedTimeIncrement;
      dword_140F25C9C = KiLastRequestedTimeIncrement;
    }
    else
    {
      if ( (_DWORD)BugCheckParameter2 != 2 )
        KeBugCheckEx(0x33u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
      if ( (_BYTE)KiDynamicTickDisableReason )
        goto LABEL_11;
      if ( !HvlHypervisorConnected || (result = HvlpFlags, (HvlpFlags & 2) != 0) )
      {
        LODWORD(v20) = 1;
        result = EmClientQueryRuleState(&GUID_EM_CPU_TYPE_INTEL_DTT_DISABLE, &v20);
        if ( (_DWORD)v20 == 2 )
          KiDynamicTickDisableReason = 3;
      }
      if ( (_BYTE)KiDynamicTickDisableReason )
      {
LABEL_11:
        result = PoTraceDynamicTickDisabled();
        KiForceIdleDisabled = 1;
      }
      _InterlockedOr(v19, 0);
      KiDynamicTickInitialized = 1;
    }
  }
  else
  {
    v18 = *(const char **)(a2 + 216);
    qword_140F25C88 = -1LL;
    qword_140F25CA8 = -1LL;
    if ( v18 && strstr(v18, "DISABLEDYNAMICTICK") )
      KiDynamicTickDisableReason = 1;
    guard_dispatch_icall_no_overrides((__int64)&v23, a2);
    if ( (v23 & 4) != 0 )
      KiClockTimerPerCpu = 1;
    if ( (v23 & 2) != 0 )
      KiClockTimerHighLatency = 1;
    if ( (v23 & 1) != 0 )
      KiClockTimerAlwaysOnPresent = 1;
    if ( !(_BYTE)KiDynamicTickDisableReason && (v23 & 8) == 0 )
      KiDynamicTickDisableReason = 2;
    KiSetupTimeIncrement(v24, v25);
    return KiInitializeProcessorCycleAccumulation((__int64)CurrentPrcb);
  }
  return result;
}
