/*
 * XREFs of PpmEventTraceControlCallback @ 0x1407E0E70
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x14025AA94 (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmEventParkNodeRestriction @ 0x140419160 (PpmEventParkNodeRestriction.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     PoEnergyEstimationEnabled @ 0x140475F40 (PoEnergyEstimationEnabled.c)
 *     PpmEventQosClassPerfSelection @ 0x1404AEB64 (PpmEventQosClassPerfSelection.c)
 *     PpmEventTraceHeteroSets @ 0x1404B7270 (PpmEventTraceHeteroSets.c)
 *     PpmEventPlatformVetoRundown @ 0x1404BF58C (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x1404BF6D8 (PpmEventProcessorVetoRundown.c)
 *     PpmEventHgsHardwareTable @ 0x1404E42EC (PpmEventHgsHardwareTable.c)
 *     PpmEventVetoReasonRundown @ 0x1404E4FA4 (PpmEventVetoReasonRundown.c)
 *     PpmEventSoftParkLatencyUpdate @ 0x1404E6850 (PpmEventSoftParkLatencyUpdate.c)
 *     PpmHeteroHgsEvaluateContainmentMinPolicyDecision @ 0x1404F2920 (PpmHeteroHgsEvaluateContainmentMinPolicyDecision.c)
 *     PpmEventTraceLPIState @ 0x1404F5448 (PpmEventTraceLPIState.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x1404FA31C (PpmEventHgsContainmentHwUpdate.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x1404FBFE4 (PpmEventHgsHardwareTableResonChanged.c)
 *     PpmEventHgsNormalizedTable @ 0x1404FC674 (PpmEventHgsNormalizedTable.c)
 *     PpmEventHgsHardwareTableResonMapTable @ 0x1404FD154 (PpmEventHgsHardwareTableResonMapTable.c)
 *     Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline @ 0x14060D2B8 (Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline @ 0x14060D3CC (Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmHeteroHgsGetWpsHint @ 0x14060E0F0 (PpmHeteroHgsGetWpsHint.c)
 *     PpmEventHgsContainmentGroupInfo @ 0x1406110DC (PpmEventHgsContainmentGroupInfo.c)
 *     PpmEventHgsContainmentPolicyChange @ 0x140611290 (PpmEventHgsContainmentPolicyChange.c)
 *     PpmEventParkTopologyDetected @ 0x140611AF0 (PpmEventParkTopologyDetected.c)
 *     PpmEventWpsContainmentMaskDetection @ 0x140611F30 (PpmEventWpsContainmentMaskDetection.c)
 *     PpmEventWpsParkingTableUpdateReason @ 0x140612074 (PpmEventWpsParkingTableUpdateReason.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PpmEventHeteroCapabilityInitTable @ 0x1407E0BEC (PpmEventHeteroCapabilityInitTable.c)
 *     PpmEventTraceProcessorPerformanceRundownHv @ 0x1407E13F8 (PpmEventTraceProcessorPerformanceRundownHv.c)
 *     PpmEventWpsInitTableSnapshots @ 0x1407E15E4 (PpmEventWpsInitTableSnapshots.c)
 *     PpmEventTraceProfiles @ 0x1409C136C (PpmEventTraceProfiles.c)
 *     PpmEventQosClassPolicy @ 0x140ACF798 (PpmEventQosClassPolicy.c)
 *     PpmInfoTraceProfileSettings @ 0x140ADBEA4 (PpmInfoTraceProfileSettings.c)
 *     PpmEventHeteroPolicy @ 0x140AFBADC (PpmEventHeteroPolicy.c)
 *     PpmEventTraceProcessorPerformance @ 0x140B101E8 (PpmEventTraceProcessorPerformance.c)
 *     PpmEventTraceProcessorIdle @ 0x140B13448 (PpmEventTraceProcessorIdle.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140B2404C (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     PpmEventQosSupport @ 0x140B2EABC (PpmEventQosSupport.c)
 *     PpmEventTraceAccountingBucketIntervalsRundown @ 0x140B2EF4C (PpmEventTraceAccountingBucketIntervalsRundown.c)
 *     PpmEventTracePpmProfileStatusRundown @ 0x140B3D83C (PpmEventTracePpmProfileStatusRundown.c)
 *     PpmEventStaticPolicyRundown @ 0x140B3F01C (PpmEventStaticPolicyRundown.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x140B440D8 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140B490C4 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventEnergyEstimationRundown @ 0x140B4BFAC (PpmEventEnergyEstimationRundown.c)
 *     PpmEventTraceParkNodeRundown @ 0x140B4C568 (PpmEventTraceParkNodeRundown.c)
 */

