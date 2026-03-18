/*
 * XREFs of KiUpdateRunTime @ 0x14021F420
 * Callers:
 *     KiUpdateTime @ 0x14021D690 (KiUpdateTime.c)
 *     KeClockInterruptNotify @ 0x1402216C0 (KeClockInterruptNotify.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiCheckPreferredHeteroProcessor @ 0x14021EB80 (KiCheckPreferredHeteroProcessor.c)
 *     KeAccumulateTicks @ 0x14021F980 (KeAccumulateTicks.c)
 *     HalpInterruptSendIpi @ 0x140230DF0 (HalpInterruptSendIpi.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KiComputeThreadQos @ 0x1402BC220 (KiComputeThreadQos.c)
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 *     KiRequestSoftwareInterrupt @ 0x1402C7D20 (KiRequestSoftwareInterrupt.c)
 *     KiCheckForPendingQosUpdate @ 0x140330CB0 (KiCheckForPendingQosUpdate.c)
 *     KiShouldScanLocalReadyQueue @ 0x1403BF9A8 (KiShouldScanLocalReadyQueue.c)
 *     KiShouldScanSharedReadyQueue @ 0x1403BF9C8 (KiShouldScanSharedReadyQueue.c)
 *     KiSetClockTimer @ 0x140418F10 (KiSetClockTimer.c)
 *     KiSetDpcRequestFlag @ 0x14044F530 (KiSetDpcRequestFlag.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall KiUpdateRunTime(__int64 InterruptTimePrecise, char a2, unsigned __int8 a3, int a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v9; // al
  int v10; // r13d
  unsigned int LastTick; // r15d
  unsigned __int64 v12; // rdx
  unsigned __int64 i; // rcx
  bool v14; // zf
  unsigned __int8 CurrentIrql; // di
  int v16; // r15d
  __int64 v17; // r14
  __int64 CurrentThread; // rsi
  unsigned __int64 result; // rax
  int v20; // edi
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
  __int64 v38; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h] BYREF
  int v42; // [rsp+70h] [rbp-90h] BYREF
  __int128 v43; // [rsp+74h] [rbp-8Ch]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  int *v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  __int64 *v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  __int64 *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v53; // [rsp+F0h] [rbp-10h]
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
      InterruptTimePrecise = RtlGetInterruptTimePrecise((unsigned __int64 *)&v38);
    if ( (unsigned int)dword_140E06F58 > 5 )
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
      v53 = (unsigned __int64 *)&v38;
      v55 = &v36;
      v57 = &v35;
      v59 = &v34;
      v52 = 8LL;
      v38 = InterruptTimePrecise - v17;
      v54 = 8LL;
      v36 = v16;
      v56 = 4LL;
      v35 = 1;
      v58 = 1LL;
      v34 = 0;
      v60 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06F58,
        (unsigned __int8 *)byte_140048E89,
        0LL,
        0LL,
        0xAu,
        &v44);
    }
    CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TypeFlags |= 3u;
    CurrentPrcb->ClockTimerState.ClockTimerEntries[3].DueTime = InterruptTimePrecise - v17;
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
    result = *(_QWORD *)(CurrentThread + 72);
    if ( result >= *(_QWORD *)(CurrentThread + 32) )
      goto LABEL_28;
    v21 = *(unsigned __int8 *)(CurrentThread + 516);
    result = KiComputeThreadQos(CurrentThread);
    if ( v21 != (_DWORD)result )
      goto LABEL_28;
    result = KiCheckPreferredHeteroProcessor(CurrentThread, (__int64)CurrentPrcb, 1);
    if ( (_DWORD)result )
      goto LABEL_28;
    KiCheckForPendingQosUpdate(CurrentThread);
  }
  result = RtlGetInterruptTimePrecise((unsigned __int64 *)&v38);
  v12 = CurrentPrcb->GenerationTarget * (unsigned int)KeMaximumIncrement;
  i = MEMORY[0xFFFFF78000000320];
  v20 = result;
  if ( MEMORY[0xFFFFF78000000320] > CurrentPrcb->GenerationTarget )
  {
    if ( KiClockTimerPerCpuTickScheduling )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 != 15 )
        __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = 15;
        KiRaiseIrqlProcessIrqlFlags(v22, v12);
      }
      CurrentPrcb->ClockTimerState.ClockTimerEntries[4].TypeFlags &= ~1u;
      if ( (unsigned int)dword_140E06F58 > 5 )
      {
        v36 = 4;
        v62 = &v36;
        v63 = 4LL;
        v64 = &v34;
        v34 = 0;
        v65 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06F58,
          (unsigned __int8 *)byte_140048E4D,
          0LL,
          0LL,
          4u,
          &v61);
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
      result = v22;
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
        v30 = HalpDisableInterrupts(i, v12, KeGetCurrentPrcb());
        v32 = *(_DWORD *)(v31 + 168);
        v33 = v30;
        *(_DWORD *)(v31 + 168) = v32 | 4;
        if ( !v32 )
          __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
        if ( v33 )
          _enable();
      }
      v42 = 5;
      return HalpInterruptSendIpi(&v42, 47LL);
    }
    return result;
  }
  if ( result > v12 && KiClockTimerPerCpuTickScheduling )
  {
    v23 = CurrentPrcb->GroupSchedulingOverQuota == 0;
    v24 = KeGetCurrentIrql();
    if ( v24 != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = 15;
      KiRaiseIrqlProcessIrqlFlags(v24, v12);
    }
    KiSetClockTimer((_DWORD)CurrentPrcb, v20, -KeMaximumIncrement, KeMinimumIncrement, 4, v23, 0);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
    __writecr8(v24);
  }
  result = *(_QWORD *)(CurrentThread + 104);
  if ( result )
  {
    for ( i = result + CurrentPrcb->ScbOffset; i; i = *(_QWORD *)(i + 440) )
    {
      result = CurrentPrcb->ScbOffset;
      v26 = *(_WORD *)(i + 128);
      v12 = i - result;
      if ( (v26 & 4) != 0 )
      {
        result = *(_QWORD *)(i + 24);
        if ( *(_QWORD *)i >= result )
          goto LABEL_28;
      }
      else if ( (v26 & 0x20) == 0 )
      {
        result = *(_QWORD *)(i + 8);
        if ( *(_QWORD *)i > result )
          goto LABEL_28;
      }
      if ( (v26 & 0x12) == 0 )
      {
        result = *(_QWORD *)(v12 + 48);
        if ( (__int64)result <= 0 )
          goto LABEL_28;
        result = *(unsigned __int8 *)(i + 128);
        if ( (result & 0x80u) != 0LL )
        {
          result = *(_QWORD *)(i + 16);
          if ( *(_QWORD *)i >= result )
            goto LABEL_28;
        }
      }
    }
  }
  if ( (signed int)(CurrentPrcb->ReadyScanTick - v10) < 0 )
  {
    result = KiShouldScanSharedReadyQueue(CurrentPrcb);
    if ( !(_DWORD)result
      || (result = (unsigned __int64)CurrentPrcb->SharedReadyQueue, (*(_DWORD *)(result + 8) & 0x7FFE) == 0) )
    {
      if ( (CurrentPrcb->ReadySummary & 0x7FFE) == 0 )
      {
        result = (unsigned int)(v10 + 75);
        CurrentPrcb->ReadyScanTick = result;
      }
    }
  }
  return result;
}
