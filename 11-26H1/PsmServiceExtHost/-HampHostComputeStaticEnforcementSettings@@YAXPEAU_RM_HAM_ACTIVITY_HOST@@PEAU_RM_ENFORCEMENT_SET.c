/*
 * XREFs of ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180009FAC
 * Callers:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800085A0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostNeedsEnforcementUpdate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009E30 (-HampHostNeedsEnforcementUpdate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016330 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180017954 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 * Callees:
 *     RmpActivityImportanceMergeVectors @ 0x18000B490 (RmpActivityImportanceMergeVectors.c)
 *     ?HampSessionGetLogoffInProgress@@YAEPEAU_HAM_SESSION@@@Z @ 0x18000C380 (-HampSessionGetLogoffInProgress@@YAEPEAU_HAM_SESSION@@@Z.c)
 *     ?HampUserGetLogoffInProgress@@YAEPEAU_HAM_USER@@@Z @ 0x18000C470 (-HampUserGetLogoffInProgress@@YAEPEAU_HAM_USER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000CBD8 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000CC30 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostSnapshotPackageDebugState@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180028D50 (-HampHostSnapshotPackageDebugState@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F9C0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800426C0 (-RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180047800 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180055A80 (-RmpImportanceToRequiredExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180055B90 (-RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?HampActAddCommitThresholds@@YAXPEAU_HAM_ACTIVITY@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x180055FE0 (-HampActAddCommitThresholds@@YAXPEAU_HAM_ACTIVITY@@PEAU_RM_COMMIT_THRESHOLDS@@@Z.c)
 *     ?HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z @ 0x180056C70 (-HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z.c)
 *     ?HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180057940 (-HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x18005D41C (-RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?HampActGetBamWindowState@@YA?AW4_BAM_PROCESS_WINDOW_STATE@@PEAU_HAM_ACTIVITY@@@Z @ 0x180065EB8 (-HampActGetBamWindowState@@YA-AW4_BAM_PROCESS_WINDOW_STATE@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostGetTerminateCategory@@YA?AW4_HAM_TERMINATE_REASON@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006EBBC (-HampHostGetTerminateCategory@@YA-AW4_HAM_TERMINATE_REASON@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x18008073C (-RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z.c)
 */

void __fastcall HampHostComputeStaticEnforcementSettings(
        __m128i *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2,
        struct _RM_COMMIT_THRESHOLDS *a3,
        struct _RM_COMMIT_THRESHOLDS *a4,
        struct _HAM_ACTIVITY **a5)
{
  int *v5; // r14
  struct _HAM_ACTIVITY *v6; // r12
  __int64 v8; // rax
  unsigned __int64 v10; // r13
  struct _HAM_ACTIVITY *FirstActivity; // rax
  __int64 v12; // rdx
  int v13; // r11d
  unsigned int v14; // ebx
  struct _HAM_ACTIVITY *v15; // rdi
  int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int8 v19; // r11
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rdi
  int v26; // eax
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  int TerminateCategory; // eax
  int v32; // r8d
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdx
  unsigned __int16 v36; // r10
  unsigned __int16 v37; // di
  _BYTE *v38; // rbx
  unsigned __int16 v39; // ax
  _BYTE *v40; // r9
  char v41; // al
  __int64 v42; // rcx
  char v43; // r8
  char v44; // dl
  char v45; // al
  __m128i v46; // xmm1
  unsigned __int64 v47; // rdx
  __int64 v48; // rcx
  __m128i v49; // xmm1
  __m128i v50; // xmm1
  __m128i v51; // xmm2
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  struct _RM_COMMIT_THRESHOLDS *v55; // rax
  struct _RM_COMMIT_THRESHOLDS *v56; // rax
  __m128i v57; // xmm0
  int v58; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v59; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v60; // [rsp+30h] [rbp-38h]
  __m128i v61; // [rsp+38h] [rbp-30h] BYREF
  __m128i v62; // [rsp+48h] [rbp-20h]
  unsigned int v63; // [rsp+B0h] [rbp+48h] BYREF
  int v64; // [rsp+B8h] [rbp+50h]
  struct _RM_COMMIT_THRESHOLDS *v65; // [rsp+C0h] [rbp+58h]
  struct _RM_COMMIT_THRESHOLDS *v66; // [rsp+C8h] [rbp+60h]

