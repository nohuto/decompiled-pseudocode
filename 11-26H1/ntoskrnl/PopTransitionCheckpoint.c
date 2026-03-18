/*
 * XREFs of PopTransitionCheckpoint @ 0x140B1B69C
 * Callers:
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1407D1634 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PsIsHostSilo @ 0x14046E630 (PsIsHostSilo.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

char __fastcall PopTransitionCheckpoint(int a1, int a2)
{
  unsigned __int64 CurrentServerSilo; // rax
  char result; // al
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 Pool2; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  result = PsIsHostSilo(CurrentServerSilo);
  if ( result )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.PriorityFloorCounts[8], v6, v7, v8);
    if ( stru_140F12D20.SchedulerApc.SystemArgument2 != &stru_140F12D20.SchedulerApcFill5[72] || a1 == 1 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v10 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = stru_140F12D20.IoSelfBoostsEntry.Next;
        *(_DWORD *)(Pool2 + 20) = a1;
        *(_DWORD *)(Pool2 + 24) = a2;
        *(_QWORD *)(Pool2 + 32) = MEMORY[0xFFFFF78000000008];
        v11 = *(_QWORD **)&stru_140F12D20.SchedulerApcFill5[80];
        if ( **(struct _KTHREAD ***)&stru_140F12D20.SchedulerApcFill5[80] != (struct _KTHREAD *)&stru_140F12D20.SchedulerApcFill5[72] )
          __fastfail(3u);
        *v10 = &stru_140F12D20.SchedulerApc.SystemArgument2;
        v10[1] = v11;
        *v11 = v10;
        *(_QWORD *)&stru_140F12D20.SchedulerApcFill5[80] = v10;
      }
      stru_140F12D20.SuspendEvent.Header.LockNV = LODWORD(stru_140F12D20.IoSelfBoostsEntry.Next)++;
      *(_DWORD *)&stru_140F12D20.PriorityFloorCounts[24] = a1;
      *(_DWORD *)&stru_140F12D20.PriorityFloorCounts[28] = a2;
    }
    return PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.PriorityFloorCounts[8]);
  }
  return result;
}
