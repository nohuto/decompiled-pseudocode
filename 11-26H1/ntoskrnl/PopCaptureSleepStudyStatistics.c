/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x140421FC8
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140B69084 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmIdleStartCsVetoAccounting @ 0x140420108 (PpmIdleStartCsVetoAccounting.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x140420CC8 (PpmIdleCaptureCsVetoAccounting.c)
 *     PopDiagTraceFxRundown @ 0x140422618 (PopDiagTraceFxRundown.c)
 *     PopFxStopDeviceAccounting @ 0x1404227BC (PopFxStopDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x140422F4C (PopCalculateCsSummary.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x14042391C (PpmSnapDripsAccountingSnapshot.c)
 *     PopCalculateIdleInformation @ 0x140423CE4 (PopCalculateIdleInformation.c)
 *     PopGetPowerSettingValue @ 0x1404C91BC (PopGetPowerSettingValue.c)
 *     PopFxStartDeviceAccounting @ 0x1404CF438 (PopFxStartDeviceAccounting.c)
 *     PopGetModernStandbyTransitionReason @ 0x1404E9888 (PopGetModernStandbyTransitionReason.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1404F27E0 (PpmGetPlatformSelectionVetoCounts.c)
 *     PopDiagGetPowerSchemeInfo @ 0x1404FA6CC (PopDiagGetPowerSchemeInfo.c)
 *     PpmResetDripsAccountingSnapshot @ 0x140511AC8 (PpmResetDripsAccountingSnapshot.c)
 *     Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x140529210 (Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1407D0DEC (PopFxResetSocSubsystemAccounting.c)
 *     PopFilterCapabilities @ 0x1409C06CC (PopFilterCapabilities.c)
 *     PopFxLogSocSubsystemMetadata @ 0x140A4271C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140A427E8 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x140A4383C (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopQueryRemainingSystemIdleTime @ 0x140AE2004 (PopQueryRemainingSystemIdleTime.c)
 *     PopDirectedDripsNotify @ 0x140B0A610 (PopDirectedDripsNotify.c)
 *     ExStopRecordingIRTimerExpiries @ 0x140B1B4F4 (ExStopRecordingIRTimerExpiries.c)
 *     PopIsHibernateSupported @ 0x140B30758 (PopIsHibernateSupported.c)
 *     PopSetConnectedStandbyMarker @ 0x140B33990 (PopSetConnectedStandbyMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x140B35C10 (PopClearConnectedStandbyMarker.c)
 *     PopDiagTraceCsConsumption @ 0x140B38374 (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x140B3B52C (PopDiagTraceCsEnterReason.c)
 *     PopGetEnergyCounter @ 0x140B3D67C (PopGetEnergyCounter.c)
 *     ExStartRecordingIRTimerExpiries @ 0x140B3FDE4 (ExStartRecordingIRTimerExpiries.c)
 *     PopNetIsCompliantNicPresent @ 0x140B48304 (PopNetIsCompliantNicPresent.c)
 *     PopQueryInputSuppressionCount @ 0x140B48578 (PopQueryInputSuppressionCount.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140B49B40 (PopIsLockConsoleTimeoutActive.c)
 *     PopQueryPowerButtonSuppressionCount @ 0x140B4B700 (PopQueryPowerButtonSuppressionCount.c)
 *     PopDiagTraceCsExitReason @ 0x140B5BB78 (PopDiagTraceCsExitReason.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopCaptureSleepStudyStatistics(void *Buf1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // esi
  char IsHibernateSupported; // r12
  char IsLockConsoleTimeoutActive; // r13
  __int64 v11; // rdx
  __int64 v12; // rbx
  KIRQL v13; // al
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 ModernStandbyTransitionReason; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  KIRQL v29; // al
  unsigned int v30; // ebx
  KIRQL v31; // al
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  int v35; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+3Ch] [rbp-C4h] BYREF
  int v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+44h] [rbp-BCh] BYREF
  int v39; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  __int128 v45; // [rsp+70h] [rbp-90h] BYREF
  __int128 v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+90h] [rbp-70h]
  _BYTE v48[80]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v49; // [rsp+F0h] [rbp-10h] BYREF
  __int128 Buf1a; // [rsp+100h] [rbp+0h] BYREF

  v4 = 0;
  v34 = 0;
  v47 = 0LL;
  v43 = 0LL;
  v33 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  Buf1a = 0LL;
  v49 = 0LL;
  memset_0(v48, 0, 0x4CuLL);
  v42 = *(_DWORD *)(a3 + 12);
  LODWORD(v41) = *(_DWORD *)(a3 + 8);
  IsHibernateSupported = 0;
  v35 = 0;
  IsLockConsoleTimeoutActive = 0;
  v40 = 0;
  v39 = 0;
  v37 = 0;
  v38 = 0;
  v36 = 0;
  if ( !memcmp(Buf1, &GUID_SPM_LOW_POWER_CS, 0x10uLL) )
    IsLockConsoleTimeoutActive = PopIsLockConsoleTimeoutActive();
  if ( qword_140E67848 )
  {
    guard_dispatch_icall_no_overrides(a4 + 21, v11);
    a4[21] /= 0xAuLL;
  }
  PopAcquirePolicyLock();
  v12 = MEMORY[0xFFFFF78000000008];
  if ( !memcmp(Buf1, &GUID_SPM_LOW_POWER_CS, 0x10uLL) )
  {
    PopWnfCsEnterScenarioId = a2;
    PopCalculateIdleInformation(&v45);
    PpmGetPlatformSelectionVetoCounts((unsigned int)dword_140E27240, &v43, &v44);
    if ( (unsigned int)Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline() )
    {
      qword_140E271C8 = KeQueryPerformanceCounter(0LL).QuadPart;
      dword_140E271D0 = v47;
    }
    PopCsConsumption = v42;
    qword_140E27090 = *((_QWORD *)&v45 + 1);
    dword_140E270A0 = DWORD2(v46);
    qword_140E27098 = v45;
    qword_140E270A8 = KiAccumulatedDeepSleepTimerRebasing;
    qword_140E27128 = v46;
    qword_140E27130 = v43;
    qword_140E27138 = v44;
    dword_140E27168 = v41;
    qword_140E27088 = v12;
    qword_140E270B8 = 0LL;
    qword_140E270C8 = 0LL;
    qword_140E27118 = 0LL;
    qword_140E27120 = 0LL;
    qword_140E270D8 = 0LL;
    qword_140E270E8 = 0LL;
    qword_140E270F8 = 0LL;
    qword_140E27110 = 0LL;
    qword_140E27178 = 0LL;
    qword_140E27180 = 0LL;
    qword_140E27188 = 0LL;
    byte_140E27164 = 0;
    v13 = KeAcquireSpinLockRaiseToDpc(&qword_140F10278);
    qword_140F10268 = 0LL;
    qword_140F10270 = 0LL;
    PopDisplayOnPerformance = 0LL;
    dword_140F10280 = 1;
    KeReleaseSpinLock(&qword_140F10278, v13);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    word_140E27158 = HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) == 0;
    HIBYTE(word_140E27158) = HIBYTE(word_140E27158) & 0xFE | PopNetIsCompliantNicPresent() & 1;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_ENERGY_SAVER_POLICY,
      v14,
      3LL,
      &v35,
      4,
      &v33);
    HIBYTE(word_140E27158) = HIBYTE(word_140E27158) & 0xFB | (4 * (v35 & 1));
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_VIDEO_POWERDOWN_TIMEOUT,
      v15,
      3LL,
      &v36,
      4,
      &v33);
    dword_140E27140 = v36;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_VIDEO_CONSOLE_LOCK_TIMEOUT,
      v16,
      3LL,
      &v37,
      4,
      &v33);
    dword_140E27144 = v37;
    byte_140E27148 = IsLockConsoleTimeoutActive;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_STANDBY_TIMEOUT,
      v17,
      3LL,
      &v38,
      4,
      &v33);
    dword_140E2714C = v38;
    PopQueryRemainingSystemIdleTime(&dword_140E27150, &dword_140E27154);
    byte_140E2716D = (char)KdDebuggerEnabled;
    v4 = PopFilterCapabilities(&PpmIdlePolicyLock.Padding[1], v48);
    if ( v4 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v48);
    byte_140E2716C = IsHibernateSupported;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_HIBERNATE_TIMEOUT,
      v18,
      3LL,
      &v39,
      4,
      &v33);
    dword_140E27170 = v39;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_STANDBY_BUDGET_PERCENT,
      v19,
      3LL,
      &v40,
      4,
      &v33);
    dword_140E27174 = v40;
    ((void (__fastcall *)(GUID *, __int64, __int64, __int128 *, int, int *))PopGetPowerSettingValue)(
      &GUID_ACTIVE_POWERSCHEME,
      v20,
      3LL,
      &Buf1a,
      16,
      &v33);
    ((void (__fastcall *)(GUID *, __int64, __int64, __int128 *, int, int *))PopGetPowerSettingValue)(
      &GUID_POWERSCHEME_PERSONALITY,
      v21,
      3LL,
      &v49,
      16,
      &v33);
    PopDiagGetPowerSchemeInfo(&Buf1a, &v49);
    dword_140E27198 = v34;
    _InterlockedExchange64(&qword_140E27200, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140E27240) )
      v4 = PopFxResetSocSubsystemAccounting((unsigned int)dword_140E27240);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_140E2715C = PopAggressiveStandbyEnabledActions;
    dword_140E27160 = PopAggressiveStandbyAppliedActions;
    ExStartRecordingIRTimerExpiries();
    PpmResetDripsAccountingSnapshot();
    LOBYTE(v22) = 1;
    ModernStandbyTransitionReason = (unsigned int)PopGetModernStandbyTransitionReason(v22);
    PopDiagTraceCsEnterReason(ModernStandbyTransitionReason);
    PopSetConnectedStandbyMarker(v24, (unsigned int)ModernStandbyTransitionReason);
    v41 = PopWdiCurrentScenarioInstanceId;
    PopDirectedDripsNotify(0LL, &v41);
    v34 = 0;
    PopQueryInputSuppressionCount(&v34);
    dword_140E27190 = v34;
    v34 = 0;
    PopQueryPowerButtonSuppressionCount(&v34);
    dword_140E27194 = v34;
  }
  else
  {
    PopDiagTraceFxRundown(&PopWnfCsEnterScenarioId);
    PopCalculateCsSummary(a4, (unsigned int)PopSleepstudyStopReason);
    v41 = (__int64)a4;
    PopDirectedDripsNotify(1LL, &v41);
    PpmIdleCaptureCsVetoAccounting(v25, dword_140E27240);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting(a4[4]);
    PpmSnapDripsAccountingSnapshot(v26, 10LL * a4[4], 10LL * a4[5]);
    PopDiagTraceCsConsumption(a4);
    PopDiagTraceCsExitReason(a4, a2);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140E27240) )
    {
      PopFxLogSocSubsystemBlockingTimes(v27, (unsigned int)dword_140E27240);
      v4 = PopFxLogSocSubsystemMetadata(v28, (unsigned int)dword_140E27240);
    }
    v29 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
    v30 = dword_140E0B8E0;
    KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v29);
    PopClearConnectedStandbyMarker(v30);
    qword_140E27088 = 0LL;
    v31 = KeAcquireSpinLockRaiseToDpc(&qword_140F10278);
    dword_140F10280 = 0;
    KeReleaseSpinLock(&qword_140F10278, v31);
  }
  PopReleasePolicyLock();
  return (unsigned int)v4;
}