void __fastcall PpmEventTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v5; // rdx
  unsigned int v6; // r8d
  __int64 Prcb; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  PBOOLEAN i; // rbx
  __int64 v12; // rdx
  unsigned int j; // edi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int k; // ebx
  __int64 v20; // rdi
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r10
  __int64 v25; // rcx
  unsigned int m; // edi
  __int64 v27; // rsi
  __int64 v28; // rbx
  unsigned int n; // r14d
  __int64 v30; // r10
  __int64 v31; // r11
  unsigned int ii; // r14d
  __int64 v33; // r10
  __int64 v34; // r11
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  struct _KLOCK_ENTRIES *v38; // r9
  __int64 v39; // rbx
  __int64 v40; // [rsp+58h] [rbp-B0h] BYREF
  _KWAIT_STATUS_REGISTER *p_WaitRegister; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h]
  __int16 v43; // [rsp+70h] [rbp-98h]
  int v44; // [rsp+72h] [rbp-96h]
  __int16 v45; // [rsp+76h] [rbp-92h]
  struct _KAFFINITY_EX v46; // [rsp+78h] [rbp-90h] BYREF

  memset_0(&v46.8, 0, sizeof(v46.8));
  *(_QWORD *)&v46.Count = 2097153LL;
  v44 = 0;
  v45 = 0;
  v40 = 0x300000000LL;
  memset_0(&v46.8, 0, sizeof(v46.8));
  if ( (ControlCode & 0xFFFFFFFD) == 0 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v5, v6);
    v42 = *(__int64 *)((char *)&stru_140FC11F0.116 + 4);
    v43 = 0;
    p_WaitRegister = &stru_140FC11F0.WaitRegister;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v40, (unsigned __int16 **)&p_WaitRegister) )
    {
      Prcb = KeGetPrcb(v40);
      PpmEventTraceProcessorPerformance(Prcb);
    }
    for ( i = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
          i != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
          i = *(PBOOLEAN *)i )
    {
      if ( ControlCode == 2 )
      {
        PpmEventTraceProcessorPerformanceDomainRundown(i);
        LOBYTE(v12) = 1;
        PpmEventQosClassPolicy(i, v12);
        PpmEventQosClassPerfSelection((__int64)i, 1);
      }
      for ( j = 0; j < *((_DWORD *)i + 74); ++j )
      {
        v14 = 1224LL * j;
        v15 = *((_QWORD *)i + 39);
        if ( *(_DWORD *)(v14 + v15 + 16) == 1 )
          PpmEventTraceProcessorPerformanceRundownHv(*(_QWORD *)(v14 + v15));
      }
    }
    if ( ControlCode == 2 )
    {
      PpmEventTraceLPIState();
      PpmEventStaticPolicyRundown();
      LOBYTE(v16) = 1;
      PpmEventQosSupport(v16);
      LOBYTE(v17) = 1;
      PpmEventHeteroPolicy(v17);
      if ( (unsigned int)Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline() )
        PpmEventSoftParkLatencyUpdate(1, 1, PpmHighPerfSoftParkLatencyUs);
      PpmEventTraceHeteroSets(0);
      if ( (unsigned int)Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline()
        && PpmHeteroCapability
        && *(_BYTE *)(PpmHeteroCapability + 8) )
      {
        PpmEventHeteroCapabilityInitTable(PpmHeteroCapability, 1);
      }
      if ( PpmHeteroHgsEnabled || PpmHeteroHgsThreadEnabled )
      {
        PpmEventHgsHardwareTable(1);
        PpmEventHgsNormalizedTable();
        if ( PpmHeteroHgsDynamicUpdateReasonEnabled )
        {
          PpmEventHgsHardwareTableResonChanged(1);
          PpmEventHgsHardwareTableResonMapTable();
        }
        if ( PpmHeteroWpsParkingUpdateReasonEnabled )
        {
          Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline();
          PpmEventWpsParkingTableUpdateReason(1);
        }
        if ( (unsigned int)Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline()
          && PpmHeteroInitTableCollection
          && *(_BYTE *)(PpmHeteroInitTableCollection + 16) )
        {
          LOBYTE(v18) = 1;
          PpmEventWpsInitTableSnapshots(v18);
        }
        if ( (PpmHeteroHgsContainmentState & 4) != 0 )
        {
          for ( k = 0; k < PpmParkNumNodes; ++k )
          {
            v20 = 1264LL * k;
            PpmEventHgsContainmentGroupInfo(v20 + PpmParkNodes, 1);
            v21 = PpmHeteroHgsEvaluateContainmentMinPolicyDecision(v20 + PpmParkNodes);
            v25 = *(_QWORD *)(v24 + 1240);
            if ( v25 )
              LOBYTE(v25) = *(_BYTE *)(v25 + 827);
            else
              v25 = 0LL;
            PpmEventHgsContainmentPolicyChange(v25, v22, v23, v21, v25, 1);
            PpmHeteroHgsGetWpsHint(v20 + PpmParkNodes, &v46, (int *)&v40 + 1);
            PpmEventHgsContainmentHwUpdate((__int64)&v46, (__int64)&v40 + 4, 1);
          }
          if ( (unsigned int)Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline()
            && PpmHeteroWpsContainmentMaskDetectionState )
          {
            PpmEventWpsContainmentMaskDetection((__int64)&PpmHeteroWpsContainmentMaskDetectionState, 1);
          }
        }
      }
    }
    for ( m = 0; m < PpmParkNumNodes; ++m )
    {
      v27 = PpmParkNodes + 1264LL * m;
      PpmEventTraceParkNodeRundown((unsigned __int16)m, v27);
      PpmEventParkNodeRestriction(1, v27);
      v28 = *(_QWORD *)(v27 + 1248);
      if ( v28 )
      {
        if ( *(_QWORD *)(v28 + 8) )
        {
          for ( n = 0; n < *(_DWORD *)v28; ++n )
          {
            v30 = *(_QWORD *)(v28 + 8);
            v31 = 808LL * n;
            PpmEventParkTopologyDetected(
              *(unsigned __int16 *)(v27 + 4),
              5,
              *(_DWORD *)(v31 + v30 + 4),
              *(_DWORD *)(v31 + v30 + 276),
              *(_DWORD *)(v31 + v30 + 272),
              (_WORD *)(v31 + v30 + 8),
              (_WORD *)(v31 + v30 + 280),
              (_WORD *)(v31 + v30 + 544),
              1);
          }
        }
        if ( *(_QWORD *)(v28 + 552) )
        {
          for ( ii = 0; ii < *(_DWORD *)(v28 + 544); ++ii )
          {
            v33 = *(_QWORD *)(v28 + 552);
            v34 = 808LL * ii;
            PpmEventParkTopologyDetected(
              *(unsigned __int16 *)(v27 + 4),
              2,
              *(_DWORD *)(v34 + v33 + 4),
              *(_DWORD *)(v34 + v33 + 276),
              *(_DWORD *)(v34 + v33 + 272),
              (_WORD *)(v34 + v33 + 8),
              (_WORD *)(v34 + v33 + 280),
              (_WORD *)(v34 + v33 + 544),
              1);
          }
        }
      }
    }
    PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock, v8, v9, v10);
    PpmEventTracePpmProfileStatusRundown();
    LOBYTE(v35) = 1;
    PpmEventTraceProfiles(v35);
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN) )
      PpmInfoTraceProfileSettings();
    PopReleaseRwLock(&PpmIdlePolicyLock);
    PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
    if ( ControlCode == 2 )
    {
      PpmEventTraceAccountingBucketIntervalsRundown();
      PopAcquireRwLockShared((volatile signed __int64 *)&PpmIdlePolicyLock.Header.Lock, v36, v37, v38);
      PpmEventTraceCoordinatedIdleStates();
      PpmEventTracePlatformIdleAccounting();
      PpmEventVetoReasonRundown();
      PpmEventPlatformVetoRundown();
      v42 = *(__int64 *)((char *)&stru_140FC11F0.116 + 4);
      v43 = 0;
      p_WaitRegister = &stru_140FC11F0.WaitRegister;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v40, (unsigned __int16 **)&p_WaitRegister) )
      {
        v39 = KeGetPrcb(v40);
        PpmEventProcessorVetoRundown(v39);
        PpmEventTraceProcessorIdle(v39);
      }
      PopExecuteOnTargetProcessors(
        (__int64)&stru_140FC11F0.WaitRegister,
        (__int64)PpmEventTraceProcessorIdleAccounting,
        0LL,
        0LL);
      PopReleaseRwLock(&PpmIdlePolicyLock);
      if ( (unsigned __int8)PoEnergyEstimationEnabled() )
        PpmEventEnergyEstimationRundown();
    }
  }
}