  v66 = a4;
  v65 = a3;
  v58 = 0;
  v5 = (int *)((char *)a2 + 24);
  v6 = 0LL;
  *(_OWORD *)a2 = 0LL;
  v63 = 0;
  *((_OWORD *)a2 + 1) = 0LL;
  v64 = 0;
  *((_DWORD *)a2 + 6) = 1;
  v8 = a1[49].m128i_i64[1];
  v61 = 0LL;
  LOWORD(v63) = 1;
  v62 = 0LL;
  v10 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v8 + 88) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
      - 392;
  v59 = v10;
  *((_DWORD *)a2 + 6) = RmHamHostGetJobType((struct _RM_HAM_ACTIVITY_HOST *)a1) != 2;
  v60 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(a1[49].m128i_i64[1] + 88) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
  v14 = v63;
  v15 = FirstActivity;
  if ( FirstActivity )
  {
    v16 = 0;
    do
    {
      v17 = *((_QWORD *)v15 + 64);
      if ( v17 == a1[50].m128i_i64[1] || !v17 && *((_BYTE *)v15 + 562) == 2 && *((_BYTE *)v15 + 563) >= 5u )
      {
        v16 += v13;
        if ( (*((_BYTE *)v15 + 480) & 0x20) != 0 )
        {
          if ( !v6 || (int)HampActCompareForMaxCommit(v15, v6, 0) > 0 )
            v6 = v15;
        }
        else
        {
          HampActAddCommitThresholds(v15, (struct _RM_COMMIT_THRESHOLDS *)&v61);
        }
      }
      LOBYTE(v12) = 3;
      if ( (unsigned int)HampActIsStartedOrReachedPendState(v15, v12) || *((_QWORD *)v15 + 64) == a1[50].m128i_i64[1] )
      {
        v20 = *((unsigned int *)v15 + 106);
        if ( ((unsigned __int8)v20 & v19) != 0 )
          v14 = RmpActivityImportanceMergeVectors(v20, v14);
        LOBYTE(v18) = 3;
        if ( (unsigned int)HampActIsStartedOrReachedPendState(v15, v18) )
        {
          v21 = *((_DWORD *)v15 + 120) & 3;
          if ( v21 <= *v5 )
            v21 = *v5;
          *v5 = v21;
        }
      }
      LOBYTE(v18) = 5;
      if ( (unsigned int)HampActIsStartedOrReachedPendState(v15, v18) )
        *((_BYTE *)a2 + 28) = *((_BYTE *)a2 + 28) & 0xFE ^ v13 & (*((_BYTE *)a2 + 28) | (*((_DWORD *)v15 + 120) >> 3));
      if ( (*(_BYTE *)(v60 - 2132) & 0x10) != 0 )
      {
        HampActGetBamWindowState(v15);
        if ( !(unsigned int)HampActIsStartedOrReachedPendState(v15, v22)
          && *((_QWORD *)v15 + 64) == a1[50].m128i_i64[1]
          && v23 >= v13 )
        {
          v23 = v13;
        }
        if ( ((*((unsigned __int8 *)a2 + 28) >> 4) & 7) > v23 )
          LOBYTE(v23) = (*((_BYTE *)a2 + 28) >> 4) & 7;
        *((_BYTE *)a2 + 28) ^= (*((_BYTE *)a2 + 28) ^ (16 * v23)) & 0x70;
      }
      v12 = *((_QWORD *)v15 + 12);
      v24 = *((_QWORD *)v15 + 10);
      v15 = 0LL;
      if ( v12 != v24 + 608 )
        v15 = (struct _HAM_ACTIVITY *)(v12 - 96);
    }
    while ( v15 );
    v64 = v16;
    v5 = (int *)((char *)a2 + 24);
    v10 = v59;
    v63 = v14;
  }
  v25 = *(_QWORD *)(*(_QWORD *)(a1[49].m128i_i64[1] + 88) + 88LL);
  if ( HampSessionGetLogoffInProgress(*(struct _HAM_SESSION **)(v25 + 160))
    || HampUserGetLogoffInProgress((struct _HAM_USER *)v25) )
  {
    v26 = 1;
    if ( *v5 > 1 )
      v26 = *v5;
    *v5 = v26;
    v5 = (int *)((char *)a2 + 24);
  }
  HampManagerAcquireLockShared((struct _HOST_ACTIVITY_MANAGER *)v10);
  v27 = *(_DWORD *)(v10 + 660);
  HampManagerReleaseLockShared((struct _HOST_ACTIVITY_MANAGER *)v10);
  if ( v27 )
  {
    RmHamHostGetCurrentState((struct _RM_HAM_ACTIVITY_HOST *)a1, (union _RM_OPTIMIZATION_STATE *)&v58, 0LL);
    v28 = (unsigned int)*v5;
    if ( (v58 & 0x100) != 0 )
    {
      v29 = 1200LL;
      if ( a1 )
        v29 = (__int64)&a1[71].m128i_i64[1];
      v30 = *(_DWORD *)v29;
      if ( *(_DWORD *)v29 <= (int)v28 )
        v30 = *v5;
      *v5 = v30;
    }
    else
    {
      if ( (int)v28 < 1 )
        v28 = 1LL;
      *v5 = v28;
      v5 = (int *)((char *)a2 + 24);
    }
  }
  TerminateCategory = HampHostGetTerminateCategory(a1, v28, 1LL);
  if ( TerminateCategory == 1024
    || TerminateCategory == 1536
    || TerminateCategory == 4096
    || TerminateCategory == 4352
    || TerminateCategory == 6400 )
  {
    v33 = *v5;
    v5 = (int *)((char *)a2 + 24);
    if ( v33 < v32 )
      v33 = v32;
    *((_DWORD *)a2 + 6) = v33;
  }
  v34 = RmpImportanceToRequiredExecutionSpeed(v14, (unsigned int)*v5);
  if ( (int)v35 <= v34 )
    LODWORD(v35) = RmpImportanceToRequiredExecutionSpeed(v14, v35);
  v37 = v63;
  v38 = (char *)a2 + 28;
  v39 = v63;
  *v5 = v35;
  v40 = (char *)a2 + 28;
  *((_BYTE *)a2 + 28) ^= (*((_BYTE *)a2 + 28) ^ (2 * (v39 >> 7))) & 2;
  if ( (v37 & v36) == 0 )
    goto LABEL_62;
  v63 = 0;
  LODWORD(v59) = 0;
  RmHamHostGetCurrentState(
    (struct _RM_HAM_ACTIVITY_HOST *)a1,
    (union _RM_OPTIMIZATION_STATE *)&v63,
    (union _RM_OPTIMIZATION_STATE *)&v59);
  if ( (v63 & 0x10) != 0 )
  {
    v40 = (char *)a2 + 28;
LABEL_62:
    v41 = 0;
    goto LABEL_63;
  }
  if ( (v59 & 0x10) != 0 )
  {
    v40 = (char *)a2 + 28;
    goto LABEL_62;
  }
  v41 = 8;
  v40 = (char *)a2 + 28;
