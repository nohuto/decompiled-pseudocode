/*
 * XREFs of PopSleepstudyStartNextSession @ 0x1409F4CE0
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1407D9690 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D99CC (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407DA120 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x1409F2F20 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1409F44A0 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1409F46A8 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     PopCalculateIdleInformation @ 0x140423CE4 (PopCalculateIdleInformation.c)
 *     PopThermalCsEntry @ 0x140424BC0 (PopThermalCsEntry.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     PopIdleWakeNotifyModernStandbyEnter @ 0x1404DF17C (PopIdleWakeNotifyModernStandbyEnter.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x1404E36FC (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopSetModernStandbyTransitionReason @ 0x1404F2714 (PopSetModernStandbyTransitionReason.c)
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x140602F80 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     PopThermalCsExit @ 0x14060A6D4 (PopThermalCsExit.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1407D94D8 (PopSleepstudyCaptureResiliencyStatistics.c)
 *     PopCurrentPowerStatePrecise @ 0x140AAF28C (PopCurrentPowerStatePrecise.c)
 *     SshNotifySystemSessionChange @ 0x140ADC854 (SshNotifySystemSessionChange.c)
 *     PopSleepstudySendSessionChangeEvent @ 0x140B13BF4 (PopSleepstudySendSessionChangeEvent.c)
 *     PopTransitionTelemetryOsState @ 0x140B23108 (PopTransitionTelemetryOsState.c)
 *     PopDiagTraceSleepStudyStart @ 0x140B2BCA4 (PopDiagTraceSleepStudyStart.c)
 *     PopSleepstudySendWnfNotification @ 0x140B4E4F8 (PopSleepstudySendWnfNotification.c)
 *     PopSleepstudyCaptureSessionStatistics @ 0x140B69084 (PopSleepstudyCaptureSessionStatistics.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopSleepstudyStartNextSession(unsigned int a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool v5; // di
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  unsigned int v13; // edi
  unsigned int v14; // eax
  bool v15; // r13
  bool v16; // r12
  bool v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  __int64 v21; // rcx
  __int64 *v22; // rax
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER v24; // r14
  int v25; // eax
  int v26; // edi
  int v27; // esi
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // r14
  LARGE_INTEGER *v32; // rsi
  char LowPart; // r15
  unsigned int v34; // edi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  struct _KLOCK_ENTRIES *v38; // r9
  __int64 v39; // rcx
  _OWORD *v40; // rax
  __int64 v41; // rdx
  _OWORD *v42; // rcx
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int64 v57; // rax
  unsigned int v58; // edi
  __int64 *v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 *i; // rbx
  __int64 v64; // [rsp+28h] [rbp-E0h]
  char v65; // [rsp+38h] [rbp-D0h]
  bool v66; // [rsp+39h] [rbp-CFh]
  bool v67; // [rsp+3Ah] [rbp-CEh]
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp-C8h] BYREF
  int v70; // [rsp+48h] [rbp-C0h]
  unsigned int v71; // [rsp+4Ch] [rbp-BCh]
  __int64 *v72; // [rsp+50h] [rbp-B8h]
  _QWORD v73[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v74[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v75; // [rsp+88h] [rbp-80h] BYREF
  __int128 v76; // [rsp+98h] [rbp-70h]
  __int64 v77; // [rsp+A8h] [rbp-60h]
  __int64 v78; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v79[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v80; // [rsp+BCh] [rbp-4Ch]

  v80 = 0;
  memset_0(v79, 0, 0x1ECuLL);
  v77 = 0LL;
  memset(v74, 0, sizeof(v74));
  v65 = 0;
  v75 = 0LL;
  v76 = 0LL;
  PopAcquirePolicyLock(v4, v3);
  v67 = PopLidOpened != 0;
  v5 = PopConsoleExternalDisplayConnected != 0;
  v66 = PopConsoleExternalDisplayConnected != 0;
  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v5 )
    {
      v65 = PopUsb4DisplayPresent != 0 ? 3 : 1;
    }
    else if ( PopUsb4DisplayPresent )
    {
      v66 = 1;
      v65 = 2;
    }
  }
  PopReleasePolicyLock(v7, v6, v8, v9, v64);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB, v10, v11, v12);
  v13 = xmmword_140F10660;
  v70 = xmmword_140F10660;
  PopReleaseRwLock((struct _KTHREAD *)&PopCB);
  v14 = v13 >> 4;
  LOBYTE(v14) = (v13 & 0x10) != 0;
  v71 = v14;
  v15 = (v13 & 0x20) != 0;
  v16 = (v13 & 0x40) != 0;
  v17 = (v13 & 0x80) != 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSleepstudySessionLock, v18, v19, v20);
  v21 = ((_BYTE)dword_140F0EFC8 + 1) & 7;
  v22 = &PopSleepstudySessionContext[15 * (unsigned int)dword_140F0EFC8 + 26];
  dword_140F0EFC8 = ((_BYTE)dword_140F0EFC8 + 1) & 7;
  v73[0] = v22;
  v72 = &PopSleepstudySessionContext[15 * v21 + 26];
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v78 = -2500000LL;
  v24 = InterruptTimePrecise;
  v25 = PopCurrentPowerStatePrecise(v74, &v78);
  v26 = v74[1];
  v27 = HIDWORD(v74[1]);
  PerformanceCounter.LowPart = v25 != 258;
  v28 = v73[0];
  *(_DWORD *)(v73[0] + 72LL) = v70;
  *(_BYTE *)(v28 + 58) = v67;
  *(_BYTE *)(v28 + 63) = v71;
  *(_BYTE *)(v28 + 60) = v66;
  *(_BYTE *)(v28 + 62) = v65;
  *(LARGE_INTEGER *)(v28 + 24) = v24;
  *(_DWORD *)(v28 + 36) = a2;
  *(_DWORD *)(v28 + 44) = v27;
  *(_DWORD *)(v28 + 52) = v26;
  *(_BYTE *)(v28 + 64) = v15;
  *(_BYTE *)(v28 + 65) = v16;
  *(_BYTE *)(v28 + 66) = v17;
  memset_0((char *)v72 + 4, 0, 0x74uLL);
  v29 = v72;
  *(_DWORD *)v72 = a1;
  v30 = *(_QWORD *)(v73[0] + 8LL) + 1LL;
  v29[2] = v24.QuadPart;
  v29[1] = v30;
  v31 = v29;
  *((_DWORD *)v29 + 17) = v70;
  *((_BYTE *)v29 + 56) = v74[0];
  *((_BYTE *)v29 + 57) = v67;
  *((_BYTE *)v29 + 63) = v71;
  *((_DWORD *)v29 + 10) = v27;
  v32 = (LARGE_INTEGER *)v73[0];
  *((_BYTE *)v29 + 59) = v66;
  *((_BYTE *)v29 + 64) = v15;
  *((_BYTE *)v29 + 61) = v65;
  *((_DWORD *)v29 + 8) = a2;
  *((_DWORD *)v29 + 12) = v26;
  *((_BYTE *)v29 + 65) = v16;
  *((_BYTE *)v29 + 66) = v17;
  if ( v32->LowPart == 1 )
  {
    LowPart = PerformanceCounter.LowPart;
  }
  else
  {
    if ( v32->LowPart != 2 )
    {
      v34 = a1;
      LowPart = PerformanceCounter.LowPart;
      goto LABEL_30;
    }
    PopSleepstudySendWnfNotification(&WNF_PO_SCENARIO_CHANGE, &GUID_SPM_DEFAULT);
    PopIdleWakeNotifyModernStandbyExit();
    LowPart = PerformanceCounter.LowPart;
    PopSleepstudyCaptureResiliencyStatistics(v32, (__int64)v74, PerformanceCounter.QuadPart, 0);
  }
  v34 = a1;
  if ( SSHSupportIsPlatformAoAc() && a1 - 1 > 1 )
  {
    PopTransitionTelemetryOsState(4LL);
    PopThermalCsExit(v36, v35, v37, v38);
  }
  if ( v32->LowPart == 1 )
  {
    PopCalculateIdleInformation((__int64)&v75);
    v32[12].QuadPart = v76;
    v32[13] = *(LARGE_INTEGER *)((char *)&v75 + 8);
    v32[14] = RtlGetInterruptTimePrecise(&PerformanceCounter);
  }
  if ( a1 != 2 )
  {
    if ( v32->LowPart == 1 )
      ++v31[1];
    if ( ((a1 - 1) & 0xFFFFFFFD) != 0 || (byte_140E27164 = 1, a1 != 3) )
    {
      if ( a2 >= 0x1000000 || (PopSleepstudyStopReason = 2, (a2 & 0xFFFFFF) != 0x35) )
        PopSleepstudyStopReason = 18;
    }
    else
    {
      PopSleepstudyStopReason = dword_140F10434;
    }
    PopSetModernStandbyTransitionReason(0, a2);
    PopSleepstudyCaptureSessionStatistics(v39, &GUID_SPM_DEFAULT, v31[1], v74, v79);
    if ( !byte_140F0EF18 )
    {
      v40 = &PopWdiScenarioStopEventData;
      v41 = 3LL;
      v42 = v79;
      do
      {
        v43 = v42[1];
        *v40 = *v42;
        v44 = v42[2];
        v40[1] = v43;
        v45 = v42[3];
        v40[2] = v44;
        v46 = v42[4];
        v40[3] = v45;
        v47 = v42[5];
        v40[4] = v46;
        v48 = v42[6];
        v40[5] = v47;
        v49 = v42[7];
        v42 += 8;
        v40[6] = v48;
        v40 += 8;
        *(v40 - 1) = v49;
        --v41;
      }
      while ( v41 );
      v50 = *v42;
      v51 = v42[1];
      v73[0] = 0LL;
      *v40 = v50;
      v73[1] = -1LL;
      v52 = v42[2];
      v40[1] = v51;
      v53 = v42[3];
      v40[2] = v52;
      v54 = v42[4];
      v40[3] = v53;
      v55 = v42[5];
      v40[4] = v54;
      v56 = v42[6];
      v40[5] = v55;
      v40[6] = v56;
      KeSetTimer2((__int64)&unk_140F0EF20, -50000000LL, 0LL, (__int64)v73);
      v57 = v31[1] - 2;
      byte_140F0EF18 = 1;
      qword_140F0EF10 = v57;
    }
    PopSleepstudySendWnfNotification(&WNF_PO_UMPO_SCENARIO_CHANGE, &GUID_SPM_DEFAULT);
  }
LABEL_30:
  PopSleepstudySendSessionChangeEvent(v32, v31);
  SshNotifySystemSessionChange(v34, v31[1]);
  v58 = v34 - 1;
  if ( !v58 )
  {
    if ( SSHSupportIsPlatformAoAc() && v32->LowPart != 1 && v32->LowPart != 2 )
    {
      PopTransitionTelemetryOsState(3LL);
      PopThermalCsEntry(a2 == 23);
    }
    PopCalculateIdleInformation((__int64)&v75);
    v31[10] = v76;
    v31[11] = *((_QWORD *)&v75 + 1);
    PopSetModernStandbyTransitionReason(1, a2);
    PopSleepstudyCaptureSessionStatistics(v60, &GUID_SPM_LOW_POWER_CS, v31[1], v74, v79);
    if ( !byte_140F0EF18 )
    {
      LOBYTE(v61) = v67;
      PopDiagTraceSleepStudyStart(v61);
    }
    v59 = &WNF_PO_UMPO_SCENARIO_CHANGE;
    goto LABEL_40;
  }
  if ( v58 == 1 )
  {
    PopCalculateIdleInformation((__int64)&v75);
    v31[10] = v76;
    v31[11] = *((_QWORD *)&v75 + 1);
    PopIdleWakeNotifyModernStandbyEnter();
    PopSleepstudyCaptureResiliencyStatistics(v31, (__int64)v74, LowPart, 1);
    v59 = &WNF_PO_SCENARIO_CHANGE;
LABEL_40:
    PopSleepstudySendWnfNotification(v59, &GUID_SPM_LOW_POWER_CS);
  }
  for ( i = (__int64 *)PopSleepstudySessionContext[0]; i != PopSleepstudySessionContext; i = (__int64 *)*i )
    guard_dispatch_icall_no_overrides(*(unsigned int *)v31, v31[1]);
  return PopReleaseRwLock((struct _KTHREAD *)&PopSleepstudySessionLock);
}
