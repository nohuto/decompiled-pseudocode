/*
 * XREFs of KiUpdateTime @ 0x14021F020
 * Callers:
 *     KeClockInterruptNotify @ 0x140223050 (KeClockInterruptNotify.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiUpdateRunTime @ 0x140220DB0 (KiUpdateRunTime.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiForwardTick @ 0x140452220 (KiForwardTick.c)
 *     PpmExecutePeriodicPerfCheck @ 0x140463F90 (PpmExecutePeriodicPerfCheck.c)
 *     KiComputeNewSystemTime @ 0x140464310 (KiComputeNewSystemTime.c)
 *     RtlWriteAcquireTickLock @ 0x1404643A4 (RtlWriteAcquireTickLock.c)
 *     RtlWriteTryAcquireTickLock @ 0x14049199C (RtlWriteTryAcquireTickLock.c)
 *     KiSetForceIdleState @ 0x1404BEDD8 (KiSetForceIdleState.c)
 *     PoExecuteIdleCheck @ 0x1404E9AC4 (PoExecuteIdleCheck.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiUpdateTime(unsigned __int8 a1, unsigned __int8 a2, unsigned int a3)
{
  __int64 *v3; // r14
  __int64 *v4; // rdi
  __int64 i; // rbx
  unsigned __int128 v6; // rax
  __int64 v7; // r10
  signed __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  LARGE_INTEGER v12; // rax
  unsigned __int64 v13; // r11
  __int64 v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  struct _LIST_ENTRY *v18; // r12
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned int v21; // edi
  unsigned __int8 CurrentIrql; // di
  LARGE_INTEGER InterruptTimePrecise; // rcx
  __int64 v24; // r14
  int v25; // r15d
  LARGE_INTEGER v26; // rsi
  char v27; // al
  unsigned __int8 v28; // r14
  int v29; // esi
  _DWORD *SchedulerAssist; // r8
  bool v32; // zf
  int v33; // ett
  unsigned __int64 v34; // rdx
  char v35; // [rsp+30h] [rbp-D0h] BYREF
  char v36; // [rsp+31h] [rbp-CFh]
  char v37; // [rsp+32h] [rbp-CEh] BYREF
  unsigned __int8 v38; // [rsp+33h] [rbp-CDh]
  unsigned __int8 v39; // [rsp+34h] [rbp-CCh]
  int v40; // [rsp+38h] [rbp-C8h] BYREF
  int v41[2]; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v43; // [rsp+50h] [rbp-B0h]
  LARGE_INTEGER v44; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h] BYREF
  LONGLONG v46; // [rsp+68h] [rbp-98h] BYREF
  struct _KAFFINITY_EX v47; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+180h] [rbp+80h] BYREF
  LARGE_INTEGER *v49; // [rsp+1A0h] [rbp+A0h]
  __int64 v50; // [rsp+1A8h] [rbp+A8h]
  int *v51; // [rsp+1B0h] [rbp+B0h]
  __int64 v52; // [rsp+1B8h] [rbp+B8h]
  __int64 *v53; // [rsp+1C0h] [rbp+C0h]
  __int64 v54; // [rsp+1C8h] [rbp+C8h]
  LONGLONG *v55; // [rsp+1D0h] [rbp+D0h]
  __int64 v56; // [rsp+1D8h] [rbp+D8h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+1E0h] [rbp+E0h]
  __int64 v58; // [rsp+1E8h] [rbp+E8h]
  int *v59; // [rsp+1F0h] [rbp+F0h]
  __int64 v60; // [rsp+1F8h] [rbp+F8h]
  char *v61; // [rsp+200h] [rbp+100h]
  __int64 v62; // [rsp+208h] [rbp+108h]
  char *v63; // [rsp+210h] [rbp+110h]
  __int64 v64; // [rsp+218h] [rbp+118h]

  v43 = a3;
  v38 = a2;
  v39 = a1;
  memset_0(&v47, 0, sizeof(v47));
  v36 = 0;
  *(_QWORD *)v41 = KeGetCurrentPrcb();
  v3 = &KiInterruptTimeErrorAccumulator;
  v35 = KeDisableInterrupts();
  v4 = (__int64 *)(MmWriteableSharedUserData + 832);
  v40 = 0;
  if ( KiTimeUpdateTryAcquireTickLock )
    v3 = 0LL;
  do
  {
    for ( i = *v4; (*v4 & 1) != 0; i = *v4 )
      _mm_pause();
    *((LARGE_INTEGER *)&v6 + 1) = KeQueryPerformanceCounter(0LL);
    v7 = MEMORY[0xFFFFF78000000008];
    v8 = 0LL;
    v9 = MEMORY[0xFFFFF78000000369];
    if ( *((_QWORD *)&v6 + 1) > MEMORY[0xFFFFF78000000350] )
    {
      v10 = *((_QWORD *)&v6 + 1) - MEMORY[0xFFFFF78000000350];
      PerformanceCounter.QuadPart = 0LL;
      if ( MEMORY[0xFFFFF78000000369] )
        v10 <<= MEMORY[0xFFFFF78000000369];
      v6 = v10 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      v8 = *((_QWORD *)&v6 + 1);
      if ( v3 )
      {
        *v3 += v6;
        if ( *v3 < (unsigned __int64)v6 )
          v8 = *((_QWORD *)&v6 + 1) + 1LL;
      }
    }
    v11 = v7 + v8;
  }
  while ( *v4 != i );
  if ( v8 <= stru_140FC11F0.NpxState )
  {
    v17 = MEMORY[0xFFFFF78000000008];
    v18 = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  }
  else
  {
    if ( KiTimeUpdateTryAcquireTickLock )
    {
      while ( !(unsigned __int8)RtlWriteTryAcquireTickLock(v4) )
      {
        while ( (*v4 & 1) != 0 )
          KeYieldProcessorEx(&v40);
        v17 = MEMORY[0xFFFFF78000000008];
        if ( MEMORY[0xFFFFF78000000008] >= v11 )
        {
          v18 = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
          goto LABEL_20;
        }
      }
    }
    else
    {
      RtlWriteAcquireTickLock(v4);
    }
    v12 = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&v6 = ((__int64 (__fastcall *)(_QWORD))KiComputeNewSystemTime)((LARGE_INTEGER)v12.QuadPart);
    v14 = MEMORY[0xFFFFF78000000008];
    v6 = (unsigned __int64)v6;
    v15 = v6;
    if ( v13 > MEMORY[0xFFFFF78000000350] )
    {
      PerformanceCounter.QuadPart = 0LL;
      v16 = v13 - MEMORY[0xFFFFF78000000350];
      if ( MEMORY[0xFFFFF78000000369] )
        v16 <<= MEMORY[0xFFFFF78000000369];
      v6 = v16 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      KiInterruptTimeErrorAccumulator += v6;
      if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v6 )
        ++*((_QWORD *)&v6 + 1);
    }
    v17 = MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v6 + 1);
    *(_DWORD *)(MmWriteableSharedUserData + 28) = HIDWORD(v15);
    v9 = (unsigned __int64)(v14 + *((_QWORD *)&v6 + 1)) >> 32;
    *(_QWORD *)(MmWriteableSharedUserData + 20) = v15;
    *(_DWORD *)(MmWriteableSharedUserData + 16) = v9;
    *(_QWORD *)(MmWriteableSharedUserData + 8) = v14 + *((_QWORD *)&v6 + 1);
    *(_QWORD *)(MmWriteableSharedUserData + 840) = v13;
    *(_QWORD *)(MmWriteableSharedUserData + 848) = v13;
    v18 = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    v8 = (unsigned int)KiTickOffset - *((_QWORD *)&v6 + 1);
    if ( v8 <= 0 )
    {
      *((_QWORD *)&v6 + 1) = 1LL;
      v8 += KeMaximumIncrement;
      if ( v8 <= 0 )
      {
        v34 = (unsigned __int64)(((unsigned __int64)-v8
                                * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount;
        v8 += KeMaximumIncrement * (v34 + 1);
        *((_QWORD *)&v6 + 1) = v34 + 2;
      }
      v18 = (struct _LIST_ENTRY *)(*((_QWORD *)&v6 + 1) + MEMORY[0xFFFFF78000000320]);
      v9 = (*((_QWORD *)&v6 + 1) + MEMORY[0xFFFFF78000000320]) >> 32;
      *(_DWORD *)(MmWriteableSharedUserData + 808) = (*((_QWORD *)&v6 + 1) + MEMORY[0xFFFFF78000000320]) >> 32;
      *(_QWORD *)(MmWriteableSharedUserData + 800) = v18;
    }
    v19 = *v4 + 1;
    KiTickOffset = v8;
    *v4 = v19;
  }
LABEL_20:
  v20 = *(_QWORD *)v41;
  v21 = 0;
  while ( _interlockedbittestandset64(&KiSupervisorXStateFeaturesLock.Timer.Header.LockNV, 0LL) )
  {
    do
    {
      if ( (++v21 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9, *((_QWORD *)&v6 + 1), v8) )
      {
        HvlNotifyLongSpinWait(v21);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)&KiSupervisorXStateFeaturesLock.Timer.Header.Lock );
  }
  if ( KiSupervisorXStateFeaturesLock.ApcState.ApcListHead[0].Blink
    && (struct _LIST_ENTRY *)v17 >= KiSupervisorXStateFeaturesLock.ApcState.ApcListHead[0].Blink
    && KiForceIdleState == 2 )
  {
    KiSetForceIdleState(1LL);
    if ( !KiSupervisorXStateFeaturesLock.RelativeTimerBias )
      *(_WORD *)&KiSupervisorXStateFeaturesLock.ApcStateFill[42] = *(_DWORD *)(v20 + 36) + 2048;
    KiInsertQueueDpc((ULONG_PTR)&KiSupervisorXStateFeaturesLock.ApcStateFill[40], 0);
  }
  if ( ((KiForceIdleState - 1) & 0xFFFFFFFD) == 0 )
    v36 = 1;
  _InterlockedAnd64((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.Timer.Header.Lock, 0LL);
  if ( v35 )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(v6) = *SchedulerAssist;
      do
      {
        *((_QWORD *)&v6 + 1) = (unsigned int)v6;
        DWORD2(v6) = v6 & 0xFFDFFFFF;
        v33 = v6;
        LODWORD(v6) = _InterlockedCompareExchange(SchedulerAssist, v6 & 0xFFDFFFFF, v6);
      }
      while ( v33 != (_DWORD)v6 );
      if ( (v6 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick();
    }
    _enable();
  }
  if ( KeMinimumIncrement - 1 + (int)v17 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v17;
  if ( KeMinimumIncrement - 1 + (int)v17 - (int)KiLastPseudoHrTimerExpiration >= (unsigned int)KePseudoHrTimeIncrement )
    KiLastPseudoHrTimerExpiration = v17;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      BYTE8(v6) = 15;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, *((_QWORD *)&v6 + 1));
    }
    InterruptTimePrecise.QuadPart = v17;
    v24 = KiLastPseudoHrTimerExpiration + (unsigned int)KePseudoHrTimeIncrement;
    v25 = KeMinimumIncrement;
    if ( !KiClockTimerReducePreciseTimeQueries )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v26.QuadPart = InterruptTimePrecise.QuadPart - v24;
    if ( v24 > 0 )
      v26.QuadPart = v24;
    if ( (unsigned int)dword_140E06F90 > 5 )
    {
      v44 = InterruptTimePrecise;
      v40 = 1;
      v49 = &v44;
      v62 = 1LL;
      v51 = &v40;
      v64 = 1LL;
      v53 = &v45;
      v50 = 8LL;
      v52 = 4LL;
      v46 = v26.QuadPart - InterruptTimePrecise.QuadPart;
      v45 = v24;
      v55 = &v46;
      p_PerformanceCounter = &PerformanceCounter;
      v59 = v41;
      v61 = &v35;
      v63 = &v37;
      v54 = 8LL;
      v56 = 8LL;
      PerformanceCounter = v26;
      v58 = 8LL;
      v41[0] = v25;
      v60 = 4LL;
      v35 = 0;
      v37 = 0;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06F90,
        (unsigned __int8 *)word_140049432,
        0LL,
        0LL,
        0xAu,
        &v48);
    }
    v27 = *(_BYTE *)(v20 + 38388);
    *(LARGE_INTEGER *)(v20 + 38376) = v26;
    *(_DWORD *)(v20 + 38384) = v25;
    *(_BYTE *)(v20 + 38388) = v27 & 0xFC | 1;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( (unsigned __int64)v18 > *(_QWORD *)&KiSupervisorXStateFeaturesLock.CurrentRunTime )
  {
    v32 = *(_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Type == 1;
    *(_QWORD *)&KiSupervisorXStateFeaturesLock.CurrentRunTime = v18;
    --*(_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Type;
    if ( v32 )
    {
      *(_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Type = KiBalanceSetManagerPeriod;
      KiInsertQueueDpc((ULONG_PTR)&KiSupervisorXStateFeaturesLock.StateSaveArea, 0);
    }
  }
  if ( !KiClockTimerPerCpuTickScheduling )
    PoExecuteIdleCheck(v17);
  if ( !PpmCheckTimerImplementation && !v36 )
    PpmExecutePeriodicPerfCheck();
  if ( KiGroupSchedulingEnabled && v18 > KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Flink )
  {
    v28 = 1;
    KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((char *)KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Flink
                                                                                          + (unsigned int)KiGenerationTicks);
  }
  else
  {
    v28 = 0;
  }
  v29 = KeNumberProcessors_0;
  if ( !KiClockTimerPerCpuTickScheduling && (unsigned int)KeNumberProcessors_0 > 1 )
  {
    *(_QWORD *)&v47.Count = 2097153LL;
    memset_0(&v47.8, 0, sizeof(v47.8));
    KiForwardTick(v20, v29, v17 >> 18, v28, &v47);
    RtlOrAffinityEx(KiClockCheckPending, &v47, KiClockCheckPending);
  }
  return KiUpdateRunTime(v17, v39, v38, v43);
}
