/*
 * XREFs of KiUpdateGlobalCpuSetConfiguration @ 0x140238FB4
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x1402F4F4C (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KiComputeThreadAffinity @ 0x14022B520 (KiComputeThreadAffinity.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x14022F870 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiIsThreadStateControlledByProcessor @ 0x14023944C (KiIsThreadStateControlledByProcessor.c)
 *     KiCommitRescheduleContext @ 0x1402409D0 (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140338930 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x140411870 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     KiCheckThreadAffinity @ 0x14045C320 (KiCheckThreadAffinity.c)
 *     Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportDeviceUsage @ 0x1404CFB30 (Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportDeviceUsage.c)
 *     EtwTraceIdealProcessor @ 0x1404E0C98 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x140506B68 (EtwTraceThreadAffinity.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiUpdateGlobalCpuSetConfiguration(_QWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // r14
  char v2; // r12
  __int64 v3; // rdx
  __int64 v4; // r15
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rdi
  struct _KPRCB *v6; // rsi
  _KTHREAD *CurrentThread; // rbx
  volatile unsigned int v8; // r13d
  char v9; // bp
  _KTHREAD *v10; // rcx
  bool v11; // si
  char v12; // r11
  __int64 v14; // rcx
  char v15; // al
  volatile unsigned __int8 State; // al
  __int64 v17; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v18; // r9
  unsigned __int8 AllCompareThreadStateFlags; // r8
  _KPRCB *Prcb; // rdx
  _KTHREAD *IdleThread; // rcx
  unsigned int v22; // r8d
  __int64 v23; // r8
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v24; // rcx
  _KPRCB *v25; // rcx
  _KTHREAD *v26; // rax
  __int64 v27; // rbp
  _KTHREAD *NextThread; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KTHREAD *v30; // rdx
  struct _KTHREAD *v31; // rdx
  unsigned __int8 v32; // r8
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v33; // r11
  char v34; // r10
  __int64 v35; // r10
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v36; // rcx
  int v38; // [rsp+88h] [rbp+10h]
  volatile unsigned int IdealProcessor; // [rsp+90h] [rbp+18h] BYREF
  __int64 v40; // [rsp+98h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  v40 = 0LL;
  Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportDeviceUsage();
  v4 = 0LL;
  StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
  v38 = 0;
  while ( (unsigned int)v4 < (unsigned int)KeNumberProcessors_0 )
  {
    v6 = (struct _KPRCB *)KiProcessorBlock[v4];
    memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
    v6->IdleThread->AffinityVersion = KiCpuSetSequence;
    while ( 1 )
    {
      KiAcquirePrcbLocksForIsolationUnit(v6, 1LL, &v40);
      CurrentThread = v6->CurrentThread;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        break;
      _InterlockedAdd16(&CurrentThread->KeReferenceCount, 1u);
      KiReleasePrcbLocksForIsolationUnit(&v40);
      IdealProcessor = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&IdealProcessor);
        while ( CurrentThread->ThreadLock );
      }
      KiAcquirePrcbLocksForIsolationUnit(v6, 1LL, &v40);
      _InterlockedDecrement16(&CurrentThread->KeReferenceCount);
      if ( CurrentThread == v6->CurrentThread )
        break;
      KiReleasePrcbLocksForIsolationUnit(&v40);
      CurrentThread->ThreadLock = 0LL;
    }
    KiStartRescheduleContext(StaticRescheduleContext, &v40, CurrentThread);
    IdealProcessor = CurrentThread->IdealProcessor;
    v8 = IdealProcessor;
    v9 = 0;
    if ( !(unsigned __int8)KiIsThreadStateControlledByProcessor(CurrentThread, v6) )
      goto LABEL_5;
    if ( (unsigned int)KiCheckThreadAffinity(CurrentThread) )
      goto LABEL_5;
    v15 = KiComputeThreadAffinity(v14);
    v8 = CurrentThread->IdealProcessor;
    v2 = ((WORD2(PerfGlobalGroupMask) & 0x1000) != 0) & v15;
    if ( (unsigned int)KeCheckProcessorAffinityEx(CurrentThread->Affinity, v6->Number) )
      goto LABEL_5;
    State = CurrentThread->State;
    if ( State == 2 )
    {
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
    }
    else if ( State != 3 )
    {
      if ( State == 5 )
        CurrentThread->WaitRegister.Flags |= 8u;
      goto LABEL_5;
    }
    NextThread = v6->NextThread;
    if ( !NextThread || NextThread == CurrentThread )
    {
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v6);
      v9 = 1;
      KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v30, 0, 1u);
      if ( (v34 & 1) != 0 )
      {
        v35 = 0LL;
        if ( StaticRescheduleContext->ProcessorCount > v32 )
        {
          do
          {
            v36 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                 + 32 * v35
                                                 + 8 * (unsigned int)v35);
            if ( v36 != v33 )
              KiAdjustRescheduleContextEntryForThreadRemoval(v36, v31, 0, 1u);
            v35 = (unsigned int)(v35 + 1);
          }
          while ( (unsigned int)v35 < StaticRescheduleContext->ProcessorCount );
        }
        StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
      }
    }
LABEL_5:
    CurrentThread->ThreadLock = 0LL;
    v10 = v6->NextThread;
    if ( v10 && !(unsigned int)KiCheckThreadAffinity(v10) )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v17 + 120), 0xCu);
      v18 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v6);
      v18->___u5[0] |= 2u;
      AllCompareThreadStateFlags = v18->AllCompareThreadStateFlags;
      Prcb = v18->Prcb;
      v18->CompareThread = v18->Prcb->IdleThread;
      v18->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
      IdleThread = Prcb->IdleThread;
      *((_BYTE *)&v18->0 + 1) &= ~1u;
      v18->NewThread = IdleThread;
      if ( (AllCompareThreadStateFlags & 2) != 0 )
      {
        v23 = 0LL;
        if ( StaticRescheduleContext->ProcessorCount )
        {
          do
          {
            v24 = &StaticRescheduleContext->ProcessorEntries[v23];
            if ( v24 != v18 )
            {
              StaticRescheduleContext->ProcessorEntries[v23].___u5[0] |= 2u;
              v25 = v24->Prcb;
              StaticRescheduleContext->ProcessorEntries[v23].CompareThread = v25->IdleThread;
              StaticRescheduleContext->ProcessorEntries[v23].AllCompareThreadStateFlags = StaticRescheduleContext->ProcessorEntries[v23].AllCompareThreadStateFlags & 0xC0 | 5;
              v26 = v25->IdleThread;
              *((_BYTE *)&StaticRescheduleContext->ProcessorEntries[v23].0 + 1) &= ~1u;
              StaticRescheduleContext->ProcessorEntries[v23].NewThread = v26;
            }
            v23 = (unsigned int)(v23 + 1);
          }
          while ( (unsigned int)v23 < StaticRescheduleContext->ProcessorCount );
          LODWORD(v4) = v38;
        }
        StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
      }
LABEL_30:
      KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, a1);
      KiCommitRescheduleContext(StaticRescheduleContext, CurrentPrcb, 0LL, a1);
      goto LABEL_7;
    }
    if ( v9 )
      goto LABEL_30;
LABEL_7:
    v11 = (xmmword_140FC0C10 & 0x8000000) != 0 && IdealProcessor != v8;
    if ( v2 || v11 )
      _InterlockedAdd16(&CurrentThread->KeReferenceCount, 1u);
    KiReleasePrcbLocksForIsolationUnit(&v40);
    if ( v12 )
    {
      v27 = 0LL;
      if ( StaticRescheduleContext->ProcessorCount )
      {
        do
        {
          KiCompleteRescheduleContextEntry(
            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                  + 32 * v27
                                                  + 8 * (unsigned int)v27),
            CurrentPrcb,
            0LL,
            0LL);
          v27 = (unsigned int)(v27 + 1);
        }
        while ( (unsigned int)v27 < StaticRescheduleContext->ProcessorCount );
        LODWORD(v4) = v38;
      }
    }
    if ( v2 )
    {
      v22 = (unsigned int)CurrentThread->MiscFlags >> 3;
      LOBYTE(v22) = (CurrentThread->MiscFlags & 8) != 0;
      EtwTraceThreadAffinity(
        (_DWORD)CurrentThread,
        CurrentThread->AffinityPrimaryGroup,
        v22,
        0,
        (__int64)CurrentThread->Affinity,
        1334);
      if ( v11 )
      {
LABEL_44:
        if ( (xmmword_140FC0C10 & 0x8000000) != 0 )
          EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v8);
      }
      _InterlockedDecrement16(&CurrentThread->KeReferenceCount);
      goto LABEL_14;
    }
    if ( v11 )
      goto LABEL_44;
LABEL_14:
    v4 = (unsigned int)(v4 + 1);
    v38 = v4;
  }
  return KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts, v3);
}
