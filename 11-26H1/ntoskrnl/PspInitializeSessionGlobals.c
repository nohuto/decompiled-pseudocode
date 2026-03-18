/*
 * XREFs of PspInitializeSessionGlobals @ 0x140B6AFFC
 * Callers:
 *     PsSessionCreate @ 0x1409638D4 (PsSessionCreate.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PspLockProcessListExclusive @ 0x140215EEC (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x140215F5C (PspUnlockProcessListExclusive.c)
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     PspIsSessionLeaderProcess @ 0x140B144C4 (PspIsSessionLeaderProcess.c)
 */

__int64 PspInitializeSessionGlobals()
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _LIST_ENTRY *Process; // rdi

  CurrentThread = KeGetCurrentThread();
  Process = (struct _LIST_ENTRY *)CurrentThread->Process;
  if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return 3221225505LL;
  if ( !PspIsSessionLeaderProcess() )
  {
    if ( NormalizationListLock.WaitBlock[0].WaitListEntry.Blink )
    {
      if ( PsIsCurrentThreadInServerSilo() )
      {
        PspLockProcessListExclusive((__int64)CurrentThread);
        if ( !PsGetCurrentServerSiloGlobals()[52].Blink )
        {
          PsGetCurrentServerSiloGlobals()[52].Blink = Process;
          ObfReferenceObjectWithTag(Process, 0x73536D4Du);
        }
        PspUnlockProcessListExclusive(CurrentThread);
      }
      if ( !PspIsSessionLeaderProcess() )
        return 3221225500LL;
    }
    else
    {
      PspLockProcessListExclusive((__int64)CurrentThread);
      if ( NormalizationListLock.WaitBlock[0].WaitListEntry.Blink )
      {
        PspUnlockProcessListExclusive(CurrentThread);
        return Process != NormalizationListLock.WaitBlock[0].WaitListEntry.Blink ? 0xC000001C : 0;
      }
      NormalizationListLock.WaitBlock[0].WaitListEntry.Blink = Process;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 105) = Process;
      PspUnlockProcessListExclusive(CurrentThread);
      ObfReferenceObjectWithTag(Process, 0x73536D4Du);
    }
  }
  return 0LL;
}
