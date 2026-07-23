/*
 * XREFs of KiChooseTargetProcessor @ 0x1402370C0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140228920 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x14022A160 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiSelectIdleProcessor @ 0x14022A240 (KiSelectIdleProcessor.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x14022A5C4 (KiFindRankBiasedIdleSmtSet.c)
 *     KiReduceAffinityToRankListMinimums @ 0x14022B4C0 (KiReduceAffinityToRankListMinimums.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x140230F44 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiIsIsolationUnitIdleByHandle @ 0x1402367F0 (KiIsIsolationUnitIdleByHandle.c)
 *     KiSelectCandidateProcessor @ 0x140236870 (KiSelectCandidateProcessor.c)
 *     KiTryLocalThreadSchedule @ 0x140238D30 (KiTryLocalThreadSchedule.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeEnumerateNextNodeInSystem @ 0x140452D80 (KeEnumerateNextNodeInSystem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiChooseTargetProcessor(
        __int64 a1,
        __int64 a2,
        struct _KAFFINITY_EX *a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rax
  struct _KAFFINITY_EX *v6; // rdi
  unsigned int v7; // r14d
  __int64 v8; // r10
  unsigned __int8 v9; // si
  __int64 v10; // r15
  int v11; // r14d
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rbx
  _BYTE *v17; // rax
  unsigned int v18; // ecx
  unsigned __int64 *v19; // r14
  __int64 v20; // r15
  unsigned __int64 v21; // rdi
  unsigned int v22; // esi
  unsigned __int64 v23; // rcx
  __int64 *v24; // r8
  unsigned int v25; // r9d
  int v26; // edx
  __int64 result; // rax
  unsigned int k; // ecx
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // r15
  __int64 v33; // rax
  __int64 SchedulerAssist; // r8
  unsigned __int16 v35; // ax
  unsigned __int16 v36; // si
  unsigned __int16 v37; // cx
  __int64 v38; // rax
  int v39; // r12d
  int v40; // ecx
  _QWORD *v41; // rbx
  __int64 v42; // rdx
  int v43; // r14d
  __int64 v44; // rbx
  __int64 v45; // rax
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rbx
  char v49; // al
  unsigned __int8 v50; // r10
  unsigned __int8 v51; // cl
  __int64 v52; // rdx
  unsigned __int8 v53; // r9
  unsigned __int64 v54; // rax
  char v55; // cl
  unsigned __int64 v56; // rax
  int v57; // edx
  __int64 v58; // rax
  struct _KAFFINITY_EX *v59; // r10
  unsigned int v60; // edi
  __int64 v61; // r13
  __int64 v62; // rax
  unsigned __int64 v63; // r12
  unsigned __int64 v64; // rsi
  unsigned __int8 *v65; // rdx
  int v66; // ebx
  __int64 v67; // rdi
  unsigned int v68; // ebx
  int v69; // r11d
  int v70; // ecx
  __int64 v71; // rdx
  unsigned __int8 *v72; // r10
  unsigned __int8 v73; // r9
  __int64 v74; // rcx
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned __int8 *v78; // rax
  __int64 v79; // r10
  __int64 v80; // rax
  __int64 v81; // r12
  __int64 v82; // r15
  __int64 v83; // rax
  unsigned __int64 v84; // rbx
  unsigned __int64 v85; // rdi
  __int64 v86; // rbx
  __int64 v87; // rax
  char v88; // cl
  unsigned __int64 v89; // rax
  int v90; // edx
  __int64 v91; // rax
  unsigned __int16 Count; // di
  __int64 v93; // rax
  struct _KAFFINITY_EX *v94; // r14
  __int64 v95; // r13
  __int64 v96; // rcx
  __int64 v97; // rsi
  __int64 v98; // rax
  __int64 v99; // rax
  unsigned __int16 i; // cx
  __int64 v101; // rsi
  __int64 v102; // r13
  unsigned __int16 m; // cx
  __int64 v104; // r15
  unsigned int v105; // r9d
  __int64 v106; // rdx
  unsigned __int8 *v107; // r14
  unsigned __int8 v108; // r10
  unsigned __int8 *v109; // rdi
  int v110; // ecx
  __int64 v111; // rdx
  unsigned int v112; // edi
  unsigned __int64 v113; // rbx
  _BYTE *v114; // rax
  __int64 v115; // rcx
  __int64 *v116; // r15
  __int64 v117; // r12
  volatile signed __int32 *v118; // rsi
  unsigned int v119; // r14d
  unsigned __int64 v120; // rcx
  __int64 *v121; // r9
  unsigned int v122; // r10d
  int v123; // r11d
  int IsIsolationUnitIdleByHandle; // ecx
  __int64 v125; // rsi
  _DWORD *v126; // rdi
  __int64 v127; // rdx
  unsigned __int64 v128; // rdx
  __int64 v129; // rcx
  unsigned __int64 v130; // rsi
  __int64 v131; // rdi
  __int64 v132; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v134; // ecx
  unsigned int v135; // eax
  unsigned int v136; // r14d
  int v137; // r13d
  __int16 v138; // si
  __int64 v139; // rax
  __int64 v140; // rdi
  int v141; // r15d
  struct _KAFFINITY_EX *v142; // r10
  unsigned int v143; // edx
  int v144; // ecx
  unsigned __int8 *v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rax
  _BYTE *v148; // rax
  __int64 v149; // rdx
  unsigned __int64 *v150; // r8
  char v151; // al
  int v152; // r14d
  __int64 v153; // rax
  unsigned __int64 v154; // rbx
  unsigned __int64 v155; // rdi
  __int64 v156; // rbx
  char v157; // al
  char v158; // cl
  unsigned __int64 v159; // rax
  int v160; // edx
  __int64 v161; // rax
  __int64 v162; // rdx
  unsigned int v163; // esi
  struct _KAFFINITY_EX *v164; // r10
  __int64 v165; // rcx
  __int64 v166; // rdi
  __int64 v167; // rax
  __int64 v168; // rax
  int v169; // r14d
  int v170; // esi
  __int64 v171; // rax
  unsigned __int64 v172; // rbx
  unsigned __int64 v173; // rdi
  __int64 v174; // rbx
  char v175; // al
  __int64 v176; // rdi
  char v177; // cl
  unsigned __int64 v178; // rax
  int v179; // edx
  __int64 v180; // rax
  __int64 v181; // rcx
  unsigned __int16 v182; // r13
  __int64 v183; // rdx
  unsigned int v184; // esi
  struct _KAFFINITY_EX *v185; // r10
  unsigned __int32 v186; // eax
  __int64 v187; // rdx
  unsigned __int32 v188; // ett
  __int64 v189; // rcx
  __int64 v190; // rdi
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // rcx
  __int64 v195; // r12
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rax
  unsigned __int16 n; // cx
  __m128 v200; // xmm0
  unsigned __int64 v201; // r13
  unsigned int v202; // r14d
  __int64 v203; // rsi
  int v204; // eax
  __int64 v205; // rax
  unsigned __int16 j; // cx
  __int64 v207; // rax
  __int64 v208; // rcx
  char v209; // al
  char v210; // al
  char RankBiasedIdleSmtSet; // al
  __int64 v212; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v213; // [rsp+30h] [rbp-D0h]
  int v214; // [rsp+34h] [rbp-CCh]
  int v215; // [rsp+38h] [rbp-C8h] BYREF
  int v216; // [rsp+3Ch] [rbp-C4h]
  int v217; // [rsp+40h] [rbp-C0h]
  struct _KAFFINITY_EX *v218; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v219; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v220; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v221; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v222; // [rsp+68h] [rbp-98h]
  __int64 v223; // [rsp+70h] [rbp-90h]
  __int64 v224; // [rsp+78h] [rbp-88h] BYREF
  __int64 v225; // [rsp+80h] [rbp-80h] BYREF
  __int64 v226; // [rsp+88h] [rbp-78h]
  __int64 v227; // [rsp+90h] [rbp-70h]
  __int64 v228; // [rsp+98h] [rbp-68h]
  __int64 v229; // [rsp+A0h] [rbp-60h]
  __int64 v230; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v231; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v232; // [rsp+C0h] [rbp-40h]
  unsigned __int16 v233; // [rsp+C2h] [rbp-3Eh]
  int v234; // [rsp+C4h] [rbp-3Ch]
  _QWORD v235[33]; // [rsp+C8h] [rbp-38h] BYREF
  struct _KAFFINITY_EX v236; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v237[64]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v238[64]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE v239[64]; // [rsp+360h] [rbp+260h] BYREF
  _BYTE v240[128]; // [rsp+3A0h] [rbp+2A0h] BYREF

  v5 = *(unsigned int *)(a2 + 588);
  v6 = a3;
  v7 = *(_DWORD *)(a2 + 120);
  v8 = a2;
  v9 = a5;
  v225 = a4;
  v10 = KiProcessorBlock[v5];
  v11 = (v7 >> 1) & 1;
  v218 = a3;
  v214 = v11;
  v216 = v11;
  v228 = a2;
  v222 = a1;
  v223 = v10;
  v217 = 0;
  v215 = a5;
LABEL_2:
  v12 = 0LL;
  while ( 1 )
  {
    v13 = *(unsigned int *)(v8 + 536);
    LODWORD(v13) = v13 & 0x7FFFFFFF;
    v14 = KiProcessorBlock[v13];
    v220 = (_QWORD *)KiTryLocalThreadSchedule(a1, v14, v8, (_DWORD)v6, (__int64)&v215);
    v15 = (unsigned __int64)v220;
    if ( v220 )
      goto LABEL_4;
    if ( (KiVelocityFlags & 0x800000) != 0 )
      break;
    memset_0(&v236.8, 0, sizeof(v236.8));
    v81 = *(_QWORD *)(v14 + 192);
    v82 = *(_QWORD *)(v10 + 192);
    *(_QWORD *)&v236.Count = 2097153LL;
    memset_0(&v236.8, 0, sizeof(v236.8));
    RtlpCopyAffinityEx(&v236, v236.Size, v6);
    if ( v81 == v82 )
      v12 = (_QWORD *)v14;
    v220 = v12;
    memset_0(v240, 0, 0x40uLL);
    v83 = *(unsigned __int16 *)(v82 + 136);
    if ( (unsigned __int16)v83 >= v6->Count )
      v84 = 0LL;
    else
      v84 = v6->Bitmap[v83];
    v85 = *(_QWORD *)(v82 + 8);
    v86 = v85 & *(_QWORD *)(v82 + 8LL * v11 + 16) & v84;
    v224 = v86;
    if ( !v86 )
    {
      SchedulerAssist = v223;
      v44 = 0LL;
      goto LABEL_128;
    }
    if ( (*(_BYTE *)(v82 + 184) & 1) != 0 )
    {
      if ( !v9 || (RankBiasedIdleSmtSet = KiFindRankBiasedIdleSmtSet(v82, &v224), v86 = v224, !RankBiasedIdleSmtSet) )
      {
        if ( (v86 & *(_QWORD *)(v82 + 24)) != 0 )
        {
          if ( v9 && (unsigned int)__popcnt(v85) < KiPerfIsoEnabled )
          {
            SchedulerAssist = v223;
            v44 = 0LL;
            goto LABEL_128;
          }
          v86 &= *(_QWORD *)(v82 + 24);
        }
        else
        {
          if ( v9 )
          {
            SchedulerAssist = v223;
            v44 = 0LL;
LABEL_128:
            v91 = *(unsigned __int16 *)(v82 + 136);
            Count = v236.Count;
            if ( v236.Count > (unsigned __int16)v91 )
            {
              v236.Bitmap[v91] &= ~*(_QWORD *)(v82 + 128);
              Count = v236.Count;
            }
            if ( v81 == v82 || (v93 = *(unsigned __int16 *)(v81 + 136), (unsigned __int16)v93 >= Count) )
            {
              v94 = v218;
            }
            else
            {
              v94 = v218;
              if ( v236.Bitmap[v93] )
              {
                v212 = v14;
                v95 = v222;
                v44 = KiSelectIdleProcessor(v218, v222, SchedulerAssist, v81, v212, (char *)&v215);
                if ( !v44 )
                {
                  v214 = v216;
                  goto LABEL_135;
                }
LABEL_416:
                v11 = v216;
                v214 = v216;
                goto LABEL_81;
              }
            }
            v95 = v222;
LABEL_135:
            v96 = *(unsigned __int16 *)(v81 + 136);
            if ( Count > (unsigned __int16)v96 )
            {
              v236.Bitmap[v96] &= ~*(_QWORD *)(v81 + 128);
              Count = v236.Count;
            }
            v97 = *(_QWORD *)(v95 + 192);
            if ( v97 != v82 && v97 != v81 )
            {
              v98 = *(unsigned __int16 *)(v97 + 136);
              if ( (unsigned __int16)v98 < Count )
              {
                if ( v236.Bitmap[v98] )
                {
                  v44 = KiSelectIdleProcessor(v94, v95, v223, v97, v95, (char *)&v215);
                  if ( v44 )
                    goto LABEL_416;
                  v214 = v216;
                }
              }
            }
            v99 = *(unsigned __int16 *)(v97 + 136);
            if ( Count > (unsigned __int16)v99 )
            {
              v236.Bitmap[v99] &= ~*(_QWORD *)(v97 + 128);
              Count = v236.Count;
            }
            for ( i = 0; ; ++i )
            {
              if ( i >= Count )
                goto LABEL_82;
              if ( v236.Bitmap[i] )
                break;
            }
            v221 = 0LL;
            v230 = 0LL;
            LOWORD(v230) = *(_WORD *)(v82 + 138);
            v231 = 0LL;
            v200 = KeEnumerateNextNodeInSystem(&v230, &v221);
            v201 = v221;
            HIDWORD(v231) = v200.m128_i32[3];
            v202 = 0;
            DWORD2(v231) = 0;
            *(_QWORD *)&v231 = v221;
            while ( 1 )
            {
              v221 = 0LL;
              v203 = 0LL;
              while ( v202 >= *(_DWORD *)(v201 + 48) )
              {
                KeEnumerateNextNodeInSystem(&v230, &v221);
                if ( v204 < 0 )
                {
                  v202 = DWORD2(v231);
                  v201 = v231;
                  goto LABEL_389;
                }
                v201 = v221;
                v231 = v221;
                v202 = 0;
              }
              v207 = *(_QWORD *)(v201 + 32);
              v208 = v202++;
              DWORD2(v231) = v202;
              v203 = *(_QWORD *)(v207 + 8 * v208);
LABEL_389:
              if ( !v203 )
                goto LABEL_416;
              if ( v203 != v82 && v203 != v81 && v203 != *(_QWORD *)(v222 + 192) )
              {
                v44 = KiSelectIdleProcessor(v218, v222, v223, v203, 0LL, (char *)&v215);
                if ( v44 )
                  goto LABEL_416;
                v205 = *(unsigned __int16 *)(v203 + 136);
                if ( Count > (unsigned __int16)v205 )
                {
                  v236.Bitmap[v205] &= ~*(_QWORD *)(v203 + 128);
                  Count = v236.Count;
                }
                for ( j = 0; ; ++j )
                {
                  if ( j >= Count )
                  {
                    v214 = v216;
                    goto LABEL_82;
                  }
                  if ( v236.Bitmap[j] )
                    break;
                }
              }
            }
          }
          if ( *(_QWORD *)(v222 + 192) == v82 )
          {
            KiReduceByEffectiveIdleSmtSet(v222, &v224);
            v86 = v224;
          }
        }
      }
    }
    if ( (*(_BYTE *)(v82 + 184) & 4) != 0 )
    {
      RtlCopyVolatileMemory(v240, (const void *)(v82 + 576), 0x40uLL);
      v86 = KiReduceAffinityToRankListMinimums(v86, (__int64)v240);
    }
    SchedulerAssist = v223;
    if ( (v86 & *(_QWORD *)(v223 + 200)) != 0 )
    {
      v44 = v223;
    }
    else
    {
      v15 = (unsigned __int64)v220;
      if ( v220 && (v86 & v220[25]) != 0 )
        goto LABEL_4;
      v87 = *(_QWORD *)(v223 + 36512) & v86;
      if ( v87
        || v220 && (v87 = v220[4564] & v86) != 0
        || (v87 = *(_QWORD *)(v223 + 36536) & v86) != 0
        || v220 && (v87 = v220[4564] & v86) != 0
        || (KiCacheAwareScheduling & 1) != 0
        && ((v87 = *(_QWORD *)(v223 + 36528) & v86) != 0 || v220 && (v87 = v220[4566] & v86) != 0) )
      {
        v86 = v87;
      }
      v88 = *(_BYTE *)(v223 + 209);
      _BitScanForward64(&v89, __ROR8__(v86, v88));
      v90 = *(unsigned __int8 *)(v223 + 208) << 6;
      LODWORD(v219) = 0;
      v44 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                             + v90
                             + (((_BYTE)v89 + v88) & 0x3Fu))];
    }
    if ( !v44 )
      goto LABEL_128;
LABEL_81:
    v220 = (_QWORD *)v44;
    v15 = v44;
    if ( !v44 )
      goto LABEL_82;
LABEL_4:
    v221 = v15;
    v16 = v11 ^ (v15 ^ v11) & 0xFFFFFFFFFFFFFFFEuLL;
    v219 = v16;
    if ( v11 )
    {
      if ( v11 != 1 )
        goto LABEL_16;
      v17 = *(_BYTE **)(v15 + 36504);
      v18 = (unsigned __int8)*v17;
      v19 = (unsigned __int64 *)(v17 + 8);
      if ( !*v17 )
      {
        v11 = v214;
        goto LABEL_16;
      }
    }
    else
    {
      v19 = &v221;
      v18 = 1;
    }
    v20 = v18;
    do
    {
      v21 = *v19;
      v22 = 0;
LABEL_9:
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 48), 0LL) )
      {
        while ( 1 )
        {
          if ( (++v22 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
          {
            if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
            {
LABEL_30:
              HvlNotifyLongSpinWait(v22);
              goto LABEL_12;
            }
            for ( k = 0; k < (unsigned int)KeNumberProcessors_0; ++k )
            {
              v29 = KiProcessorBlock[k];
              if ( (*(_BYTE *)(v29 + 35) & 1) != 0 )
              {
                v30 = *(_QWORD *)(v29 + 36600);
                if ( !v30 || !*(_BYTE *)(v30 + 65) || !*(_BYTE *)(v30 + 64) )
                  goto LABEL_30;
              }
            }
          }
          _mm_pause();
LABEL_12:
          if ( !*(_QWORD *)(v21 + 48) )
            goto LABEL_9;
        }
      }
      ++v19;
      --v20;
    }
    while ( v20 );
    v15 = (unsigned __int64)v220;
    v11 = v214;
LABEL_16:
    v23 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
    v24 = 0LL;
    v221 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
    v25 = 0;
    if ( (v16 & 1) != 0 )
    {
      if ( (v16 & 1) == 1 )
      {
        v78 = *(unsigned __int8 **)(v23 + 36504);
        v25 = *v78;
        v24 = (__int64 *)(v78 + 8);
      }
      v26 = 1;
      if ( v25 )
      {
        v79 = v25;
        do
        {
          v80 = *v24++;
          v26 = ((*(_BYTE *)(v80 + 35) & 1) == 0) & (unsigned __int8)v26;
          --v79;
        }
        while ( v79 );
        v15 = (unsigned __int64)v220;
      }
    }
    else
    {
      v26 = (*(_BYTE *)(v23 + 35) & 1) == 0;
    }
    if ( v26 )
    {
      if ( (*(_BYTE *)(v15 + 35) & 0x10) == 0 )
      {
        result = v225;
        *(_QWORD *)v225 = v16;
        *(_QWORD *)(result + 8) = 1LL;
        return result;
      }
LABEL_442:
      KiReleasePrcbLocksForIsolationUnit(&v219);
      v8 = v228;
      v6 = v218;
      v9 = v215;
      v10 = v223;
      LODWORD(a1) = v222;
      goto LABEL_2;
    }
    v221 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v16 & 1) == 0 )
    {
      v150 = &v221;
      LODWORD(v149) = 1;
      do
      {
LABEL_250:
        v149 = (unsigned int)(v149 - 1);
        _InterlockedAnd64((volatile signed __int64 *)(v150[v149] + 48), 0LL);
      }
      while ( (_DWORD)v149 );
      v8 = v228;
      v6 = v218;
      v9 = v215;
      v10 = v223;
      LODWORD(a1) = v222;
      goto LABEL_2;
    }
    v148 = *(_BYTE **)((v16 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
    LODWORD(v149) = (unsigned __int8)*v148;
    v150 = (unsigned __int64 *)(v148 + 8);
    v8 = v228;
    v12 = 0LL;
    v6 = v218;
    v9 = v215;
    v10 = v223;
    LODWORD(a1) = v222;
    if ( *v148 )
      goto LABEL_250;
  }
  memset_0(v235, 0, 0x100uLL);
  v31 = *(_QWORD *)(v14 + 192);
  v32 = *(_QWORD *)(v10 + 192);
  v226 = v31;
  v33 = *(unsigned __int16 *)(v32 + 138);
  v221 = *(_QWORD *)(v222 + 192);
  v227 = KeNodeBlock[v33];
  v224 = KeNodeBlock[*(unsigned __int16 *)(v31 + 138)];
  v229 = KeNodeBlock[*(unsigned __int16 *)(v221 + 138)];
  v233 = 32;
  memset_0(v235, 0, 0x100uLL);
  v35 = v233;
  v36 = v6->Count;
  if ( v6->Count > v233 )
    v36 = v233;
  v213 = v36;
  v37 = 0;
  v232 = v36;
  v234 = 0;
  if ( v36 )
  {
    memmove(v235, &v6->8, 8LL * v36);
    v35 = v233;
    v37 = v36;
    v36 = v232;
    v213 = v232;
  }
  if ( v37 < v35 )
  {
    do
    {
      v38 = v37++;
      v235[v38] = 0LL;
    }
    while ( v37 < v233 );
    v36 = v232;
    v213 = v232;
  }
  v39 = v11;
  v40 = v11;
  if ( v32 == v31 )
    v41 = (_QWORD *)v14;
  else
    v41 = 0LL;
  v42 = v227;
  v220 = v41;
  if ( (*(_BYTE *)(v227 + 10) & 8) != 0 )
  {
    v43 = 1;
  }
  else
  {
    v43 = 0;
    v220 = v41;
  }
  v44 = 0LL;
  if ( v43 <= v40 )
    goto LABEL_49;
  while ( 1 )
  {
    v216 = v43;
    v214 = v43;
LABEL_49:
    if ( v32 )
      break;
LABEL_74:
    v59 = v218;
    v60 = 0;
    while ( v60 < *(_DWORD *)(v42 + 48) )
    {
      v74 = v60++;
      v75 = *(_QWORD *)(*(_QWORD *)(v42 + 32) + 8 * v74);
      if ( v75 != v32 )
      {
        v76 = *(unsigned __int16 *)(v75 + 136);
        if ( (unsigned __int16)v76 < v59->Count )
        {
          if ( v59->Bitmap[v76] )
          {
            v44 = KiSelectIdleProcessor(v59, v222, v223, v75, 0LL, (char *)&v215);
            if ( v44 )
              goto LABEL_80;
            v77 = *(unsigned __int16 *)(v75 + 136);
            v42 = v227;
            v59 = v218;
            if ( v213 > (unsigned __int16)v77 )
            {
              v235[v77] &= ~*(_QWORD *)(v75 + 128);
              v213 = v232;
            }
          }
        }
      }
    }
    if ( v43 <= v39 )
      goto LABEL_80;
    v36 = v213;
    --v43;
    v6 = v218;
  }
  memset_0(v237, 0, sizeof(v237));
  v45 = *(unsigned __int16 *)(v32 + 136);
  if ( (unsigned __int16)v45 >= v6->Count )
    v46 = 0LL;
  else
    v46 = v6->Bitmap[v45];
  v47 = *(_QWORD *)(v32 + 8);
  v48 = v47 & *(_QWORD *)(v32 + 8LL * v214 + 16) & v46;
  v219 = v48;
  if ( !v48 )
  {
    v44 = 0LL;
    goto LABEL_72;
  }
  if ( (*(_BYTE *)(v32 + 184) & 1) != 0 )
  {
    v49 = v215;
    if ( !(_BYTE)v215 )
      goto LABEL_55;
    v151 = KiFindRankBiasedIdleSmtSet(v32, &v219);
    v48 = v219;
    if ( !v151 )
    {
      v49 = v215;
LABEL_55:
      if ( (v48 & *(_QWORD *)(v32 + 24)) != 0 )
      {
        if ( v49 && (unsigned int)__popcnt(v47) < KiPerfIsoEnabled )
        {
          v44 = 0LL;
          goto LABEL_72;
        }
        v48 &= *(_QWORD *)(v32 + 24);
      }
      else
      {
        if ( v49 )
        {
          v44 = 0LL;
LABEL_72:
          v58 = *(unsigned __int16 *)(v32 + 136);
          v42 = v227;
          if ( v36 > (unsigned __int16)v58 )
          {
            v235[v58] &= ~*(_QWORD *)(v32 + 128);
            v213 = v232;
          }
          goto LABEL_74;
        }
        v127 = *(_QWORD *)(v222 + 192);
        if ( v127 == v32 )
        {
          v128 = v48 & *(_QWORD *)(v127 + 16);
          v129 = *(_QWORD *)(v222 + 36512) & ~*(_QWORD *)(v222 + 200);
          v130 = v129 & v48;
          if ( (v129 & v48) != 0
            && (v128 & v129) == v129
            && (*(_BYTE *)(v222 + 14524) & 1) == 0
            && !*(_DWORD *)(v222 + 33752) )
          {
            v131 = *(_QWORD *)(v222 + 8);
            if ( !*(_BYTE *)(v222 + 32) )
            {
              _disable();
              KiUpdateTotalCyclesCurrentThread(v222, *(_QWORD *)(v222 + 8), 0LL);
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
              if ( SchedulerAssist )
              {
                _m_prefetchw((const void *)SchedulerAssist);
                v186 = *(_DWORD *)SchedulerAssist;
                do
                {
                  v187 = v186;
                  LODWORD(v187) = v186 & 0xFFDFFFFF;
                  v188 = v186;
                  v186 = _InterlockedCompareExchange(
                           (volatile signed __int32 *)SchedulerAssist,
                           v186 & 0xFFDFFFFF,
                           v186);
                }
                while ( v188 != v186 );
                if ( (v186 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb, v187, SchedulerAssist, v132);
              }
              _enable();
            }
            v134 = *(_DWORD *)(v131 + 80);
            v135 = *(_DWORD *)(v131 + 84);
            if ( v134 >= v135 || v135 - v134 < KiShortExecutionCycles )
              v48 = v130;
          }
          v36 = v213;
        }
      }
    }
  }
  if ( (*(_BYTE *)(v32 + 184) & 4) != 0 )
  {
    RtlCopyVolatileMemory(v237, (const void *)(v32 + 576), 0x40uLL);
    v50 = -1;
    SchedulerAssist = 0LL;
    v51 = 0;
    v52 = 0LL;
    do
    {
      if ( (v48 & (1LL << v51)) != 0 )
      {
        v53 = v237[v52];
        if ( v53 == v50 )
        {
          SchedulerAssist |= 1LL << v52;
        }
        else if ( v53 < v50 )
        {
          v50 = v237[v52];
          SchedulerAssist = 1LL << v51;
        }
      }
      ++v51;
      ++v52;
    }
    while ( v51 < 0x40u );
    v36 = v213;
    v48 = SchedulerAssist;
  }
  v214 = v39;
  if ( (v48 & *(_QWORD *)(v223 + 200)) != 0 )
  {
    v44 = v223;
  }
  else
  {
    v15 = (unsigned __int64)v220;
    if ( v220 && (v48 & v220[25]) != 0 )
    {
      v11 = v39;
      v216 = v39;
      goto LABEL_4;
    }
    v54 = *(_QWORD *)(v223 + 36512) & v48;
    if ( v54
      || v220 && (v54 = v220[4564] & v48) != 0
      || (v54 = *(_QWORD *)(v223 + 36536) & v48) != 0
      || v220 && (v54 = v220[4564] & v48) != 0
      || (KiCacheAwareScheduling & 1) != 0
      && ((v54 = *(_QWORD *)(v223 + 36528) & v48) != 0 || v220 && (v54 = v220[4566] & v48) != 0) )
    {
      v48 = v54;
    }
    v55 = *(_BYTE *)(v223 + 209);
    _BitScanForward64(&v56, __ROR8__(v48, v55));
    v57 = *(unsigned __int8 *)(v223 + 208) << 6;
    LODWORD(v219) = 0;
    v44 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                           + v57
                           + (((_BYTE)v56 + v55) & 0x3Fu))];
  }
  if ( !v44 )
    goto LABEL_72;
LABEL_80:
  v214 = v39;
  v11 = v39;
  v216 = v39;
  if ( v44 )
    goto LABEL_81;
  v101 = v226;
  if ( v32 == v226 )
    goto LABEL_151;
  v44 = 0LL;
  v152 = (KiVelocityFlags & 0x800000) != 0 && (*(_BYTE *)(v224 + 10) & 8) != 0;
  if ( v152 > v39 )
  {
LABEL_265:
    v216 = v152;
    v214 = v152;
  }
  if ( v101 )
  {
    memset_0(v238, 0, sizeof(v238));
    v153 = *(unsigned __int16 *)(v101 + 136);
    if ( (unsigned __int16)v153 >= v218->Count )
      v154 = 0LL;
    else
      v154 = v218->Bitmap[v153];
    v155 = *(_QWORD *)(v101 + 8);
    v156 = v155 & *(_QWORD *)(v101 + 8LL * v214 + 16) & v154;
    v220 = (_QWORD *)v156;
    if ( !v156 )
    {
      v44 = 0LL;
      goto LABEL_282;
    }
    if ( (*(_BYTE *)(v101 + 184) & 1) != 0 )
    {
      v157 = v215;
      if ( !(_BYTE)v215 )
        goto LABEL_272;
      v209 = KiFindRankBiasedIdleSmtSet(v101, &v220);
      v156 = (__int64)v220;
      if ( !v209 )
      {
        v157 = v215;
LABEL_272:
        if ( (v156 & *(_QWORD *)(v101 + 24)) != 0 )
        {
          if ( v157 && (unsigned int)__popcnt(v155) < KiPerfIsoEnabled )
          {
            v44 = 0LL;
            goto LABEL_282;
          }
          v156 &= *(_QWORD *)(v101 + 24);
        }
        else
        {
          if ( v157 )
          {
            v44 = 0LL;
            goto LABEL_282;
          }
          if ( *(_QWORD *)(v222 + 192) == v101 )
          {
            KiReduceByEffectiveIdleSmtSet(v222, &v220);
            v156 = (__int64)v220;
          }
        }
      }
    }
    if ( (*(_BYTE *)(v101 + 184) & 4) != 0 )
    {
      RtlCopyVolatileMemory(v238, (const void *)(v101 + 576), 0x40uLL);
      v156 = KiReduceAffinityToRankListMinimums(v156, (__int64)v238);
    }
    if ( (v156 & *(_QWORD *)(v14 + 200)) != 0 )
    {
      v44 = v14;
    }
    else
    {
      if ( (*(_QWORD *)(v14 + 36512) & v156) != 0 )
      {
        v156 &= *(_QWORD *)(v14 + 36512);
      }
      else if ( (*(_QWORD *)(v14 + 36536) & v156) != 0 )
      {
        v156 &= *(_QWORD *)(v14 + 36536);
      }
      else if ( (KiCacheAwareScheduling & 1) != 0 && (*(_QWORD *)(v14 + 36528) & v156) != 0 )
      {
        v156 &= *(_QWORD *)(v14 + 36528);
      }
      v158 = *(_BYTE *)(v14 + 209);
      _BitScanForward64(&v159, __ROR8__(v156, v158));
      v160 = *(unsigned __int8 *)(v14 + 208) << 6;
      LODWORD(v219) = 0;
      v44 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                             + v160
                             + (((_BYTE)v159 + v158) & 0x3Fu))];
    }
    if ( !v44 )
    {
LABEL_282:
      v161 = *(unsigned __int16 *)(v101 + 136);
      if ( v213 > (unsigned __int16)v161 )
      {
        v235[v161] &= ~*(_QWORD *)(v101 + 128);
        v213 = v232;
      }
      goto LABEL_284;
    }
  }
  else
  {
LABEL_284:
    v162 = v224;
    v163 = 0;
    v164 = v218;
    while ( v163 < *(_DWORD *)(v162 + 48) )
    {
      v165 = v163++;
      v166 = *(_QWORD *)(*(_QWORD *)(v162 + 32) + 8 * v165);
      if ( v166 != v226 )
      {
        v167 = *(unsigned __int16 *)(v166 + 136);
        if ( (unsigned __int16)v167 < v164->Count )
        {
          if ( v164->Bitmap[v167] )
          {
            v44 = KiSelectIdleProcessor(v164, v222, v223, v166, 0LL, (char *)&v215);
            if ( v44 )
              goto LABEL_288;
            v168 = *(unsigned __int16 *)(v166 + 136);
            v162 = v224;
            v164 = v218;
            if ( v213 > (unsigned __int16)v168 )
            {
              v235[v168] &= ~*(_QWORD *)(v166 + 128);
              v213 = v232;
            }
          }
        }
      }
    }
    if ( v152 > v39 )
    {
      v101 = v226;
      --v152;
      goto LABEL_265;
    }
LABEL_288:
    v101 = v226;
  }
  v214 = v39;
  v11 = v39;
  v216 = v39;
  if ( v44 )
    goto LABEL_81;
LABEL_151:
  v102 = v221;
  if ( v221 == v32 || v221 == v101 )
    goto LABEL_152;
  v44 = 0LL;
  v169 = (KiVelocityFlags & 0x800000) != 0 && (*(_BYTE *)(v229 + 10) & 8) != 0;
  if ( v169 <= v39 )
  {
    v170 = v214;
  }
  else
  {
    v170 = v169;
    v216 = v169;
  }
  while ( 2 )
  {
    if ( v102 )
    {
      memset_0(v239, 0, sizeof(v239));
      v171 = *(unsigned __int16 *)(v102 + 136);
      if ( (unsigned __int16)v171 >= v218->Count )
        v172 = 0LL;
      else
        v172 = v218->Bitmap[v171];
      v173 = *(_QWORD *)(v102 + 8);
      v174 = v173 & *(_QWORD *)(v102 + 8LL * v170 + 16) & v172;
      v220 = (_QWORD *)v174;
      if ( v174 )
      {
        if ( (*(_BYTE *)(v102 + 184) & 1) == 0 )
          goto LABEL_313;
        v175 = v215;
        if ( !(_BYTE)v215 )
          goto LABEL_310;
        v210 = KiFindRankBiasedIdleSmtSet(v102, &v220);
        v174 = (__int64)v220;
        if ( v210 )
          goto LABEL_313;
        v175 = v215;
LABEL_310:
        if ( (v174 & *(_QWORD *)(v102 + 24)) != 0 )
        {
          if ( v175 && (unsigned int)__popcnt(v173) < KiPerfIsoEnabled )
          {
            v44 = 0LL;
            goto LABEL_321;
          }
          v174 &= *(_QWORD *)(v102 + 24);
LABEL_313:
          v176 = v222;
        }
        else
        {
          if ( v175 )
          {
            v44 = 0LL;
            goto LABEL_321;
          }
          v176 = v222;
          if ( *(_QWORD *)(v222 + 192) == v102 )
          {
            KiReduceByEffectiveIdleSmtSet(v222, &v220);
            v174 = (__int64)v220;
          }
        }
        if ( (*(_BYTE *)(v102 + 184) & 4) != 0 )
        {
          RtlCopyVolatileMemory(v239, (const void *)(v102 + 576), 0x40uLL);
          v174 = KiReduceAffinityToRankListMinimums(v174, (__int64)v239);
        }
        if ( (v174 & *(_QWORD *)(v176 + 200)) != 0 )
        {
          v44 = v176;
        }
        else
        {
          if ( (*(_QWORD *)(v176 + 36512) & v174) != 0 )
          {
            v174 &= *(_QWORD *)(v176 + 36512);
          }
          else if ( (*(_QWORD *)(v176 + 36536) & v174) != 0 )
          {
            v174 &= *(_QWORD *)(v176 + 36536);
          }
          else if ( (KiCacheAwareScheduling & 1) != 0 && (*(_QWORD *)(v176 + 36528) & v174) != 0 )
          {
            v174 &= *(_QWORD *)(v176 + 36528);
          }
          v177 = *(_BYTE *)(v176 + 209);
          _BitScanForward64(&v178, __ROR8__(v174, v177));
          v179 = *(unsigned __int8 *)(v176 + 208) << 6;
          LODWORD(v219) = 0;
          v44 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                                 + v179
                                 + (((_BYTE)v178 + v177) & 0x3Fu))];
        }
        if ( v44 )
          break;
      }
      else
      {
        v44 = 0LL;
      }
LABEL_321:
      v180 = *(unsigned __int16 *)(v102 + 136);
      v181 = *(_QWORD *)(v102 + 128);
      v182 = v213;
      if ( v213 > (unsigned __int16)v180 )
      {
        v235[v180] &= ~v181;
        v182 = v232;
        v213 = v232;
      }
    }
    else
    {
      v182 = v213;
    }
    v183 = v229;
    v184 = 0;
    v185 = v218;
    while ( v184 < *(_DWORD *)(v183 + 48) )
    {
      v189 = v184++;
      v190 = *(_QWORD *)(*(_QWORD *)(v183 + 32) + 8 * v189);
      if ( v190 != v221 )
      {
        v191 = *(unsigned __int16 *)(v190 + 136);
        if ( (unsigned __int16)v191 < v185->Count )
        {
          if ( v185->Bitmap[v191] )
          {
            v44 = KiSelectIdleProcessor(v185, v222, v223, v190, 0LL, (char *)&v215);
            if ( v44 )
              goto LABEL_338;
            v192 = *(unsigned __int16 *)(v190 + 136);
            v183 = v229;
            v185 = v218;
            if ( v182 > (unsigned __int16)v192 )
            {
              v235[v192] &= ~*(_QWORD *)(v190 + 128);
              v182 = v232;
              v213 = v232;
            }
          }
        }
      }
    }
    if ( v169 > v39 )
    {
      v102 = v221;
      v170 = --v169;
      v216 = v169;
      continue;
    }
    break;
  }
LABEL_338:
  v214 = v39;
  v11 = v39;
  v216 = v39;
  if ( v44 )
    goto LABEL_81;
LABEL_152:
  SchedulerAssist = v213;
  for ( m = 0; ; ++m )
  {
    if ( m >= v213 )
      goto LABEL_81;
    if ( v235[m] )
      break;
  }
  v136 = *(unsigned __int16 *)(v32 + 138);
  v137 = 0;
  v221 = 0LL;
  v138 = 0;
LABEL_213:
  while ( 2 )
  {
    v139 = v136;
    if ( v138 )
    {
      if ( ++v137 == (unsigned __int16)KeNumberNodes )
        v139 = 0xFFFFFFFFLL;
      else
        v139 = *(unsigned int *)(qword_140E2D810 + 4LL * (v137 + v136 * (unsigned __int16)KeNumberNodes));
    }
    else
    {
      v138 = 1;
    }
    if ( (_DWORD)v139 == -1 )
    {
      v11 = v214;
      goto LABEL_81;
    }
    v140 = KeNodeBlock[v139];
    if ( !v140 || v140 == v227 || v140 == v229 || v140 == v224 )
      continue;
    break;
  }
  v44 = 0LL;
  v141 = (KiVelocityFlags & 0x800000) != 0 && (*(_BYTE *)(v140 + 10) & 8) != 0;
  if ( v141 > v214 )
LABEL_223:
    v216 = v141;
  v142 = v218;
  v143 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v143 >= *(_DWORD *)(v140 + 48) )
      {
        v144 = v214;
        if ( v141 <= v214 )
          goto LABEL_377;
        --v141;
        goto LABEL_223;
      }
      v193 = *(_QWORD *)(v140 + 32);
      v194 = v143++;
      LODWORD(v219) = v143;
      v195 = *(_QWORD *)(v193 + 8 * v194);
      if ( v195 )
      {
        v196 = *(unsigned __int16 *)(v195 + 136);
        if ( (unsigned __int16)v196 < v142->Count )
        {
          if ( v142->Bitmap[v196] )
            break;
        }
      }
    }
    v197 = KiSelectIdleProcessor(v142, v222, v223, v195, 0LL, (char *)&v215);
    SchedulerAssist = v213;
    v44 = v197;
    if ( v197 )
      break;
    v198 = *(unsigned __int16 *)(v195 + 136);
    v143 = v219;
    v142 = v218;
    if ( v213 > (unsigned __int16)v198 )
    {
      v235[v198] &= ~*(_QWORD *)(v195 + 128);
      SchedulerAssist = v232;
      v213 = v232;
    }
  }
  v144 = v214;
LABEL_377:
  v216 = v144;
  v15 = v44;
  v220 = (_QWORD *)v44;
  if ( v44 )
  {
    v11 = v214;
    goto LABEL_4;
  }
  for ( n = 0; n < (unsigned __int16)SchedulerAssist; ++n )
  {
    if ( v235[n] )
      goto LABEL_213;
  }
LABEL_82:
  v61 = v223;
  v62 = *(unsigned __int8 *)(v223 + 208);
  if ( (unsigned __int16)v62 >= v218->Count )
    v63 = 0LL;
  else
    v63 = v218->Bitmap[v62];
  v64 = v63 & *(_QWORD *)(v223 + 36480);
  v221 = v63;
  if ( ((v64 - 1) & v64) != 0 )
  {
    v65 = *(unsigned __int8 **)(v223 + 36488);
    v66 = v65[704];
    v67 = v65[705];
    RtlCopyVolatileMemory(&v240[v67 + 64], v65 + 576, v65[704]);
    v68 = v67 + v66;
    v69 = -1;
    SchedulerAssist = *(unsigned __int8 *)(v228 + 195);
    if ( (KiHeteroSchedulerOptionsMask & 2) != 0 && (KiHeteroSchedulerOptions & 2) == 0 )
      goto LABEL_95;
    v70 = *(unsigned __int8 *)(v228 + 516);
    if ( v70 != 5 && ((v70 - 2) & 0xFFFFFFFB) != 0 && ((_BYTE)v70 != 1 || KiDisableMediumQosGrouping) )
      goto LABEL_95;
    if ( !KeHeteroSystemQos )
      goto LABEL_95;
    v104 = *(_QWORD *)(*(_QWORD *)(v61 + 192) + 328LL);
    if ( (v104 & v64) == 0 )
      goto LABEL_95;
    v105 = v67;
    if ( (unsigned int)v67 >= v68 )
      goto LABEL_167;
    v106 = __ROL8__(1LL, v67);
    v107 = &v240[v67 + 64];
    do
    {
      if ( (v104 & v106 & v64) != 0 )
      {
        v108 = *v107;
        if ( (*v107 & 0x7F) < (char)SchedulerAssist )
        {
          SchedulerAssist = v108;
          v69 = v105;
          LOBYTE(SchedulerAssist) = v108 & 0x7F;
        }
      }
      ++v105;
      v106 = __ROL8__(v106, 1);
      ++v107;
    }
    while ( v105 < v68 );
    if ( v69 >= 0 )
    {
LABEL_166:
      v61 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * *(unsigned __int8 *)(v61 + 208)].Flink
                             + v69)];
    }
    else
    {
LABEL_95:
      if ( (unsigned int)v67 < v68 )
      {
        v71 = __ROL8__(1LL, v67);
        v72 = &v240[v67 + 64];
        do
        {
          if ( (v71 & v64) != 0 )
          {
            v73 = *v72;
            if ( (*v72 & 0x7F) < (char)SchedulerAssist )
            {
              SchedulerAssist = v73;
              v69 = v67;
              LOBYTE(SchedulerAssist) = v73 & 0x7F;
            }
          }
          LODWORD(v67) = v67 + 1;
          v71 = __ROL8__(v71, 1);
          ++v72;
        }
        while ( (unsigned int)v67 < v68 );
        if ( v69 >= 0 )
          goto LABEL_166;
      }
    }
  }
LABEL_167:
  v11 = v214;
  v109 = *(unsigned __int8 **)(v61 + 56);
  v110 = v214;
  v111 = *(_QWORD *)(v61 + 192);
  v226 = v111;
  v224 = v61;
  v112 = *v109;
  if ( v214 < (int)(v112 >> 7) )
    v110 = v112 >> 7;
  v113 = v110 ^ (v110 ^ (unsigned __int64)v61) & 0xFFFFFFFFFFFFFFFEuLL;
  v219 = v113;
  if ( v110 )
  {
    if ( v110 == 1 )
    {
      v114 = *(_BYTE **)(v61 + 36504);
      v115 = (unsigned __int8)*v114;
      v116 = (__int64 *)(v114 + 8);
      if ( *v114 )
        goto LABEL_172;
    }
  }
  else
  {
    v116 = &v224;
    v115 = 1LL;
LABEL_172:
    v117 = (unsigned int)v115;
    do
    {
      v118 = (volatile signed __int32 *)(*v116 + 48);
      v119 = 0;
      while ( _interlockedbittestandset64(v118, 0LL) )
      {
        do
        {
          if ( (++v119 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v115, v111, SchedulerAssist) )
          {
            HvlNotifyLongSpinWait(v119);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)v118 );
      }
      ++v116;
      --v117;
    }
    while ( v117 );
    v111 = v226;
    v63 = v221;
    v11 = v214;
  }
  if ( ((**(_BYTE **)(v61 + 56) ^ v112) & 0x80u) != 0 )
  {
    KiAcquirePrcbLocksForPreemptionAttemptSlowPath(v61, v11, &v219);
    v111 = v226;
    v113 = v219;
  }
  if ( a5 )
  {
    IsIsolationUnitIdleByHandle = KiIsIsolationUnitIdleByHandle(&v219);
    goto LABEL_186;
  }
  if ( (v63 & *(_QWORD *)(v111 + 8LL * v11 + 16) & *(_QWORD *)(v111 + 8)) != 0 )
    goto LABEL_442;
  if ( (*(_BYTE *)(v61 + 35) & 0x10) == 0 )
  {
    v120 = v113 & 0xFFFFFFFFFFFFFFFEuLL;
    v121 = 0LL;
    v221 = v113 & 0xFFFFFFFFFFFFFFFEuLL;
    v122 = 0;
    if ( (v113 & 1) != 0 )
    {
      if ( (v113 & 1) == 1 )
      {
        v145 = *(unsigned __int8 **)(v120 + 36504);
        v122 = *v145;
        v121 = (__int64 *)(v145 + 8);
      }
      v123 = 1;
      if ( v122 )
      {
        v146 = v122;
        do
        {
          v147 = *v121++;
          v123 = ((*(_BYTE *)(v147 + 35) & 1) == 0) & (unsigned __int8)v123;
          --v146;
        }
        while ( v146 );
      }
    }
    else
    {
      v123 = (*(_BYTE *)(v120 + 35) & 1) == 0;
    }
    if ( v123 )
    {
      v225 = (__int64)&v225;
      __fastfail(0x21u);
    }
  }
  IsIsolationUnitIdleByHandle = 0;
LABEL_186:
  v125 = v225;
  result = 8LL;
  v126 = (_DWORD *)(v225 + 8);
  *(_DWORD *)(v225 + 8) = IsIsolationUnitIdleByHandle;
  if ( (*(_BYTE *)(v61 + 35) & 0x10) != 0 )
  {
    KiReleasePrcbLocksForIsolationUnit(&v219);
    KiSelectCandidateProcessor(v61, v228, -1LL, v11, &v219);
    result = KiIsIsolationUnitIdleByHandle(&v219);
    v113 = v219;
    *v126 = result != 0;
  }
  *(_QWORD *)v125 = v113;
  *(_DWORD *)(v125 + 12) = 0;
  return result;
}
