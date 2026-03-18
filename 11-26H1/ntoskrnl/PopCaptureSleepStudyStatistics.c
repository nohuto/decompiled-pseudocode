/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x14042AB54
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140B65FE4 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140429390 (PpmSnapDripsAccountingSnapshot.c)
 *     PopCalculateCsSummary @ 0x14042A4C8 (PopCalculateCsSummary.c)
 *     PopDiagTraceFxRundown @ 0x14042B1A4 (PopDiagTraceFxRundown.c)
 *     PopFxStopDeviceAccounting @ 0x14042B348 (PopFxStopDeviceAccounting.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x14042C5F8 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleStartCsVetoAccounting @ 0x14042D8F8 (PpmIdleStartCsVetoAccounting.c)
 *     PopCalculateIdleInformation @ 0x140434E0C (PopCalculateIdleInformation.c)
 *     PopGetPowerSettingValue @ 0x1404CF78C (PopGetPowerSettingValue.c)
 *     PopFxStartDeviceAccounting @ 0x1404D5C74 (PopFxStartDeviceAccounting.c)
 *     PopGetModernStandbyTransitionReason @ 0x1404F02A8 (PopGetModernStandbyTransitionReason.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1404F91D0 (PpmGetPlatformSelectionVetoCounts.c)
 *     PopDiagGetPowerSchemeInfo @ 0x140500EDC (PopDiagGetPowerSchemeInfo.c)
 *     PpmResetDripsAccountingSnapshot @ 0x140518058 (PpmResetDripsAccountingSnapshot.c)
 *     Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x140526BA0 (Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1407CDD4C (PopFxResetSocSubsystemAccounting.c)
 *     PopFilterCapabilities @ 0x140944D5C (PopFilterCapabilities.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1409879C4 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140987D50 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14098911C (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopQueryRemainingSystemIdleTime @ 0x140AE44F4 (PopQueryRemainingSystemIdleTime.c)
 *     PopDirectedDripsNotify @ 0x140B08694 (PopDirectedDripsNotify.c)
 *     ExStopRecordingIRTimerExpiries @ 0x140B190AC (ExStopRecordingIRTimerExpiries.c)
 *     PopIsHibernateSupported @ 0x140B2E808 (PopIsHibernateSupported.c)
 *     PopSetConnectedStandbyMarker @ 0x140B31790 (PopSetConnectedStandbyMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x140B337C0 (PopClearConnectedStandbyMarker.c)
 *     PopDiagTraceCsConsumption @ 0x140B36164 (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x140B3931C (PopDiagTraceCsEnterReason.c)
 *     PopGetEnergyCounter @ 0x140B3B3FC (PopGetEnergyCounter.c)
 *     ExStartRecordingIRTimerExpiries @ 0x140B3DD04 (ExStartRecordingIRTimerExpiries.c)
 *     PopNetIsCompliantNicPresent @ 0x140B462D4 (PopNetIsCompliantNicPresent.c)
 *     PopQueryInputSuppressionCount @ 0x140B46548 (PopQueryInputSuppressionCount.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140B47DB0 (PopIsLockConsoleTimeoutActive.c)
 *     PopQueryPowerButtonSuppressionCount @ 0x140B49970 (PopQueryPowerButtonSuppressionCount.c)
 *     PopDiagTraceCsExitReason @ 0x140B58D58 (PopDiagTraceCsExitReason.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopCaptureSleepStudyStatistics(void *Buf1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  char IsHibernateSupported; // r12
  char IsLockConsoleTimeoutActive; // r13
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  KIRQL v15; // al
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 ModernStandbyTransitionReason; // rbx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  KIRQL v35; // al
  unsigned int v36; // ebx
  KIRQL v37; // al
  int v39; // [rsp+30h] [rbp-D0h] BYREF
  int v40; // [rsp+34h] [rbp-CCh] BYREF
  int v41; // [rsp+38h] [rbp-C8h] BYREF
  int v42; // [rsp+3Ch] [rbp-C4h] BYREF
  int v43; // [rsp+40h] [rbp-C0h] BYREF
  int v44; // [rsp+44h] [rbp-BCh] BYREF
  int v45; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B0h] BYREF
  int v48; // [rsp+58h] [rbp-A8h]
  __int64 v49; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+68h] [rbp-98h] BYREF
  __int128 v51; // [rsp+70h] [rbp-90h] BYREF
  __int128 v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+90h] [rbp-70h]
  _BYTE v54[80]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v55; // [rsp+F0h] [rbp-10h] BYREF
  __int128 Buf1a; // [rsp+100h] [rbp+0h] BYREF

  v4 = 0;
  v40 = 0;
  v53 = 0LL;
  v49 = 0LL;
  v39 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  Buf1a = 0LL;
  v55 = 0LL;
  memset_0(v54, 0, 0x4CuLL);
  v48 = *(_DWORD *)(a3 + 12);
  LODWORD(v47) = *(_DWORD *)(a3 + 8);
  IsHibernateSupported = 0;
  v41 = 0;
  IsLockConsoleTimeoutActive = 0;
  v46 = 0;
  v45 = 0;
  v43 = 0;
  v44 = 0;
  v42 = 0;
  if ( !memcmp(Buf1, &GUID_SPM_LOW_POWER_CS, 0x10uLL) )
    IsLockConsoleTimeoutActive = PopIsLockConsoleTimeoutActive();
  if ( qword_140E675E8 )
  {
    guard_dispatch_icall_no_overrides(a4 + 168, v11);
    *(_QWORD *)(a4 + 168) /= 0xAuLL;
  }
  PopAcquirePolicyLock();
  v12 = MEMORY[0xFFFFF78000000008];
  if ( !memcmp(Buf1, &GUID_SPM_LOW_POWER_CS, 0x10uLL) )
  {
    qword_140F0F5D0 = a2;
    PopCalculateIdleInformation(&v51);
    PpmGetPlatformSelectionVetoCounts((unsigned int)dword_140E27100, &v49, &v50);
    if ( (unsigned int)Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline(v14, v13) )
    {
      qword_140E27088 = KeQueryPerformanceCounter(0LL).QuadPart;
      dword_140E27090 = v53;
    }
    PopCsConsumption = v48;
    qword_140E26F50 = *((_QWORD *)&v51 + 1);
    dword_140E26F60 = DWORD2(v52);
    qword_140E26F58 = v51;
    qword_140E26F68 = KiAccumulatedDeepSleepTimerRebasing;
    qword_140E26FE8 = v52;
    qword_140E26FF0 = v49;
    qword_140E26FF8 = v50;
    dword_140E27028 = v47;
    qword_140E26F48 = v12;
    qword_140E26F78 = 0LL;
    qword_140E26F88 = 0LL;
    qword_140E26FD8 = 0LL;
    qword_140E26FE0 = 0LL;
    qword_140E26F98 = 0LL;
    qword_140E26FA8 = 0LL;
    qword_140E26FB8 = 0LL;
    qword_140E26FD0 = 0LL;
    qword_140E27038 = 0LL;
    qword_140E27040 = 0LL;
    qword_140E27048 = 0LL;
    byte_140E27024 = 0;
    v15 = KeAcquireSpinLockRaiseToDpc(&unk_140F10EF8);
    unk_140F10EE8 = 0LL;
    unk_140F10EF0 = 0LL;
    unk_140F10EE0 = 0LL;
    unk_140F10F00 = 1;
    KeReleaseSpinLock(&unk_140F10EF8, v15);
    PopGetEnergyCounter(&unk_140F0F5E0);
    word_140E27018 = dword_140F106CC == 0;
    HIBYTE(word_140E27018) = HIBYTE(word_140E27018) & 0xFE | PopNetIsCompliantNicPresent() & 1;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_ENERGY_SAVER_POLICY,
      v16,
      3LL,
      &v41,
      4,
      &v39);
    HIBYTE(word_140E27018) = HIBYTE(word_140E27018) & 0xFB | (4 * (v41 & 1));
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_VIDEO_POWERDOWN_TIMEOUT,
      v17,
      3LL,
      &v42,
      4,
      &v39);
    dword_140E27000 = v42;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_VIDEO_CONSOLE_LOCK_TIMEOUT,
      v18,
      3LL,
      &v43,
      4,
      &v39);
    dword_140E27004 = v43;
    byte_140E27008 = IsLockConsoleTimeoutActive;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_STANDBY_TIMEOUT,
      v19,
      3LL,
      &v44,
      4,
      &v39);
    dword_140E2700C = v44;
    PopQueryRemainingSystemIdleTime(&dword_140E27010, &dword_140E27014);
    byte_140E2702D = (char)KdDebuggerEnabled;
    v4 = PopFilterCapabilities(&stru_140F10828.WaitBlockFill11[24], v54);
    if ( v4 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v54);
    byte_140E2702C = IsHibernateSupported;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_HIBERNATE_TIMEOUT,
      v20,
      3LL,
      &v45,
      4,
      &v39);
    dword_140E27030 = v45;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_STANDBY_BUDGET_PERCENT,
      v21,
      3LL,
      &v46,
      4,
      &v39);
    dword_140E27034 = v46;
    ((void (__fastcall *)(GUID *, __int64, __int64, __int128 *, int, int *))PopGetPowerSettingValue)(
      &GUID_ACTIVE_POWERSCHEME,
      v22,
      3LL,
      &Buf1a,
      16,
      &v39);
    ((void (__fastcall *)(GUID *, __int64, __int64, __int128 *, int, int *))PopGetPowerSettingValue)(
      &GUID_POWERSCHEME_PERSONALITY,
      v23,
      3LL,
      &v55,
      16,
      &v39);
    PopDiagGetPowerSchemeInfo(&Buf1a, &v55);
    dword_140E27058 = v40;
    _InterlockedExchange64(&qword_140E270C0, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140E27100) )
      v4 = PopFxResetSocSubsystemAccounting((unsigned int)dword_140E27100);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_140E2701C = (int)stru_140F10828.SavedApcState.ApcListHead[0].Flink;
    dword_140E27020 = unk_140F10F10;
    ExStartRecordingIRTimerExpiries();
    PpmResetDripsAccountingSnapshot();
    LOBYTE(v24) = 1;
    ModernStandbyTransitionReason = (unsigned int)PopGetModernStandbyTransitionReason(v24);
    PopDiagTraceCsEnterReason(ModernStandbyTransitionReason);
    PopSetConnectedStandbyMarker(v26, (unsigned int)ModernStandbyTransitionReason);
    v47 = *(_QWORD *)&PopSleepstudySessionLock.PriorityFloorSummary;
    PopDirectedDripsNotify(0LL, &v47);
    v40 = 0;
    PopQueryInputSuppressionCount(&v40, v27, v28, v29);
    dword_140E27050 = v40;
    v40 = 0;
    PopQueryPowerButtonSuppressionCount(&v40, v30);
    dword_140E27054 = v40;
  }
  else
  {
    PopDiagTraceFxRundown(&qword_140F0F5D0);
    PopCalculateCsSummary(a4, PopSleepstudySessionLock.KernelShadowStackLimit.AllFields);
    v47 = a4;
    PopDirectedDripsNotify(1LL, &v47);
    PpmIdleCaptureCsVetoAccounting(v31, (unsigned int)dword_140E27100);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting(*(_QWORD *)(a4 + 32));
    PpmSnapDripsAccountingSnapshot(v32, 10 * *(_QWORD *)(a4 + 32), 10 * *(_DWORD *)(a4 + 40));
    PopDiagTraceCsConsumption(a4);
    PopDiagTraceCsExitReason(a4, a2);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140E27100) )
    {
      PopFxLogSocSubsystemBlockingTimes(v33, (unsigned int)dword_140E27100);
      v4 = PopFxLogSocSubsystemMetadata(v34, (unsigned int)dword_140E27100);
    }
    v35 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
    v36 = dword_140E0B8D0;
    KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v35);
    PopClearConnectedStandbyMarker(v36);
    qword_140E26F48 = 0LL;
    v37 = KeAcquireSpinLockRaiseToDpc(&unk_140F10EF8);
    unk_140F10F00 = 0;
    KeReleaseSpinLock(&unk_140F10EF8, v37);
  }
  PopReleasePolicyLock();
  return (unsigned int)v4;
}