LABEL_63:
  v42 = 1204LL;
  v43 = v41 | *v38 & 0xF7;
  *v38 = v43;
  v44 = v43;
  if ( a1 )
    v42 = (__int64)&a1[71].m128i_i64[1] + 4;
  if ( (*(_BYTE *)v42 & 8) != 0 && (a1[41].m128i_i64[1] & 0x2000000000000LL) != 0 )
  {
    v44 = v43 | 8;
    *v40 = v43 | 8;
  }
  if ( (v37 & 0x400) == 0 || (v45 = 4, (a1[41].m128i_i64[1] & 0x4000000000000LL) != 0) )
    v45 = 0;
  *v40 = v45 | v44 & 0xFB;
  if ( v6 )
    HampActAddCommitThresholds(v6, (struct _RM_COMMIT_THRESHOLDS *)&v61);
  if ( !v64 )
  {
    v46 = a1[56];
    v61 = a1[55];
    v62 = v46;
  }
  if ( (*(_BYTE *)(v60 - 2132) & 0x20) != 0 && HampHostSnapshotPackageDebugState((struct _RM_HAM_ACTIVITY_HOST *)a1) )
    RmpCommitThresholdsAddValue((struct _RM_COMMIT_THRESHOLDS *)&v61, 0xFFFFFFFFFFFFFFFFuLL);
  v47 = a1[59].m128i_u64[1];
  if ( v62.m128i_i64[0] < v47 && v62.m128i_i64[0] )
    RmpCommitThresholdsScaleToTarget((struct _RM_COMMIT_THRESHOLDS *)&v61, v47, (struct _RM_COMMIT_THRESHOLDS *)&v61);
  if ( HampHostIsElasticRecipient((struct _RM_HAM_ACTIVITY_HOST *)a1) )
  {
    v48 = *((_QWORD *)HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1) + 9);
    v49 = *(__m128i *)(v48 + 88);
    v61 = *(__m128i *)(v48 + 72);
    v62 = v49;
  }
  RmpCommitThresholdsSubtractValue((struct _RM_COMMIT_THRESHOLDS *)&v61, a1[60].m128i_u64[0]);
  RmpCommitThresholdsSubtractValue((struct _RM_COMMIT_THRESHOLDS *)&v61, a1[60].m128i_u64[1]);
  v50 = v62;
  v51 = v61;
  v52 = _mm_srli_si128(v62, 8).m128i_u64[0];
  v53 = v62.m128i_i64[0];
  if ( v52 <= a1[53].m128i_i64[1] )
    v52 = a1[53].m128i_u64[1];
  v54 = a1[54].m128i_u64[0];
  v62.m128i_i64[1] = v52;
  *((_QWORD *)a2 + 2) = v52;
  if ( v53 <= v54 )
    v53 = v54;
  v62.m128i_i64[0] = v53;
  v55 = v65;
  if ( v65 )
  {
    *(__m128i *)v65 = v51;
    *((__m128i *)v55 + 1) = v50;
  }
  v56 = v66;
  if ( v66 )
  {
    v57 = v62;
    *(__m128i *)v66 = v51;
    *((__m128i *)v56 + 1) = v57;
  }
  if ( a5 )
    *a5 = v6;
}
