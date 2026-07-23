/*
 * XREFs of KiStartThreadCycleAccumulationContextSwap @ 0x140209540
 * Callers:
 *     SwapContext @ 0x140734B80 (SwapContext.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     KiInsertDeferredPreemptionApc @ 0x14020A138 (KiInsertDeferredPreemptionApc.c)
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall KiStartThreadCycleAccumulationContextSwap(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // r11
  __int64 v8; // r15
  ULONG_PTR v9; // r14
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r12
  signed __int64 v15; // rdx
  char v16; // cl
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int128 v19; // rax
  char v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // r8d
  __int64 v24; // rdx
  unsigned __int16 *v25; // r9
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int64 v31; // rax
  unsigned int *v32; // r9
  __int64 v33; // rbx
  _QWORD *v34; // r10
  unsigned __int64 v35; // rax
  unsigned __int32 *v36; // r8
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rax
  unsigned __int32 v41; // eax
  unsigned __int32 v42; // ett
  unsigned __int32 v43; // edx
  unsigned __int32 v44; // edx
  __int64 v45; // rdi
  unsigned __int64 v46; // r11
  signed __int64 v47; // rax
  int v48; // r10d
  unsigned __int64 v49; // rcx
  __int64 v50; // r8
  _QWORD *v51; // r8
  unsigned __int32 v52; // eax
  unsigned __int32 v53; // ett
  __int64 v54; // r9
  unsigned __int64 v55; // r9
  _QWORD *v56; // r8
  __int64 CounterSafe; // rax
  __int64 v58; // r12
  signed __int64 v59; // rdx
  char v60; // al
  __int64 v61; // r8
  int v62; // edx
  char v63; // r9
  __int64 v64; // rdi
  unsigned __int64 v65; // r11
  signed __int64 v66; // rax
  int v67; // r10d
  unsigned __int64 v68; // rcx
  __int64 v69; // r9
  unsigned __int64 v70; // r9
  signed __int32 v71[8]; // [rsp+0h] [rbp-78h] BYREF
  int v72; // [rsp+30h] [rbp-48h] BYREF
  __int128 v73; // [rsp+34h] [rbp-44h]

  v2 = a2;
  v4 = 0LL;
  v5 = 0LL;
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
          v37 = *(unsigned int *)(v9 + 188);
          if ( (unsigned int)v37 < HalpTimerQueryCounterHandlerCount )
            break;
          v44 = 0;
          if ( HalpTimerQueryCounterHandlerCount )
          {
            v56 = &unk_140FBB7E8;
            do
            {
              if ( v9 == *v56 )
                break;
              ++v44;
              v56 += 2;
            }
            while ( v44 < HalpTimerQueryCounterHandlerCount );
          }
          if ( v44 >= HalpTimerQueryCounterHandlerCount
            || (_DWORD)v37 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 188), v44, v37) )
          {
            KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v9, *(int *)(v9 + 228));
          }
        }
        if ( (*(_DWORD *)(v9 + 224) & 0x10000) != 0 )
          v38 = *(_QWORD *)(v9 + 72) + *(_DWORD *)(v9 + 80) * KeGetPcr()->Prcb.Number;
        else
          v38 = *(_QWORD *)(v9 + 72);
        v4 = (((unsigned __int64)((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v37])(v38)
             * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
           + MEMORY[0xFFFFF780000003B8];
      }
      else
      {
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          CounterSafe = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
          v58 = *(_QWORD *)(v9 + 208);
          v59 = CounterSafe;
        }
        else
        {
          do
          {
            v58 = *(_QWORD *)(v9 + 208);
            do
            {
              v64 = *(_QWORD *)(v9 + 200);
              v65 = HalpTimerQueryCounterSafe(v9);
              _InterlockedOr(v71, 0);
              v66 = *(_QWORD *)(v9 + 200);
            }
            while ( v64 != v66 );
          }
          while ( v58 != *(_QWORD *)(v9 + 208) );
          v67 = *(_DWORD *)(v9 + 220);
          v68 = v64 ^ v65;
          if ( _bittest64((const __int64 *)&v68, (unsigned __int8)(v67 - 1)) )
          {
            if ( v67 == 64 )
              v69 = -1LL;
            else
              v69 = (1LL << v67) - 1;
            v70 = v64 & v69;
            v59 = (v65 | v64 ^ v70) + (1LL << v67);
            if ( v65 >= v70 )
              v59 = v65 | v64 ^ v70;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 200), v59, v66);
          }
          else if ( v67 == 64 )
          {
            v59 = v65;
          }
          else
          {
            v59 = v65 | v64 & ~((1LL << v67) - 1);
          }
        }
        v4 = HalpTimerScaleCounter(v58 + v59, *(_QWORD *)(v9 + 192), 10000000LL);
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
          v43 = 0;
          if ( HalpTimerQueryCounterHandlerCount )
          {
            v51 = &unk_140FBB7E8;
            do
            {
              if ( v9 == *v51 )
                break;
              ++v43;
              v51 += 2;
            }
            while ( v43 < HalpTimerQueryCounterHandlerCount );
          }
          if ( v43 >= HalpTimerQueryCounterHandlerCount
            || (_DWORD)v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 188), v43, v11) )
          {
            KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v9, *(int *)(v9 + 228));
          }
        }
        if ( (*(_DWORD *)(v9 + 224) & 0x10000) != 0 )
          v12 = *(_QWORD *)(v9 + 72) + *(_DWORD *)(v9 + 80) * KeGetPcr()->Prcb.Number;
        else
          v12 = *(_QWORD *)(v9 + 72);
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
            v45 = *(_QWORD *)(v9 + 200);
            v46 = HalpTimerQueryCounterSafe(v9);
            _InterlockedOr(v71, 0);
            v47 = *(_QWORD *)(v9 + 200);
          }
          while ( v45 != v47 );
        }
        while ( v14 != *(_QWORD *)(v9 + 208) );
        v48 = *(_DWORD *)(v9 + 220);
        v49 = v45 ^ v46;
        if ( _bittest64((const __int64 *)&v49, (unsigned __int8)(v48 - 1)) )
        {
          if ( v48 == 64 )
            v54 = -1LL;
          else
            v54 = (1LL << v48) - 1;
          v55 = v45 & v54;
          v15 = (v46 | v45 ^ v55) + (1LL << v48);
          if ( v46 >= v55 )
            v15 = v46 | v45 ^ v55;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 200), v15, v47);
        }
        else if ( v48 == 64 )
        {
          v15 = v46;
        }
        else
        {
          v15 = v46 | v45 & ~((1LL << v48) - 1);
        }
      }
      v4 = v14 + v15;
    }
    if ( v9 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v50 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v50 = 10000000LL;
      v4 = HalpTimerScaleCounter(v4, v10, v50);
    }
    v16 = *(_BYTE *)(a1 + 172);
    v17 = v4;
    if ( v16 )
      v17 = v4 << v16;
    v5 = (v17 * (unsigned __int128)*(unsigned __int64 *)(a1 + 176)) >> 64;
    a2 = *(_QWORD *)(a1 + 34552);
    v6 = v4 - a2;
    v7 = v5 - *(_QWORD *)(a1 + 34432);
    if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
    {
      v18 = v4;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v19 = (a2 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v18 = v4 << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v19 = a2 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      }
      a2 = (unsigned int)((unsigned __int64)((((v18 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                                            * (unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount)
         - (unsigned int)((unsigned __int64)((*((unsigned __int64 *)&v19 + 1)
                                            * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount);
      if ( (_DWORD)a2 )
      {
        *(_DWORD *)(a1 + 34372) += a2;
        *(_DWORD *)(a1 + 34384) += a2;
      }
    }
  }
  *(_QWORD *)(a1 + 34560) += v6;
  *(_QWORD *)(a1 + 34680) += v7;
  *(_QWORD *)(a1 + 34552) = v4;
  *(_QWORD *)(a1 + 34432) = v5;
  v20 = *(_BYTE *)(v2 + 2);
  if ( (v20 & 0xB6) != 0 )
  {
    if ( (v20 & 0x20) != 0 )
    {
      v21 = *(_QWORD *)(a1 + 35264);
      v22 = *(_QWORD *)(a1 + 35272);
      if ( v21 && v22 )
      {
        v23 = *(_DWORD *)(v22 + 148);
        if ( v23 == -1 )
        {
          v23 = *(_DWORD *)(v22 + 160);
        }
        else if ( v23 >= *(_DWORD *)(v21 + 536) )
        {
          v23 = *(_DWORD *)(v21 + 536);
        }
      }
      else
      {
        v23 = 100;
      }
      v24 = 0LL;
      v25 = (unsigned __int16 *)(a1 + 35468);
      do
      {
        if ( v23 <= *v25 )
          break;
        v24 = (unsigned int)(v24 + 1);
        ++v25;
      }
      while ( (unsigned int)v24 < 3 );
      a2 = (*(_BYTE *)(a1 + 35352) != 0 ? 8 : 0) + 16 * (v24 + 2168);
      *(_QWORD *)(a2 + a1) += v7;
    }
    if ( (v20 & 0x40) != 0 )
    {
      v26 = *(_QWORD *)(v2 + 968);
      if ( v26 )
        *(_BYTE *)(v26 + 64) = 1;
    }
    *(_BYTE *)(a1 + 32) = 0;
    v27 = *(_QWORD *)(v2 + 360);
    if ( v27 )
    {
      v28 = *(_QWORD *)(v27 + 32);
      if ( v28 && KiHwCountersCount )
      {
        v32 = (unsigned int *)&KiHwCounters;
        v33 = (unsigned int)KiHwCountersCount;
        v34 = (_QWORD *)(v27 + 48);
        do
        {
          if ( (v28 & v8) != 0 )
          {
            v35 = __readpmc(*v32);
            a2 = (unsigned __int64)HIDWORD(v35) << 32;
            *v34 = v35;
          }
          v8 *= 2LL;
          v34 += 3;
          ++v32;
          --v33;
        }
        while ( v33 );
      }
      if ( (*(_DWORD *)(v27 + 16) & 1) != 0 )
      {
        ++*(_DWORD *)(v27 + 20);
        *(_QWORD *)v27 |= 1LL << *(_BYTE *)(v2 + 643);
      }
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v41 = *SchedulerAssist;
      do
      {
        a2 = v41;
        LODWORD(a2) = v41 & 0xFFDFFFFF;
        v42 = v41;
        v41 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v41 & 0xFFDFFFFF, v41);
      }
      while ( v42 != v41 );
      if ( (v41 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick();
    }
    _enable();
    if ( (*(_BYTE *)(v2 + 2) & 4) == 0 )
      goto LABEL_37;
    v39 = *(_DWORD *)(v2 + 120);
    if ( (v39 & 0x800) == 0 )
    {
      if ( (v39 & 0x400) != 0
        || *(char *)(v2 + 195) >= 16
        || (v39 & 0x200) != 0
        || (v40 = *(_QWORD *)(v2 + 104)) == 0
        || (CurrentPrcb = (struct _KPRCB *)(v40 + *(unsigned int *)(a1 + 216))) == 0LL )
      {
LABEL_37:
        if ( KiHgsPlusEnabled )
        {
          v31 = __rdtsc();
          CurrentPrcb = *(struct _KPRCB **)(v2 + 1072);
          a2 = (unsigned __int64)HIDWORD(v31) << 32;
          *(_QWORD *)&CurrentPrcb->MxCsr = v31;
          *(_QWORD *)(*(_QWORD *)(v2 + 1072) + 8LL) = 0LL;
        }
        goto LABEL_39;
      }
      while ( (CurrentPrcb->HalReserved[7] & 2) == 0 )
      {
        CurrentPrcb = (struct _KPRCB *)CurrentPrcb->ProcessorState.SpecialRegisters.MsrStar;
        if ( !CurrentPrcb )
          goto LABEL_37;
      }
    }
    LOBYTE(SchedulerAssist) = 1;
    KiInsertDeferredPreemptionApc(a1, v2, SchedulerAssist);
    goto LABEL_37;
  }
  --*(_BYTE *)(a1 + 32);
  CurrentPrcb = KeGetCurrentPrcb();
  v36 = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( v36 )
  {
    _m_prefetchw(v36);
    v52 = *v36;
    do
    {
      a2 = v52;
      LODWORD(a2) = v52 & 0xFFDFFFFF;
      v53 = v52;
      v52 = _InterlockedCompareExchange((volatile signed __int32 *)v36, v52 & 0xFFDFFFFF, v52);
    }
    while ( v53 != v52 );
    if ( (v52 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick();
  }
  _enable();
LABEL_39:
  if ( *(_BYTE *)(a1 + 6) )
  {
    *(_BYTE *)(a1 + 6) = 0;
    if ( v2 != *(_QWORD *)(a1 + 24) )
    {
      v73 = 0LL;
      if ( (KiTrapFeatures & 0x10) != 0 )
      {
        v60 = HalpDisableInterrupts(CurrentPrcb, a2, KeGetCurrentPrcb());
        v62 = *(_DWORD *)(v61 + 168);
        v63 = v60;
        *(_DWORD *)(v61 + 168) = v62 | 4;
        if ( !v62 )
          __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
        if ( v63 )
          _enable();
      }
      v72 = 5;
      HalpInterruptSendIpi(&v72, 47LL);
    }
  }
}
