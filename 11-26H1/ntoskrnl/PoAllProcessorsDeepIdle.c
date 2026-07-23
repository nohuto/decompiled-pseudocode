/*
 * XREFs of PoAllProcessorsDeepIdle @ 0x140603E90
 * Callers:
 *     PpmWakeClockOwnerIfNeeded @ 0x1402F7BB0 (PpmWakeClockOwnerIfNeeded.c)
 *     PpmIdleEvaluateConstraints @ 0x140501844 (PpmIdleEvaluateConstraints.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405EFFA4 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     KeInitializeSystemSubNodeEnumerationContext @ 0x1404529A8 (KeInitializeSystemSubNodeEnumerationContext.c)
 *     KeEnumerateNextSchedulerSubNodeInSystem @ 0x1404529F0 (KeEnumerateNextSchedulerSubNodeInSystem.c)
 */

char PoAllProcessorsDeepIdle()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 Number; // rdi
  unsigned __int64 DeepIdleSet; // r8
  unsigned __int64 Mask; // r9
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  _KSCHEDULER_SUBNODE *v7; // [rsp+50h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0LL;
  v5 = 0LL;
  Number = CurrentPrcb->Number;
  v6 = 0LL;
  KeInitializeSystemSubNodeEnumerationContext(
    &v5,
    *(_WORD *)KeNodeBlock[CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0]]);
  while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInSystem((__int64)&v5, &v7) )
  {
    DeepIdleSet = v7->DeepIdleSet;
    Mask = v7->Affinity.Mask;
    if ( v7 == CurrentPrcb->SchedulerSubNode )
    {
      DeepIdleSet &= ~(1LL << CurrentPrcb->GroupIndex);
      _bittestandreset64(
        (__int64 *)&Mask,
        *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + Number) & 0x3F);
    }
    if ( DeepIdleSet != Mask )
      return 0;
  }
  return 1;
}
