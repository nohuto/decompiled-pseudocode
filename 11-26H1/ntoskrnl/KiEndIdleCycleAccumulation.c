/*
 * XREFs of KiEndIdleCycleAccumulation @ 0x140226290
 * Callers:
 *     KiIdleLoop @ 0x14072D980 (KiIdleLoop.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     KiUpdateThreadHgsFeedback @ 0x140228590 (KiUpdateThreadHgsFeedback.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall KiEndIdleCycleAccumulation(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 v3; // rbx
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rdi
  __int64 v8; // r13
  ULONG_PTR v9; // r14
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r12
  signed __int64 v15; // rdx
  char v16; // cl
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int128 v20; // rax
  int v21; // r8d
  char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r9d
  unsigned __int64 v27; // rdx
  char v28; // bl
  __int64 v29; // rax
  __int64 v30; // r10
  __int64 v31; // r9
  unsigned int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // r10
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // edx
  unsigned int v38; // r9d
  unsigned __int16 *v39; // r8
  char v40; // r8
  _QWORD *v41; // rdx
  unsigned int UserWaitTime_high; // eax
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  int v45; // ecx
  _QWORD *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned int v49; // ecx
  __int64 v50; // rcx
  __int64 v51; // rcx
  _QWORD *i; // rax
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned int *v55; // r10
  __int64 v56; // r11
  __int64 v57; // r9
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  unsigned __int32 v61; // edx
  unsigned __int32 v62; // edx
  __int64 v63; // rdi
  unsigned __int64 v64; // r11
  signed __int64 v65; // rax
  int v66; // r10d
  unsigned __int64 v67; // rcx
  __int64 v68; // r8
  _QWORD *v69; // r8
  __int64 v70; // r9
  unsigned __int64 v71; // r9
  _QWORD *v72; // r8
  __int64 CounterSafe; // rax
  __int64 v74; // r12
  signed __int64 v75; // rdx
  __int64 v76; // rdi
  unsigned __int64 v77; // r11
  signed __int64 v78; // rax
  int v79; // r10d
  unsigned __int64 v80; // rcx
  __int64 v81; // r9
  unsigned __int64 v82; // r9
  signed __int32 v83[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v84; // [rsp+60h] [rbp+8h]

  v2 = 0;
  *(_BYTE *)(a1 + 32) = 1;
  v3 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 1LL;
  if ( *(_BYTE *)(a1 + 34524) )
  {
    v9 = HalpPerformanceCounter;
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    {
      v10 = 10000000LL;
      if ( HalpTimerReferencePage )
      {
        while ( 1 )
        {
          v59 = *(unsigned int *)(v9 + 188);
          if ( (unsigned int)v59 < HalpTimerQueryCounterHandlerCount )
            break;
          v62 = 0;
          if ( HalpTimerQueryCounterHandlerCount )
          {
            v72 = &unk_140FBB7E8;
            do
            {
              if ( v9 == *v72 )
                break;
              ++v62;
              v72 += 2;
            }
            while ( v62 < HalpTimerQueryCounterHandlerCount );
          }
          if ( v62 >= HalpTimerQueryCounterHandlerCount
            || (_DWORD)v59 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 188), v62, v59) )
          {
            KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v9, *(int *)(v9 + 228));
          }
        }
        v60 = (*(_DWORD *)(v9 + 224) & 0x10000) != 0
            ? *(_QWORD *)(v9 + 72) + *(_DWORD *)(v9 + 80) * KeGetPcr()->Prcb.Number
            : *(_QWORD *)(v9 + 72);
        v6 = (((unsigned __int64)((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v59])(v60)
             * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
           + MEMORY[0xFFFFF780000003B8];
      }
      else
      {
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          CounterSafe = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
          v74 = *(_QWORD *)(v9 + 208);
          v75 = CounterSafe;
        }
        else
        {
          do
          {
            v74 = *(_QWORD *)(v9 + 208);
            do
            {
              v76 = *(_QWORD *)(v9 + 200);
              v77 = HalpTimerQueryCounterSafe(v9);
              _InterlockedOr(v83, 0);
              v78 = *(_QWORD *)(v9 + 200);
            }
            while ( v76 != v78 );
          }
          while ( v74 != *(_QWORD *)(v9 + 208) );
          v79 = *(_DWORD *)(v9 + 220);
          v80 = v76 ^ v77;
          if ( _bittest64((const __int64 *)&v80, (unsigned __int8)(v79 - 1)) )
          {
            if ( v79 == 64 )
              v81 = -1LL;
            else
              v81 = (1LL << v79) - 1;
            v82 = v76 & v81;
            v75 = (v77 | v76 ^ v82) + (1LL << v79);
            if ( v77 >= v82 )
              v75 = v77 | v76 ^ v82;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 200), v75, v78);
          }
          else
          {
            v75 = v79 == 64 ? v77 : v77 | v76 & ~((1LL << v79) - 1);
          }
        }
        v6 = HalpTimerScaleCounter(v74 + v75, *(_QWORD *)(v9 + 192), 10000000LL);
      }
    }
    else
    {
      v10 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        while ( 1 )
        {
          v11 = *(unsigned int *)(v9 + 188);
          if ( (unsigned int)v11 < HalpTimerQueryCounterHandlerCount )
            break;
          v61 = 0;
          if ( HalpTimerQueryCounterHandlerCount )
          {
            v69 = &unk_140FBB7E8;
            do
            {
              if ( v9 == *v69 )
                break;
              ++v61;
              v69 += 2;
            }
            while ( v61 < HalpTimerQueryCounterHandlerCount );
          }
          if ( v61 >= HalpTimerQueryCounterHandlerCount
            || (_DWORD)v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 188), v61, v11) )
          {
            KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v9, *(int *)(v9 + 228));
          }
        }
        v12 = (*(_DWORD *)(v9 + 224) & 0x10000) != 0
            ? *(_QWORD *)(v9 + 72) + *(_DWORD *)(v9 + 80) * KeGetPcr()->Prcb.Number
            : *(_QWORD *)(v9 + 72);
        v13 = ((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v11])(v12);
        v14 = *(_QWORD *)(v9 + 208);
        v15 = v13;
      }
      else
      {
        do
        {
          v14 = *(_QWORD *)(v9 + 208);
          do
          {
            v63 = *(_QWORD *)(v9 + 200);
            v64 = HalpTimerQueryCounterSafe(v9);
            _InterlockedOr(v83, 0);
            v65 = *(_QWORD *)(v9 + 200);
          }
          while ( v63 != v65 );
        }
        while ( v14 != *(_QWORD *)(v9 + 208) );
        v66 = *(_DWORD *)(v9 + 220);
        v67 = v63 ^ v64;
        if ( _bittest64((const __int64 *)&v67, (unsigned __int8)(v66 - 1)) )
        {
          if ( v66 == 64 )
            v70 = -1LL;
          else
            v70 = (1LL << v66) - 1;
          v71 = v63 & v70;
          v15 = (v64 | v63 ^ v71) + (1LL << v66);
          if ( v64 >= v71 )
            v15 = v64 | v63 ^ v71;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 200), v15, v65);
        }
        else
        {
          v15 = v66 == 64 ? v64 : v64 | v63 & ~((1LL << v66) - 1);
        }
      }
      v6 = v14 + v15;
    }
    if ( v9 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v68 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v68 = 10000000LL;
      v6 = HalpTimerScaleCounter(v6, v10, v68);
    }
    v16 = *(_BYTE *)(a1 + 172);
    v17 = v6;
    if ( v16 )
      v17 = v6 << v16;
    v3 = (v17 * (unsigned __int128)*(unsigned __int64 *)(a1 + 176)) >> 64;
    v7 = v3 - *(_QWORD *)(a1 + 34432);
    if ( KiTickAccumulationFromAccountingPeriods )
    {
      v18 = *(_QWORD *)(a1 + 34552);
      if ( MEMORY[0xFFFFF78000000300] )
      {
        v19 = v6;
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v20 = (v18 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v19 = v6 << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v20 = v18 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        }
        v21 = ((unsigned __int64)((((v19 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                                 * (unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount)
            - ((unsigned __int64)((*((unsigned __int64 *)&v20 + 1)
                                 * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount);
        if ( v21 )
        {
          if ( (*(_DWORD *)(a2 + 116) & 0x400) != 0
            || ((v6 >> 4) & 0x1F) >= (unsigned int)__popcnt(*(unsigned int *)(a2 + 1100)) )
          {
            *(_DWORD *)(a1 + 34372) += v21;
            *(_DWORD *)(a2 + 652) += v21;
          }
          else
          {
            *(_DWORD *)(a1 + 34376) += v21;
            *(_DWORD *)(a2 + 732) += v21;
          }
          if ( a2 != *(_QWORD *)(a1 + 24) )
          {
            v22 = (char *)(a2 + 195);
            if ( *(char *)(a2 + 195) < 16 )
            {
              if ( *(_QWORD *)(a2 + 104) )
              {
                v23 = *(_QWORD *)(a2 + 104);
                if ( v23 )
                {
                  v24 = v23 + *(unsigned int *)(a1 + 216);
                  if ( v24 )
                  {
                    if ( *v22 < 16 && (*(_DWORD *)(a2 + 120) & 0x200) == 0 )
                    {
                      v25 = v23 + *(unsigned int *)(a1 + 216);
                      while ( (*(_BYTE *)(v25 + 128) & 2) == 0 )
                      {
                        v25 = *(_QWORD *)(v25 + 440);
                        if ( !v25 )
                        {
                          do
                          {
                            v26 = *(_DWORD *)(v24 + 140);
                            if ( v26 )
                              break;
                            v24 = *(_QWORD *)(v24 + 440);
                          }
                          while ( v24 );
                          if ( v26 )
                            break;
                          goto LABEL_33;
                        }
                      }
LABEL_35:
                      *(_DWORD *)(a1 + 34412) += v21;
                      goto LABEL_36;
                    }
LABEL_33:
                    v22 = (char *)(a2 + 195);
                  }
                }
              }
            }
            if ( *v22 >= 8 )
              goto LABEL_36;
            goto LABEL_35;
          }
        }
      }
    }
  }
LABEL_36:
  *(_QWORD *)(a1 + 34552) = v6;
  *(_QWORD *)(a1 + 34432) = v3;
  *(_QWORD *)(a2 + 72) += v7;
  if ( a2 != *(_QWORD *)(a1 + 24) )
  {
    v27 = *(unsigned int *)(a2 + 80) + ((v7 * *(unsigned int *)(a1 + 34488)) >> 16);
    if ( v27 > 0xFFFFFFFF )
      LODWORD(v27) = -1;
    *(_DWORD *)(a2 + 80) = v27;
  }
  v28 = *(_BYTE *)(a2 + 2);
  if ( (v28 & 0xBE) != 0 )
  {
    if ( v28 < 0 )
    {
      v29 = *(_QWORD *)(a2 + 544);
      v30 = (*(_QWORD *)(v29 + 400) >> 4) & 0x1FFLL;
      v31 = ((unsigned int)*(_QWORD *)(v29 + 400) >> 13) & 0x3FFFF;
      _BitScanReverse(&v32, v31);
      v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 35824) + 8LL * (v32 - 2)) + 8 * (v31 ^ (unsigned int)(1 << v32)) + 8);
      *(_QWORD *)(v33 + 8 * v30) += v7;
      v28 &= ~0x80u;
    }
    if ( (v28 & 0x10) != 0 )
    {
      *(_QWORD *)(8LL * *(unsigned __int8 *)(a2 + 124) + 34440 + a1) += v7;
      v28 &= ~0x10u;
    }
    if ( (v28 & 0x20) != 0 )
    {
      v34 = *(_QWORD *)(a2 + 1672);
      if ( v34 )
      {
        v35 = *(_QWORD *)(a1 + 35264);
        v36 = *(_QWORD *)(a1 + 35272);
        if ( v35 && v36 )
        {
          v37 = *(_DWORD *)(v36 + 148);
          if ( v37 == -1 )
          {
            v37 = *(_DWORD *)(v36 + 160);
          }
          else if ( v37 >= *(_DWORD *)(v35 + 536) )
          {
            v37 = *(_DWORD *)(v35 + 536);
          }
        }
        else
        {
          v37 = 100;
        }
        v38 = 0;
        v39 = (unsigned __int16 *)(a1 + 35468);
        do
        {
          if ( v37 <= *v39 )
            break;
          ++v38;
          ++v39;
        }
        while ( v38 < 3 );
        v40 = *(_BYTE *)(a1 + 35352);
        v41 = (_QWORD *)(16LL * v38 + v34 + (v40 != 0 ? 8 : 0));
        UserWaitTime_high = HIDWORD(KsepShimDbLock.UserWaitTime);
        *v41 += v7;
        v43 = *(_DWORD *)(v34 + 192);
        if ( UserWaitTime_high > v43 )
        {
          LODWORD(v84) = UserWaitTime_high;
          if ( UserWaitTime_high - v43 >= 0x20 )
            HIDWORD(v84) = 1;
          else
            HIDWORD(v84) = (*(_DWORD *)(v34 + 196) << (UserWaitTime_high - v43)) | 1;
          *(_QWORD *)(v34 + 192) = v84;
        }
        else
        {
          v44 = v43 - UserWaitTime_high;
          if ( v44 < 0x20 )
            *(_DWORD *)(v34 + 196) |= 1 << v44;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v45 = *(unsigned __int8 *)(a2 + 516);
          if ( v45 == 2 || *(_BYTE *)(a2 + 516) == 6 || (_BYTE)v45 == 5 )
            *(_QWORD *)(v34 + 16LL * v38 + 8) += v7;
        }
        if ( *(_QWORD *)(a2 + 1616) )
        {
          v46 = (_QWORD *)((v40 != 0 ? 8 : 0) + v34 + 16 * (v38 + 8LL));
          *v46 += v7;
          v47 = 64LL;
          if ( v40 )
            v47 = 72LL;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 1616) + 1672LL) + 16LL * v38 + v47),
            v7);
        }
      }
      v28 &= ~0x20u;
    }
    if ( (v28 & 0x40) != 0 )
    {
      v48 = *(_QWORD *)(a2 + 968);
      if ( v48 )
        *(_BYTE *)(v48 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
      KiUpdateThreadHgsFeedback(a1, a2, v7, 0LL);
    if ( *(_QWORD *)(a1 + 34480) && *(_UNKNOWN **)(a2 + 544) != &unk_140FC9F40 && *(unsigned __int8 *)(a2 + 516) < 7u )
    {
      v49 = *(_DWORD *)(a2 + 80);
      if ( v49 <= *(_DWORD *)(a2 + 84) )
        v49 = *(_DWORD *)(a2 + 84);
      LOBYTE(v2) = v49 >= KiDynamicHeteroCpuPolicyExpectedCycles;
      v50 = *(unsigned __int8 *)(a2 + 517)
          + KiHgsPlusConfiguration * (v2 + 2 * (unsigned int)*(unsigned __int8 *)(a2 + 516));
      *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v50) += v7;
    }
    if ( (v28 & 0xBE) != 0 )
    {
      v51 = *(_QWORD *)(a2 + 104);
      if ( v51 )
      {
        for ( i = (_QWORD *)(v51 + *(unsigned int *)(a1 + 216)); i; i = (_QWORD *)i[55] )
          *i += v7;
      }
      if ( (*(_BYTE *)(a2 + 2) & 8) != 0
        && *(_UNKNOWN **)(a2 + 544) != &unk_140FC9F40
        && (*(_QWORD *)(*(_QWORD *)(a2 + 576) + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 136LL) + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL) )
      {
        *(_QWORD *)(a1 + 34472) += v7;
      }
      v53 = *(_QWORD *)(a2 + 360);
      if ( v53 )
      {
        v54 = *(_QWORD *)(v53 + 32);
        if ( v54 )
        {
          if ( KiHwCountersCount )
          {
            v55 = (unsigned int *)&KiHwCounters;
            v56 = (unsigned int)KiHwCountersCount;
            v57 = v53 + 48;
            do
            {
              if ( (v54 & v8) != 0 )
              {
                v58 = __readpmc(*v55);
                *(_QWORD *)(v57 + 8) += (unsigned int)(v58 - *(_DWORD *)v57);
                *(_QWORD *)v57 = v58;
              }
              v8 *= 2LL;
              ++v55;
              v57 += 24LL;
              --v56;
            }
            while ( v56 );
          }
        }
      }
    }
  }
}
