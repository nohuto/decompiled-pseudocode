/*
 * XREFs of KeSynchronizeWithDynamicProcessors @ 0x140A8F720
 * Callers:
 *     PspInitializeQuotaBlock @ 0x1407F5B50 (PspInitializeQuotaBlock.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140845B80 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 */

void KeSynchronizeWithDynamicProcessors()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( KeDynamicPartitioningSupported )
  {
    _InterlockedOr(v0, 0);
    if ( (KiSupervisorXStateFeaturesLock.SchedulerApcFill3[56] & 1) == 0 )
    {
      ExAcquireFastMutex((PKGUARDED_MUTEX)&KiSupervisorXStateFeaturesLock.SchedulerApcFill5[56]);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&KiSupervisorXStateFeaturesLock.SchedulerApcFill5[56]);
    }
  }
}
