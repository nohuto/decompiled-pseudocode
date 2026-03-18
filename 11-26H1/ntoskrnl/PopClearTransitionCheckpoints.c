/*
 * XREFs of PopClearTransitionCheckpoints @ 0x140B30120
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140C04AB0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopClearTransitionCheckpoints(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PVOID SystemArgument2; // rcx
  __int64 v5; // rax

  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.PriorityFloorCounts[8], a2, a3, a4);
  while ( 1 )
  {
    SystemArgument2 = stru_140F12D20.SchedulerApc.SystemArgument2;
    if ( stru_140F12D20.SchedulerApc.SystemArgument2 == &stru_140F12D20.SchedulerApcFill5[72] )
      break;
    if ( *((struct _KTHREAD **)stru_140F12D20.SchedulerApc.SystemArgument2 + 1) != (struct _KTHREAD *)&stru_140F12D20.SchedulerApcFill5[72]
      || (v5 = *(_QWORD *)stru_140F12D20.SchedulerApc.SystemArgument2,
          *(PVOID *)(*(_QWORD *)stru_140F12D20.SchedulerApc.SystemArgument2 + 8LL) != stru_140F12D20.SchedulerApc.SystemArgument2) )
    {
      __fastfail(3u);
    }
    stru_140F12D20.SchedulerApc.SystemArgument2 = *(PVOID *)stru_140F12D20.SchedulerApc.SystemArgument2;
    *(_QWORD *)(v5 + 8) = &stru_140F12D20.SchedulerApc.SystemArgument2;
    ExFreePoolWithTag(SystemArgument2, 0x50434B50u);
  }
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.PriorityFloorCounts[8]);
}
