/*
 * XREFs of PpmEventTraceControlCallback @ 0x1407DCAD0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x1402592B4 (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventHgsHardwareTable @ 0x14025D178 (PpmEventHgsHardwareTable.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmEventParkNodeRestriction @ 0x140421920 (PpmEventParkNodeRestriction.c)
 *     PopExecuteOnTargetProcessors @ 0x140428780 (PopExecuteOnTargetProcessors.c)
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 *     PoEnergyEstimationEnabled @ 0x14047C5D0 (PoEnergyEstimationEnabled.c)
 *     PpmEventQosClassPerfSelection @ 0x1404B5804 (PpmEventQosClassPerfSelection.c)
 *     PpmEventTraceHeteroSets @ 0x1404BDA24 (PpmEventTraceHeteroSets.c)
 *     PpmEventPlatformVetoRundown @ 0x1404C5BDC (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x1404C5D28 (PpmEventProcessorVetoRundown.c)
 *     PpmEventVetoReasonRundown @ 0x1404EB9C4 (PpmEventVetoReasonRundown.c)
 *     PpmEventSoftParkLatencyUpdate @ 0x1404ED270 (PpmEventSoftParkLatencyUpdate.c)
 *     PpmHeteroHgsEvaluateContainmentMinPolicyDecision @ 0x1404F9310 (PpmHeteroHgsEvaluateContainmentMinPolicyDecision.c)
 *     PpmEventTraceLPIState @ 0x1404FBEFC (PpmEventTraceLPIState.c)
 *     PpmEventHgsContainmentHwUpdate @ 0x140500B2C (PpmEventHgsContainmentHwUpdate.c)
 *     PpmEventHgsHardwareTableResonChanged @ 0x140502714 (PpmEventHgsHardwareTableResonChanged.c)
 *     PpmEventHgsNormalizedTable @ 0x140502DA4 (PpmEventHgsNormalizedTable.c)
 *     PpmEventHgsHardwareTableResonMapTable @ 0x140503884 (PpmEventHgsHardwareTableResonMapTable.c)
 *     PpmHeteroHgsGetWpsHint @ 0x14060B404 (PpmHeteroHgsGetWpsHint.c)
 *     PpmEventHgsContainmentGroupInfo @ 0x14060DFDC (PpmEventHgsContainmentGroupInfo.c)
 *     PpmEventHgsContainmentPolicyChange @ 0x14060E190 (PpmEventHgsContainmentPolicyChange.c)
 *     PpmEventParkTopologyDetected @ 0x14060E9F0 (PpmEventParkTopologyDetected.c)
 *     PpmEventWpsParkingTableUpdateReason @ 0x14060EE30 (PpmEventWpsParkingTableUpdateReason.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PpmEventTraceProcessorPerformanceRundownHv @ 0x1407DCFEC (PpmEventTraceProcessorPerformanceRundownHv.c)
 *     PpmEventTraceProfiles @ 0x1409459FC (PpmEventTraceProfiles.c)
 *     PpmEventHeteroPolicy @ 0x140A9E028 (PpmEventHeteroPolicy.c)
 *     PpmEventQosClassPolicy @ 0x140ACD558 (PpmEventQosClassPolicy.c)
 *     PpmInfoTraceProfileSettings @ 0x140ADECB4 (PpmInfoTraceProfileSettings.c)
 *     PpmEventTraceProcessorPerformance @ 0x140B0E9B8 (PpmEventTraceProcessorPerformance.c)
 *     PpmEventTraceProcessorIdle @ 0x140B116C8 (PpmEventTraceProcessorIdle.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140B21C4C (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     PpmEventQosSupport @ 0x140B2CA3C (PpmEventQosSupport.c)
 *     PpmEventTraceAccountingBucketIntervalsRundown @ 0x140B2CECC (PpmEventTraceAccountingBucketIntervalsRundown.c)
 *     PpmEventTracePpmProfileStatusRundown @ 0x140B3B5BC (PpmEventTracePpmProfileStatusRundown.c)
 *     PpmEventStaticPolicyRundown @ 0x140B3CD9C (PpmEventStaticPolicyRundown.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x140B421E8 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140B47094 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventEnergyEstimationRundown @ 0x140B4A21C (PpmEventEnergyEstimationRundown.c)
 *     PpmEventTraceParkNodeRundown @ 0x140B4A7D8 (PpmEventTraceParkNodeRundown.c)
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
  unsigned int k; // ebx
  __int64 v19; // rdi
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 v24; // rcx
  unsigned int m; // edi
  __int64 v26; // rsi
  __int64 v27; // rbx
  unsigned int n; // r14d
  __int64 v29; // r10
  __int64 v30; // r11
  unsigned int ii; // r14d
  __int64 v32; // r10
  __int64 v33; // r11
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  struct _KLOCK_ENTRIES *v37; // r9
  __int64 v38; // rbx
  __int64 v39; // [rsp+58h] [rbp-B0h] BYREF
  _KWAIT_STATUS_REGISTER *p_WaitRegister; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+68h] [rbp-A0h]
  __int16 v42; // [rsp+70h] [rbp-98h]
  int v43; // [rsp+72h] [rbp-96h]
  __int16 v44; // [rsp+76h] [rbp-92h]
  struct _KAFFINITY_EX v45; // [rsp+78h] [rbp-90h] BYREF

  memset_0(&v45.8, 0, sizeof(v45.8));
  *(_QWORD *)&v45.Count = 2097153LL;
  v43 = 0;
  v44 = 0;
  v39 = 0x300000000LL;
  memset_0(&v45.8, 0, sizeof(v45.8));
  if ( (ControlCode & 0xFFFFFFFD) == 0 )
  {
    PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, v5, v6);
    v41 = *(__int64 *)((char *)&stru_140FC01F0.116 + 4);
    v42 = 0;
    p_WaitRegister = &stru_140FC01F0.WaitRegister;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v39, (unsigned __int16 **)&p_WaitRegister) )
    {
      Prcb = KeGetPrcb(v39);
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
          PpmEventWpsParkingTableUpdateReason(1);
        if ( (PpmHeteroHgsContainmentState & 4) != 0 )
        {
          for ( k = 0; k < PopModernStandbyStateNotify.SystemCallNumber; ++k )
          {
            v19 = 1264LL * k;
            PpmEventHgsContainmentGroupInfo(v19 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4), 1);
            v20 = PpmHeteroHgsEvaluateContainmentMinPolicyDecision(v19 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116
                                                                                   + 4));
            v24 = *(_QWORD *)(v23 + 1240);
            if ( v24 )
              LOBYTE(v24) = *(_BYTE *)(v24 + 827);
            else
              v24 = 0LL;
            PpmEventHgsContainmentPolicyChange(v24, v21, v22, v20, v24, 1);
            PpmHeteroHgsGetWpsHint(
              v19 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4),
              &v45,
              (int *)&v39 + 1);
            PpmEventHgsContainmentHwUpdate((__int64)&v45, (__int64)&v39 + 4, 1);
          }
        }
      }
    }
    for ( m = 0; m < PopModernStandbyStateNotify.SystemCallNumber; ++m )
    {
      v26 = *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1264LL * m;
      PpmEventTraceParkNodeRundown((unsigned __int16)m, v26);
      PpmEventParkNodeRestriction(1, v26);
      v27 = *(_QWORD *)(v26 + 1248);
      if ( v27 )
      {
        if ( *(_QWORD *)(v27 + 8) )
        {
          for ( n = 0; n < *(_DWORD *)v27; ++n )
          {
            v29 = *(_QWORD *)(v27 + 8);
            v30 = 808LL * n;
            PpmEventParkTopologyDetected(
              *(unsigned __int16 *)(v26 + 4),
              5,
              *(_DWORD *)(v30 + v29 + 4),
              *(_DWORD *)(v30 + v29 + 276),
              *(_DWORD *)(v30 + v29 + 272),
              (_WORD *)(v30 + v29 + 8),
              (_WORD *)(v30 + v29 + 280),
              (_WORD *)(v30 + v29 + 544),
              1);
          }
        }
        if ( *(_QWORD *)(v27 + 552) )
        {
          for ( ii = 0; ii < *(_DWORD *)(v27 + 544); ++ii )
          {
            v32 = *(_QWORD *)(v27 + 552);
            v33 = 808LL * ii;
            PpmEventParkTopologyDetected(
              *(unsigned __int16 *)(v26 + 4),
              2,
              *(_DWORD *)(v33 + v32 + 4),
              *(_DWORD *)(v33 + v32 + 276),
              *(_DWORD *)(v33 + v32 + 272),
              (_WORD *)(v33 + v32 + 8),
              (_WORD *)(v33 + v32 + 280),
              (_WORD *)(v33 + v32 + 544),
              1);
          }
        }
      }
    }
    PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F10070.1136, v8, v9, v10);
    PpmEventTracePpmProfileStatusRundown();
    LOBYTE(v34) = 1;
    PpmEventTraceProfiles(v34);
    if ( PpmEtwRegistered
      && EtwEventEnabled(
           (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
           &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN) )
    {
      PpmInfoTraceProfileSettings();
    }
    PopReleaseRwLock((struct _KTHREAD *)&stru_140F10070.1136);
    PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
    if ( ControlCode == 2 )
    {
      PpmEventTraceAccountingBucketIntervalsRundown();
      PopAcquireRwLockShared((volatile signed __int64 *)&stru_140F10070.1136, v35, v36, v37);
      PpmEventTraceCoordinatedIdleStates();
      PpmEventTracePlatformIdleAccounting();
      PpmEventVetoReasonRundown();
      PpmEventPlatformVetoRundown();
      v41 = *(__int64 *)((char *)&stru_140FC01F0.116 + 4);
      v42 = 0;
      p_WaitRegister = &stru_140FC01F0.WaitRegister;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v39, (unsigned __int16 **)&p_WaitRegister) )
      {
        v38 = KeGetPrcb(v39);
        PpmEventProcessorVetoRundown(v38);
        PpmEventTraceProcessorIdle(v38);
      }
      PopExecuteOnTargetProcessors(
        (__int64)&stru_140FC01F0.WaitRegister,
        (__int64)PpmEventTraceProcessorIdleAccounting,
        0LL,
        0LL);
      PopReleaseRwLock((struct _KTHREAD *)&stru_140F10070.1136);
      if ( (unsigned __int8)PoEnergyEstimationEnabled() )
        PpmEventEnergyEstimationRundown();
    }
  }
}
