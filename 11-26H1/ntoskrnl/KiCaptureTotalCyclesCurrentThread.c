/*
 * XREFs of KiCaptureTotalCyclesCurrentThread @ 0x140226CD0
 * Callers:
 *     KiDispatchInterrupt @ 0x140224C20 (KiDispatchInterrupt.c)
 *     KiHandleDeferredPreemption @ 0x1402300C0 (KiHandleDeferredPreemption.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiIdleSchedule @ 0x140312AA0 (KiIdleSchedule.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140335240 (KiGroupSchedulingGenerationEnd.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     KiExecuteSmtIsolationThread @ 0x1405F8FD0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     KiUpdateThreadHgsFeedback @ 0x140228590 (KiUpdateThreadHgsFeedback.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall KiCaptureTotalCyclesCurrentThread(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v6; // r15d
  __int64 v7; // rbx
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rdi
  __int64 v10; // r13
  ULONG_PTR v11; // r14
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r12
  signed __int64 v17; // rdx
  char v18; // cl
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int128 v22; // rax
  int v23; // r8d
  char *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  char v29; // bl
  __int64 v30; // rax
  __int64 v31; // r10
  unsigned int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // r10
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // edx
  unsigned __int16 *v38; // r8
  char v39; // r8
  _QWORD *v40; // rdx
  unsigned int UserWaitTime_high; // eax
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  int v44; // ecx
  _QWORD *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned int v48; // ecx
  __int64 v49; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  __int64 v52; // rcx
  _QWORD *i; // rax
  __int64 v54; // rax
  __int64 v55; // r8
  unsigned int *v56; // r10
  __int64 v57; // r11
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  unsigned __int32 v61; // eax
  __int64 v62; // rdx
  unsigned __int32 v63; // ett
  unsigned __int32 v64; // edx
  unsigned __int32 v65; // edx
  __int64 v66; // rdi
  unsigned __int64 v67; // r11
  signed __int64 v68; // rax
  int v69; // r10d
  unsigned __int64 v70; // rcx
  __int64 v71; // r8
  _QWORD *v72; // r8
  __int64 v73; // r9
  _QWORD *v74; // r8
  __int64 CounterSafe; // rax
  __int64 v76; // r12
  signed __int64 v77; // rdx
  __int64 v78; // rdi
  unsigned __int64 v79; // r11
  signed __int64 v80; // rax
  int v81; // r10d
  unsigned __int64 v82; // rcx
  __int64 v83; // r9
  unsigned __int64 v84; // r9
  signed __int32 v85[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v86; // [rsp+60h] [rbp+8h]

  _disable();
  v6 = 0;
  *(_BYTE *)(a1 + 32) = 1;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
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
          v59 = *(unsigned int *)(v11 + 188);
          if ( (unsigned int)v59 < HalpTimerQueryCounterHandlerCount )
            break;
          v65 = 0;
          if ( HalpTimerQueryCounterHandlerCount )
          {
            v74 = &unk_140FBB7E8;
            do
            {
              if ( v11 == *v74 )
                break;
              ++v65;
              v74 += 2;
            }
            while ( v65 < HalpTimerQueryCounterHandlerCount );
          }
          if ( v65 >= HalpTimerQueryCounterHandlerCount
            || (_DWORD)v59 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 188), v65, v59) )
          {
            KeBugCheckEx(0x5Cu, 0x700uLL, 1uLL, v11, *(int *)(v11 + 228));
          }
        }
        v60 = (*(_DWORD *)(v11 + 224) & 0x10000) != 0
            ? *(_QWORD *)(v11 + 72) + *(_DWORD *)(v11 + 80) * KeGetPcr()->Prcb.Number
            : *(_QWORD *)(v11 + 72);
        v8 = (((unsigned __int64)((__int64 (__fastcall *)(__int64))HalpTimerQueryCounterHandlers[2 * v59])(v60)
             * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
           + MEMORY[0xFFFFF780000003B8];
      }
      else
      {
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          CounterSafe = HalpTimerQueryCounterSafe(HalpPerformanceCounter);
          v76 = *(_QWORD *)(v11 + 208);
          v77 = CounterSafe;
        }
        else
        {
          do
          {
            v76 = *(_QWORD *)(v11 + 208);
            do
            {
              v78 = *(_QWORD *)(v11 + 200);
              v79 = HalpTimerQueryCounterSafe(v11);
              _InterlockedOr(v85, 0);
              v80 = *(_QWORD *)(v11 + 200);
            }
            while ( v78 != v80 );
          }
          while ( v76 != *(_QWORD *)(v11 + 208) );
          v81 = *(_DWORD *)(v11 + 220);
          v82 = v78 ^ v79;
          if ( _bittest64((const __int64 *)&v82, (unsigned __int8)(v81 - 1)) )
          {
            if ( v81 == 64 )
              v83 = -1LL;
            else
              v83 = (1LL << v81) - 1;
            v84 = v78 & v83;
            v77 = (v79 | v78 ^ v84) + (1LL << v81);
            if ( v79 >= v84 )
              v77 = v79 | v78 ^ v84;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 200), v77, v80);
          }
          else
          {
            v77 = v81 == 64 ? v79 : v79 | v78 & ~((1LL << v81) - 1);
          }
        }
        v8 = HalpTimerScaleCounter(v76 + v77, *(_QWORD *)(v11 + 192), 10000000LL);
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
          v64 = 0;
          if ( HalpTimerQueryCounterHandlerCount )
          {
            v72 = &unk_140FBB7E8;
            do
            {
              if ( v11 == *v72 )
                break;
              ++v64;
              v72 += 2;
            }
            while ( v64 < HalpTimerQueryCounterHandlerCount );
          }
          if ( v64 >= HalpTimerQueryCounterHandlerCount
            || (_DWORD)v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 188), v64, v13) )
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
            v66 = *(_QWORD *)(v11 + 200);
            v67 = HalpTimerQueryCounterSafe(v11);
            _InterlockedOr(v85, 0);
            v68 = *(_QWORD *)(v11 + 200);
          }
          while ( v66 != v68 );
        }
        while ( v16 != *(_QWORD *)(v11 + 208) );
        v69 = *(_DWORD *)(v11 + 220);
        v70 = v66 ^ v67;
        if ( _bittest64((const __int64 *)&v70, (unsigned __int8)(v69 - 1)) )
        {
          if ( v69 == 64 )
            v73 = -1LL;
          else
            v73 = (1LL << v69) - 1;
          a4 = v66 & v73;
          v17 = (v67 | v66 ^ a4) + (1LL << v69);
          if ( v67 >= a4 )
            v17 = v67 | v66 ^ a4;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 200), v17, v68);
        }
        else
        {
          v17 = v69 == 64 ? v67 : v67 | v66 & ~((1LL << v69) - 1);
        }
      }
      v8 = v16 + v17;
    }
    if ( v11 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v71 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v71 = 10000000LL;
      v8 = HalpTimerScaleCounter(v8, v12, v71);
    }
    v18 = *(_BYTE *)(a1 + 172);
    v19 = v8;
    if ( v18 )
      v19 = v8 << v18;
    v7 = (v19 * (unsigned __int128)*(unsigned __int64 *)(a1 + 176)) >> 64;
    v9 = v7 - *(_QWORD *)(a1 + 34432);
    if ( KiTickAccumulationFromAccountingPeriods )
    {
      v20 = *(_QWORD *)(a1 + 34552);
      if ( MEMORY[0xFFFFF78000000300] )
      {
        v21 = v8;
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v22 = (v20 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v21 = v8 << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v22 = v20 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        }
        a4 = (v21 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
        v23 = ((unsigned __int64)((a4 * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount)
            - ((unsigned __int64)((*((unsigned __int64 *)&v22 + 1)
                                 * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount);
        if ( v23 )
        {
          if ( (*(_DWORD *)(a2 + 116) & 0x400) != 0
            || ((v8 >> 4) & 0x1F) >= (unsigned int)__popcnt(*(unsigned int *)(a2 + 1100)) )
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
                    a4 = 0LL;
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
                            a4 = (unsigned int)(*(_DWORD *)(v26 + 140) + a4);
                            if ( (_DWORD)a4 )
                              break;
                            v26 = *(_QWORD *)(v26 + 440);
                          }
                          while ( v26 );
                          if ( (_DWORD)a4 )
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
  *(_QWORD *)(a1 + 34552) = v8;
  *(_QWORD *)(a1 + 34432) = v7;
  *(_QWORD *)(a2 + 72) += v9;
  if ( a2 != *(_QWORD *)(a1 + 24) )
  {
    v28 = *(unsigned int *)(a2 + 80) + ((v9 * *(unsigned int *)(a1 + 34488)) >> 16);
    if ( v28 > 0xFFFFFFFF )
      LODWORD(v28) = -1;
    *(_DWORD *)(a2 + 80) = v28;
  }
  v29 = *(_BYTE *)(a2 + 2);
  if ( (v29 & 0xBE) != 0 )
  {
    if ( v29 < 0 )
    {
      v30 = *(_QWORD *)(a2 + 544);
      v31 = (*(_QWORD *)(v30 + 400) >> 4) & 0x1FFLL;
      a4 = ((unsigned int)*(_QWORD *)(v30 + 400) >> 13) & 0x3FFFF;
      _BitScanReverse(&v32, a4);
      v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 35824) + 8LL * (v32 - 2)) + 8 * (a4 ^ (unsigned int)(1 << v32)) + 8);
      *(_QWORD *)(v33 + 8 * v31) += v9;
      v29 &= ~0x80u;
    }
    if ( (v29 & 0x10) != 0 )
    {
      *(_QWORD *)(8LL * *(unsigned __int8 *)(a2 + 124) + 34440 + a1) += v9;
      v29 &= ~0x10u;
    }
    if ( (v29 & 0x20) != 0 )
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
        a4 = 0LL;
        v38 = (unsigned __int16 *)(a1 + 35468);
        do
        {
          if ( v37 <= *v38 )
            break;
          a4 = (unsigned int)(a4 + 1);
          ++v38;
        }
        while ( (unsigned int)a4 < 3 );
        v39 = *(_BYTE *)(a1 + 35352);
        v40 = (_QWORD *)(16LL * (unsigned int)a4 + v34 + (v39 != 0 ? 8 : 0));
        UserWaitTime_high = HIDWORD(KsepShimDbLock.UserWaitTime);
        *v40 += v9;
        v42 = *(_DWORD *)(v34 + 192);
        if ( UserWaitTime_high > v42 )
        {
          LODWORD(v86) = UserWaitTime_high;
          if ( UserWaitTime_high - v42 >= 0x20 )
            HIDWORD(v86) = 1;
          else
            HIDWORD(v86) = (*(_DWORD *)(v34 + 196) << (UserWaitTime_high - v42)) | 1;
          *(_QWORD *)(v34 + 192) = v86;
        }
        else
        {
          v43 = v42 - UserWaitTime_high;
          if ( v43 < 0x20 )
            *(_DWORD *)(v34 + 196) |= 1 << v43;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v44 = *(unsigned __int8 *)(a2 + 516);
          if ( v44 == 2 || *(_BYTE *)(a2 + 516) == 6 || (_BYTE)v44 == 5 )
            *(_QWORD *)(v34 + 16LL * (unsigned int)a4 + 8) += v9;
        }
        if ( *(_QWORD *)(a2 + 1616) )
        {
          v45 = (_QWORD *)((v39 != 0 ? 8 : 0) + v34 + 16 * ((unsigned int)a4 + 8LL));
          *v45 += v9;
          v46 = 64LL;
          if ( v39 )
            v46 = 72LL;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 1616) + 1672LL) + 16LL * (unsigned int)a4 + v46),
            v9);
        }
      }
      v29 &= ~0x20u;
    }
    if ( (v29 & 0x40) != 0 )
    {
      v47 = *(_QWORD *)(a2 + 968);
      if ( v47 )
        *(_BYTE *)(v47 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
      KiUpdateThreadHgsFeedback(a1, a2, v9, 1LL);
    if ( *(_QWORD *)(a1 + 34480) && *(_UNKNOWN **)(a2 + 544) != &unk_140FC9F40 && *(unsigned __int8 *)(a2 + 516) < 7u )
    {
      v48 = *(_DWORD *)(a2 + 80);
      if ( v48 <= *(_DWORD *)(a2 + 84) )
        v48 = *(_DWORD *)(a2 + 84);
      LOBYTE(v6) = v48 >= KiDynamicHeteroCpuPolicyExpectedCycles;
      v49 = *(unsigned __int8 *)(a2 + 517)
          + KiHgsPlusConfiguration * (v6 + 2 * (unsigned int)*(unsigned __int8 *)(a2 + 516));
      *(_QWORD *)(*(_QWORD *)(a1 + 34480) + 8 * v49) += v9;
    }
    if ( (v29 & 0xBE) != 0 )
    {
      v52 = *(_QWORD *)(a2 + 104);
      if ( v52 )
      {
        for ( i = (_QWORD *)(v52 + *(unsigned int *)(a1 + 216)); i; i = (_QWORD *)i[55] )
          *i += v9;
      }
      if ( (*(_BYTE *)(a2 + 2) & 8) != 0
        && *(_UNKNOWN **)(a2 + 544) != &unk_140FC9F40
        && (*(_QWORD *)(*(_QWORD *)(a2 + 576) + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 136LL) + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL) )
      {
        *(_QWORD *)(a1 + 34472) += v9;
      }
      v54 = *(_QWORD *)(a2 + 360);
      if ( v54 )
      {
        v55 = *(_QWORD *)(v54 + 32);
        if ( v55 )
        {
          if ( KiHwCountersCount )
          {
            v56 = (unsigned int *)&KiHwCounters;
            v57 = (unsigned int)KiHwCountersCount;
            a4 = v54 + 48;
            do
            {
              if ( (v55 & v10) != 0 )
              {
                v58 = __readpmc(*v56);
                *(_QWORD *)(a4 + 8) += (unsigned int)(v58 - *(_DWORD *)a4);
                *(_QWORD *)a4 = v58;
              }
              v10 *= 2LL;
              ++v56;
              a4 += 24LL;
              --v57;
            }
            while ( v57 );
          }
        }
      }
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v61 = *SchedulerAssist;
    do
    {
      v62 = v61;
      LODWORD(v62) = v61 & 0xFFDFFFFF;
      v63 = v61;
      v61 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v61 & 0xFFDFFFFF, v61);
    }
    while ( v63 != v61 );
    if ( (v61 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v62, SchedulerAssist, a4);
  }
  _enable();
}
