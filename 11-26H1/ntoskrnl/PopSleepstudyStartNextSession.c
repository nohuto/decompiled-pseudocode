/*
 * XREFs of PopSleepstudyStartNextSession @ 0x140A39120
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1407D64E0 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D683C (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407D6FF0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140A37360 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140A388E0 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A38AE8 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     PopCalculateIdleInformation @ 0x140434E0C (PopCalculateIdleInformation.c)
 *     PopThermalCsEntry @ 0x1404355E4 (PopThermalCsEntry.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C9760 (SSHSupportIsPlatformAoAc.c)
 *     PopIdleWakeNotifyModernStandbyEnter @ 0x1404E5BDC (PopIdleWakeNotifyModernStandbyEnter.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x1404EA34C (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopSetModernStandbyTransitionReason @ 0x1404F9104 (PopSetModernStandbyTransitionReason.c)
 *     PopThermalCsExit @ 0x140607B18 (PopThermalCsExit.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1407D6328 (PopSleepstudyCaptureResiliencyStatistics.c)
 *     PopCurrentPowerStatePrecise @ 0x140AB129C (PopCurrentPowerStatePrecise.c)
 *     SshNotifySystemSessionChange @ 0x140ADF00C (SshNotifySystemSessionChange.c)
 *     PopSleepstudySendSessionChangeEvent @ 0x140B11E74 (PopSleepstudySendSessionChangeEvent.c)
 *     PopTransitionTelemetryOsState @ 0x140B20D08 (PopTransitionTelemetryOsState.c)
 *     PopDiagTraceSleepStudyStart @ 0x140B29C24 (PopDiagTraceSleepStudyStart.c)
 *     PopSleepstudySendWnfNotification @ 0x140B4C768 (PopSleepstudySendWnfNotification.c)
 *     PopSleepstudyCaptureSessionStatistics @ 0x140B65FE4 (PopSleepstudyCaptureSessionStatistics.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopSleepstudyStartNextSession(unsigned int a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned int v12; // edi
  unsigned int v13; // eax
  bool v14; // r13
  bool v15; // r12
  bool v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  __int64 v20; // rcx
  __int64 *v21; // rax
  __int64 InterruptTimePrecise; // rax
  __int64 v23; // r14
  __int64 v24; // r8
  int v25; // eax
  int v26; // edi
  int v27; // esi
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // r8
  char v31; // al
  _QWORD *v32; // rsi
  __int64 *v33; // r14
  char v34; // r15
  unsigned int v35; // edi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct _KLOCK_ENTRIES *v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned __int64 *v42; // rax
  _OWORD *v43; // rcx
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int64 v58; // rax
  unsigned int v59; // edi
  __int64 *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 *i; // rbx
  __int64 v65; // [rsp+28h] [rbp-E0h]
  bool v66; // [rsp+38h] [rbp-D0h]
  bool v67; // [rsp+39h] [rbp-CFh]
  unsigned __int64 v69; // [rsp+40h] [rbp-C8h] BYREF
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
  memset(v74, 0, sizeof(v74));
  v77 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  PopAcquirePolicyLock(v4, v3);
  v66 = PopLidOpened != 0;
  v67 = PopConsoleExternalDisplayConnected != 0;
  PopReleasePolicyLock(v6, v5, v7, v8, v65);
  PopAcquireRwLockExclusive((unsigned __int64 *)&qword_140F0FE60, v9, v10, v11);
  v12 = xmmword_140F0FEA0;
  v70 = xmmword_140F0FEA0;
  PopReleaseRwLock((struct _KTHREAD *)&qword_140F0FE60);
  v13 = v12 >> 4;
  LOBYTE(v13) = (v12 & 0x10) != 0;
  v14 = (v12 & 0x20) != 0;
  v71 = v13;
  v15 = (v12 & 0x40) != 0;
  v16 = (v12 & 0x80) != 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSleepstudySessionLock, v17, v18, v19);
  v20 = ((_BYTE)dword_140F0EBC8 + 1) & 7;
  v21 = &PopSleepstudySessionContext[15 * (unsigned int)dword_140F0EBC8 + 26];
  dword_140F0EBC8 = ((_BYTE)dword_140F0EBC8 + 1) & 7;
  v73[0] = v21;
  v72 = &PopSleepstudySessionContext[15 * v20 + 26];
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v69);
  v78 = -2500000LL;
  v23 = InterruptTimePrecise;
  v25 = PopCurrentPowerStatePrecise(v74, &v78, v24);
  v26 = v74[1];
  v27 = HIDWORD(v74[1]);
  LODWORD(v69) = v25 != 258;
  v28 = v73[0];
  *(_DWORD *)(v73[0] + 72LL) = v70;
  *(_BYTE *)(v28 + 58) = v66;
  *(_QWORD *)(v28 + 24) = v23;
  *(_DWORD *)(v28 + 36) = a2;
  *(_DWORD *)(v28 + 44) = v27;
  *(_DWORD *)(v28 + 52) = v26;
  *(_BYTE *)(v28 + 61) = v71;
  *(_BYTE *)(v28 + 60) = v67;
  *(_BYTE *)(v28 + 62) = v14;
  *(_BYTE *)(v28 + 63) = v15;
  *(_BYTE *)(v28 + 64) = v16;
  memset_0((char *)v72 + 4, 0, 0x74uLL);
  v29 = v72;
  *(_DWORD *)v72 = a1;
  v30 = *(_QWORD *)(v73[0] + 8LL) + 1LL;
  *((_DWORD *)v29 + 17) = v70;
  *((_BYTE *)v29 + 56) = v74[0];
  *((_BYTE *)v29 + 57) = v66;
  v31 = v71;
  *((_DWORD *)v29 + 10) = v27;
  v32 = (_QWORD *)v73[0];
  *((_BYTE *)v29 + 61) = v31;
  v29[2] = v23;
  v33 = v29;
  *((_BYTE *)v29 + 59) = v67;
  v29[1] = v30;
  *((_DWORD *)v29 + 8) = a2;
  *((_DWORD *)v29 + 12) = v26;
  *((_BYTE *)v29 + 62) = v14;
  *((_BYTE *)v29 + 63) = v15;
  *((_BYTE *)v29 + 64) = v16;
  if ( *(_DWORD *)v32 == 1 )
  {
    v34 = v69;
  }
  else
  {
    if ( *(_DWORD *)v32 != 2 )
    {
      v35 = a1;
      v34 = v69;
      goto LABEL_25;
    }
    PopSleepstudySendWnfNotification(&WNF_PO_SCENARIO_CHANGE, &GUID_SPM_DEFAULT);
    PopIdleWakeNotifyModernStandbyExit();
    v34 = v69;
    PopSleepstudyCaptureResiliencyStatistics(v32, (__int64)v74, v69, 0);
  }
  v35 = a1;
  if ( SSHSupportIsPlatformAoAc() && a1 - 1 > 1 )
  {
    PopTransitionTelemetryOsState(4LL);
    PopThermalCsExit(v37, v36, v38, v39);
  }
  if ( *(_DWORD *)v32 == 1 )
  {
    PopCalculateIdleInformation((__int64)&v75);
    v32[12] = v76;
    v32[13] = *((_QWORD *)&v75 + 1);
    v32[14] = RtlGetInterruptTimePrecise(&v69);
  }
  if ( a1 != 2 )
  {
    if ( *(_DWORD *)v32 == 1 )
      ++v33[1];
    if ( ((a1 - 1) & 0xFFFFFFFD) != 0 || (byte_140E27024 = 1, a1 != 3) )
    {
      if ( a2 >= 0x1000000
        || (LODWORD(PopSleepstudySessionLock.KernelShadowStackLimit.AllFields) = 2, (a2 & 0xFFFFFF) != 0x35) )
      {
        LODWORD(PopSleepstudySessionLock.KernelShadowStackLimit.AllFields) = 18;
      }
    }
    else
    {
      LODWORD(PopSleepstudySessionLock.KernelShadowStackLimit.AllFields) = dword_140F0FB74;
    }
    PopSetModernStandbyTransitionReason(0, a2);
    PopSleepstudyCaptureSessionStatistics(v40, &GUID_SPM_DEFAULT, v33[1], v74, v79);
    if ( !byte_140F0EB18 )
    {
      v41 = 3LL;
      v42 = &PopSleepstudySessionLock.Spare35[1];
      v43 = v79;
      do
      {
        v44 = v43[1];
        *(_OWORD *)v42 = *v43;
        v45 = v43[2];
        *((_OWORD *)v42 + 1) = v44;
        v46 = v43[3];
        *((_OWORD *)v42 + 2) = v45;
        v47 = v43[4];
        *((_OWORD *)v42 + 3) = v46;
        v48 = v43[5];
        *((_OWORD *)v42 + 4) = v47;
        v49 = v43[6];
        *((_OWORD *)v42 + 5) = v48;
        v50 = v43[7];
        v43 += 8;
        *((_OWORD *)v42 + 6) = v49;
        v42 += 16;
        *((_OWORD *)v42 - 1) = v50;
        --v41;
      }
      while ( v41 );
      v51 = *v43;
      v52 = v43[1];
      v73[0] = 0LL;
      *(_OWORD *)v42 = v51;
      v73[1] = -1LL;
      v53 = v43[2];
      *((_OWORD *)v42 + 1) = v52;
      v54 = v43[3];
      *((_OWORD *)v42 + 2) = v53;
      v55 = v43[4];
      *((_OWORD *)v42 + 3) = v54;
      v56 = v43[5];
      *((_OWORD *)v42 + 4) = v55;
      v57 = v43[6];
      *((_OWORD *)v42 + 5) = v56;
      *((_OWORD *)v42 + 6) = v57;
      KeSetTimer2((__int64)&unk_140F0EB20, -50000000LL, 0LL, (__int64)v73);
      v58 = v33[1] - 2;
      byte_140F0EB18 = 1;
      qword_140F0EB10 = v58;
    }
    PopSleepstudySendWnfNotification(&WNF_PO_UMPO_SCENARIO_CHANGE, &GUID_SPM_DEFAULT);
  }
LABEL_25:
  PopSleepstudySendSessionChangeEvent(v32, v33);
  SshNotifySystemSessionChange(v35, v33[1]);
  v59 = v35 - 1;
  if ( !v59 )
  {
    if ( SSHSupportIsPlatformAoAc() && *(_DWORD *)v32 != 1 && *(_DWORD *)v32 != 2 )
    {
      PopTransitionTelemetryOsState(3LL);
      PopThermalCsEntry(a2 == 23);
    }
    PopCalculateIdleInformation((__int64)&v75);
    v33[10] = v76;
    v33[11] = *((_QWORD *)&v75 + 1);
    PopSetModernStandbyTransitionReason(1, a2);
    PopSleepstudyCaptureSessionStatistics(v61, &GUID_SPM_LOW_POWER_CS, v33[1], v74, v79);
    if ( !byte_140F0EB18 )
    {
      LOBYTE(v62) = v66;
      PopDiagTraceSleepStudyStart(v62);
    }
    v60 = &WNF_PO_UMPO_SCENARIO_CHANGE;
    goto LABEL_35;
  }
  if ( v59 == 1 )
  {
    PopCalculateIdleInformation((__int64)&v75);
    v33[10] = v76;
    v33[11] = *((_QWORD *)&v75 + 1);
    PopIdleWakeNotifyModernStandbyEnter();
    PopSleepstudyCaptureResiliencyStatistics(v33, (__int64)v74, v34, 1);
    v60 = &WNF_PO_SCENARIO_CHANGE;
LABEL_35:
    PopSleepstudySendWnfNotification(v60, &GUID_SPM_LOW_POWER_CS);
  }
  for ( i = (__int64 *)PopSleepstudySessionContext[0]; i != PopSleepstudySessionContext; i = (__int64 *)*i )
    guard_dispatch_icall_no_overrides(*(unsigned int *)v33, v33[1]);
  return PopReleaseRwLock(&PopSleepstudySessionLock);
}
