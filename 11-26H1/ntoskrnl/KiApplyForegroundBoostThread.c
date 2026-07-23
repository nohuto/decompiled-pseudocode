/*
 * XREFs of KiApplyForegroundBoostThread @ 0x1405243B4
 * Callers:
 *     KiProcessPendingForegroundBoosts @ 0x1404F7DD0 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402044D0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x14022F870 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14022FB10 (KiPrepareReadyThreadForRescheduling.c)
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KiCommitRescheduleContext @ 0x1402409D0 (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403342E0 (KiAcquireThreadStateLockForWrite.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140338054 (KiRemoveThreadFromAnyReadyQueue.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140338930 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140460D40 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiSetForegroundBoost @ 0x14052461C (KiSetForegroundBoost.c)
 */

char __fastcall KiApplyForegroundBoostThread(struct _KTHREAD *a1, __int64 *a2, volatile signed __int32 **a3)
{
  int v4; // eax
  unsigned __int64 v5; // rcx
  _KPROCESS *Process; // r8
  char v7; // di
  int v8; // ebx
  __int64 ProcessFlags; // rdx
  signed int v10; // eax
  __int64 v11; // rdx
  signed int Priority; // r9d
  unsigned int v13; // ebp
  struct _KPRCB *CurrentPrcb; // r12
  int v15; // r14d
  struct _KPRCB *v16; // r13
  int v17; // ebx
  int v18; // ebx
  unsigned __int64 v19; // rcx
  unsigned __int64 *v20; // r8
  _KTHREAD *NextThread; // rbx
  __int64 v22; // rdx
  struct _KPRCB *v24[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v25; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+50h] [rbp-48h]

  *(_OWORD *)v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v4 = KiAcquireThreadStateLockForWrite((__int64)a1, (__int64)v24, a3);
  Process = a1->Process;
  v7 = 0;
  v8 = v4;
  ProcessFlags = (unsigned int)Process->ProcessFlags;
  if ( (ProcessFlags & 0x2000) == 0
    || (v5 = *((unsigned int *)&a1->MiscFlags + 1), (v5 & 8) != 0)
    || a1->Priority <= 0
    || (KiSetForegroundBoost(a1, ProcessFlags),
        v10 = KiComputeThreadPriority(a1, 0, 0),
        Priority = a1->Priority,
        v13 = v10,
        v10 <= Priority) )
  {
    KiReleaseThreadStateLock(v5, (__int64)v24, (unsigned __int64 *)Process);
    return v7;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v15 = 0;
  v16 = v24[0];
  v17 = v8 - 1;
  if ( !v17 )
  {
    KiRemoveThreadFromAnyReadyQueue(v24[0], v25, (__int64)a1, Priority);
    KiUpdateThreadPriority(0LL, v22, (__int64)a1, v13, 0);
    KiPrepareReadyThreadForRescheduling((__int64)a1, v13, a2);
    goto LABEL_9;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    NextThread = v24[0]->NextThread;
    KiUpdateThreadPriority((__int64)v24[0], v11, (__int64)a1, v10, NextThread == 0LL);
    if ( NextThread || a1->WaitBlockFill6[68] != 2 )
      goto LABEL_9;
    goto LABEL_13;
  }
  if ( v18 == 1 )
  {
    KiUpdateThreadPriority((__int64)v24[0], v11, (__int64)a1, v10, 1);
LABEL_13:
    v15 = v13;
    goto LABEL_9;
  }
  KiUpdateThreadPriority(0LL, v11, (__int64)a1, v10, 0);
LABEL_9:
  KiUpdateSharedReadyQueueAffinityThread(0LL, (__int64)a1);
  KiReleaseThreadStateLock(v19, (__int64)v24, v20);
  if ( v15 > 0 )
    KiHvEnlightenedGuestPriorityKick((__int64)CurrentPrcb, (__int64)v16, (char *)(unsigned int)v15);
  return 1;
}
