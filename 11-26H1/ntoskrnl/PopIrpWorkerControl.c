/*
 * XREFs of PopIrpWorkerControl @ 0x14060C250
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PopCreateDynamicIrpWorker @ 0x1403B64AC (PopCreateDynamicIrpWorker.c)
 */

void __noreturn PopIrpWorkerControl()
{
  char v0; // bl

  while ( 1 )
  {
    v0 = 0;
    KeWaitForSingleObject(&PopWeakChargerLock.WaitBlockFill11[48], Executive, 0, 0, 0LL);
    ExAcquireFastMutex((PKGUARDED_MUTEX)&PopWeakChargerLock.WaitBlockFill11[112]);
    PopWeakChargerLock.WaitBlockFill6[73] = 0;
    if ( PopWeakChargerLock.WaitBlockFill6[72] )
    {
      ++*(_DWORD *)&PopWeakChargerLock.WaitBlockFill11[84];
      v0 = 1;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&PopWeakChargerLock.WaitBlockFill11[112]);
    if ( v0 )
      PopCreateDynamicIrpWorker(0LL);
  }
}
