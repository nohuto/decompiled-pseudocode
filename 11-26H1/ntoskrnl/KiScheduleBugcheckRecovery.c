/*
 * XREFs of KiScheduleBugcheckRecovery @ 0x1405FCF90
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405FC154 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiRecordRecoveryFailure @ 0x1405FCF28 (KiRecordRecoveryFailure.c)
 *     KiStallBugcheckThread @ 0x1405FD0E8 (KiStallBugcheckThread.c)
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
  *(_DWORD *)&KsepShimDbLock.WaitBlockFill11[136] = 531;
  *(_QWORD *)&KsepShimDbLock.WaitBlockFill11[160] = KiScheduleBugcheckRecoveryWorkItem;
  KsepShimDbLock.WaitBlock[3].Thread = 0LL;
  *(_QWORD *)&KsepShimDbLock.ThreadFlags2 = 0LL;
  KsepShimDbLock.WaitBlock[3].WaitListEntry.Blink = 0LL;
  if ( (unsigned __int8)KiInsertQueueDpc((ULONG_PTR)&KsepShimDbLock.WaitBlock[2].SparePtr, 0LL, 0LL, 0LL, 0) )
    result = KiStallBugcheckThread();
  else
    result = KiRecordRecoveryFailure(4);
  if ( !v2 )
    _disable();
  return result;
}
