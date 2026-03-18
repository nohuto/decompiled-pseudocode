/*
 * XREFs of KiScheduleBugcheckRecovery @ 0x1405FA570
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405F9734 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402642E0 (KeAreInterruptsEnabled.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiRecordRecoveryFailure @ 0x1405FA508 (KiRecordRecoveryFailure.c)
 *     KiStallBugcheckThread @ 0x1405FA6C8 (KiStallBugcheckThread.c)
 */

char KiScheduleBugcheckRecovery()
{
  bool v0; // al
  struct _KPRCB *CurrentPrcb; // rcx
  bool v2; // bl
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  char result; // al

  v0 = KeAreInterruptsEnabled();
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = v0;
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v4 = *SchedulerAssist;
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange(SchedulerAssist, v4 & 0xFFDFFFFF, v4);
    }
    while ( v5 != v4 );
    if ( (v4 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  *(_DWORD *)&KsepShimDbLock.SavedApcStateFill[32] = 531;
  KsepShimDbLock.SchedulerApc.Thread = (struct _KTHREAD *)KiScheduleBugcheckRecoveryWorkItem;
  KsepShimDbLock.SchedulerApc.ApcListEntry.Flink = 0LL;
  KsepShimDbLock.SchedulerApc.Reserved[1] = 0LL;
  *(_QWORD *)&KsepShimDbLock.SchedulerApc.Type = 0LL;
  if ( (unsigned __int8)KiInsertQueueDpc((ULONG_PTR)&KsepShimDbLock.SavedApcState.Process, 0LL, 0LL, 0LL, 0) )
    result = KiStallBugcheckThread();
  else
    result = KiRecordRecoveryFailure(4);
  if ( !v2 )
    _disable();
  return result;
}
