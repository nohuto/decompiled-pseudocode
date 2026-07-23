/*
 * XREFs of KiUpdateRunTime @ 0x140220DB0
 * Callers:
 *     KiUpdateTime @ 0x14021F020 (KiUpdateTime.c)
 *     KeClockInterruptNotify @ 0x140223050 (KeClockInterruptNotify.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140220510 (KiCheckPreferredHeteroProcessor.c)
 *     KeAccumulateTicks @ 0x140221310 (KeAccumulateTicks.c)
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiComputeThreadQos @ 0x140306EE0 (KiComputeThreadQos.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     KiRequestSoftwareInterrupt @ 0x1403129C0 (KiRequestSoftwareInterrupt.c)
 *     KiCheckForPendingQosUpdate @ 0x140332CE0 (KiCheckForPendingQosUpdate.c)
 *     KiShouldScanLocalReadyQueue @ 0x1403C98A8 (KiShouldScanLocalReadyQueue.c)
 *     KiShouldScanSharedReadyQueue @ 0x1403C98C8 (KiShouldScanSharedReadyQueue.c)
 *     KiSetClockTimer @ 0x14040D440 (KiSetClockTimer.c)
 *     KiSetDpcRequestFlag @ 0x140447660 (KiSetDpcRequestFlag.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

LARGE_INTEGER __fastcall KiUpdateRunTime(LARGE_INTEGER InterruptTimePrecise, char a2, unsigned __int8 a3, int a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v9; // al
  int v10; // r13d
  unsigned int LastTick; // r15d
  LARGE_INTEGER v12; // rdx
  LONGLONG i; // rcx
  bool v14; // zf
  unsigned __int8 CurrentIrql; // di
  int v16; // r15d
  __int64 v17; // r14
  __int64 CurrentThread; // rsi
  LARGE_INTEGER result; // rax
  ULONG LowPart; // edi
  int v21; // edi
  unsigned __int8 v22; // di
  char v23; // r15
  unsigned __int8 v24; // r14
  signed __int32 *SchedulerAssist; // r8
  __int16 v26; // r8
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  __int64 v29; // rdx
  char v30; // al
  __int64 v31; // r8
  int v32; // edx
  char v33; // r9
  char v34; // [rsp+40h] [rbp-C0h] BYREF
  char v35; // [rsp+41h] [rbp-BFh] BYREF
  int v36; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h] BYREF
  int v42; // [rsp+70h] [rbp-90h] BYREF
  __int128 v43; // [rsp+74h] [rbp-8Ch]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  int *v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  __int64 *v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  __int64 *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  int *v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  char *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  char *v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+130h] [rbp+30h] BYREF
  int *v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+158h] [rbp+58h]
  char *v64; // [rsp+160h] [rbp+60h]
  __int64 v65; // [rsp+168h] [rbp+68h]

  CurrentPrcb = KeGetCurrentPrcb();
  ++CurrentPrcb->ClockInterrupts;
  ++CurrentPrcb->InterruptLastCount;
  v9 = KeDisableInterrupts();
  v10 = MEMORY[0xFFFFF78000000320];
  LastTick = CurrentPrcb->LastTick;
  if ( v9 )
  {
    SchedulerAssist = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v27 = *SchedulerAssist;
      do
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange(SchedulerAssist, v27 & 0xFFDFFFFF, v27);
      }
      while ( v28 != v27 );
      if ( (v27 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick();
    }
    _enable();
  }
  KeAccumulateTicks((_DWORD)CurrentPrcb, LastTick, v10, a3, a2, a4);
  v14 = KiClockTimerPerCpuTickScheduling == 0;
  CurrentPrcb->ClockKeepAlive = 1;
  if ( !v14 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
    v16 = KeMinimumIncrement;
    v17 = -(__int64)(unsigned int)KeQuantumEndTimerIncrement;
    if ( !KiClockTimerReducePreciseTimeQueries )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    if ( (unsigned int)dword_140E06F90 > 5 )
    {
      v39 = InterruptTimePrecise;
      v45 = &v39;
      v46 = 8LL;
      v47 = &v37;
      v37 = 3;
      v49 = &v40;
      v48 = 4LL;
      v40 = v17;
      v41 = -v17;
      v50 = 8LL;
      v51 = &v41;
      p_PerformanceCounter = &PerformanceCounter;
      v55 = &v36;
      v57 = &v35;
      v59 = &v34;
      v52 = 8LL;
      PerformanceCounter.QuadPart = InterruptTimePrecise.QuadPart - v17;
      v54 = 8LL;
      v36 = v16;
      v56 = 4LL;
      v35 = 1;
      v58 = 1LL;
      v34 = 0;
      v60 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06F90,
        (unsigned __int8 *)word_140049432,
        0LL,
        0LL,
        0xAu,
        &v44);
    }
    CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TypeFlags |= 3u;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[3].DueTime = InterruptTimePrecise.QuadPart - v17;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TolerableDelay = v16;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    if ( !KiSchedulerForegroundBoostDecayPolicy && (signed int)(CurrentPrcb->NormalPriorityReadyScanTick - v10) < 0 )
    {
      if ( (unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb)
        && (CurrentPrcb->SharedReadyQueue->ReadySummary & 0x300) != 0
        || (unsigned int)KiShouldScanLocalReadyQueue(CurrentPrcb) && (CurrentPrcb->ReadySummary & 0x300) != 0 )
      {
        KiSetDpcRequestFlag(&CurrentPrcb->14524, 64LL);
        LOBYTE(v29) = 2;
        KiRequestSoftwareInterrupt(CurrentPrcb, v29);
      }
      else
      {
        i = (unsigned int)(v10 + KiNormalPriorityBoostScanLatencyTicks);
        CurrentPrcb->NormalPriorityReadyScanTick = i;
      }
    }
    result = *(LARGE_INTEGER *)(CurrentThread + 72);
    if ( result.QuadPart >= *(_QWORD *)(CurrentThread + 32) )
      goto LABEL_28;
    v21 = *(unsigned __int8 *)(CurrentThread + 516);
    result.QuadPart = KiComputeThreadQos(CurrentThread);
    if ( v21 != result.LowPart )
      goto LABEL_28;
    result.QuadPart = KiCheckPreferredHeteroProcessor(CurrentThread, (__int64)CurrentPrcb, 1);
    if ( result.LowPart )
      goto LABEL_28;
    KiCheckForPendingQosUpdate(CurrentThread);
  }
  result = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v12.QuadPart = CurrentPrcb->GenerationTarget * KeMaximumIncrement;
  i = MEMORY[0xFFFFF78000000320];
  LowPart = result.LowPart;
  if ( MEMORY[0xFFFFF78000000320] > CurrentPrcb->GenerationTarget )
  {
    if ( KiClockTimerPerCpuTickScheduling )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 != 15 )
        __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v12.LowPart) = 15;
        ((void (__fastcall *)(_QWORD, _QWORD))KiRaiseIrqlProcessIrqlFlags)(v22, (LARGE_INTEGER)v12.QuadPart);
      }
      CurrentPrcb->ClockTimerState.ClockTimerEntries[4].TypeFlags &= ~1u;
      if ( (unsigned int)dword_140E06F90 > 5 )
      {
        v36 = 4;
        v62 = &v36;
        v63 = 4LL;
        v64 = &v34;
        v34 = 0;
        v65 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06F90,
          (unsigned __int8 *)&word_1400493F6,
          0LL,
          0LL,
          4u,
          &v61);
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
      result.QuadPart = v22;
      __writecr8(v22);
    }
LABEL_28:
    CurrentPrcb->QuantumEnd = 1;
    if ( CurrentPrcb->NestingLevel )
    {
      CurrentPrcb->InterruptRequest = 1;
    }
    else
    {
      v43 = 0LL;
      if ( (KiTrapFeatures & 0x10) != 0 )
      {
        v30 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpDisableInterrupts)(
                i,
                (LARGE_INTEGER)v12.QuadPart,
                KeGetCurrentPrcb());
        v32 = *(_DWORD *)(v31 + 168);
        v33 = v30;
        *(_DWORD *)(v31 + 168) = v32 | 4;
        if ( !v32 )
          __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
        if ( v33 )
          _enable();
      }
      v42 = 5;
      return (LARGE_INTEGER)HalpInterruptSendIpi(&v42, 47LL);
    }
    return result;
  }
  if ( result.QuadPart > (unsigned __int64)v12.QuadPart && KiClockTimerPerCpuTickScheduling )
  {
    v23 = CurrentPrcb->GroupSchedulingOverQuota == 0;
    v24 = KeGetCurrentIrql();
    if ( v24 != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12.LowPart) = 15;
      ((void (__fastcall *)(_QWORD, _QWORD))KiRaiseIrqlProcessIrqlFlags)(v24, (LARGE_INTEGER)v12.QuadPart);
    }
    KiSetClockTimer((_DWORD)CurrentPrcb, LowPart, -KeMaximumIncrement, KeMinimumIncrement, 4, v23, 0);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
    __writecr8(v24);
  }
  result = *(LARGE_INTEGER *)(CurrentThread + 104);
  if ( result.QuadPart )
  {
    for ( i = result.QuadPart + CurrentPrcb->ScbOffset; i; i = *(_QWORD *)(i + 440) )
    {
      result.QuadPart = CurrentPrcb->ScbOffset;
      v26 = *(_WORD *)(i + 128);
      v12.QuadPart = i - result.QuadPart;
      if ( (v26 & 4) != 0 )
      {
        result = *(LARGE_INTEGER *)(i + 24);
        if ( *(_QWORD *)i >= result.QuadPart )
          goto LABEL_28;
      }
      else if ( (v26 & 0x20) == 0 )
      {
        result = *(LARGE_INTEGER *)(i + 8);
        if ( *(_QWORD *)i > result.QuadPart )
          goto LABEL_28;
      }
      if ( (v26 & 0x12) == 0 )
      {
        result = *(LARGE_INTEGER *)(v12.QuadPart + 48);
        if ( result.QuadPart <= 0 )
          goto LABEL_28;
        result.QuadPart = *(unsigned __int8 *)(i + 128);
        if ( SLOBYTE(result.QuadPart) < 0 )
        {
          result = *(LARGE_INTEGER *)(i + 16);
          if ( *(_QWORD *)i >= result.QuadPart )
            goto LABEL_28;
        }
      }
    }
  }
  if ( (signed int)(CurrentPrcb->ReadyScanTick - v10) < 0 )
  {
    result.QuadPart = KiShouldScanSharedReadyQueue(CurrentPrcb);
    if ( !result.LowPart
      || (result = (LARGE_INTEGER)CurrentPrcb->SharedReadyQueue, (*(_DWORD *)(result.QuadPart + 8) & 0x7FFE) == 0) )
    {
      if ( (CurrentPrcb->ReadySummary & 0x7FFE) == 0 )
      {
        result.QuadPart = (unsigned int)(v10 + 75);
        CurrentPrcb->ReadyScanTick = result.LowPart;
      }
    }
  }
  return result;
}
