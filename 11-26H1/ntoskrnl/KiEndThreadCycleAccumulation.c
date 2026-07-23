/*
 * XREFs of KiEndThreadCycleAccumulation @ 0x140227B30
 * Callers:
 *     KeUpdateThreadTag @ 0x14030F4C0 (KeUpdateThreadTag.c)
 *     KiRetireDpcList @ 0x140337730 (KiRetireDpcList.c)
 *     PpmCheckCustomRun @ 0x1404B5550 (PpmCheckCustomRun.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     KiUpdateThreadHgsFeedback @ 0x140228590 (KiUpdateThreadHgsFeedback.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall KiEndThreadCycleAccumulation(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int8 a4)
{
  int v4; // r15d
  unsigned __int64 v5; // rdi
  unsigned __int64 v9; // r11
  __int64 v10; // r14
  ULONG_PTR v11; // r14
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r12
  signed __int64 v17; // rdx
  char v18; // cl
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int128 v21; // rax
  unsigned __int64 v22; // r8
  int v23; // r8d
  char *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // r9d
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rdx
  char v31; // bl
  __int64 v32; // rax
  __int64 v33; // r10
  __int64 v34; // r9
  unsigned int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r10
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // edx
  unsigned int v42; // r9d
  unsigned __int16 *v43; // r8
  char v44; // r8
  _QWORD *v45; // rdx
  unsigned int UserWaitTime_high; // eax
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  int v49; // ecx
  _QWORD *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int v53; // ecx
  __int64 v54; // rcx
  __int64 v56; // rcx
  _QWORD *i; // rax
  __int64 v58; // rax
  __int64 v59; // r8
  unsigned int *v60; // r10
  __int64 v61; // r11
  __int64 v62; // r9
  __int64 v63; // rbx
  unsigned __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  unsigned __int32 v67; // edx
  unsigned __int32 v68; // edx
  __int64 v69; // rdi
  unsigned __int64 v70; // r11
  signed __int64 v71; // rax
  int v72; // r10d
  unsigned __int64 v73; // rcx
  __int64 v74; // r8
  _QWORD *v75; // r8
  __int64 v76; // r9
  unsigned __int64 v77; // r9
  _QWORD *v78; // r8
  __int64 CounterSafe; // rax
  __int64 v80; // r12
  signed __int64 v81; // rdx
  __int64 v82; // rdi
  unsigned __int64 v83; // r11
  signed __int64 v84; // rax
  int v85; // r10d
  unsigned __int64 v86; // rcx
  __int64 v87; // r9
  unsigned __int64 v88; // r9
  signed __int32 v89[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v90; // [rsp+70h] [rbp+8h]

  v4 = 0;
  *(_BYTE *)(a1 + 32) = 1;
  v5 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
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
          v65 = *(unsigned int *)(v11 + 188);
          if ( (unsigned int)v65 < HalpTimerQueryCounterHandlerCount )
            break;
          v68 = 0;
          if ( HalpTimerQueryCounterHandlerCount )
          {
            v78 = &unk_140FBB7E8;
            do
            {
              if ( v11 == *v78 )
                break;
              ++v68;
              v78 += 2;
            }
            while ( v68 < HalpTimerQueryCounterHandlerCount );
          }
          if ( v68 >= HalpTimerQueryCounterHandlerCount
            || (_DWORD)v65 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 188), v68, v65) )
          {
            KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v11, *(int *)(v11 + 228));
          }
        }
        v66 = (*(_DWORD *)(v11 + 224) & 0x10000) != 0
            ? *(_QWORD *)(v11 + 72) + *(_DWORD *)(v11 + 80) * KeGetPcr()->Prcb.Number
            : *(_QWORD *)(v11 + 72);
        v9 = (((unsigned __int64)((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v65])(v66)
             * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
           + MEMORY[0xFFFFF780000003B8];
      }
      else
      {
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          CounterSafe = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
          v80 = *(_QWORD *)(v11 + 208);
          v81 = CounterSafe;
        }
        else
        {
          do
          {
            v80 = *(_QWORD *)(v11 + 208);
            do
            {
              v82 = *(_QWORD *)(v11 + 200);
              v83 = HalpTimerQueryCounterSafe(v11);
              _InterlockedOr(v89, 0);
              v84 = *(_QWORD *)(v11 + 200);
            }
            while ( v82 != v84 );
          }
          while ( v80 != *(_QWORD *)(v11 + 208) );
          v85 = *(_DWORD *)(v11 + 220);
          v86 = v82 ^ v83;
          if ( _bittest64((const __int64 *)&v86, (unsigned __int8)(v85 - 1)) )
          {
            if ( v85 == 64 )
              v87 = -1LL;
            else
              v87 = (1LL << v85) - 1;
            v88 = v82 & v87;
            v81 = (v83 | v82 ^ v88) + (1LL << v85);
            if ( v83 >= v88 )
              v81 = v83 | v82 ^ v88;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 200), v81, v84);
          }
          else
          {
            v81 = v85 == 64 ? v83 : v83 | v82 & ~((1LL << v85) - 1);
          }
        }
        v9 = HalpTimerScaleCounter(v80 + v81, *(_QWORD *)(v11 + 192), 10000000LL);
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
          v67 = 0;
          if ( HalpTimerQueryCounterHandlerCount )
          {
            v75 = &unk_140FBB7E8;
            do
            {
              if ( v11 == *v75 )
                break;
              ++v67;
              v75 += 2;
            }
            while ( v67 < HalpTimerQueryCounterHandlerCount );
          }
          if ( v67 >= HalpTimerQueryCounterHandlerCount
            || (_DWORD)v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 188), v67, v13) )
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
          v16 = *(_QWORD *)(v11 + 208);
          do
          {
            v69 = *(_QWORD *)(v11 + 200);
            v70 = HalpTimerQueryCounterSafe(v11);
            _InterlockedOr(v89, 0);
            v71 = *(_QWORD *)(v11 + 200);
          }
          while ( v69 != v71 );
        }
        while ( v16 != *(_QWORD *)(v11 + 208) );
        v72 = *(_DWORD *)(v11 + 220);
        v73 = v69 ^ v70;
        if ( _bittest64((const __int64 *)&v73, (unsigned __int8)(v72 - 1)) )
        {
          if ( v72 == 64 )
            v76 = -1LL;
          else
            v76 = (1LL << v72) - 1;
          v77 = v69 & v76;
          v17 = (v70 | v69 ^ v77) + (1LL << v72);
          if ( v70 >= v77 )
            v17 = v70 | v69 ^ v77;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 200), v17, v71);
        }
        else
        {
          v17 = v72 == 64 ? v70 : v70 | v69 & ~((1LL << v72) - 1);
        }
      }
      v9 = v16 + v17;
    }
    if ( v11 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v74 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v74 = 10000000LL;
      v9 = HalpTimerScaleCounter(v9, v12, v74);
    }
    v18 = *(_BYTE *)(a1 + 172);
    v19 = v9;
    if ( v18 )
      v19 = v9 << v18;
    v10 = (v19 * (unsigned __int128)*(unsigned __int64 *)(a1 + 176)) >> 64;
    v5 = v10 - *(_QWORD *)(a1 + 34432);
    if ( KiTickAccumulationFromAccountingPeriods )
    {
      v20 = *(_QWORD *)(a1 + 34552);
      if ( MEMORY[0xFFFFF78000000300] )
      {
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v21 = (v20 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v22 = v9 << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v21 = v20 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v22 = v9;
        }
        v23 = ((unsigned __int64)((((v22 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                                 * (unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount)
            - ((unsigned __int64)((*((unsigned __int64 *)&v21 + 1)
                                 * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount);
        if ( v23 )
        {
          if ( (*(_DWORD *)(a2 + 116) & 0x400) != 0
            || ((v9 >> 4) & 0x1F) >= (unsigned int)__popcnt(*(unsigned int *)(a2 + 1100)) )
          {
            *(_DWORD *)(a1 + 34372) += v23;
            *(_DWORD *)(a2 + 652) += v23;
          }
          else
          {
            *(_DWORD *)(a1 + 34376) += v23;
            *(_DWORD *)(a2 + 732) += v23;
          }
          if ( a2 != *(_QWORD *)(a1 + 24) )
          {
            v24 = (char *)(a2 + 195);
            if ( *(char *)(a2 + 195) < 16 )
            {
              if ( *(_QWORD *)(a2 + 104) )
              {
                v25 = *(_QWORD *)(a2 + 104);
                if ( v25 )
                {
                  v26 = v25 + *(unsigned int *)(a1 + 216);
                  if ( v26 )
                  {
                    if ( *v24 < 16 && (*(_DWORD *)(a2 + 120) & 0x200) == 0 )
                    {
                      v27 = v25 + *(unsigned int *)(a1 + 216);
                      while ( (*(_BYTE *)(v27 + 128) & 2) == 0 )
                      {
                        v27 = *(_QWORD *)(v27 + 440);
                        if ( !v27 )
                        {
                          do
                          {
                            v28 = *(_DWORD *)(v26 + 140);
                            if ( v28 )
                              break;
                            v26 = *(_QWORD *)(v26 + 440);
                          }
                          while ( v26 );
                          if ( v28 )
                            break;
                          goto LABEL_33;
                        }
                      }
LABEL_35:
                      *(_DWORD *)(a1 + 34412) += v23;
                      goto LABEL_36;
                    }
LABEL_33:
                    v24 = (char *)(a2 + 195);
                  }
                }
              }
            }
            if ( *v24 >= 8 )
              goto LABEL_36;
            goto LABEL_35;
          }
        }
      }
    }
  }
LABEL_36:
  *(_QWORD *)(a1 + 34552) = v9;
  *(_QWORD *)(a1 + 34432) = v10;
  v29 = v5 + *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = v29;
  if ( a2 != *(_QWORD *)(a1 + 24) )
  {
    v30 = *(unsigned int *)(a2 + 80) + ((v5 * *(unsigned int *)(a1 + 34488)) >> 16);
    if ( v30 > 0xFFFFFFFF )
      LODWORD(v30) = -1;
    *(_DWORD *)(a2 + 80) = v30;
  }
  v31 = *(_BYTE *)(a2 + 2);
  if ( (v31 & 0xBE) != 0 )
  {
    if ( v31 < 0 )
    {
      v32 = *(_QWORD *)(a2 + 544);
      v33 = (*(_QWORD *)(v32 + 400) >> 4) & 0x1FFLL;
      v34 = ((unsigned int)*(_QWORD *)(v32 + 400) >> 13) & 0x3FFFF;
      _BitScanReverse(&v35, v34);
      v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 35824) + 8LL * (v35 - 2)) + 8 * (v34 ^ (unsigned int)(1 << v35)) + 8);
      *(_QWORD *)(v36 + 8 * v33) += v5;
      v31 &= ~0x80u;
    }
    if ( (v31 & 0x10) != 0 )
    {
      v37 = 8LL * *(unsigned __int8 *)(a2 + 124) + 34440;
      *(_QWORD *)(v37 + a1) += v5;
      v31 &= ~0x10u;
    }
    if ( (v31 & 0x20) != 0 )
    {
      v38 = *(_QWORD *)(a2 + 1672);
      if ( v38 )
      {
        v39 = *(_QWORD *)(a1 + 35264);
        v40 = *(_QWORD *)(a1 + 35272);
        if ( v39 && v40 )
        {
          v41 = *(_DWORD *)(v40 + 148);
          if ( v41 == -1 )
          {
            v41 = *(_DWORD *)(v40 + 160);
          }
          else if ( v41 >= *(_DWORD *)(v39 + 536) )
          {
            v41 = *(_DWORD *)(v39 + 536);
          }
        }
        else
        {
          v41 = 100;
        }
        v42 = 0;
        v43 = (unsigned __int16 *)(a1 + 35468);
        do
        {
          if ( v41 <= *v43 )
            break;
          ++v42;
          ++v43;
        }
        while ( v42 < 3 );
        v44 = *(_BYTE *)(a1 + 35352);
        v45 = (_QWORD *)(16LL * v42 + v38 + (v44 != 0 ? 8 : 0));
        UserWaitTime_high = HIDWORD(KsepShimDbLock.UserWaitTime);
        *v45 += v5;
        v47 = *(_DWORD *)(v38 + 192);
        if ( UserWaitTime_high > v47 )
        {
          LODWORD(v90) = UserWaitTime_high;
          if ( UserWaitTime_high - v47 >= 0x20 )
            HIDWORD(v90) = 1;
          else
            HIDWORD(v90) = (*(_DWORD *)(v38 + 196) << (UserWaitTime_high - v47)) | 1;
          *(_QWORD *)(v38 + 192) = v90;
        }
        else
        {
          v48 = v47 - UserWaitTime_high;
          if ( v48 < 0x20 )
            *(_DWORD *)(v38 + 196) |= 1 << v48;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v49 = *(unsigned __int8 *)(a2 + 516);
          if ( v49 == 2 || *(_BYTE *)(a2 + 516) == 6 || (_BYTE)v49 == 5 )
            *(_QWORD *)(v38 + 16LL * v42 + 8) += v5;
        }
        if ( *(_QWORD *)(a2 + 1616) )
        {
          v50 = (_QWORD *)((v44 != 0 ? 8 : 0) + v38 + 16 * (v42 + 8LL));
          *v50 += v5;
          v51 = 64LL;
          if ( v44 )
            v51 = 72LL;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 1616) + 1672LL) + 16LL * v42 + v51),
            v5);
        }
      }
      v31 &= ~0x20u;
    }
    if ( (v31 & 0x40) != 0 )
    {
      v52 = *(_QWORD *)(a2 + 968);
      if ( v52 )
        *(_BYTE *)(v52 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
      KiUpdateThreadHgsFeedback(a1, a2, v5, a4);
    if ( *(_QWORD *)(a1 + 34480) && *(_UNKNOWN **)(a2 + 544) != &unk_140FC9F40 && *(unsigned __int8 *)(a2 + 516) < 7u )
    {
      v53 = *(_DWORD *)(a2 + 80);
      if ( v53 <= *(_DWORD *)(a2 + 84) )
        v53 = *(_DWORD *)(a2 + 84);
      LOBYTE(v4) = v53 >= KiDynamicHeteroCpuPolicyExpectedCycles;
      v54 = *(unsigned __int8 *)(a2 + 517)
          + KiHgsPlusConfiguration * (v4 + 2 * (unsigned int)*(unsigned __int8 *)(a2 + 516));
      *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v54) += v5;
    }
    if ( (v31 & 0xBE) != 0 )
    {
      v56 = *(_QWORD *)(a2 + 104);
      if ( v56 )
      {
        for ( i = (_QWORD *)(v56 + *(unsigned int *)(a1 + 216)); i; i = (_QWORD *)i[55] )
          *i += v5;
      }
      if ( (*(_BYTE *)(a2 + 2) & 8) != 0
        && *(_UNKNOWN **)(a2 + 544) != &unk_140FC9F40
        && (*(_QWORD *)(*(_QWORD *)(a2 + 576) + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 136LL) + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL) )
      {
        *(_QWORD *)(a1 + 34472) += v5;
      }
      v58 = *(_QWORD *)(a2 + 360);
      if ( v58 )
      {
        v59 = *(_QWORD *)(v58 + 32);
        if ( v59 )
        {
          if ( KiHwCountersCount )
          {
            v60 = (unsigned int *)&KiHwCounters;
            v61 = (unsigned int)KiHwCountersCount;
            v62 = v58 + 48;
            v63 = 1LL;
            do
            {
              if ( (v59 & v63) != 0 )
              {
                v64 = __readpmc(*v60);
                *(_QWORD *)(v62 + 8) += (unsigned int)(v64 - *(_DWORD *)v62);
                *(_QWORD *)v62 = v64;
              }
              v63 *= 2LL;
              ++v60;
              v62 += 24LL;
              --v61;
            }
            while ( v61 );
          }
        }
      }
    }
  }
  if ( a3 )
    *a3 = v10;
  return v29;
}
