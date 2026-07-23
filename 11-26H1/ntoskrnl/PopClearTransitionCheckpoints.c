/*
 * XREFs of PopClearTransitionCheckpoints @ 0x140B31F00
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140C0ACC0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopClearTransitionCheckpoints(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PVOID v4; // rcx
  __int64 v5; // rax

  PopAcquireRwLockExclusive(&stru_140F12EA0.Padding[1], a2, a3, a4);
  while ( 1 )
  {
    v4 = PopTransitionCheckpoints;
    if ( PopTransitionCheckpoints == &PopTransitionCheckpoints )
      break;
    if ( *((PVOID **)PopTransitionCheckpoints + 1) != &PopTransitionCheckpoints
      || (v5 = *(_QWORD *)PopTransitionCheckpoints,
          *(PVOID *)(*(_QWORD *)PopTransitionCheckpoints + 8LL) != PopTransitionCheckpoints) )
    {
      __fastfail(3u);
    }
    PopTransitionCheckpoints = *(PVOID *)PopTransitionCheckpoints;
    *(_QWORD *)(v5 + 8) = &PopTransitionCheckpoints;
    ExFreePoolWithTag(v4, 0x50434B50u);
  }
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F12EA0.Padding[1]);
}
