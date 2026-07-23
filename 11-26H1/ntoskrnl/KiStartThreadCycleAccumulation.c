/*
 * XREFs of KiStartThreadCycleAccumulation @ 0x140336EE0
 * Callers:
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 *     KeUpdateThreadTag @ 0x14030F4C0 (KeUpdateThreadTag.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140335240 (KiGroupSchedulingGenerationEnd.c)
 *     KiResumeThreadCycleAccumulation @ 0x140336E8C (KiResumeThreadCycleAccumulation.c)
 *     KiRetireDpcList @ 0x140337730 (KiRetireDpcList.c)
 *     PpmCheckCustomRun @ 0x1404B5550 (PpmCheckCustomRun.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     HalRequestSoftwareInterrupt @ 0x14021F9A0 (HalRequestSoftwareInterrupt.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall KiStartThreadCycleAccumulation(__int64 a1, __int64 a2, char a3)
{
  unsigned __int128 v3; // rax
  unsigned int v4; // r14d
  char v5; // r15
  __int64 v6; // r13
  unsigned __int64 v8; // rdi
  __int64 v9; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // r11
  __int64 v12; // rbp
  ULONG_PTR v13; // r15
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r12
  signed __int64 v19; // rdx
  char v20; // cl
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // edx
  unsigned __int16 *v29; // r8
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // r11
  bool v33; // zf
  unsigned int *v34; // r8
  _QWORD *v35; // r9
  __int64 v36; // r10
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int32 v39; // edx
  unsigned __int32 v40; // edx
  __int64 v41; // rdi
  unsigned __int64 v42; // r10
  signed __int64 v43; // rax
  int v44; // r8d
  unsigned __int64 v45; // rcx
  __int64 v46; // r8
  _QWORD *v47; // r8
  __int64 v48; // r9
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // rdi
  _QWORD *v51; // r8
  __int64 CounterSafe; // rax
  __int64 v53; // r12
  signed __int64 v54; // rdx
  __int64 v55; // rdi
  unsigned __int64 v56; // r11
  signed __int64 v57; // rax
  int v58; // r10d
  unsigned __int64 v59; // rcx
  __int64 v60; // r9
  unsigned __int64 v61; // r9
  signed __int32 v62[8]; // [rsp+0h] [rbp-68h] BYREF

  *((_QWORD *)&v3 + 1) = a2;
  v4 = 0;
  v5 = a3;
  v6 = *((_QWORD *)&v3 + 1);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 1LL;
  if ( *(_BYTE *)(a1 + 34524) )
  {
    v13 = HalpPerformanceCounter;
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    {
      v14 = 10000000LL;
      if ( HalpTimerReferencePage )
      {
        while ( 1 )
        {
          v37 = *(unsigned int *)(v13 + 188);
          if ( (unsigned int)v37 < HalpTimerQueryCounterHandlerCount )
            break;
          v40 = 0;
          if ( HalpTimerQueryCounterHandlerCount )
          {
            v51 = &unk_140FBB7E8;
            do
            {
              if ( v13 == *v51 )
                break;
              ++v40;
              v51 += 2;
            }
            while ( v40 < HalpTimerQueryCounterHandlerCount );
          }
          if ( v40 >= HalpTimerQueryCounterHandlerCount
            || (_DWORD)v37 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 188), v40, v37) )
          {
            KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v13, *(int *)(v13 + 228));
          }
        }
        if ( (*(_DWORD *)(v13 + 224) & 0x10000) != 0 )
          v38 = *(_QWORD *)(v13 + 72) + *(_DWORD *)(v13 + 80) * KeGetPcr()->Prcb.Number;
        else
          v38 = *(_QWORD *)(v13 + 72);
        v8 = (((unsigned __int64)((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v37])(v38)
             * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
           + MEMORY[0xFFFFF780000003B8];
      }
      else
      {
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          CounterSafe = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
          v53 = *(_QWORD *)(v13 + 208);
          v54 = CounterSafe;
        }
        else
        {
          do
          {
            v53 = *(_QWORD *)(v13 + 208);
            do
            {
              v55 = *(_QWORD *)(v13 + 200);
              v56 = HalpTimerQueryCounterSafe(v13);
              _InterlockedOr(v62, 0);
              v57 = *(_QWORD *)(v13 + 200);
            }
            while ( v55 != v57 );
          }
          while ( v53 != *(_QWORD *)(v13 + 208) );
          v58 = *(_DWORD *)(v13 + 220);
          v59 = v55 ^ v56;
          if ( _bittest64((const __int64 *)&v59, (unsigned __int8)(v58 - 1)) )
          {
            if ( v58 == 64 )
              v60 = -1LL;
            else
              v60 = (1LL << v58) - 1;
            v61 = v55 & v60;
            v54 = (v56 | v55 ^ v61) + (1LL << v58);
            if ( v56 >= v61 )
              v54 = v56 | v55 ^ v61;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 200), v54, v57);
          }
          else if ( v58 == 64 )
          {
            v54 = v56;
          }
          else
          {
            v54 = v56 | v55 & ~((1LL << v58) - 1);
          }
        }
        v8 = HalpTimerScaleCounter(v53 + v54, *(_QWORD *)(v13 + 192), 10000000LL);
      }
    }
    else
    {
      v14 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        while ( 1 )
        {
          v15 = *(unsigned int *)(v13 + 188);
          if ( (unsigned int)v15 < HalpTimerQueryCounterHandlerCount )
            break;
          v39 = 0;
          if ( HalpTimerQueryCounterHandlerCount )
          {
            v47 = &unk_140FBB7E8;
            do
            {
              if ( v13 == *v47 )
                break;
              ++v39;
              v47 += 2;
            }
            while ( v39 < HalpTimerQueryCounterHandlerCount );
          }
          if ( v39 >= HalpTimerQueryCounterHandlerCount
            || (_DWORD)v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 188), v39, v15) )
          {
            KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v13, *(int *)(v13 + 228));
          }
        }
        if ( (*(_DWORD *)(v13 + 224) & 0x10000) != 0 )
          v16 = *(_QWORD *)(v13 + 72) + *(_DWORD *)(v13 + 80) * KeGetPcr()->Prcb.Number;
        else
          v16 = *(_QWORD *)(v13 + 72);
        v17 = ((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v15])(v16);
        v18 = *(_QWORD *)(v13 + 208);
        v19 = v17;
      }
      else
      {
        do
        {
          v18 = *(_QWORD *)(v13 + 208);
          do
          {
            v41 = *(_QWORD *)(v13 + 200);
            v42 = HalpTimerQueryCounterSafe(v13);
            _InterlockedOr(v62, 0);
            v43 = *(_QWORD *)(v13 + 200);
          }
          while ( v41 != v43 );
        }
        while ( v18 != *(_QWORD *)(v13 + 208) );
        v44 = *(_DWORD *)(v13 + 220);
        v45 = v41 ^ v42;
        if ( _bittest64((const __int64 *)&v45, (unsigned __int8)(v44 - 1)) )
        {
          if ( v44 == 64 )
            v48 = -1LL;
          else
            v48 = (1LL << v44) - 1;
          v49 = v41 & v48;
          v50 = v42 | v49 ^ v41;
          v19 = v50 + (1LL << v44);
          if ( v42 >= v49 )
            v19 = v50;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 200), v19, v43);
        }
        else if ( v44 == 64 )
        {
          v19 = v42;
        }
        else
        {
          v19 = v42 | v41 & ~((1LL << v44) - 1);
        }
      }
      v8 = v18 + v19;
    }
    if ( v13 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v46 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v46 = 10000000LL;
      v8 = HalpTimerScaleCounter(v8, v14, v46);
    }
    v20 = *(_BYTE *)(a1 + 172);
    v21 = v8;
    if ( v20 )
      v21 = v8 << v20;
    v22 = *(_QWORD *)(a1 + 34552);
    v3 = v21 * (unsigned __int128)*(unsigned __int64 *)(a1 + 176);
    v10 = v8 - v22;
    v9 = *((_QWORD *)&v3 + 1);
    v11 = *((_QWORD *)&v3 + 1) - *(_QWORD *)(a1 + 34432);
    if ( !KiTickAccumulationFromAccountingPeriods || !MEMORY[0xFFFFF78000000300] )
      goto LABEL_21;
    if ( MEMORY[0xFFFFF78000000369] )
    {
      v3 = (v22 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      v23 = v8 << MEMORY[0xFFFFF78000000369];
    }
    else
    {
      v3 = v22 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      v23 = v8;
    }
    *((_QWORD *)&v3 + 1) = (unsigned int)((unsigned __int64)((((v23 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                                                            * (unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount)
                         - (unsigned int)((unsigned __int64)((*((unsigned __int64 *)&v3 + 1)
                                                            * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount);
    if ( !DWORD2(v3) )
      goto LABEL_21;
    if ( a3 != 0 )
    {
      v24 = DWORD2(v3) + *(_DWORD *)(a1 + 34372);
      *(_DWORD *)(a1 + 34380) += DWORD2(v3);
    }
    else
    {
      if ( a3 && -(a3 != 0) != 1 )
        goto LABEL_21;
      v24 = DWORD2(v3) + *(_DWORD *)(a1 + 34372);
      *(_DWORD *)(a1 + 34384) += DWORD2(v3);
    }
    *(_DWORD *)(a1 + 34372) = v24;
LABEL_21:
    v5 = a3;
  }
  *(_QWORD *)(a1 + 34560) += v10;
  v25 = v11 + *(_QWORD *)(a1 + 34680);
  *(_QWORD *)(a1 + 34680) = v25;
  if ( (*(_BYTE *)(v6 + 2) & 0x20) != 0 )
  {
    v26 = *(_QWORD *)(a1 + 35264);
    v27 = *(_QWORD *)(a1 + 35272);
    if ( v26 && v27 )
    {
      v28 = *(_DWORD *)(v27 + 148);
      if ( v28 == -1 )
      {
        v28 = *(_DWORD *)(v27 + 160);
      }
      else if ( v28 >= *(_DWORD *)(v26 + 536) )
      {
        v28 = *(_DWORD *)(v26 + 536);
      }
    }
    else
    {
      v28 = 100;
    }
    v29 = (unsigned __int16 *)(a1 + 35468);
    do
    {
      if ( v28 <= *v29 )
        break;
      ++v4;
      ++v29;
    }
    while ( v4 < 3 );
    *((_QWORD *)&v3 + 1) = (*(_BYTE *)(a1 + 35352) != 0 ? 8 : 0) + 16 * (v4 + 2168LL);
    v25 = v11 + *(_QWORD *)(*((_QWORD *)&v3 + 1) + a1);
    *(_QWORD *)(*((_QWORD *)&v3 + 1) + a1) = v25;
  }
  if ( (*(_BYTE *)(v6 + 2) & 0x40) != 0 )
  {
    v30 = *(_QWORD *)(v6 + 968);
    if ( v30 )
      *(_BYTE *)(v30 + 64) = 1;
  }
  *(_QWORD *)(a1 + 34552) = v8;
  *(_QWORD *)(a1 + 34432) = v9;
  if ( (*(_BYTE *)(v6 + 2) & 2) != 0 )
  {
    v31 = *(_QWORD *)(v6 + 360);
    v32 = *(_QWORD *)(v31 + 32);
    if ( v32 )
    {
      if ( KiHwCountersCount )
      {
        v34 = (unsigned int *)&KiHwCounters;
        v35 = (_QWORD *)(v31 + 48);
        v36 = (unsigned int)KiHwCountersCount;
        do
        {
          if ( (v32 & v12) != 0 )
          {
            v25 = *v34;
            *(_QWORD *)&v3 = __readpmc(v25);
            *((_QWORD *)&v3 + 1) = (unsigned __int64)DWORD1(v3) << 32;
            *v35 = v3;
          }
          v12 *= 2LL;
          v35 += 3;
          ++v34;
          --v36;
        }
        while ( v36 );
      }
    }
  }
  v33 = *(_BYTE *)(a1 + 6) == 0;
  *(_BYTE *)(a1 + 32) = 0;
  if ( !v33 )
  {
    *(_BYTE *)(a1 + 6) = 0;
    if ( !v5 )
    {
      LOBYTE(v25) = 2;
      HalRequestSoftwareInterrupt(v25, *((__int64 *)&v3 + 1));
    }
  }
}
