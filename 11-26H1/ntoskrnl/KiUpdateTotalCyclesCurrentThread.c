/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x140228920
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KiSetThreadSchedulingGroup @ 0x140203854 (KiSetThreadSchedulingGroup.c)
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x14022A160 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiSelectIdleProcessor @ 0x14022A240 (KiSelectIdleProcessor.c)
 *     KiChooseTargetProcessor @ 0x1402370C0 (KiChooseTargetProcessor.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402398D4 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     PspRevertContainerImpersonation @ 0x14037F6B0 (PspRevertContainerImpersonation.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 *     KiCompleteDirectSwitchThread @ 0x14042C2A8 (KiCompleteDirectSwitchThread.c)
 *     KeSetBasePriorityThread @ 0x14052B1A0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14052EA80 (KeBoostPriorityThread.c)
 *     KiStartDebugAccumulation @ 0x1405F8BC4 (KiStartDebugAccumulation.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     HalRequestSoftwareInterrupt @ 0x14021F9A0 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateThreadHgsFeedback @ 0x140228590 (KiUpdateThreadHgsFeedback.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int128 v3; // rax
  unsigned int v4; // r15d
  __int64 v6; // r14
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r13
  ULONG_PTR v11; // r12
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r9
  signed __int64 v17; // rdx
  char v18; // cl
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int128 v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r10
  int v24; // r8d
  char *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // r9d
  _QWORD *v29; // r8
  unsigned __int64 v30; // rax
  char v31; // bl
  unsigned int *v32; // r12
  __int64 v33; // rax
  __int64 v34; // r10
  __int64 v35; // r9
  unsigned int v36; // ecx
  __int64 v37; // r10
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // r8d
  unsigned int v41; // r9d
  unsigned __int16 *v42; // rdx
  char v43; // r8
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  int v46; // ecx
  __int64 v47; // rax
  unsigned int v48; // ecx
  __int64 v49; // rcx
  unsigned __int64 v50; // rdi
  __int64 v51; // r9
  unsigned __int64 v52; // rbx
  __int64 v53; // r11
  ULONG_PTR v54; // r13
  unsigned __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // r9
  signed __int64 v60; // rsi
  __int64 v61; // r11
  char v62; // cl
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // r8
  unsigned __int64 v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rax
  unsigned int v69; // r8d
  unsigned __int16 *v70; // rdx
  __int64 v71; // rax
  __int64 v72; // r8
  __int64 v73; // r10
  bool v74; // zf
  __int64 v76; // rcx
  _QWORD *i; // rax
  __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // r10
  unsigned int *v81; // r11
  __int64 v82; // r9
  __int64 v83; // rbx
  int v84; // ecx
  _QWORD *v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // r8
  unsigned __int32 v93; // edx
  unsigned __int32 v94; // edx
  unsigned __int32 v95; // edx
  unsigned __int32 v96; // edx
  __int64 v97; // rdi
  unsigned __int64 v98; // r11
  signed __int64 v99; // rax
  int v100; // r10d
  unsigned __int64 v101; // rcx
  __int64 v102; // rdi
  unsigned __int64 v103; // r8
  signed __int64 v104; // rax
  int v105; // r11d
  unsigned __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r8
  _QWORD *v109; // r8
  unsigned __int64 v110; // rdx
  __int64 v111; // r10
  unsigned __int64 v112; // r10
  _QWORD *v113; // r8
  __int64 v114; // rax
  __int64 v115; // r11
  signed __int64 v116; // rsi
  __int64 CounterSafe; // rax
  __int64 v118; // r11
  signed __int64 v119; // rdx
  __int64 v120; // rdi
  unsigned __int64 v121; // r8
  signed __int64 v122; // rax
  int v123; // r10d
  unsigned __int64 v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // rdi
  unsigned __int64 v127; // r10
  signed __int64 v128; // rax
  int v129; // r9d
  unsigned __int64 v130; // rcx
  unsigned __int64 v131; // rdx
  __int64 v132; // r9
  unsigned __int64 v133; // r9
  signed __int32 v134[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v135; // [rsp+30h] [rbp-48h]
  __int64 v136; // [rsp+80h] [rbp+8h]
  __int64 v137; // [rsp+80h] [rbp+8h]
  __int64 v138; // [rsp+80h] [rbp+8h]
  __int64 v139; // [rsp+80h] [rbp+8h]
  __int64 v140; // [rsp+80h] [rbp+8h]
  __int64 v141; // [rsp+80h] [rbp+8h]
  _QWORD *v143; // [rsp+98h] [rbp+20h]

  *((_QWORD *)&v3 + 1) = a2;
  v4 = 0;
  *(_BYTE *)(a1 + 32) = 1;
  v143 = 0LL;
  v6 = *((_QWORD *)&v3 + 1);
  v7 = 0LL;
  v8 = 0LL;
  v9 = -1LL;
  v10 = 1LL;
  if ( *(_BYTE *)(a1 + 34524) )
  {
    v11 = HalpPerformanceCounter;
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    {
      v12 = 10000000LL;
      if ( HalpTimerReferencePage )
      {
        while ( 1 )
        {
          v90 = *(unsigned int *)(v11 + 188);
          if ( (unsigned int)v90 < HalpTimerQueryCounterHandlerCount )
            break;
          v96 = 0;
          if ( HalpTimerQueryCounterHandlerCount )
          {
            v113 = &unk_140FBB7E8;
            do
            {
              if ( v11 == *v113 )
                break;
              ++v96;
              v113 += 2;
            }
            while ( v96 < HalpTimerQueryCounterHandlerCount );
          }
          if ( v96 >= HalpTimerQueryCounterHandlerCount
            || (_DWORD)v90 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 188), v96, v90) )
          {
            KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v11, *(int *)(v11 + 228));
          }
        }
        v91 = (*(_DWORD *)(v11 + 224) & 0x10000) != 0
            ? *(_QWORD *)(v11 + 72) + *(_DWORD *)(v11 + 80) * KeGetPcr()->Prcb.Number
            : *(_QWORD *)(v11 + 72);
        v7 = (((unsigned __int64)((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v90])(v91)
             * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
           + MEMORY[0xFFFFF780000003B8];
      }
      else
      {
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          CounterSafe = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
          v118 = *(_QWORD *)(v11 + 208);
          v119 = CounterSafe;
        }
        else
        {
          do
          {
            v140 = *(_QWORD *)(v11 + 208);
            do
            {
              v120 = *(_QWORD *)(v11 + 200);
              v121 = HalpTimerQueryCounterSafe(v11);
              _InterlockedOr(v134, 0);
              v122 = *(_QWORD *)(v11 + 200);
            }
            while ( v120 != v122 );
            v118 = v140;
          }
          while ( v140 != *(_QWORD *)(v11 + 208) );
          v123 = *(_DWORD *)(v11 + 220);
          v124 = v120 ^ v121;
          if ( _bittest64((const __int64 *)&v124, (unsigned __int8)(v123 - 1)) )
          {
            if ( v123 == 64 )
              v132 = -1LL;
            else
              v132 = (1LL << v123) - 1;
            v133 = v120 & v132;
            v119 = (v121 | v120 ^ v133) + (1LL << v123);
            if ( v121 >= v133 )
              v119 = v121 | v120 ^ v133;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 200), v119, v122);
          }
          else
          {
            v125 = v123 == 64 ? -1LL : (1LL << v123) - 1;
            v119 = v121 | v120 & ~v125;
          }
        }
        v7 = HalpTimerScaleCounter(v118 + v119, *(_QWORD *)(v11 + 192), 10000000LL);
      }
    }
    else
    {
      v12 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        while ( 1 )
        {
          v13 = *(unsigned int *)(v11 + 188);
          if ( (unsigned int)v13 < HalpTimerQueryCounterHandlerCount )
            break;
          v94 = 0;
          if ( HalpTimerQueryCounterHandlerCount )
          {
            v109 = &unk_140FBB7E8;
            do
            {
              if ( v11 == *v109 )
                break;
              ++v94;
              v109 += 2;
            }
            while ( v94 < HalpTimerQueryCounterHandlerCount );
          }
          if ( v94 >= HalpTimerQueryCounterHandlerCount
            || (_DWORD)v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 188), v94, v13) )
          {
            KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v11, *(int *)(v11 + 228));
          }
        }
        v14 = (*(_DWORD *)(v11 + 224) & 0x10000) != 0
            ? *(_QWORD *)(v11 + 72) + *(_DWORD *)(v11 + 80) * KeGetPcr()->Prcb.Number
            : *(_QWORD *)(v11 + 72);
        v15 = ((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v13])(v14);
        v16 = *(_QWORD *)(v11 + 208);
        v17 = v15;
      }
      else
      {
        do
        {
          v139 = *(_QWORD *)(v11 + 208);
          do
          {
            v102 = *(_QWORD *)(v11 + 200);
            v103 = HalpTimerQueryCounterSafe(v11);
            _InterlockedOr(v134, 0);
            v104 = *(_QWORD *)(v11 + 200);
          }
          while ( v102 != v104 );
          v16 = v139;
        }
        while ( v139 != *(_QWORD *)(v11 + 208) );
        v105 = *(_DWORD *)(v11 + 220);
        v106 = v102 ^ v103;
        if ( _bittest64((const __int64 *)&v106, (unsigned __int8)(v105 - 1)) )
        {
          if ( v105 == 64 )
            v111 = -1LL;
          else
            v111 = (1LL << v105) - 1;
          v112 = v102 & v111;
          v17 = (v103 | v102 ^ v112) + (1LL << v105);
          if ( v103 >= v112 )
            v17 = v103 | v102 ^ v112;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 200), v17, v104);
        }
        else
        {
          v17 = v105 == 64 ? v103 : v103 | v102 & ~((1LL << v105) - 1);
        }
      }
      v7 = v16 + v17;
    }
    if ( v11 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v108 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v108 = 10000000LL;
      v7 = HalpTimerScaleCounter(v7, v12, v108);
    }
    v18 = *(_BYTE *)(a1 + 172);
    v19 = v7;
    if ( v18 )
      v19 = v7 << v18;
    v3 = v19 * (unsigned __int128)*(unsigned __int64 *)(a1 + 176);
    v143 = (_QWORD *)*((_QWORD *)&v3 + 1);
    v8 = *((_QWORD *)&v3 + 1) - *(_QWORD *)(a1 + 34432);
    if ( KiTickAccumulationFromAccountingPeriods )
    {
      v20 = *(_QWORD *)(a1 + 34552);
      if ( MEMORY[0xFFFFF78000000300] )
      {
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v21 = (v20 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v22 = v7 << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v21 = v20 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v22 = v7;
        }
        v23 = (*((unsigned __int64 *)&v21 + 1)
             * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64;
        v3 = ((v22 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
           * (unsigned __int64)stru_140FC11F0.SavedApcState.Process;
        v24 = (*((_QWORD *)&v3 + 1) >> KiMaximumIncrementShiftCount) - (v23 >> KiMaximumIncrementShiftCount);
        if ( v24 )
        {
          if ( (*(_DWORD *)(v6 + 116) & 0x400) != 0
            || (*((_QWORD *)&v3 + 1) = __popcnt(*(unsigned int *)(v6 + 1100)), ((v7 >> 4) & 0x1F) >= DWORD2(v3)) )
          {
            *(_DWORD *)(a1 + 34372) += v24;
            *(_DWORD *)(v6 + 652) += v24;
          }
          else
          {
            *(_DWORD *)(a1 + 34376) += v24;
            *(_DWORD *)(v6 + 732) += v24;
          }
          if ( v6 != *(_QWORD *)(a1 + 24) )
          {
            v25 = (char *)(v6 + 195);
            if ( *(char *)(v6 + 195) < 16 )
            {
              if ( *(_QWORD *)(v6 + 104) )
              {
                v26 = *(_QWORD *)(v6 + 104);
                if ( v26 )
                {
                  *((_QWORD *)&v3 + 1) = v26 + *(unsigned int *)(a1 + 216);
                  if ( *((_QWORD *)&v3 + 1) )
                  {
                    if ( *v25 < 16 && (*(_DWORD *)(v6 + 120) & 0x200) == 0 )
                    {
                      v27 = v26 + *(unsigned int *)(a1 + 216);
                      while ( (*(_BYTE *)(v27 + 128) & 2) == 0 )
                      {
                        v27 = *(_QWORD *)(v27 + 440);
                        if ( !v27 )
                        {
                          do
                          {
                            v28 = *(_DWORD *)(*((_QWORD *)&v3 + 1) + 140LL);
                            if ( v28 )
                              break;
                            *((_QWORD *)&v3 + 1) = *(_QWORD *)(*((_QWORD *)&v3 + 1) + 440LL);
                          }
                          while ( *((_QWORD *)&v3 + 1) );
                          if ( v28 )
                            break;
                          goto LABEL_33;
                        }
                      }
LABEL_35:
                      *(_DWORD *)(a1 + 34412) += v24;
                      goto LABEL_36;
                    }
LABEL_33:
                    v25 = (char *)(v6 + 195);
                  }
                }
              }
            }
            if ( *v25 >= 8 )
              goto LABEL_36;
            goto LABEL_35;
          }
        }
      }
    }
  }
LABEL_36:
  v29 = v143;
  *(_QWORD *)(a1 + 34552) = v7;
  *(_QWORD *)(a1 + 34432) = v143;
  v30 = v8 + *(_QWORD *)(v6 + 72);
  *(_QWORD *)(v6 + 72) = v30;
  v135 = v30;
  if ( v6 != *(_QWORD *)(a1 + 24) )
  {
    *((_QWORD *)&v3 + 1) = *(unsigned int *)(v6 + 80) + ((v8 * *(unsigned int *)(a1 + 34488)) >> 16);
    if ( *((_QWORD *)&v3 + 1) > 0xFFFFFFFFuLL )
      *((_QWORD *)&v3 + 1) = 0xFFFFFFFFLL;
    *(_DWORD *)(v6 + 80) = DWORD2(v3);
  }
  v31 = *(_BYTE *)(v6 + 2);
  v32 = (unsigned int *)&KiHwCounters;
  if ( (v31 & 0xBE) != 0 )
  {
    if ( v31 < 0 )
    {
      v33 = *(_QWORD *)(v6 + 544);
      v34 = (*(_QWORD *)(v33 + 400) >> 4) & 0x1FFLL;
      v35 = ((unsigned int)*(_QWORD *)(v33 + 400) >> 13) & 0x3FFFF;
      _BitScanReverse(&v36, v35);
      *(_QWORD *)&v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 35824) + 8LL * (v36 - 2))
                                 + 8 * (v35 ^ (unsigned int)(1 << v36))
                                 + 8);
      *(_QWORD *)(v3 + 8 * v34) += v8;
      v31 &= ~0x80u;
      *((_QWORD *)&v3 + 1) = v3 + 8 * v34;
    }
    if ( (v31 & 0x10) != 0 )
    {
      *((_QWORD *)&v3 + 1) = 8LL * *(unsigned __int8 *)(v6 + 124) + 34440;
      *(_QWORD *)(*((_QWORD *)&v3 + 1) + a1) += v8;
      v31 &= ~0x10u;
    }
    if ( (v31 & 0x20) != 0 )
    {
      v37 = *(_QWORD *)(v6 + 1672);
      if ( v37 )
      {
        v38 = *(_QWORD *)(a1 + 35264);
        v39 = *(_QWORD *)(a1 + 35272);
        if ( v38 && v39 )
        {
          v40 = *(_DWORD *)(v39 + 148);
          if ( v40 == -1 )
          {
            v40 = *(_DWORD *)(v39 + 160);
          }
          else if ( v40 >= *(_DWORD *)(v38 + 536) )
          {
            v40 = *(_DWORD *)(v38 + 536);
          }
        }
        else
        {
          v40 = 100;
        }
        v41 = 0;
        v42 = (unsigned __int16 *)(a1 + 35468);
        do
        {
          if ( v40 <= *v42 )
            break;
          ++v41;
          ++v42;
        }
        while ( v41 < 3 );
        v43 = *(_BYTE *)(a1 + 35352);
        *((_QWORD *)&v3 + 1) = (v43 != 0 ? 8 : 0) + v37 + 16LL * v41;
        LODWORD(v3) = HIDWORD(KsepShimDbLock.UserWaitTime);
        **((_QWORD **)&v3 + 1) += v8;
        v44 = *(_DWORD *)(v37 + 192);
        if ( (unsigned int)v3 > v44 )
        {
          LODWORD(v137) = v3;
          *((_QWORD *)&v3 + 1) = (unsigned int)v3 - v44;
          if ( DWORD2(v3) >= 0x20 )
            HIDWORD(v137) = 1;
          else
            HIDWORD(v137) = (*(_DWORD *)(v37 + 196) << SBYTE8(v3)) | 1;
          *(_QWORD *)(v37 + 192) = v137;
        }
        else
        {
          v45 = v44 - v3;
          if ( v45 < 0x20 )
            *(_DWORD *)(v37 + 196) |= 1 << v45;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v46 = *(unsigned __int8 *)(v6 + 516);
          if ( v46 == 2 || *(_BYTE *)(v6 + 516) == 6 || (_BYTE)v46 == 5 )
          {
            *((_QWORD *)&v3 + 1) = 2LL * v41;
            *(_QWORD *)(v37 + 16LL * v41 + 8) += v8;
          }
        }
        if ( *(_QWORD *)(v6 + 1616) )
        {
          *(_QWORD *)&v3 = 64LL;
          *((_QWORD *)&v3 + 1) = (v43 != 0 ? 8 : 0) + v37 + 16 * (v41 + 8LL);
          **((_QWORD **)&v3 + 1) += v8;
          *((_QWORD *)&v3 + 1) = 72LL;
          if ( v43 )
            *(_QWORD *)&v3 = 72LL;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v6 + 1616) + 1672LL) + v3 + 16LL * v41),
            v8);
        }
      }
      v31 &= ~0x20u;
    }
    if ( (v31 & 0x40) != 0 )
    {
      v47 = *(_QWORD *)(v6 + 968);
      if ( v47 )
        *(_BYTE *)(v47 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
      KiUpdateThreadHgsFeedback((_BYTE *)a1, v6, v8, 0);
    if ( *(_QWORD *)(a1 + 34480) )
    {
      if ( *(_UNKNOWN **)(v6 + 544) != &unk_140FC9F40 )
      {
        *((_QWORD *)&v3 + 1) = *(unsigned __int8 *)(v6 + 516);
        if ( *(unsigned __int8 *)(v6 + 516) < 7u )
        {
          v48 = *(_DWORD *)(v6 + 80);
          if ( v48 <= *(_DWORD *)(v6 + 84) )
            v48 = *(_DWORD *)(v6 + 84);
          v49 = *(unsigned __int8 *)(v6 + 517)
              + KiHgsPlusConfiguration
              * ((unsigned int)(v48 >= KiDynamicHeteroCpuPolicyExpectedCycles) + 2 * DWORD2(v3));
          *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v49) += v8;
        }
      }
    }
    if ( (v31 & 0xBE) != 0 )
    {
      v76 = *(_QWORD *)(v6 + 104);
      if ( v76 )
      {
        for ( i = (_QWORD *)(v76 + *(unsigned int *)(a1 + 216)); i; i = (_QWORD *)i[55] )
          *i += v8;
      }
      if ( (*(_BYTE *)(v6 + 2) & 8) != 0 && *(_UNKNOWN **)(v6 + 544) != &unk_140FC9F40 )
      {
        v92 = *(_QWORD *)(a1 + 192);
        *((_QWORD *)&v3 + 1) = *(_QWORD *)(*(_QWORD *)(v6 + 576) + 8LL * *(unsigned __int16 *)(v92 + 136) + 8);
        if ( (*((_QWORD *)&v3 + 1) & *(_QWORD *)(v92 + 128)) != *(_QWORD *)(v92 + 128) )
          *(_QWORD *)(a1 + 34472) += v8;
      }
      v78 = *(_QWORD *)(v6 + 360);
      if ( v78 )
      {
        v79 = *(_QWORD *)(v78 + 32);
        if ( v79 )
        {
          v80 = 1LL;
          if ( KiHwCountersCount )
          {
            v81 = (unsigned int *)&KiHwCounters;
            v82 = v78 + 48;
            v83 = (unsigned int)KiHwCountersCount;
            do
            {
              if ( (v79 & v80) != 0 )
              {
                *(_QWORD *)&v3 = __readpmc(*v81);
                *((_QWORD *)&v3 + 1) = (unsigned __int64)DWORD1(v3) << 32;
                *(_QWORD *)(v82 + 8) += (unsigned int)(v3 - *(_DWORD *)v82);
                *(_QWORD *)v82 = v3;
              }
              v80 *= 2LL;
              ++v81;
              v82 += 24LL;
              --v83;
            }
            while ( v83 );
          }
        }
      }
    }
    v29 = v143;
  }
  if ( a3 )
    *a3 = v29;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  if ( *(_BYTE *)(a1 + 34524) )
  {
    v54 = HalpPerformanceCounter;
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    {
      v55 = 10000000LL;
      if ( HalpTimerReferencePage )
      {
        while ( 1 )
        {
          v87 = *(unsigned int *)(v54 + 188);
          if ( (unsigned int)v87 < HalpTimerQueryCounterHandlerCount )
            break;
          v95 = 0;
          if ( HalpTimerQueryCounterHandlerCount )
          {
            v29 = &unk_140FBB7E8;
            do
            {
              if ( v54 == *v29 )
                break;
              ++v95;
              v29 += 2;
            }
            while ( v95 < HalpTimerQueryCounterHandlerCount );
          }
          if ( v95 >= HalpTimerQueryCounterHandlerCount
            || (_DWORD)v87 == _InterlockedCompareExchange((volatile signed __int32 *)(v54 + 188), v95, v87) )
          {
            KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v54, *(int *)(v54 + 228));
          }
        }
        if ( (*(_DWORD *)(v54 + 224) & 0x10000) != 0 )
          v88 = *(_QWORD *)(v54 + 72) + *(_DWORD *)(v54 + 80) * KeGetPcr()->Prcb.Number;
        else
          v88 = *(_QWORD *)(v54 + 72);
        v89 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))HalpTimerQueryCounterHandlers[2 * v87])(
                v88,
                HalpTimerQueryCounterHandlers[2 * v87],
                v29,
                0LL);
        v61 = 10000000LL;
        v50 = (((unsigned __int64)v89 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
            + MEMORY[0xFFFFF780000003B8];
      }
      else
      {
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          v114 = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
          v115 = *(_QWORD *)(v54 + 208);
          v116 = v114;
        }
        else
        {
          do
          {
            v141 = *(_QWORD *)(v54 + 208);
            do
            {
              v126 = *(_QWORD *)(v54 + 200);
              v127 = HalpTimerQueryCounterSafe(v54);
              _InterlockedOr(v134, 0);
              v128 = *(_QWORD *)(v54 + 200);
            }
            while ( v126 != v128 );
            v115 = v141;
          }
          while ( v141 != *(_QWORD *)(v54 + 208) );
          v129 = *(_DWORD *)(v54 + 220);
          v130 = v126 ^ v127;
          if ( _bittest64((const __int64 *)&v130, (unsigned __int8)(v129 - 1)) )
          {
            if ( v129 != 64 )
              v9 = (1LL << v129) - 1;
            v131 = v9 & v126;
            v116 = v127 | v126 ^ v9 & v126;
            if ( v127 < v131 )
              v116 += 1LL << v129;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v54 + 200), v116, v128);
          }
          else
          {
            if ( v129 != 64 )
              v9 = (1LL << v129) - 1;
            v116 = v127 | v126 & ~v9;
          }
        }
        v50 = HalpTimerScaleCounter(v115 + v116, *(_QWORD *)(v54 + 192), 10000000LL);
      }
    }
    else
    {
      v55 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        while ( 1 )
        {
          v56 = *(unsigned int *)(v54 + 188);
          if ( (unsigned int)v56 < HalpTimerQueryCounterHandlerCount )
            break;
          v93 = 0;
          if ( HalpTimerQueryCounterHandlerCount )
          {
            v29 = &unk_140FBB7E8;
            do
            {
              if ( v54 == *v29 )
                break;
              ++v93;
              v29 += 2;
            }
            while ( v93 < HalpTimerQueryCounterHandlerCount );
          }
          if ( v93 >= HalpTimerQueryCounterHandlerCount
            || (_DWORD)v56 == _InterlockedCompareExchange((volatile signed __int32 *)(v54 + 188), v93, v56) )
          {
            KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v54, *(int *)(v54 + 228));
          }
        }
        if ( (*(_DWORD *)(v54 + 224) & 0x10000) != 0 )
          v57 = *(_QWORD *)(v54 + 72) + *(_DWORD *)(v54 + 80) * KeGetPcr()->Prcb.Number;
        else
          v57 = *(_QWORD *)(v54 + 72);
        v58 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))HalpTimerQueryCounterHandlers[2 * v56])(
                v57,
                HalpTimerQueryCounterHandlers[2 * v56],
                v29,
                0LL);
        v59 = *(_QWORD *)(v54 + 208);
        v60 = v58;
      }
      else
      {
        do
        {
          v138 = *(_QWORD *)(v54 + 208);
          do
          {
            v97 = *(_QWORD *)(v54 + 200);
            v98 = HalpTimerQueryCounterSafe(v54);
            _InterlockedOr(v134, 0);
            v99 = *(_QWORD *)(v54 + 200);
          }
          while ( v97 != v99 );
          v59 = v138;
        }
        while ( v138 != *(_QWORD *)(v54 + 208) );
        v100 = *(_DWORD *)(v54 + 220);
        v101 = v97 ^ v98;
        if ( _bittest64((const __int64 *)&v101, (unsigned __int8)(v100 - 1)) )
        {
          if ( v100 != 64 )
            v9 = (1LL << v100) - 1;
          v110 = v9 & v97;
          v60 = v98 | v97 ^ v9 & v97;
          if ( v98 < v110 )
            v60 += 1LL << v100;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v54 + 200), v60, v99);
        }
        else
        {
          if ( v100 != 64 )
            v9 = (1LL << v100) - 1;
          v60 = v98 | v97 & ~v9;
        }
      }
      v50 = v59 + v60;
      v61 = 10000000LL;
    }
    if ( v54 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v107 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v107 = v61;
      v50 = HalpTimerScaleCounter(v50, v55, v107);
    }
    v62 = *(_BYTE *)(a1 + 172);
    v63 = v50;
    if ( v62 )
      v63 = v50 << v62;
    v64 = *(_QWORD *)(a1 + 34552);
    v3 = v63 * (unsigned __int128)*(unsigned __int64 *)(a1 + 176);
    v52 = v50 - v64;
    v136 = *((_QWORD *)&v3 + 1);
    v53 = *((_QWORD *)&v3 + 1) - *(_QWORD *)(a1 + 34432);
    v51 = *((_QWORD *)&v3 + 1);
    if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
    {
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v3 = (v64 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v65 = v50 << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v3 = v64 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v65 = v50;
      }
      v10 = 1LL;
      v51 = v136;
      *((_QWORD *)&v3 + 1) = (unsigned int)((unsigned __int64)((((v65 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                                                              * (unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount)
                           - (unsigned int)((unsigned __int64)((*((unsigned __int64 *)&v3 + 1)
                                                              * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount);
      if ( DWORD2(v3) )
      {
        v84 = DWORD2(v3) + *(_DWORD *)(a1 + 34372);
        *(_DWORD *)(a1 + 34384) += DWORD2(v3);
        *(_DWORD *)(a1 + 34372) = v84;
      }
    }
    else
    {
      v10 = 1LL;
    }
  }
  *(_QWORD *)(a1 + 34560) += v52;
  v66 = v53 + *(_QWORD *)(a1 + 34680);
  *(_QWORD *)(a1 + 34680) = v66;
  if ( (*(_BYTE *)(v6 + 2) & 0x20) != 0 )
  {
    v67 = *(_QWORD *)(a1 + 35264);
    v68 = *(_QWORD *)(a1 + 35272);
    if ( v67 && v68 )
    {
      v69 = *(_DWORD *)(v68 + 148);
      if ( v69 == -1 )
      {
        v69 = *(_DWORD *)(v68 + 160);
      }
      else if ( v69 >= *(_DWORD *)(v67 + 536) )
      {
        v69 = *(_DWORD *)(v67 + 536);
      }
    }
    else
    {
      v69 = 100;
    }
    v70 = (unsigned __int16 *)(a1 + 35468);
    do
    {
      if ( v69 <= *v70 )
        break;
      ++v4;
      ++v70;
    }
    while ( v4 < 3 );
    *((_QWORD *)&v3 + 1) = (*(_BYTE *)(a1 + 35352) != 0 ? 8 : 0) + 16 * (v4 + 2168LL);
    v66 = v53 + *(_QWORD *)(*((_QWORD *)&v3 + 1) + a1);
    *(_QWORD *)(*((_QWORD *)&v3 + 1) + a1) = v66;
  }
  if ( (*(_BYTE *)(v6 + 2) & 0x40) != 0 )
  {
    v71 = *(_QWORD *)(v6 + 968);
    if ( v71 )
      *(_BYTE *)(v71 + 64) = 1;
  }
  *(_QWORD *)(a1 + 34552) = v50;
  *(_QWORD *)(a1 + 34432) = v51;
  if ( (*(_BYTE *)(v6 + 2) & 2) != 0 )
  {
    v72 = *(_QWORD *)(v6 + 360);
    v73 = *(_QWORD *)(v72 + 32);
    if ( v73 )
    {
      if ( KiHwCountersCount )
      {
        v85 = (_QWORD *)(v72 + 48);
        v86 = (unsigned int)KiHwCountersCount;
        do
        {
          if ( (v73 & v10) != 0 )
          {
            v66 = *v32;
            *(_QWORD *)&v3 = __readpmc(v66);
            *((_QWORD *)&v3 + 1) = (unsigned __int64)DWORD1(v3) << 32;
            *v85 = v3;
          }
          v10 *= 2LL;
          v85 += 3;
          ++v32;
          --v86;
        }
        while ( v86 );
      }
    }
  }
  v74 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v74 )
  {
    LOBYTE(v66) = 2;
    *(_BYTE *)(a1 + 6) = 0;
    HalRequestSoftwareInterrupt(v66, *((__int64 *)&v3 + 1));
  }
  return v135;
}
