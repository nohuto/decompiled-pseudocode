/*
 * XREFs of PoAllProcessorsDeepIdle @ 0x1406013E0
 * Callers:
 *     PpmWakeClockOwnerIfNeeded @ 0x1403EACD0 (PpmWakeClockOwnerIfNeeded.c)
 *     PpmIdleEvaluateConstraints @ 0x140507E70 (PpmIdleEvaluateConstraints.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405ED634 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     KeInitializeSystemSubNodeEnumerationContext @ 0x1403EDE78 (KeInitializeSystemSubNodeEnumerationContext.c)
 *     KeEnumerateNextSchedulerSubNodeInSystem @ 0x1403EDEC0 (KeEnumerateNextSchedulerSubNodeInSystem.c)
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
        *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4 * Number) & 0x3F);
    }
    if ( DeepIdleSet != Mask )
      return 0;
  }
  return 1;
}
