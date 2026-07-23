/*
 * XREFs of KeSetPriorityThread @ 0x140204620
 * Callers:
 *     MiSetIdealProcessorThread @ 0x14020453C (MiSetIdealProcessorThread.c)
 *     MiAgingThread @ 0x1402A84E0 (MiAgingThread.c)
 *     KeGenericProcessorCallback @ 0x14037BD24 (KeGenericProcessorCallback.c)
 *     CcApplyLowIoPriorityToThread @ 0x140387538 (CcApplyLowIoPriorityToThread.c)
 *     KeSetThreadSchedulerAssist @ 0x1403C99B8 (KeSetThreadSchedulerAssist.c)
 *     MiRebuildLargePagesThread @ 0x1403D1720 (MiRebuildLargePagesThread.c)
 *     MiMappedPageWriter @ 0x140490470 (MiMappedPageWriter.c)
 *     MiDereferenceSegmentThread @ 0x1404A62C0 (MiDereferenceSegmentThread.c)
 *     MiTrimmingThread @ 0x1404B7730 (MiTrimmingThread.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404EA98C (CcBoostLowPriorityWorkerThread.c)
 *     FsRtlWorkerThread @ 0x1405BA900 (FsRtlWorkerThread.c)
 *     KeBalanceSetManager @ 0x1405FA400 (KeBalanceSetManager.c)
 *     KeSwapProcessOrStack @ 0x1405FA6A0 (KeSwapProcessOrStack.c)
 *     KiExecuteDpc @ 0x1405FD860 (KiExecuteDpc.c)
 *     PfTSetTraceWorkerPriority @ 0x1406029F4 (PfTSetTraceWorkerPriority.c)
 *     EtwpThreadRundownApc @ 0x1406CB5E0 (EtwpThreadRundownApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1406CB674 (EtwpTraceThreadRundownWithStack.c)
 *     ExRegisterBootDevice @ 0x1406D15F0 (ExRegisterBootDevice.c)
 *     MiBalanceSetThread @ 0x1406F5170 (MiBalanceSetThread.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140C36480 (ViPendingQueuePassiveLevelCompletion.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     EtwTracePriority @ 0x140202938 (EtwTracePriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140228920 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiQueryQuantumReset @ 0x14023B390 (KiQueryQuantumReset.c)
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiAdjustRealtimePriorityFloor @ 0x1403F0430 (KiAdjustRealtimePriorityFloor.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  PKTHREAD v3; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  struct _KTHREAD *CurrentThread; // rsi
  int v7; // ebp
  __int64 CycleTime; // rsi
  signed __int32 *SchedulerAssist; // r8
  unsigned __int64 v10; // rcx
  KPRIORITY BasePriority; // eax
  unsigned int v12; // ebx
  char v13; // al
  int v14; // esi
  __int64 v15; // r8
  int IsEnabledNoReportingNoInline; // eax
  int v18; // esi
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  int v21; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+70h] [rbp+18h] BYREF

  v3 = Thread;
  if ( Thread->Process == (_KPROCESS *)&unk_140FC9F40 )
    return 1;
  v22 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Thread) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Thread, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&v3->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v21);
    while ( v3->ThreadLock );
  }
  v7 = v3->Priority;
  if ( Priority != v7 )
  {
    if ( v3 != CurrentThread || CurrentPrcb->NestingLevel )
    {
      CycleTime = v3->CycleTime;
    }
    else
    {
      _disable();
      CycleTime = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, v3, 0LL);
      SchedulerAssist = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v19 = *SchedulerAssist;
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange(SchedulerAssist, v19 & 0xFFDFFFFF, v19);
        }
        while ( v20 != v19 );
        if ( (v19 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick();
      }
      _enable();
    }
    v10 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v3);
    if ( (*((_DWORD *)&v3->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&v3->116 + 1, 5u);
    v3->QuantumTarget = v10;
  }
  BasePriority = v3->BasePriority;
  v3->DecayBoost = 0;
  if ( Priority < BasePriority )
    Priority = BasePriority;
  v3->PriorityDecrement &= 0xF00Fu;
  KiAdjustRealtimePriorityFloor((ULONG_PTR)v3);
  if ( Priority < 16 )
  {
    IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline();
    v18 = v3->BasePriority;
    if ( !IsEnabledNoReportingNoInline )
      goto LABEL_29;
    v18 += v3->PriorityDecrement & 0xF;
    if ( v18 >= 16 )
      v18 = 15;
    if ( Priority > v18 )
    {
LABEL_29:
      Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline();
      v3->DecayBoost = Priority - v18;
    }
  }
  v12 = KiComputeThreadPriority(v3, 0, 0);
  v13 = KiSetPriorityThread(v3, &v22, v12);
  v14 = 0;
  v3->ThreadLock = 0LL;
  LOBYTE(v15) = CurrentIrql;
  if ( v13 )
    v14 = v12;
  KiProcessDeferredReadyList(CurrentPrcb, &v22, v15);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v14 )
    EtwTracePriority((__int64)v3, 0x530u, v7, v14, 0LL);
  return v7;
}
