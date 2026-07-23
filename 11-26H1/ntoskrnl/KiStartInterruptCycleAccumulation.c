/*
 * XREFs of KiStartInterruptCycleAccumulation @ 0x140229AE0
 * Callers:
 *     KiScanInterruptObjectList @ 0x14072E930 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x14072EA70 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x14072EB20 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x14072EBC0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x14072FBE0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1407307F0 (KxIsrLinkage.c)
 *     KiHvInterruptSubDispatch @ 0x140733260 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140733310 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x1407333C0 (KiSwInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x140734A40 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiUpdateThreadHgsFeedback @ 0x140228590 (KiUpdateThreadHgsFeedback.c)
 */

void __fastcall KiStartInterruptCycleAccumulation(__int64 a1, __int64 a2)
{
  unsigned __int128 v2; // rax
  char v3; // r12
  int v5; // ebp
  LARGE_INTEGER v6; // r11
  __int64 v7; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  char v11; // cl
  LARGE_INTEGER v12; // rdx
  LARGE_INTEGER v13; // r8
  unsigned __int128 v14; // rax
  unsigned __int64 v15; // r10
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // r9d
  char v20; // si
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // r9
  unsigned int v25; // ecx
  __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // r9d
  unsigned __int16 *v31; // r8
  char v32; // r8
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rcx
  _QWORD *i; // rax
  __int64 v42; // rax
  __int64 v43; // r8
  unsigned int *v44; // r10
  __int64 v45; // r11
  __int64 v46; // r9
  __int64 v47; // r8
  __int64 v48; // [rsp+50h] [rbp+8h]

  *((_QWORD *)&v2 + 1) = a2;
  LOBYTE(v2) = *(_BYTE *)(a1 + 32);
  v3 = BYTE8(v2);
  if ( (_BYTE)v2 )
  {
    *(_BYTE *)(a1 + 32) = v2 + 1;
    return;
  }
  v5 = 0;
  v6.QuadPart = 0LL;
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 32) = 1;
  v9 = 0LL;
  if ( *(_BYTE *)(a1 + 34524) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v11 = *(_BYTE *)(a1 + 172);
    v6 = PerformanceCounter;
    v12 = PerformanceCounter;
    if ( v11 )
      v12.QuadPart = PerformanceCounter.QuadPart << v11;
    v2 = (unsigned __int64)v12.QuadPart * (unsigned __int128)*(unsigned __int64 *)(a1 + 176);
    v7 = *((_QWORD *)&v2 + 1);
    v9 = *((_QWORD *)&v2 + 1) - *(_QWORD *)(a1 + 34432);
    if ( KiTickAccumulationFromAccountingPeriods )
    {
      *((_QWORD *)&v2 + 1) = *(_QWORD *)(a1 + 34552);
      if ( MEMORY[0xFFFFF78000000300] )
      {
        v13 = v6;
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v14 = (unsigned __int64)(*((_QWORD *)&v2 + 1) << MEMORY[0xFFFFF78000000369])
              * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v13.QuadPart = v6.QuadPart << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v14 = *((unsigned __int64 *)&v2 + 1) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        }
        v15 = (*((unsigned __int64 *)&v14 + 1)
             * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64;
        v2 = (((unsigned __int64)v13.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
           * (unsigned __int64)stru_140FC11F0.SavedApcState.Process;
        v16 = (*((_QWORD *)&v2 + 1) >> KiMaximumIncrementShiftCount) - (v15 >> KiMaximumIncrementShiftCount);
        if ( v16 )
        {
          if ( (*(_DWORD *)(v8 + 116) & 0x400) != 0
            || (*((_QWORD *)&v2 + 1) = __popcnt(*(unsigned int *)(v8 + 1100)),
                (((unsigned __int64)v6.QuadPart >> 4) & 0x1F) >= DWORD2(v2)) )
          {
            *(_DWORD *)(a1 + 34372) += v16;
            *(_DWORD *)(v8 + 652) += v16;
          }
          else
          {
            *(_DWORD *)(a1 + 34376) += v16;
            *(_DWORD *)(v8 + 732) += v16;
          }
          if ( v8 != *(_QWORD *)(a1 + 24) )
          {
            if ( *(char *)(v8 + 195) < 16 )
            {
              if ( *(_QWORD *)(v8 + 104) )
              {
                v17 = *(_QWORD *)(v8 + 104);
                if ( v17 )
                {
                  v18 = v17 + *(unsigned int *)(a1 + 216);
                  if ( v18 )
                  {
                    v19 = 0;
                    if ( *(char *)(v8 + 195) < 16 && (*(_DWORD *)(v8 + 120) & 0x200) == 0 )
                    {
                      *((_QWORD *)&v2 + 1) = v17 + *(unsigned int *)(a1 + 216);
                      while ( (*(_BYTE *)(*((_QWORD *)&v2 + 1) + 128LL) & 2) == 0 )
                      {
                        *((_QWORD *)&v2 + 1) = *(_QWORD *)(*((_QWORD *)&v2 + 1) + 440LL);
                        if ( !*((_QWORD *)&v2 + 1) )
                        {
                          do
                          {
                            v19 += *(_DWORD *)(v18 + 140);
                            if ( v19 )
                              break;
                            v18 = *(_QWORD *)(v18 + 440);
                          }
                          while ( v18 );
                          if ( v19 )
                            goto LABEL_27;
                          goto LABEL_26;
                        }
                      }
                      goto LABEL_27;
                    }
                  }
                }
              }
            }
LABEL_26:
            if ( *(char *)(v8 + 195) < 8 )
LABEL_27:
              *(_DWORD *)(a1 + 34412) += v16;
          }
        }
      }
    }
  }
  *(LARGE_INTEGER *)(a1 + 34552) = v6;
  *(_QWORD *)(a1 + 34432) = v7;
  *(_QWORD *)(v8 + 72) += v9;
  if ( v8 != *(_QWORD *)(a1 + 24) )
  {
    *((_QWORD *)&v2 + 1) = *(unsigned int *)(v8 + 80) + ((v9 * *(unsigned int *)(a1 + 34488)) >> 16);
    if ( *((_QWORD *)&v2 + 1) > 0xFFFFFFFFuLL )
      *((_QWORD *)&v2 + 1) = 0xFFFFFFFFLL;
    *(_DWORD *)(v8 + 80) = DWORD2(v2);
  }
  v20 = *(_BYTE *)(v8 + 2);
  if ( (v20 & 0xBE) != 0 )
  {
    v21 = 1LL;
    if ( v20 < 0 )
    {
      v22 = *(_QWORD *)(v8 + 544);
      v23 = (*(_QWORD *)(v22 + 400) >> 4) & 0x1FFLL;
      v24 = ((unsigned int)*(_QWORD *)(v22 + 400) >> 13) & 0x3FFFF;
      _BitScanReverse(&v25, v24);
      *(_QWORD *)&v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 35824) + 8LL * (v25 - 2))
                                 + 8 * (v24 ^ (unsigned int)(1 << v25))
                                 + 8);
      *(_QWORD *)(v2 + 8 * v23) += v9;
      v20 &= ~0x80u;
      *((_QWORD *)&v2 + 1) = v2 + 8 * v23;
    }
    if ( (v20 & 0x10) != 0 )
    {
      *((_QWORD *)&v2 + 1) = 8LL * *(unsigned __int8 *)(v8 + 124) + 34440;
      *(_QWORD *)(*((_QWORD *)&v2 + 1) + a1) += v9;
      v20 &= ~0x10u;
    }
    if ( (v20 & 0x20) != 0 )
    {
      v26 = *(_QWORD *)(v8 + 1672);
      if ( v26 )
      {
        v27 = *(_QWORD *)(a1 + 35264);
        v28 = *(_QWORD *)(a1 + 35272);
        if ( v27 && v28 )
        {
          v29 = *(_DWORD *)(v28 + 148);
          if ( v29 == -1 )
          {
            v29 = *(_DWORD *)(v28 + 160);
          }
          else if ( v29 >= *(_DWORD *)(v27 + 536) )
          {
            v29 = *(_DWORD *)(v27 + 536);
          }
        }
        else
        {
          v29 = 100;
        }
        v30 = 0;
        v31 = (unsigned __int16 *)(a1 + 35468);
        do
        {
          if ( v29 <= *v31 )
            break;
          ++v30;
          ++v31;
        }
        while ( v30 < 3 );
        v32 = *(_BYTE *)(a1 + 35352);
        *((_QWORD *)&v2 + 1) = 16LL * v30 + v26 + (v32 != 0 ? 8 : 0);
        LODWORD(v2) = HIDWORD(KsepShimDbLock.UserWaitTime);
        **((_QWORD **)&v2 + 1) += v9;
        v33 = *(_DWORD *)(v26 + 192);
        if ( (unsigned int)v2 > v33 )
        {
          LODWORD(v48) = v2;
          *((_QWORD *)&v2 + 1) = (unsigned int)v2 - v33;
          if ( DWORD2(v2) >= 0x20 )
            HIDWORD(v48) = 1;
          else
            HIDWORD(v48) = (*(_DWORD *)(v26 + 196) << SBYTE8(v2)) | 1;
          *(_QWORD *)(v26 + 192) = v48;
        }
        else
        {
          v34 = v33 - v2;
          if ( v34 < 0x20 )
            *(_DWORD *)(v26 + 196) |= 1 << v34;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v35 = *(unsigned __int8 *)(v8 + 516);
          if ( v35 == 2 || *(_BYTE *)(v8 + 516) == 6 || (_BYTE)v35 == 5 )
          {
            *((_QWORD *)&v2 + 1) = 2LL * v30;
            *(_QWORD *)(v26 + 16LL * v30 + 8) += v9;
          }
        }
        if ( *(_QWORD *)(v8 + 1616) )
        {
          *((_QWORD *)&v2 + 1) = (v32 != 0 ? 8 : 0) + v26 + 16 * (v30 + 8LL);
          **((_QWORD **)&v2 + 1) += v9;
          v36 = 64LL;
          if ( v32 )
            v36 = 72LL;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v8 + 1616) + 1672LL) + 16LL * v30 + v36),
            v9);
        }
      }
      v20 &= ~0x20u;
    }
    if ( (v20 & 0x40) != 0 )
    {
      v37 = *(_QWORD *)(v8 + 968);
      if ( v37 )
        *(_BYTE *)(v37 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
      KiUpdateThreadHgsFeedback((_BYTE *)a1, v8, v9, 0);
    if ( *(_QWORD *)(a1 + 34480) )
    {
      if ( *(_UNKNOWN **)(v8 + 544) != &unk_140FC9F40 )
      {
        *((_QWORD *)&v2 + 1) = *(unsigned __int8 *)(v8 + 516);
        if ( *(unsigned __int8 *)(v8 + 516) < 7u )
        {
          v38 = *(_DWORD *)(v8 + 80);
          if ( v38 <= *(_DWORD *)(v8 + 84) )
            v38 = *(_DWORD *)(v8 + 84);
          LOBYTE(v5) = v38 >= KiDynamicHeteroCpuPolicyExpectedCycles;
          v39 = (unsigned int)*(unsigned __int8 *)(v8 + 517) + KiHgsPlusConfiguration * (v5 + 2 * DWORD2(v2));
          *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v39) += v9;
        }
      }
    }
    if ( (v20 & 0xBE) != 0 )
    {
      v40 = *(_QWORD *)(v8 + 104);
      if ( v40 )
      {
        for ( i = (_QWORD *)(v40 + *(unsigned int *)(a1 + 216)); i; i = (_QWORD *)i[55] )
          *i += v9;
      }
      if ( (*(_BYTE *)(v8 + 2) & 8) != 0 && *(_UNKNOWN **)(v8 + 544) != &unk_140FC9F40 )
      {
        v47 = *(_QWORD *)(a1 + 192);
        *((_QWORD *)&v2 + 1) = *(_QWORD *)(*(_QWORD *)(v8 + 576) + 8LL * *(unsigned __int16 *)(v47 + 136) + 8);
        if ( (*((_QWORD *)&v2 + 1) & *(_QWORD *)(v47 + 128)) != *(_QWORD *)(v47 + 128) )
          *(_QWORD *)(a1 + 34472) += v9;
      }
      v42 = *(_QWORD *)(v8 + 360);
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 32);
        if ( v43 )
        {
          if ( KiHwCountersCount )
          {
            v44 = (unsigned int *)&KiHwCounters;
            v45 = (unsigned int)KiHwCountersCount;
            v46 = v42 + 48;
            do
            {
              if ( (v43 & v21) != 0 )
              {
                *(_QWORD *)&v2 = __readpmc(*v44);
                *((_QWORD *)&v2 + 1) = (unsigned __int64)DWORD1(v2) << 32;
                *(_QWORD *)(v46 + 8) += (unsigned int)(v2 - *(_DWORD *)v46);
                *(_QWORD *)v46 = v2;
              }
              v21 *= 2LL;
              ++v44;
              v46 += 24LL;
              --v45;
            }
            while ( v45 );
          }
        }
      }
    }
  }
  if ( v3 )
    SymCryptEntropyAccumulatorAccumulateSample(a1 + 37376, *((_QWORD *)&v2 + 1));
}
