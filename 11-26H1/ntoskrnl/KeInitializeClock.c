/*
 * XREFs of KeInitializeClock @ 0x140D117AC
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     KiSetNextClockTickDueTime @ 0x14037B480 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x14037BA10 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetClockTimer @ 0x14040D440 (KiSetClockTimer.c)
 *     KiSetPendingTick @ 0x140476614 (KiSetPendingTick.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052F77C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140534EB0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     strstr @ 0x140537FA0 (strstr.c)
 *     KiInitializeProcessorCycleAccumulation @ 0x1405E7B14 (KiInitializeProcessorCycleAccumulation.c)
 *     KiSetupTimeIncrement @ 0x1405E7D38 (KiSetupTimeIncrement.c)
 *     Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_IsEnabledDeviceUsageNoInline @ 0x1405EFA98 (Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PoTraceDynamicTickDisabled @ 0x14060AB40 (PoTraceDynamicTickDisabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     EmClientQueryRuleState @ 0x140C09B60 (EmClientQueryRuleState.c)
 */

void __fastcall KeInitializeClock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r12
  int v3; // eax
  LARGE_INTEGER v4; // r14
  struct _KPRCB *v5; // r15
  __int64 *v6; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 Root; // rdx
  BOOLEAN v14; // r8
  unsigned __int64 v15; // rax
  int v16; // eax
  const char *v17; // rcx
  signed __int32 v18[8]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 ClockTickDueTime; // [rsp+48h] [rbp-38h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-30h] BYREF
  __int128 v22; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-18h]
  unsigned int v24; // [rsp+70h] [rbp-10h]
  char v25; // [rsp+74h] [rbp-Ch]

  v23 = 0LL;
  v24 = 0;
  v25 = 0;
  ClockTickDueTime = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v22 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (_DWORD)BugCheckParameter2 )
  {
    if ( (_DWORD)BugCheckParameter2 == 1 )
    {
      v19 = (unsigned int)Feature_TickAccumulationFromAccountingPeriods__private_featureState;
      if ( (Feature_TickAccumulationFromAccountingPeriods__private_featureState & 0x10) == 0 )
      {
        LODWORD(v19) = Feature_TickAccumulationFromAccountingPeriods__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_TickAccumulationFromAccountingPeriods__private_descriptor,
          Feature_TickAccumulationFromAccountingPeriods__private_featureState | 1,
          3);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v19,
          3,
          (__int64)&Feature_TickAccumulationFromAccountingPeriods__private_descriptor);
      }
      KiTickAccumulationFromAccountingPeriods = 1;
      if ( KiClockTimerPerCpu )
      {
        if ( !KiSerializeTimerExpiration )
        {
          v19 = (unsigned int)Feature_PerProcessorClockTickServer__private_featureState;
          if ( (Feature_PerProcessorClockTickServer__private_featureState & 0x10) == 0 )
          {
            LODWORD(v19) = Feature_PerProcessorClockTickServer__private_featureState | 1;
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_PerProcessorClockTickServer__private_descriptor,
              Feature_PerProcessorClockTickServer__private_featureState | 1,
              3);
            wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
              v19,
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
      v3 = KeMaximumIncrement;
      if ( (KiVelocityFlags & 0x40000) != 0 )
        v3 = 17400;
      stru_140FC11F0.NpxState = 500LL;
      KeQuantumEndTimerIncrement = v3;
      if ( (unsigned int)Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_IsEnabledDeviceUsageNoInline() )
      {
        KiTimeUpdateTryAcquireTickLock = 1;
        KiClockTimerReducePreciseTimeQueries = 1;
      }
      v4.QuadPart = MEMORY[0xFFFFF78000000008];
      v5 = KeGetCurrentPrcb();
      KeQueryPerformanceCounter(&PerformanceFrequency);
      KiClockStateUpdateTimeout = 5 * PerformanceFrequency.QuadPart;
      v6 = KiProcessorBlock;
      *(_BYTE *)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 33) = 1;
      CurrentIrql = KeGetCurrentIrql();
      v8 = 15LL;
      if ( CurrentIrql != 15 )
        __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
      *(_WORD *)&v5->ClockTimerState.ClockActive = 1;
      KiClockState = 0;
      guard_dispatch_icall_no_overrides((__int64)v6, v8);
      KiSetPendingTick(0);
      guard_dispatch_icall_no_overrides(v10, v9);
      LOBYTE(v11) = 1;
      guard_dispatch_icall_no_overrides(v11, v12);
      KeNonHrTimeIncrement = KeMaximumIncrement;
      KePseudoHrTimeIncrement = KeMaximumIncrement;
      KiLastPseudoHrTimerExpiration = v4.QuadPart;
      KiLastNonHrTimerExpiration = v4.QuadPart;
      dword_140F265FC = KeMaximumIncrement;
      if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
      {
        if ( KiClockIntervalRequests.Root )
          Root = (unsigned __int64)KiClockIntervalRequests.Root ^ (unsigned __int64)&KiClockIntervalRequests;
        else
          Root = 0LL;
      }
      else
      {
        Root = (unsigned __int64)KiClockIntervalRequests.Root;
      }
      v14 = 0;
      if ( Root )
      {
        while ( 1 )
        {
          if ( KeMaximumIncrement < *(_DWORD *)(Root + 28) )
          {
            v15 = *(_QWORD *)Root;
            if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
            {
              if ( !v15 )
                break;
              v15 ^= Root;
            }
            if ( !v15 )
              break;
          }
          else
          {
            v15 = *(_QWORD *)(Root + 8);
            if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_44;
              v15 ^= Root;
            }
            if ( !v15 )
            {
LABEL_44:
              v14 = 1;
              break;
            }
          }
          Root = v15;
        }
      }
      RtlRbInsertNodeEx(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)Root, v14, &KiDefaultClockIntervalRequest);
      byte_140F265F8 = 1;
      if ( KiClockTimerPerCpuTickScheduling )
      {
        KiSetClockTimer(
          (__int64)CurrentPrcb,
          v4,
          -(__int64)(unsigned int)KeQuantumEndTimerIncrement,
          KeMinimumIncrement,
          3,
          1,
          0);
        KiSetClockTimerKTimerDeadlines((__int64)CurrentPrcb, v4, 0);
        ClockTickDueTime = (unsigned int)KiSetNextClockTickDueTime(v4, 1);
      }
      else
      {
        guard_dispatch_icall_no_overrides(0LL, KeMaximumIncrement);
        KiSetPendingTick(1);
        v16 = KeMaximumIncrement;
        KeTimeIncrement = ClockTickDueTime;
        v5->ClockTimerState.TimeIncrement = ClockTickDueTime;
        v5->ClockTimerState.LastRequestedTimeIncrement = v16;
        KiLastRequestedTimeIncrement = v16;
        v5->ClockTimerState.NextTickDueTime = v4.QuadPart + ClockTickDueTime;
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      dword_140F25FB0 = KeTimeIncrement;
      dword_140F25FB4 = KeTimeIncrement;
      dword_140F25FB8 = KiLastRequestedTimeIncrement;
      dword_140F25FBC = KiLastRequestedTimeIncrement;
    }
    else
    {
      if ( (_DWORD)BugCheckParameter2 != 2 )
        KeBugCheckEx(0x33u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
      if ( (_BYTE)KiDynamicTickDisableReason )
        goto LABEL_11;
      if ( !HvlHypervisorConnected || (HvlpFlags & 2) != 0 )
      {
        LODWORD(v19) = 1;
        EmClientQueryRuleState(&GUID_EM_CPU_TYPE_INTEL_DTT_DISABLE, &v19);
        if ( (_DWORD)v19 == 2 )
          KiDynamicTickDisableReason = 3;
      }
      if ( (_BYTE)KiDynamicTickDisableReason )
      {
LABEL_11:
        PoTraceDynamicTickDisabled();
        KiForceIdleDisabled = 1;
      }
      _InterlockedOr(v18, 0);
      KiDynamicTickInitialized = 1;
    }
  }
  else
  {
    v17 = *(const char **)(a2 + 216);
    qword_140F25FA8 = -1LL;
    qword_140F25FC8 = -1LL;
    if ( v17 && strstr(v17, "DISABLEDYNAMICTICK") )
      KiDynamicTickDisableReason = 1;
    guard_dispatch_icall_no_overrides((__int64)&v22, a2);
    if ( (v22 & 4) != 0 )
      KiClockTimerPerCpu = 1;
    if ( (v22 & 2) != 0 )
      KiClockTimerHighLatency = 1;
    if ( (v22 & 1) != 0 )
      KiClockTimerAlwaysOnPresent = 1;
    if ( !(_BYTE)KiDynamicTickDisableReason && (v22 & 8) == 0 )
      KiDynamicTickDisableReason = 2;
    KiSetupTimeIncrement(v23, v24);
    KiInitializeProcessorCycleAccumulation((__int64)CurrentPrcb);
  }
}
