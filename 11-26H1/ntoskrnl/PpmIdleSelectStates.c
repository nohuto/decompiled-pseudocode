/*
 * XREFs of PpmIdleSelectStates @ 0x1403EA21C
 * Callers:
 *     PoIdle @ 0x1403E9FF0 (PoIdle.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     RtlSubtractAffinityEx @ 0x14025B408 (RtlSubtractAffinityEx.c)
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     KeStallExecutionProcessor @ 0x14037BEF0 (KeStallExecutionProcessor.c)
 *     PpmUnlockProcessors @ 0x1403EC22C (PpmUnlockProcessors.c)
 *     PoCopyDeepIdleMask @ 0x1403EDFE0 (PoCopyDeepIdleMask.c)
 *     PpmComputeIdleDurationHint @ 0x1404FC1F0 (PpmComputeIdleDurationHint.c)
 *     PpmEstimateIdleDuration @ 0x1404FC2AC (PpmEstimateIdleDuration.c)
 *     PpmIdleEvaluateConstraints @ 0x140507E70 (PpmIdleEvaluateConstraints.c)
 *     PpmIdleSetSynchronizationState @ 0x14050B914 (PpmIdleSetSynchronizationState.c)
 *     Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline @ 0x1405315E4 (Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x140601764 (PpmCheckPreConditionsForDeepSleep.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140601CC4 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleCheckProcessorStateEligibility @ 0x140601FCC (PpmIdleCheckProcessorStateEligibility.c)
 *     PpmIdleRecheckSecondaryProcessors @ 0x1406025BC (PpmIdleRecheckSecondaryProcessors.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x140602654 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleUpdateIdleReevaluationDuration @ 0x140602848 (PpmIdleUpdateIdleReevaluationDuration.c)
 *     PpmIdleUpdateSelectionStatistics @ 0x1406028EC (PpmIdleUpdateSelectionStatistics.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall PpmIdleSelectStates(
        __int64 a1,
        char a2,
        _QWORD *a3,
        __int64 *a4,
        _DWORD *a5,
        unsigned int *a6,
        int *a7,
        __int64 a8,
        bool *a9)
{
  char *v12; // rdi
  int v13; // r14d
  __int64 v14; // r15
  char v15; // r12
  char v16; // al
  bool v17; // zf
  unsigned __int64 v18; // rdx
  int v19; // r9d
  unsigned __int64 v20; // rax
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rbx
  _DWORD *v24; // r14
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int i; // eax
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // r14
  int v32; // r8d
  int v33; // eax
  int v34; // r9d
  int v35; // edx
  __int64 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r11
  __int64 v40; // rsi
  int v41; // eax
  _DWORD *v42; // rbx
  int v43; // r12d
  __int64 v44; // rdx
  _DWORD *v45; // rsi
  int v46; // r15d
  __int64 v47; // r14
  int v48; // eax
  bool v49; // si
  BOOL v50; // r8d
  unsigned int v51; // ebx
  int v52; // ecx
  __int64 v53; // rbx
  __int64 v54; // r11
  __int64 v55; // rcx
  bool v56; // al
  int v57; // r10d
  unsigned int v58; // ecx
  __int16 v59; // ax
  _QWORD *v60; // rcx
  __int64 result; // rax
  __int64 v62; // [rsp+20h] [rbp-E0h]
  char v63; // [rsp+50h] [rbp-B0h]
  unsigned int v64; // [rsp+54h] [rbp-ACh] BYREF
  char v65; // [rsp+58h] [rbp-A8h]
  char v66; // [rsp+59h] [rbp-A7h]
  int v67; // [rsp+5Ch] [rbp-A4h]
  int v68; // [rsp+60h] [rbp-A0h]
  int v69; // [rsp+64h] [rbp-9Ch]
  int v70; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v71; // [rsp+6Ch] [rbp-94h]
  int v72; // [rsp+70h] [rbp-90h] BYREF
  __int64 v73; // [rsp+78h] [rbp-88h]
  __int64 *v74; // [rsp+80h] [rbp-80h]
  _DWORD *v75; // [rsp+88h] [rbp-78h]
  __int64 v76; // [rsp+90h] [rbp-70h]
  int v77; // [rsp+98h] [rbp-68h]
  int v78; // [rsp+9Ch] [rbp-64h]
  _DWORD *v79; // [rsp+A0h] [rbp-60h]
  __int64 v80; // [rsp+A8h] [rbp-58h]
  __int64 v81; // [rsp+B0h] [rbp-50h]
  __int64 v82; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v83; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD *v84; // [rsp+C8h] [rbp-38h] BYREF
  int v85; // [rsp+D0h] [rbp-30h]
  int v86; // [rsp+D4h] [rbp-2Ch]
  __int64 v87; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v88; // [rsp+E0h] [rbp-20h]
  __int64 v89; // [rsp+E8h] [rbp-18h]
  bool *v90; // [rsp+F0h] [rbp-10h]
  __int64 v91; // [rsp+F8h] [rbp-8h]
  __int64 v92; // [rsp+100h] [rbp+0h]
  unsigned int *v93; // [rsp+108h] [rbp+8h]
  int *v94; // [rsp+110h] [rbp+10h]
  _DWORD *v95; // [rsp+118h] [rbp+18h]
  __int64 v96; // [rsp+120h] [rbp+20h]
  __int64 v97; // [rsp+130h] [rbp+30h] BYREF
  char v98[264]; // [rsp+138h] [rbp+38h] BYREF

  v95 = a5;
  v93 = a6;
  v94 = a7;
  v96 = a8;
  v90 = a9;
  v74 = a4;
  memset_0(&v97, 0, 0x108uLL);
  v12 = *(char **)(a1 + 34880);
  v13 = 0;
  v14 = PpmPlatformStates;
  v84 = *(_DWORD **)(a1 + 34888);
  v15 = 1;
  v89 = *((_QWORD *)v12 + 83);
  v16 = *v12;
  v17 = *v12 == 0;
  v68 = 0;
  v88 = 0LL;
  v64 = 0;
  v65 = v17;
  v75 = 0LL;
  v71 = 0;
  v79 = 0LL;
  v78 = 0;
  v67 = 0;
  v70 = 0;
  v81 = 0LL;
  v82 = 0LL;
  v80 = 0LL;
  v83 = 0LL;
  v72 = 0;
  v63 = 0;
  v69 = 0;
  v73 = PpmPlatformStates;
  v66 = v16;
  *a3 = PpmIdleEvaluateConstraints(a1, v74);
  *((_QWORD *)v12 + 42) = 2097153LL;
  memset_0(v12 + 344, 0, 0x100uLL);
  if ( (unsigned int)Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline() )
  {
    v19 = KeMaximumIncrement;
    v20 = *v74 / (unsigned __int64)(unsigned int)KeMaximumIncrement;
    v18 = *v74 % (unsigned __int64)(unsigned int)KeMaximumIncrement;
    if ( (_DWORD)v20 == *(_DWORD *)(a1 + 14528) )
      v13 = KeMaximumIncrement * (v20 + 1) - *v74;
    v69 = v13;
  }
  LOBYTE(v19) = a2;
  PpmComputeIdleDurationHint(a1, v18, *v74, v19, v13);
  if ( !a2 || KiClockTimerPerCpuTickScheduling || *(_BYTE *)(a1 + 33) )
  {
    v76 = -1LL;
    v87 = -1LL;
  }
  else
  {
    v76 = PpmPerfQosIdleExpirationTimeout;
    v87 = PpmPerfQosIdleExpirationTimeout;
  }
  v21 = -1;
  if ( *((_QWORD *)v12 + 77) )
    v21 = guard_dispatch_icall_no_overrides(v89, v12 + 672);
  v22 = 0;
  if ( !*(_BYTE *)(a1 + 34969) )
    v22 = v21;
  v77 = v22;
  if ( !v14 )
  {
    v43 = -1;
LABEL_57:
    v48 = *((_DWORD *)v12 + 10);
    v46 = 0;
    v79 = (_DWORD *)*((_QWORD *)v12 + 123);
    v49 = 1;
    memset_0(v79, 0, 4 * v48 + 8);
    v47 = 0LL;
    v91 = *((_QWORD *)v12 + 6);
    while ( 1 )
    {
      if ( (unsigned int)v47 >= *((_DWORD *)v12 + 250) )
      {
        v45 = v79;
        LODWORD(v47) = v78;
        goto LABEL_91;
      }
      LOBYTE(v50) = 1;
      v51 = *(_DWORD *)(*((_QWORD *)v12 + 126) + 24 * v47 + 4);
      v64 = v51;
      if ( !v73
        && v51 == *((_DWORD *)v12 + 10) - 1
        && v12[716]
        && (unsigned __int8)PpmCheckPreConditionsForDeepSleep(a1, v44, 1LL) )
      {
        v17 = v46 == 0;
        v46 = v50;
        if ( v17 )
          v49 = v50;
      }
      else
      {
        if ( v46 )
          v49 = v50;
        v46 = 0;
      }
      if ( v49 )
      {
        v49 = 0;
        PpmEstimateIdleDuration(a1, v46, 0, *v74, v76, (__int64)&v82, (__int64)&v83, (__int64)&v72, (__int64)&v70, v69);
        v52 = v82;
        v67 = v70;
        v80 = v83;
        v81 = v82;
      }
      else
      {
        v52 = v81;
      }
      if ( v51 )
      {
        v53 = PpmIdleCheckProcessorStateEligibility(a1, v77, 0, v52, v51, v65);
        if ( !v53 && *((_QWORD *)v12 + 78) )
          v53 = (unsigned int)guard_dispatch_icall_no_overrides(v89, v64);
      }
      else
      {
        v53 = 0LL;
      }
      PpmIdleUpdateSelectionStatistics(v53, &v84[256 * (unsigned __int64)v64 + 20]);
      if ( !v53 )
        break;
      if ( v66 && (v53 == 2147483651LL || v53 == 2147483656LL) )
      {
        v49 = (unsigned __int8)PpmIdleUpdateIdleReevaluationDuration(a1, v53, v67, v80, (__int64)&v87) != 0;
        v76 = v87;
      }
      v79[v47 + 2] = v53;
      v47 = (unsigned int)(v47 + 1);
    }
    v45 = v79;
    v55 = 352 * (v54 + 3);
    *v79 = v54;
    v56 = !v12[v55 + 338] || v73 && !v12[v55 + 337] || v12[v55 + 344];
    *v90 = v56;
LABEL_91:
    v42 = v75;
    goto LABEL_92;
  }
  *((_QWORD *)v12 + 90) = 2097153LL;
  memset_0(v12 + 728, 0, 0x100uLL);
  PoCopyDeepIdleMask(v12 + 720);
  KeAddProcessorAffinityEx((unsigned __int16 *)v12 + 360, *(_DWORD *)(a1 + 36));
  v23 = (__int64)(v12 + 1032);
  v24 = (_DWORD *)*((_QWORD *)v12 + 124);
  v92 = *(_QWORD *)(v14 + 48);
  v25 = *(_DWORD *)v14;
  v75 = v24;
  memset_0(v24, 0, 4 * v25 + 8);
  for ( i = v71; ; i = ++v71 )
  {
    if ( i >= *((_DWORD *)v12 + 254) )
    {
      *(_DWORD *)(v23 + 4) = 0;
      v43 = -1;
      *v24 = -1;
      PpmUnlockProcessors(v12 + 336, v12 + 336);
      goto LABEL_57;
    }
    v29 = i;
    if ( PpmIdleVetoBias )
      goto LABEL_47;
    v30 = *((_QWORD *)v12 + 128);
    if ( *(_BYTE *)(v30 + 24LL * i + 1) )
      break;
    v24 = v75;
LABEL_47:
    LODWORD(v38) = -2;
LABEL_48:
    v24[v29 + 2] = v38;
    v23 = (__int64)(v12 + 1032);
  }
  v31 = *(unsigned int *)(v30 + 24LL * i + 4);
  if ( PpmDripsStateIndex == -1
    || (unsigned int)v31 < PpmDripsStateIndex
    || !(unsigned __int8)PpmCheckPreConditionsForDeepSleep(a1, v26, v27) )
  {
    v32 = 1;
    if ( v68 )
      v15 = 1;
    v33 = 0;
  }
  else
  {
    if ( !v68 )
      v15 = 1;
    v33 = (dword_140E2705C != 0) + 1;
  }
  v68 = v33;
  if ( v15 )
  {
    v15 = 0;
    LOBYTE(v32) = v33 != 0;
    PpmEstimateIdleDuration(a1, v33, v32, *v74, v76, (__int64)&v82, (__int64)&v83, (__int64)&v72, (__int64)&v70, v69);
    v81 = v82;
    v67 = v70;
    v80 = v83;
  }
  v34 = v81;
  v35 = v77;
  v36 = v74;
  *(_DWORD *)(v23 + 4) = 0;
  v62 = *v36;
  v64 = -1;
  v37 = PpmIdleCheckCoordinatedStateEligibility(a1, v35, 0, v34, v62, v31, v31, (__int64)&v64, v23, 0LL);
  v38 = v37;
  if ( !*(_BYTE *)(v73 + 8) && !v37 && *(_QWORD *)(v73 + 16) )
    v38 = (unsigned int)guard_dispatch_icall_no_overrides(v89, v64);
  PpmIdleUpdateSelectionStatistics(v38, 1032 * v31 + v92 + 88);
  v40 = 448 * v31;
  if ( v38 == 0xFFFFFFFFLL || (v91 = *(_QWORD *)(v40 + v39 + 64), v38) )
  {
    if ( v38 == 2147483651LL || (v91 = v38, v38 == 2147483656LL) )
    {
      if ( (unsigned __int8)PpmIdleUpdateIdleReevaluationDuration(a1, v38, v67, v80, (__int64)&v87) )
        v15 = 1;
      v76 = v87;
    }
    goto LABEL_45;
  }
  v41 = (unsigned __int8)v12[65];
  if ( !(_BYTE)v41 || v63 )
    goto LABEL_50;
  KeStallExecutionProcessor(10 * v41);
  v63 = 1;
  if ( !(unsigned __int8)PpmIdleRecheckSecondaryProcessors(v40 + v73 + 128) )
  {
    LODWORD(v38) = -1;
LABEL_45:
    PpmIdleRollbackCoordinatedSelection(v12 + 1032, 0LL);
    v24 = v75;
    goto LABEL_48;
  }
  v39 = v73;
LABEL_50:
  v42 = v75;
  v43 = -1;
  *v90 = 1;
  *v42 = v31;
  v17 = *(_BYTE *)(v40 + v39 + 121) == 0;
  v97 = 2097153LL;
  if ( !v17 )
    v43 = v31;
  memset_0(v98, 0, 0x100uLL);
  if ( RtlSubtractAffinityEx(
         (struct _KAFFINITY_EX *)(v12 + 336),
         (struct _KAFFINITY_EX *)(v40 + v73 + 128),
         (__int64)&v97) )
  {
    PpmUnlockProcessors(v12 + 336, &v97);
  }
  v45 = v79;
  v46 = v68;
  LODWORD(v47) = (_DWORD)v79;
LABEL_92:
  v57 = 1;
  if ( *v90 )
  {
    LOBYTE(v44) = 1;
    PpmIdleSetSynchronizationState(a1 + 34972, v44);
  }
  if ( v42 )
  {
    v58 = v71;
    v42[1] = v71;
    if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x15u) )
    {
      v84 = v42;
      v85 = 4 * v58 + 8;
      v86 = 0;
      EtwTraceKernelEvent((int)&v84, v57, 0x40200000u, 4670, 1538);
    }
  }
  if ( v45 )
  {
    v45[1] = v47;
    if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x15u) )
    {
      v84 = v45;
      v85 = 4 * v47 + 8;
      v86 = 0;
      EtwTraceKernelEvent((int)&v84, 1, 0x40200000u, 4669, 1538);
    }
  }
  v59 = v67;
  if ( v63 )
    v59 = v67 | 2;
  *((_WORD *)v12 + 28) |= v59;
  v12[7] = v88;
  v12[6] = BYTE1(v88);
  *((_QWORD *)v12 + 1) = v76;
  *((_QWORD *)v12 + 87) = v80;
  *((_QWORD *)v12 + 86) = v81;
  v12[717] = v72;
  *v93 = v64;
  v60 = (_QWORD *)v96;
  *v94 = v43;
  *v95 = v46;
  result = v91;
  *v60 = v91;
  return result;
}
