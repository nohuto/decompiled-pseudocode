/*
 * XREFs of PopTransitionCheckpoint @ 0x140B1D94C
 * Callers:
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1407D46D4 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
    PopAcquireRwLockExclusive(&stru_140F12EA0.Padding[1], v6, v7, v8);
    if ( PopTransitionCheckpoints != &PopTransitionCheckpoints || a1 == 1 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v10 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = HIDWORD(stru_140F12EA0.Padding[4]);
        *(_DWORD *)(Pool2 + 20) = a1;
        *(_DWORD *)(Pool2 + 24) = a2;
        *(_QWORD *)(Pool2 + 32) = MEMORY[0xFFFFF78000000008];
        v11 = (_QWORD *)qword_140F13368;
        if ( *(PVOID **)qword_140F13368 != &PopTransitionCheckpoints )
          __fastfail(3u);
        *v10 = &PopTransitionCheckpoints;
        v10[1] = v11;
        *v11 = v10;
        qword_140F13368 = (__int64)v10;
      }
      LODWORD(stru_140F12EA0.Padding[3]) = HIDWORD(stru_140F12EA0.Padding[4])++;
      LODWORD(stru_140F12EA0.Padding[4]) = a1;
      HIDWORD(stru_140F12EA0.Padding[3]) = a2;
    }
    return PopReleaseRwLock((struct _KTHREAD *)&stru_140F12EA0.Padding[1]);
  }
  return result;
}
