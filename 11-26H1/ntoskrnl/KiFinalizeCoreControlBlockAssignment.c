/*
 * XREFs of KiFinalizeCoreControlBlockAssignment @ 0x1405ED984
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140BFB030 (KiInitializeDynamicProcessorDpc.c)
 *     KiConfigureAllSchedulingInformation @ 0x140CCFA80 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x14022F870 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiCommitRescheduleContext @ 0x1402409D0 (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiAddProcessorToCoreControlBlock @ 0x1405F1588 (KiAddProcessorToCoreControlBlock.c)
 *     KiRemoveProcessorFromCoreControlBlock @ 0x1405F272C (KiRemoveProcessorFromCoreControlBlock.c)
 *     KiAdjustRescheduleContextForProcessorAddition @ 0x1405FDFAC (KiAdjustRescheduleContextForProcessorAddition.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiFinalizeCoreControlBlockAssignment(__int64 a1, char a2)
{
  __int64 result; // rax
  unsigned int v3; // edi
  unsigned int v5; // ecx
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // r11
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+58h] [rbp+10h] BYREF
  struct _SINGLE_LIST_ENTRY v17; // [rsp+60h] [rbp+18h] BYREF

  result = (__int64)&retaddr;
  LOBYTE(v16) = a2;
  v3 = 0;
  v17.Next = 0LL;
  v5 = 0;
  v15 = 0LL;
  while ( v5 < *(_DWORD *)(a1 + 36) )
  {
    v6 = KiProcessorBlock[v5];
    result = *(unsigned int *)(a1 + 36444);
    if ( *(_DWORD *)(v6 + 36444) == (_DWORD)result )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      CurrentPrcb = KeGetCurrentPrcb();
      StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
      memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
      KiAcquirePrcbLocksForIsolationUnit(v6, 1, (unsigned __int64 *)&v15);
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v16);
        while ( *(_QWORD *)(a1 + 48) );
      }
      KiStartRescheduleContext((__int64)StaticRescheduleContext, &v15, 0LL);
      v10 = *(_QWORD *)(v6 + 36504);
      KiRemoveProcessorFromCoreControlBlock(a1);
      KiAddProcessorToCoreControlBlock(v10, a1);
      KiAdjustRescheduleContextForProcessorAddition(StaticRescheduleContext, a1);
      KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, CurrentPrcb, 0, &v17);
      KiReleasePrcbLocksForIsolationUnit(&v15);
      if ( v13 )
      {
        if ( StaticRescheduleContext->ProcessorCount )
        {
          do
          {
            KiCompleteRescheduleContextEntry(
              (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                    + 32 * v3
                                                    + 8 * v3),
              CurrentPrcb,
              0LL,
              0LL);
            ++v3;
          }
          while ( v3 < StaticRescheduleContext->ProcessorCount );
        }
        KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
      }
      LOBYTE(v11) = CurrentIrql;
      return KiProcessDeferredReadyList(CurrentPrcb, &v17, v11, v12);
    }
    ++v5;
  }
  return result;
}
