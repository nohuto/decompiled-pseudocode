/*
 * XREFs of PspInitializeSessionGlobals @ 0x140A098DC
 * Callers:
 *     PsSessionCreate @ 0x140A0975C (PsSessionCreate.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PspLockProcessListExclusive @ 0x14021621C (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x14021628C (PspUnlockProcessListExclusive.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     PspIsSessionLeaderProcess @ 0x140B165C4 (PspIsSessionLeaderProcess.c)
 */

__int64 PspInitializeSessionGlobals()
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _LIST_ENTRY *Process; // rdi

  CurrentThread = KeGetCurrentThread();
  Process = (struct _LIST_ENTRY *)CurrentThread->Process;
  if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return 3221225505LL;
  if ( !(unsigned int)PspIsSessionLeaderProcess(CurrentThread->Process) )
  {
    if ( NormalizationListLock.WaitBlock[0].Object )
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
      if ( !(unsigned int)PspIsSessionLeaderProcess(Process) )
        return 3221225500LL;
    }
    else
    {
      PspLockProcessListExclusive((__int64)CurrentThread);
      if ( NormalizationListLock.WaitBlock[0].Object )
      {
        PspUnlockProcessListExclusive(CurrentThread);
        return Process != NormalizationListLock.WaitBlock[0].Object ? 0xC000001C : 0;
      }
      NormalizationListLock.WaitBlock[0].Object = Process;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 105) = Process;
      PspUnlockProcessListExclusive(CurrentThread);
      ObfReferenceObjectWithTag(Process, 0x73536D4Du);
    }
  }
  return 0LL;
}
