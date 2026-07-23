/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x14021CAF0
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14021C500 (KeQueryTotalCycleTimeThread.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140AA4DE0 (PsQueryTotalCycleTimeProcess.c)
 *     KeEnableProfiling @ 0x140B5D7D0 (KeEnableProfiling.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     HalRequestSoftwareInterrupt @ 0x14021F9A0 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateThreadHgsFeedback @ 0x140228590 (KiUpdateThreadHgsFeedback.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, unsigned __int64 *a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v4; // esi
  LARGE_INTEGER v5; // r11
  unsigned __int64 v6; // r12
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int8 QpcToTscIncrementShift; // cl
  LARGE_INTEGER v9; // rdx
  unsigned __int64 StartCyclesQpc; // r8
  unsigned __int128 v11; // rax
  LARGE_INTEGER v12; // r8
  int v13; // r8d
  char *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r9d
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  char v22; // r14
  unsigned int *v23; // r15
  __int64 v24; // rbp
  unsigned int LatestFrequencyPercent; // r13d
  __int64 v26; // rax
  __int64 v27; // r10
  __int64 v28; // r9
  unsigned int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r10
  _PROC_PERF_DOMAIN *Domain; // rcx
  _PROC_PERF_CONSTRAINT *Constraint; // rax
  unsigned int CurrentFrequencyPercent; // r8d
  unsigned int v36; // r9d
  unsigned __int16 *FrequencyBucketThresholds; // rdx
  unsigned __int8 ArchitecturalEfficiencyClass; // r8
  _QWORD *v39; // rdx
  unsigned int UserWaitTime_high; // eax
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  int v43; // ecx
  _QWORD *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // rcx
  LARGE_INTEGER v49; // r14
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // r12
  unsigned __int64 v52; // r11
  LARGE_INTEGER v53; // rax
  unsigned __int8 v54; // cl
  LARGE_INTEGER v55; // rdx
  unsigned __int64 v56; // r8
  unsigned __int128 v57; // rax
  LARGE_INTEGER v58; // r8
  int v59; // edx
  unsigned __int64 v60; // rcx
  _PROC_PERF_DOMAIN *v61; // rcx
  _PROC_PERF_CONSTRAINT *v62; // rax
  unsigned __int16 *v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // r10
  bool v68; // zf
  signed __int32 *SchedulerAssist; // r8
  __int64 v71; // rcx
  _QWORD *i; // rax
  __int64 v73; // rax
  __int64 v74; // r8
  __int64 v75; // r10
  unsigned int *v76; // r14
  __int64 v77; // r9
  __int64 v78; // r12
  unsigned __int64 v79; // rax
  _QWORD *v80; // r8
  __int64 v81; // r9
  signed __int32 v82; // eax
  signed __int32 v83; // ett
  __int64 v84; // [rsp+70h] [rbp+8h]
  unsigned __int64 v86; // [rsp+78h] [rbp+10h]
  unsigned __int64 v87; // [rsp+80h] [rbp+18h]
  unsigned __int64 v88; // [rsp+88h] [rbp+20h]

  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v5.QuadPart = 0LL;
  v87 = 0LL;
  v6 = 0LL;
  CurrentPrcb->NestingLevel = 1;
  if ( CurrentPrcb->CycleAccumulationInitialized )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    QpcToTscIncrementShift = CurrentPrcb->QpcToTscIncrementShift;
    v5 = PerformanceCounter;
    v9 = PerformanceCounter;
    if ( QpcToTscIncrementShift )
      v9.QuadPart = PerformanceCounter.QuadPart << QpcToTscIncrementShift;
    v87 = ((unsigned __int64)v9.QuadPart * (unsigned __int128)CurrentPrcb->QpcToTscIncrement) >> 64;
    v6 = v87 - CurrentPrcb->StartCycles;
    if ( KiTickAccumulationFromAccountingPeriods )
    {
      StartCyclesQpc = CurrentPrcb->StartCyclesQpc;
      if ( MEMORY[0xFFFFF78000000300] )
      {
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v11 = (StartCyclesQpc << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v12.QuadPart = v5.QuadPart << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v11 = StartCyclesQpc * (unsigned __int128)MEMORY[0xFFFFF78000000360];
          v12 = v5;
        }
        v13 = ((unsigned __int64)(((((unsigned __int64)v12.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                                 * (unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount)
            - ((unsigned __int64)((*((unsigned __int64 *)&v11 + 1)
                                 * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount);
        if ( v13 )
        {
          if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0
            || (((unsigned __int64)v5.QuadPart >> 4) & 0x1F) >= (unsigned int)__popcnt(*(unsigned int *)(a1 + 1100)) )
          {
            CurrentPrcb->KernelTime += v13;
            *(_DWORD *)(a1 + 652) += v13;
          }
          else
          {
            CurrentPrcb->UserTime += v13;
            *(_DWORD *)(a1 + 732) += v13;
          }
          if ( (_KTHREAD *)a1 != CurrentPrcb->IdleThread )
          {
            v14 = (char *)(a1 + 195);
            if ( *(char *)(a1 + 195) < 16 )
            {
              if ( *(_QWORD *)(a1 + 104) )
              {
                v15 = *(_QWORD *)(a1 + 104);
                if ( v15 )
                {
                  v16 = v15 + CurrentPrcb->ScbOffset;
                  if ( v16 )
                  {
                    if ( *v14 < 16 && (*(_DWORD *)(a1 + 120) & 0x200) == 0 )
                    {
                      v17 = v15 + CurrentPrcb->ScbOffset;
                      while ( (*(_BYTE *)(v17 + 128) & 2) == 0 )
                      {
                        v17 = *(_QWORD *)(v17 + 440);
                        if ( !v17 )
                        {
                          do
                          {
                            v18 = *(_DWORD *)(v16 + 140);
                            if ( v18 )
                              break;
                            v16 = *(_QWORD *)(v16 + 440);
                          }
                          while ( v16 );
                          if ( v18 )
                            break;
                          goto LABEL_25;
                        }
                      }
LABEL_27:
                      CurrentPrcb->AvailableTime += v13;
                      goto LABEL_28;
                    }
LABEL_25:
                    v14 = (char *)(a1 + 195);
                  }
                }
              }
            }
            if ( *v14 >= 8 )
              goto LABEL_28;
            goto LABEL_27;
          }
        }
      }
    }
  }
LABEL_28:
  CurrentPrcb->StartCyclesQpc = v5.QuadPart;
  v19 = v87;
  CurrentPrcb->StartCycles = v87;
  v20 = v6 + *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = v20;
  v88 = v20;
  if ( (_KTHREAD *)a1 != CurrentPrcb->IdleThread )
  {
    v21 = *(unsigned int *)(a1 + 80) + ((v6 * CurrentPrcb->CpuCycleScalingFactor) >> 16);
    if ( v21 > 0xFFFFFFFF )
      LODWORD(v21) = -1;
    *(_DWORD *)(a1 + 80) = v21;
  }
  v22 = *(_BYTE *)(a1 + 2);
  v23 = (unsigned int *)&KiHwCounters;
  v24 = 1LL;
  LatestFrequencyPercent = 100;
  if ( (v22 & 0xBE) != 0 )
  {
    if ( v22 < 0 )
    {
      v26 = *(_QWORD *)(a1 + 544);
      v27 = (*(_QWORD *)(v26 + 400) >> 4) & 0x1FFLL;
      v28 = ((unsigned int)*(_QWORD *)(v26 + 400) >> 13) & 0x3FFFF;
      _BitScanReverse(&v29, v28);
      v30 = *(_QWORD *)(*((_QWORD *)CurrentPrcb->ExSaPageArray + v29 - 2) + 8 * (v28 ^ (unsigned int)(1 << v29)) + 8);
      *(_QWORD *)(v30 + 8 * v27) += v6;
      v22 &= ~0x80u;
    }
    if ( (v22 & 0x10) != 0 )
    {
      v31 = 8LL * *(unsigned __int8 *)(a1 + 124) + 34440;
      *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v31) += v6;
      v22 &= ~0x10u;
    }
    if ( (v22 & 0x20) != 0 )
    {
      v32 = *(_QWORD *)(a1 + 1672);
      if ( v32 )
      {
        Domain = CurrentPrcb->PowerState.CheckContext.Domain;
        Constraint = CurrentPrcb->PowerState.CheckContext.Constraint;
        if ( Domain && Constraint )
        {
          CurrentFrequencyPercent = Constraint->CurrentFrequencyPercent;
          if ( CurrentFrequencyPercent == -1 )
          {
            CurrentFrequencyPercent = Constraint->LatestFrequencyPercent;
          }
          else if ( CurrentFrequencyPercent >= Domain->GuaranteedPercent )
          {
            CurrentFrequencyPercent = Domain->GuaranteedPercent;
          }
        }
        else
        {
          CurrentFrequencyPercent = 100;
        }
        v36 = 0;
        FrequencyBucketThresholds = CurrentPrcb->PowerState.FrequencyBucketThresholds;
        do
        {
          if ( CurrentFrequencyPercent <= *FrequencyBucketThresholds )
            break;
          ++v36;
          ++FrequencyBucketThresholds;
        }
        while ( v36 < 3 );
        ArchitecturalEfficiencyClass = CurrentPrcb->PowerState.ArchitecturalEfficiencyClass;
        v39 = (_QWORD *)(16LL * v36 + v32 + (ArchitecturalEfficiencyClass != 0 ? 8 : 0));
        UserWaitTime_high = HIDWORD(KsepShimDbLock.UserWaitTime);
        *v39 += v6;
        v41 = *(_DWORD *)(v32 + 192);
        if ( UserWaitTime_high > v41 )
        {
          LODWORD(v84) = UserWaitTime_high;
          if ( UserWaitTime_high - v41 >= 0x20 )
            HIDWORD(v84) = 1;
          else
            HIDWORD(v84) = (*(_DWORD *)(v32 + 196) << (UserWaitTime_high - v41)) | 1;
          *(_QWORD *)(v32 + 192) = v84;
        }
        else
        {
          v42 = v41 - UserWaitTime_high;
          if ( v42 < 0x20 )
            *(_DWORD *)(v32 + 196) |= 1 << v42;
        }
        if ( !KiEfficiencyClassSystem )
        {
          v43 = *(unsigned __int8 *)(a1 + 516);
          if ( v43 == 2 || *(_BYTE *)(a1 + 516) == 6 || (_BYTE)v43 == 5 )
            *(_QWORD *)(v32 + 16LL * v36 + 8) += v6;
        }
        if ( *(_QWORD *)(a1 + 1616) )
        {
          v44 = (_QWORD *)((ArchitecturalEfficiencyClass != 0 ? 8 : 0) + v32 + 16 * (v36 + 8LL));
          *v44 += v6;
          v45 = 64LL;
          if ( ArchitecturalEfficiencyClass )
            v45 = 72LL;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1616) + 1672LL) + 16LL * v36 + v45),
            v6);
        }
      }
      v22 &= ~0x20u;
    }
    if ( (v22 & 0x40) != 0 )
    {
      v46 = *(_QWORD *)(a1 + 968);
      if ( v46 )
        *(_BYTE *)(v46 + 64) = 0;
    }
    if ( KiHgsPlusEnabled )
    {
      KiUpdateThreadHgsFeedback(CurrentPrcb, a1, v6, 0LL);
      v19 = v87;
    }
    if ( CurrentPrcb->CyclesByThreadType
      && *(_UNKNOWN **)(a1 + 544) != &unk_140FC9F40
      && *(unsigned __int8 *)(a1 + 516) < 7u )
    {
      v47 = *(_DWORD *)(a1 + 80);
      if ( v47 <= *(_DWORD *)(a1 + 84) )
        v47 = *(_DWORD *)(a1 + 84);
      v48 = *(unsigned __int8 *)(a1 + 517)
          + KiHgsPlusConfiguration
          * ((v47 >= KiDynamicHeteroCpuPolicyExpectedCycles) + 2 * (unsigned int)*(unsigned __int8 *)(a1 + 516));
      CurrentPrcb->CyclesByThreadType[v48] += v6;
    }
    if ( (v22 & 0xBE) != 0 )
    {
      v71 = *(_QWORD *)(a1 + 104);
      if ( v71 )
      {
        for ( i = (_QWORD *)(v71 + CurrentPrcb->ScbOffset); i; i = (_QWORD *)i[55] )
          *i += v6;
      }
      if ( (*(_BYTE *)(a1 + 2) & 8) != 0
        && *(_UNKNOWN **)(a1 + 544) != &unk_140FC9F40
        && (CurrentPrcb->SchedulerSubNode->Affinity.Mask & *(_QWORD *)(*(_QWORD *)(a1 + 576)
                                                                     + 8LL
                                                                     * CurrentPrcb->SchedulerSubNode->Affinity.Group
                                                                     + 8)) != CurrentPrcb->SchedulerSubNode->Affinity.Mask )
      {
        CurrentPrcb->AffinitizedCycles += v6;
      }
      v73 = *(_QWORD *)(a1 + 360);
      if ( v73 )
      {
        v74 = *(_QWORD *)(v73 + 32);
        if ( v74 )
        {
          v75 = 1LL;
          if ( KiHwCountersCount )
          {
            v76 = (unsigned int *)&KiHwCounters;
            v77 = v73 + 48;
            v78 = (unsigned int)KiHwCountersCount;
            do
            {
              if ( (v74 & v75) != 0 )
              {
                v79 = __readpmc(*v76);
                *(_QWORD *)(v77 + 8) += (unsigned int)(v79 - *(_DWORD *)v77);
                *(_QWORD *)v77 = v79;
              }
              v75 *= 2LL;
              ++v76;
              v77 += 24LL;
              --v78;
            }
            while ( v78 );
          }
        }
      }
    }
  }
  if ( a2 )
    *a2 = v19;
  v49.QuadPart = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( CurrentPrcb->CycleAccumulationInitialized )
  {
    v53 = KeQueryPerformanceCounter(0LL);
    v54 = CurrentPrcb->QpcToTscIncrementShift;
    v49 = v53;
    v55 = v53;
    if ( v54 )
      v55.QuadPart = v53.QuadPart << v54;
    v56 = CurrentPrcb->StartCyclesQpc;
    v51 = v53.QuadPart - v56;
    v86 = ((unsigned __int64)v55.QuadPart * (unsigned __int128)CurrentPrcb->QpcToTscIncrement) >> 64;
    v52 = v86 - CurrentPrcb->StartCycles;
    v50 = v86;
    if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
    {
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v57 = (v56 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v58.QuadPart = v49.QuadPart << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v57 = v56 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v58 = v49;
      }
      v50 = v86;
      v59 = ((unsigned __int64)(((((unsigned __int64)v58.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                               * (unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount)
          - ((unsigned __int64)((*((unsigned __int64 *)&v57 + 1)
                               * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount);
      if ( v59 )
      {
        CurrentPrcb->KernelTime += v59;
        CurrentPrcb->InterruptTime += v59;
      }
    }
  }
  CurrentPrcb->CycleTimeQpc += v51;
  v60 = v52 + CurrentPrcb->CycleTime;
  CurrentPrcb->CycleTime = v60;
  if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
  {
    v61 = CurrentPrcb->PowerState.CheckContext.Domain;
    v62 = CurrentPrcb->PowerState.CheckContext.Constraint;
    if ( v61 && v62 )
    {
      LatestFrequencyPercent = v62->CurrentFrequencyPercent;
      if ( LatestFrequencyPercent == -1 )
      {
        LatestFrequencyPercent = v62->LatestFrequencyPercent;
      }
      else if ( LatestFrequencyPercent >= v61->GuaranteedPercent )
      {
        LatestFrequencyPercent = v61->GuaranteedPercent;
      }
    }
    v63 = CurrentPrcb->PowerState.FrequencyBucketThresholds;
    do
    {
      if ( LatestFrequencyPercent <= *v63 )
        break;
      ++v4;
      ++v63;
    }
    while ( v4 < 3 );
    v64 = (CurrentPrcb->PowerState.ArchitecturalEfficiencyClass != 0 ? 8 : 0) + 16 * (v4 + 2168LL);
    v60 = v52 + *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v64);
    *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v64) = v60;
  }
  if ( (*(_BYTE *)(a1 + 2) & 0x40) != 0 )
  {
    v65 = *(_QWORD *)(a1 + 968);
    if ( v65 )
      *(_BYTE *)(v65 + 64) = 1;
  }
  CurrentPrcb->StartCyclesQpc = v49.QuadPart;
  CurrentPrcb->StartCycles = v50;
  if ( (*(_BYTE *)(a1 + 2) & 2) != 0 )
  {
    v66 = *(_QWORD *)(a1 + 360);
    v67 = *(_QWORD *)(v66 + 32);
    if ( v67 )
    {
      if ( KiHwCountersCount )
      {
        v80 = (_QWORD *)(v66 + 48);
        v81 = (unsigned int)KiHwCountersCount;
        do
        {
          if ( (v67 & v24) != 0 )
          {
            v60 = *v23;
            *v80 = __readpmc(v60);
          }
          v24 *= 2LL;
          v80 += 3;
          ++v23;
          --v81;
        }
        while ( v81 );
      }
    }
  }
  v68 = CurrentPrcb->InterruptRequest == 0;
  CurrentPrcb->NestingLevel = 0;
  if ( !v68 )
  {
    LOBYTE(v60) = 2;
    CurrentPrcb->InterruptRequest = 0;
    HalRequestSoftwareInterrupt(v60);
  }
  SchedulerAssist = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v82 = *SchedulerAssist;
    do
    {
      v83 = v82;
      v82 = _InterlockedCompareExchange(SchedulerAssist, v82 & 0xFFDFFFFF, v82);
    }
    while ( v83 != v82 );
    if ( (v82 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick();
  }
  _enable();
  return v88;
}
