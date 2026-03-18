/*
 * XREFs of PopRunNormalIrpWorkers @ 0x140529074
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140C04AB0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 */

void PopRunNormalIrpWorkers()
{
  ExAcquireFastMutex((PKGUARDED_MUTEX)&PopWeakChargerLock.WaitBlockFill11[112]);
  PopWeakChargerLock.WaitBlockFill6[72] = 1;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&PopWeakChargerLock.WaitBlockFill11[112]);
}
