/*
 * XREFs of KeBoostPriorityThread @ 0x14052EA80
 * Callers:
 *     ExpCreateWorkerThread @ 0x140A78ABC (ExpCreateWorkerThread.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     EtwTracePriority @ 0x140202938 (EtwTracePriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140228920 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiQueryQuantumReset @ 0x14023B390 (KiQueryQuantumReset.c)
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

void *__fastcall KeBoostPriorityThread(struct _KTHREAD *a1, int a2, __int64 a3, __int64 a4)
{
  void *result; // rax
  int v7; // ebp
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KTHREAD *CurrentThread; // r13
  int Priority; // r15d
  int IsEnabledNoReportingNoInline; // eax
  int v13; // ecx
  int v14; // edi
  char v15; // di
  int v16; // r14d
  unsigned __int64 updated; // rax
  __int64 v18; // r9
  struct _KPRCB *v19; // rcx
  volatile unsigned __int64 CycleTime; // rdi
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v22; // eax
  __int64 v23; // rdx
  unsigned __int32 v24; // ett
  unsigned __int64 v25; // rcx
  int v26; // [rsp+70h] [rbp+8h] BYREF
  struct _SINGLE_LIST_ENTRY v27; // [rsp+80h] [rbp+18h] BYREF

  result = &unk_140FC9F40;
  if ( a1->Process != (_KPROCESS *)&unk_140FC9F40 )
  {
    v27.Next = 0LL;
    v7 = 0;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    CurrentPrcb = KeGetCurrentPrcb();
    v26 = 0;
    CurrentThread = CurrentPrcb->CurrentThread;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&a1->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v26);
      while ( a1->ThreadLock );
    }
    Priority = a1->Priority;
    if ( a2 > a1->DecayBoost && Priority < 16 )
    {
      IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline();
      LOBYTE(v13) = a1->BasePriority;
      if ( IsEnabledNoReportingNoInline )
      {
        v13 = (char)v13 + (a1->PriorityDecrement & 0xF);
        if ( v13 >= 16 )
          v13 = 15;
        v14 = v13 + a2;
      }
      else
      {
        v14 = (char)v13 + a2;
      }
      if ( v14 >= 16 )
        LOBYTE(v14) = 15;
      v15 = v14 - v13;
      Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline();
      a1->DecayBoost = v15;
      v16 = KiComputeThreadPriority(a1, 0, 0);
      if ( v16 > Priority )
      {
        if ( a1 != CurrentThread || CurrentPrcb->NestingLevel )
        {
          CycleTime = a1->CycleTime;
        }
        else
        {
          _disable();
          updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)a1, 0LL);
          v19 = KeGetCurrentPrcb();
          CycleTime = updated;
          SchedulerAssist = (unsigned __int32 *)v19->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v22 = *SchedulerAssist;
            do
            {
              v23 = v22;
              LODWORD(v23) = v22 & 0xFFDFFFFF;
              v24 = v22;
              v22 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v22 & 0xFFDFFFFF, v22);
            }
            while ( v24 != v22 );
            if ( (v22 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v19, v23, SchedulerAssist, v18);
          }
          _enable();
        }
        v25 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset((__int64)a1);
        if ( (*((_DWORD *)&a1->0 + 1) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)&a1->116 + 1, 5u);
        a1->QuantumTarget = v25;
        KiSetPriorityThread((unsigned __int64)a1, &v27, (unsigned __int64 *)(unsigned int)v16);
        v7 = v16;
      }
    }
    LOBYTE(a3) = CurrentIrql;
    a1->ThreadLock = 0LL;
    result = (void *)KiProcessDeferredReadyList(CurrentPrcb, &v27, a3, a4);
    if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v7 )
      return (void *)EtwTracePriority((__int64)a1, 0x530u, Priority, v7, 0LL);
  }
  return result;
}
