/*
 * XREFs of PpmIdleSelectStates @ 0x1402F70FC
 * Callers:
 *     PoIdle @ 0x1402F6ED0 (PoIdle.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     PpmUnlockProcessors @ 0x1402F9270 (PpmUnlockProcessors.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     PoCopyDeepIdleMask @ 0x140452B10 (PoCopyDeepIdleMask.c)
 *     PpmComputeIdleDurationHint @ 0x1404F5730 (PpmComputeIdleDurationHint.c)
 *     PpmEstimateIdleDuration @ 0x1404F57EC (PpmEstimateIdleDuration.c)
 *     PpmIdleEvaluateConstraints @ 0x140501844 (PpmIdleEvaluateConstraints.c)
 *     PpmIdleSetSynchronizationState @ 0x140505384 (PpmIdleSetSynchronizationState.c)
 *     Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline @ 0x140533AE4 (Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x140604214 (PpmCheckPreConditionsForDeepSleep.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140604774 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleCheckProcessorStateEligibility @ 0x140604A7C (PpmIdleCheckProcessorStateEligibility.c)
 *     PpmIdleRecheckSecondaryProcessors @ 0x14060506C (PpmIdleRecheckSecondaryProcessors.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x140605104 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleUpdateIdleReevaluationDuration @ 0x1406052F8 (PpmIdleUpdateIdleReevaluationDuration.c)
 *     PpmIdleUpdateSelectionStatistics @ 0x14060539C (PpmIdleUpdateSelectionStatistics.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PpmIdleSelectStates(
        __int64 a1,
        char a2,
        _QWORD *a3,
        __int64 *a4,
        BOOL *a5,
        unsigned int *a6,
        int *a7,
        __int64 a8,
        bool *a9)
{
  char *v13; // rdi
  int v14; // r12d
  char v15; // r15
  char v16; // al
  bool v17; // zf
  unsigned __int64 v18; // rdx
  ULONG v19; // r9d
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  int v22; // ecx
  __int64 v23; // r14
  int v24; // eax
  __int64 v25; // rbx
  _DWORD *v26; // rcx
  int v27; // eax
  __int64 v28; // r12
  int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r14
  int v33; // eax
  int v34; // r9d
  int v35; // edx
  __int64 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r11
  __int64 v40; // rsi
  int v41; // eax
  __int64 v42; // rax
  _DWORD *v43; // rax
  int v44; // r15d
  __int64 v45; // rdx
  __int64 v46; // r8
  _DWORD *v47; // rbx
  BOOL v48; // r12d
  int v49; // esi
  _DWORD *v50; // rax
  int v51; // eax
  bool v52; // si
  __int64 v53; // r14
  BOOL v54; // r8d
  unsigned int v55; // ebx
  int v56; // ecx
  __int64 v57; // rbx
  __int64 v58; // r11
  __int64 v59; // rcx
  bool v60; // al
  int v61; // r10d
  _DWORD *v62; // rcx
  unsigned int v63; // edx
  __int16 v64; // ax
  _QWORD *v65; // rcx
  __int64 result; // rax
  __int64 v67; // [rsp+20h] [rbp-E0h]
  char v68; // [rsp+50h] [rbp-B0h]
  unsigned int v69; // [rsp+54h] [rbp-ACh] BYREF
  char v70; // [rsp+58h] [rbp-A8h]
  char v71; // [rsp+59h] [rbp-A7h]
  int v72; // [rsp+5Ch] [rbp-A4h]
  int v73; // [rsp+60h] [rbp-A0h]
  int v74; // [rsp+64h] [rbp-9Ch]
  int v75; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v76; // [rsp+6Ch] [rbp-94h]
  __int64 v77; // [rsp+70h] [rbp-90h]
  int v78; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v79; // [rsp+80h] [rbp-80h]
  __int64 v80; // [rsp+88h] [rbp-78h]
  int v81; // [rsp+90h] [rbp-70h]
  int v82; // [rsp+94h] [rbp-6Ch]
  __int64 *v83; // [rsp+98h] [rbp-68h]
  _DWORD *v84; // [rsp+A0h] [rbp-60h]
  __int64 v85; // [rsp+A8h] [rbp-58h]
  __int64 v86; // [rsp+B0h] [rbp-50h]
  __int64 v87; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v88; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD *v89; // [rsp+C8h] [rbp-38h] BYREF
  int v90; // [rsp+D0h] [rbp-30h]
  int v91; // [rsp+D4h] [rbp-2Ch]
  __int64 v92; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v93; // [rsp+E0h] [rbp-20h]
  __int64 v94; // [rsp+E8h] [rbp-18h]
  bool *v95; // [rsp+F0h] [rbp-10h]
  __int64 v96; // [rsp+F8h] [rbp-8h]
  __int64 v97; // [rsp+100h] [rbp+0h]
  unsigned int *v98; // [rsp+108h] [rbp+8h]
  int *v99; // [rsp+110h] [rbp+10h]
  BOOL *v100; // [rsp+118h] [rbp+18h]
  __int64 v101; // [rsp+120h] [rbp+20h]
  __int64 v102; // [rsp+130h] [rbp+30h] BYREF
  char v103[264]; // [rsp+138h] [rbp+38h] BYREF

  v100 = a5;
  v98 = a6;
  v99 = a7;
  v101 = a8;
  v95 = a9;
  v83 = a4;
  memset_0(&v102, 0, 0x108uLL);
  v13 = *(char **)(a1 + 34880);
  v14 = 0;
  v89 = *(_DWORD **)(a1 + 34888);
  v73 = 0;
  v15 = 1;
  v94 = *((_QWORD *)v13 + 83);
  v77 = PpmPlatformStates;
  v16 = *v13;
  v17 = *v13 == 0;
  v93 = 0LL;
  v69 = 0;
  v79 = 0LL;
  v70 = v17;
  v76 = 0;
  v84 = 0LL;
  v82 = 0;
  v72 = 0;
  v75 = 0;
  v86 = 0LL;
  v87 = 0LL;
  v85 = 0LL;
  v88 = 0LL;
  v78 = 0;
  v68 = 0;
  v74 = 0;
  v71 = v16;
  *a3 = PpmIdleEvaluateConstraints(a1, a4);
  *((_QWORD *)v13 + 42) = 2097153LL;
  memset_0(v13 + 344, 0, 0x100uLL);
  if ( (unsigned int)Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline() )
  {
    v19 = KeMaximumIncrement;
    v20 = *v83 / (unsigned __int64)KeMaximumIncrement;
    v18 = *v83 % (unsigned __int64)KeMaximumIncrement;
    if ( (_DWORD)v20 == *(_DWORD *)(a1 + 14528) )
      v14 = KeMaximumIncrement * (v20 + 1) - *v83;
    v74 = v14;
  }
  LOBYTE(v19) = a2;
  PpmComputeIdleDurationHint(a1, v18, *v83, v19, v14);
  if ( !a2 || KiClockTimerPerCpuTickScheduling || *(_BYTE *)(a1 + 33) )
  {
    v80 = -1LL;
    v92 = -1LL;
  }
  else
  {
    v80 = PpmPerfQosIdleExpirationTimeout;
    v92 = PpmPerfQosIdleExpirationTimeout;
  }
  v22 = -1;
  if ( *((_QWORD *)v13 + 77) )
    v22 = guard_dispatch_icall_no_overrides(v94, v13 + 672, v21);
  v23 = v77;
  v24 = 0;
  if ( !*(_BYTE *)(a1 + 34969) )
    v24 = v22;
  v81 = v24;
  if ( !v77 )
  {
LABEL_55:
    v51 = *((_DWORD *)v13 + 10);
    v48 = 0;
    v84 = (_DWORD *)*((_QWORD *)v13 + 123);
    v52 = 1;
    memset_0(v84, 0, 4 * v51 + 8);
    v53 = 0LL;
    v96 = *((_QWORD *)v13 + 6);
    while ( 1 )
    {
      if ( (unsigned int)v53 >= *((_DWORD *)v13 + 250) )
      {
        v47 = v84;
        v49 = v82;
        goto LABEL_89;
      }
      LOBYTE(v54) = 1;
      v55 = *(_DWORD *)(*((_QWORD *)v13 + 126) + 24 * v53 + 4);
      v69 = v55;
      if ( !v77
        && v55 == *((_DWORD *)v13 + 10) - 1
        && v13[716]
        && (unsigned __int8)PpmCheckPreConditionsForDeepSleep(a1, v45, 1LL) )
      {
        v17 = !v48;
        v48 = v54;
        if ( v17 )
          v52 = v54;
      }
      else
      {
        if ( v48 )
          v52 = v54;
        v48 = 0;
      }
      if ( v52 )
      {
        v52 = 0;
        PpmEstimateIdleDuration(a1, v48, 0, *v83, v80, (__int64)&v87, (__int64)&v88, (__int64)&v78, (__int64)&v75, v74);
        v56 = v87;
        v72 = v75;
        v85 = v88;
        v86 = v87;
      }
      else
      {
        v56 = v86;
      }
      if ( v55 )
      {
        v57 = PpmIdleCheckProcessorStateEligibility(a1, v81, 0, v56, v55, v70);
        if ( !v57 && *((_QWORD *)v13 + 78) )
          v57 = (unsigned int)guard_dispatch_icall_no_overrides(v94, v69, 0xFFFFFFFFLL);
      }
      else
      {
        v57 = 0LL;
      }
      PpmIdleUpdateSelectionStatistics(v57, &v89[256 * (unsigned __int64)v69 + 20]);
      if ( !v57 )
        break;
      if ( v71 && (v57 == 2147483651LL || v57 == 2147483656LL) )
      {
        v52 = (unsigned __int8)PpmIdleUpdateIdleReevaluationDuration(a1, v57, v72, v85, (__int64)&v92) != 0;
        v80 = v92;
      }
      v84[v53 + 2] = v57;
      v53 = (unsigned int)(v53 + 1);
    }
    v47 = v84;
    v59 = 352 * (v58 + 3);
    *v84 = v58;
    v49 = v53;
    v60 = !v13[v59 + 338] || v77 && !v13[v59 + 337] || v13[v59 + 344];
    *v95 = v60;
LABEL_89:
    v44 = -1;
    goto LABEL_90;
  }
  *((_QWORD *)v13 + 90) = 2097153LL;
  memset_0(v13 + 728, 0, 0x100uLL);
  PoCopyDeepIdleMask(v13 + 720);
  KeAddProcessorAffinityEx((unsigned __int16 *)v13 + 360, *(_DWORD *)(a1 + 36));
  v25 = (__int64)(v13 + 1032);
  v26 = (_DWORD *)*((_QWORD *)v13 + 124);
  v97 = *(_QWORD *)(v23 + 48);
  v27 = *(_DWORD *)v23;
  v79 = v26;
  memset_0(v26, 0, 4 * v27 + 8);
  v28 = 0LL;
  v29 = 1;
  v30 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v28 >= *((_DWORD *)v13 + 254) )
    {
      v50 = v79;
      *(_DWORD *)(v25 + 4) = 0;
      *v50 = -1;
      PpmUnlockProcessors(v13 + 336, v13 + 336, 1LL);
      goto LABEL_55;
    }
    if ( !PpmIdleVetoBias )
    {
      v31 = *((_QWORD *)v13 + 128);
      if ( *(_BYTE *)(v31 + 24 * v28 + 1) )
        break;
    }
    LODWORD(v38) = -2;
    v42 = (unsigned int)v30;
LABEL_47:
    v28 = (unsigned int)(v28 + 1);
    v30 = (unsigned int)(v30 + 1);
    v76 = v30;
    v79[v42 + 2] = v38;
    v25 = (__int64)(v13 + 1032);
  }
  v32 = *(unsigned int *)(v31 + 24 * v28 + 4);
  if ( PpmDripsStateIndex == -1
    || (unsigned int)v32 < PpmDripsStateIndex
    || !(unsigned __int8)PpmCheckPreConditionsForDeepSleep(a1, v30, 1LL) )
  {
    if ( v73 )
      v15 = v29;
    v33 = 0;
  }
  else
  {
    if ( !v73 )
      v15 = v29;
    v33 = v29 + (dword_140E2719C != 0);
  }
  v73 = v33;
  if ( v15 )
  {
    v15 = 0;
    LOBYTE(v29) = v33 != 0;
    PpmEstimateIdleDuration(a1, v33, v29, *v83, v80, (__int64)&v87, (__int64)&v88, (__int64)&v78, (__int64)&v75, v74);
    v86 = v87;
    v72 = v75;
    v85 = v88;
  }
  v34 = v86;
  v35 = v81;
  v36 = v83;
  *(_DWORD *)(v25 + 4) = 0;
  v67 = *v36;
  v69 = -1;
  v37 = PpmIdleCheckCoordinatedStateEligibility(a1, v35, 0, v34, v67, v32, v32, (__int64)&v69, v25, 0LL);
  v38 = v37;
  if ( !*(_BYTE *)(v77 + 8) && !v37 && *(_QWORD *)(v77 + 16) )
    v38 = (unsigned int)guard_dispatch_icall_no_overrides(v94, v69, (unsigned int)v32);
  PpmIdleUpdateSelectionStatistics(v38, 1032 * v32 + v97 + 88);
  v40 = 448 * v32;
  if ( v38 == 0xFFFFFFFFLL || (v96 = *(_QWORD *)(v40 + v39 + 64), v38) )
  {
    if ( v38 == 2147483651LL || (v96 = v38, v38 == 2147483656LL) )
    {
      if ( (unsigned __int8)PpmIdleUpdateIdleReevaluationDuration(a1, v38, v72, v85, (__int64)&v92) )
        v15 = 1;
      v80 = v92;
    }
    goto LABEL_45;
  }
  v41 = (unsigned __int8)v13[65];
  if ( !(_BYTE)v41 || v68 )
    goto LABEL_49;
  KeStallExecutionProcessor(10 * v41);
  v68 = 1;
  if ( !(unsigned __int8)PpmIdleRecheckSecondaryProcessors(v40 + v77 + 128) )
  {
    LODWORD(v38) = -1;
LABEL_45:
    PpmIdleRollbackCoordinatedSelection(v13 + 1032, 0LL);
    LODWORD(v30) = v76;
    v29 = 1;
    v42 = v76;
    goto LABEL_47;
  }
  v39 = v77;
LABEL_49:
  v43 = v79;
  v44 = -1;
  *v95 = 1;
  *v43 = v32;
  v17 = *(_BYTE *)(v40 + v39 + 121) == 0;
  v102 = 2097153LL;
  if ( !v17 )
    v44 = v32;
  memset_0(v103, 0, 0x100uLL);
  if ( RtlSubtractAffinityEx(
         (struct _KAFFINITY_EX *)(v13 + 336),
         (struct _KAFFINITY_EX *)(v40 + v77 + 128),
         (__int64)&v102) )
  {
    PpmUnlockProcessors(v13 + 336, &v102, v46);
  }
  v47 = v84;
  v48 = v73;
  v49 = (int)v84;
LABEL_90:
  v61 = 1;
  if ( *v95 )
  {
    LOBYTE(v45) = 1;
    PpmIdleSetSynchronizationState(a1 + 34972, v45);
  }
  v62 = v79;
  if ( v79 )
  {
    v63 = v76;
    v79[1] = v76;
    if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x15u) )
    {
      v89 = v62;
      v90 = 4 * v63 + 8;
      v91 = 0;
      EtwTraceKernelEvent((int)&v89, v61, 0x40200000u, 4670, 1538);
    }
  }
  if ( v47 )
  {
    v47[1] = v49;
    if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x15u) )
    {
      v89 = v47;
      v90 = 4 * v49 + 8;
      v91 = 0;
      EtwTraceKernelEvent((int)&v89, 1, 0x40200000u, 4669, 1538);
    }
  }
  v64 = v72;
  if ( v68 )
    v64 = v72 | 2;
  *((_WORD *)v13 + 28) |= v64;
  v13[7] = v93;
  v13[6] = BYTE1(v93);
  *((_QWORD *)v13 + 1) = v80;
  *((_QWORD *)v13 + 87) = v85;
  *((_QWORD *)v13 + 86) = v86;
  v13[717] = v78;
  *v98 = v69;
  v65 = (_QWORD *)v101;
  *v99 = v44;
  *v100 = v48;
  result = v96;
  *v65 = v96;
  return result;
}
