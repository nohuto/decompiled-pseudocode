/*
 * XREFs of KeSetBasePriorityThread @ 0x14052B1A0
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x14083699C (EtwpCovSampCaptureContextStart.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     PfTLoggingWorker @ 0x1409F1030 (PfTLoggingWorker.c)
 * Callees:
 *     EtwTracePriority @ 0x140202938 (EtwTracePriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140228920 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402394F0 (KiPriQueueThreadPriorityChanged.c)
 *     KiQueryQuantumReset @ 0x14023B390 (KiQueryQuantumReset.c)
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x140309580 (KiSetBasePriorityAndClearDecrement.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiAdjustRealtimePriorityFloor @ 0x1403F0430 (KiAdjustRealtimePriorityFloor.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __stdcall KeSetBasePriorityThread(PKTHREAD Thread, LONG Increment)
{
  _KPROCESS *Process; // r14
  char v6; // si
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  LONG v9; // r15d
  LONG v10; // eax
  char v11; // al
  int v12; // edi
  int v13; // ecx
  int v14; // esi
  int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  int Priority; // ecx
  unsigned __int64 updated; // rax
  __int64 v21; // r9
  struct _KPRCB *v22; // rcx
  volatile unsigned __int64 CycleTime; // rsi
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v25; // eax
  __int64 v26; // rdx
  unsigned __int32 v27; // ett
  unsigned __int64 v28; // rcx
  unsigned __int64 *v29; // r8
  _DISPATCHER_HEADER *volatile Queue; // rcx
  struct _SINGLE_LIST_ENTRY v31; // [rsp+30h] [rbp-10h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-8h]
  unsigned int v33; // [rsp+80h] [rbp+40h] BYREF
  int v34; // [rsp+90h] [rbp+50h] BYREF
  int BasePriority; // [rsp+98h] [rbp+58h]

  Process = Thread->Process;
  v33 = 0;
  if ( Process == (_KPROCESS *)&unk_140FC9F40 )
    return 0;
  v6 = 0;
  v31.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  CurrentPrcb = KeGetCurrentPrcb();
  v34 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v34);
    while ( Thread->ThreadLock );
  }
  v9 = Thread->BasePriority - Process->BasePriority;
  BasePriority = Thread->BasePriority;
  if ( Thread->Saturation )
    v9 = 16 * Thread->Saturation;
  Thread->Saturation = 0;
  v10 = -Increment;
  if ( Increment > 0 )
    v10 = Increment;
  if ( v10 >= 16 )
  {
    v11 = 1;
    if ( Increment <= 0 )
      v11 = -1;
    Thread->Saturation = v11;
  }
  v12 = Process->BasePriority + Increment;
  if ( Process->BasePriority < 16 )
  {
    if ( v12 < 16 )
    {
      if ( v12 <= 0 )
        v12 = 1;
      v34 = v12;
    }
    else
    {
      v12 = 15;
      v34 = 15;
    }
    if ( (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline() )
    {
      v13 = v12 + (Thread->PriorityDecrement & 0xF);
      if ( v13 >= 16 )
        v13 = 15;
      v14 = v13 + Thread->DecayBoost;
      v33 = v14;
      if ( v14 >= 16 )
      {
        LOBYTE(v14) = 15;
        v33 = 15;
      }
      v6 = v14 - v13;
    }
    else
    {
      v15 = v12 + Thread->DecayBoost;
      v33 = v15;
      if ( v15 >= 16 )
      {
        LOBYTE(v15) = 15;
        v33 = 15;
      }
      v6 = v15 - v12;
    }
  }
  else if ( v12 >= 16 )
  {
    if ( v12 > 31 )
      v12 = 31;
    v34 = v12;
  }
  else
  {
    v12 = 16;
    v34 = 16;
  }
  KiSetBasePriorityAndClearDecrement((__int64)Thread, (char *)&v34);
  KiAdjustRealtimePriorityFloor((ULONG_PTR)Thread, v12);
  Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline();
  Thread->DecayBoost = v6;
  v16 = KiComputeThreadPriority(Thread, 0, 0);
  Priority = Thread->Priority;
  v33 = v16;
  if ( v16 != Priority )
  {
    if ( Thread != CurrentThread || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)Thread, 0LL);
      v22 = KeGetCurrentPrcb();
      CycleTime = updated;
      SchedulerAssist = (unsigned __int32 *)v22->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v25 = *SchedulerAssist;
        do
        {
          v26 = v25;
          LODWORD(v26) = v25 & 0xFFDFFFFF;
          v27 = v25;
          v25 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v25 & 0xFFDFFFFF, v25);
        }
        while ( v27 != v25 );
        if ( (v25 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v22, v26, SchedulerAssist, v21);
      }
      _enable();
    }
    v28 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset((__int64)Thread);
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    v29 = (unsigned __int64 *)v33;
    Thread->QuantumTarget = v28;
    KiSetPriorityThread((unsigned __int64)Thread, &v31, v29);
  }
  Queue = Thread->Queue;
  if ( Queue && (Queue->Type & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(&Queue->Lock, (__int64)Thread);
  else
    Thread->ThreadLock = 0LL;
  LOBYTE(v17) = CurrentIrql;
  KiProcessDeferredReadyList(CurrentPrcb, &v31, v17, v18);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((__int64)Thread, 0x531u, BasePriority, v12, &v33);
  return v9;
}
