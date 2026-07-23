/*
 * XREFs of KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405FC494
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405FCA00 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSendThawExecution @ 0x1404FBC80 (KiSendThawExecution.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlResumeFromRootCrashdump @ 0x1405C07C0 (HvlResumeFromRootCrashdump.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405FCF60 (KiSaveBugcheckRecoveryProgress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KiBugCheckRecoveryCleanupFromCrashDump(unsigned __int8 a1, char a2)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett

  v3 = a1;
  v4 = KsepShimDbLock.SchedulerApcFill5[76] & 0xF;
  if ( (KsepShimDbLock.SchedulerApcFill5[76] & 0xF) != 0 && v4 < 3 )
  {
    if ( v4 == 2 )
    {
      HvlResumeFromRootCrashdump(1);
      KiSaveBugcheckRecoveryProgress(99LL);
    }
    KiSendThawExecution(1);
    guard_dispatch_icall_no_overrides(v6, v5);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
    __writecr8(v3);
    if ( a2 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v9 = *SchedulerAssist;
        do
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange(SchedulerAssist, v9 & 0xFFDFFFFF, v9);
        }
        while ( v10 != v9 );
        if ( (v9 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
}
