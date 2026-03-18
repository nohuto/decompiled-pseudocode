/*
 * XREFs of KiForceParkDutyCycleDpcCallback @ 0x1405F8980
 * Callers:
 *     <none>
 * Callees:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022CBE0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x14022DEE0 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140237A80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiCommitRescheduleContext @ 0x14023F070 (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402436D0 (KiFlushSoftwareInterruptBatch.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402BBDD0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiStartRescheduleContext @ 0x14032F5E0 (KiStartRescheduleContext.c)
 *     KiAdjustRescheduleContextForParking @ 0x14033559C (KiAdjustRescheduleContextForParking.c)
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     KiProcessDeferredReadyList @ 0x14037C920 (KiProcessDeferredReadyList.c)
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 *     EtwTraceForceParkTransition @ 0x1406C4910 (EtwTraceForceParkTransition.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

unsigned __int8 __fastcall KiForceParkDutyCycleDpcCallback(__int64 a1, struct _KPRCB *a2)
{
  unsigned __int8 result; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  _KFORCE_PARK_DUTY_CYCLE_DATA *ForceParkDutyCycleData; // r14
  _KI_FORCE_PARK_DUTY_CYCLE_TRANSITION DpcTransition; // esi
  _KI_FORCE_PARK_DUTY_CYCLE_STATE CurrentState; // r12d
  unsigned __int8 IdleState; // al
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // r11
  __int64 i; // r15
  __int64 p_StartSingleDutyCycleTimer; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _SINGLE_LIST_ENTRY v18[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v19; // [rsp+68h] [rbp+38h] BYREF

  v18[0].Next = 0LL;
  v19 = 0LL;
  result = (unsigned __int8)KiAcquirePrcbLocksForIsolationUnit((__int64)a2, 1, (unsigned __int64 *)&v19);
  ForceParkDutyCycleData = a2->ForceParkDutyCycleData;
  DpcTransition = ForceParkDutyCycleData->DpcTransition;
  CurrentState = ForceParkDutyCycleData->CurrentState;
  ForceParkDutyCycleData->DpcTransition = KiForceParkDutyCycleTransitionNone;
  if ( DpcTransition == KiForceParkDutyCycleTransitionArm )
  {
    KiReleasePrcbLocksForIsolationUnit(&v19);
    v16 = -10LL * (unsigned int)dword_140FBE1F4;
    v17 = (unsigned int)(10 * dword_140FBE1F4);
    p_StartSingleDutyCycleTimer = (__int64)&ForceParkDutyCycleData->StartSingleDutyCycleTimer;
    goto LABEL_19;
  }
  if ( DpcTransition != KiForceParkDutyCycleTransitionStart && DpcTransition != KiForceParkDutyCycleTransitionStop )
  {
    if ( DpcTransition == KiForceParkDutyCycleTransitionDisarm )
    {
      KiReleasePrcbLocksForIsolationUnit(&v19);
      KeCancelTimer2((__int64)&ForceParkDutyCycleData->StartSingleDutyCycleTimer);
      result = KeCancelTimer2((__int64)&ForceParkDutyCycleData->StopSingleDutyCycleTimer);
    }
    goto LABEL_20;
  }
  IdleState = a2->IdleState;
  if ( DpcTransition == KiForceParkDutyCycleTransitionStart )
  {
    IdleState &= ~0x20u;
  }
  else if ( DpcTransition == KiForceParkDutyCycleTransitionStop )
  {
    IdleState |= 0x20u;
  }
  StaticRescheduleContext = a2->StaticRescheduleContext;
  a2->IdleState = IdleState;
  memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)StaticRescheduleContext, &v19, 0LL);
  if ( DpcTransition == KiForceParkDutyCycleTransitionStop )
    KiAdjustRescheduleContextForParking(StaticRescheduleContext, a2);
  KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, v18);
  KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, a2, 0, v18);
  KiReleasePrcbLocksForIsolationUnit(&v19);
  if ( v13 )
  {
    for ( i = 0LL; (unsigned int)i < StaticRescheduleContext->ProcessorCount; i = (unsigned int)(i + 1) )
      KiCompleteRescheduleContextEntry(
        (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                              + 32 * i
                                              + 8 * (unsigned int)i),
        a2,
        0LL,
        0LL);
    KiFlushSoftwareInterruptBatch((char *)&a2->DeferredDispatchInterrupts);
  }
  LOBYTE(v11) = 2;
  result = KiProcessDeferredReadyList(a2, v18, v11, v12);
  if ( DpcTransition == KiForceParkDutyCycleTransitionStart )
  {
    p_StartSingleDutyCycleTimer = (__int64)&ForceParkDutyCycleData->StopSingleDutyCycleTimer;
    v16 = -10LL * (unsigned int)dword_140FBE1F8;
    v17 = 0LL;
LABEL_19:
    result = KeSetTimer2(p_StartSingleDutyCycleTimer, v16, v17, 0LL);
  }
LABEL_20:
  if ( v19 )
    result = KiReleasePrcbLocksForIsolationUnit(&v19);
  if ( (WORD2(xmmword_140FBFC10) & 0x2000) != 0 )
  {
    LOBYTE(v5) = DpcTransition;
    LOBYTE(v4) = CurrentState;
    return EtwTraceForceParkTransition(a2, v4, v5);
  }
  return result;
}
