/*
 * XREFs of KeSynchronizeWithDynamicProcessors @ 0x140A885F0
 * Callers:
 *     PspInitializeQuotaBlock @ 0x1407EFFF0 (PspInitializeQuotaBlock.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     ExpNodeHotAddProcessorWorker @ 0x14083F940 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 */

void KeSynchronizeWithDynamicProcessors()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( KeDynamicPartitioningSupported )
  {
    _InterlockedOr(v0, 0);
    if ( (KiSupervisorXStateFeaturesLock.WaitBlockFill7[144] & 1) == 0 )
    {
      ExAcquireFastMutex((PKGUARDED_MUTEX)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[144]);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[144]);
    }
  }
}
