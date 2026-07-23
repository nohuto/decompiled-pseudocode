/*
 * XREFs of RawScanDeletedList @ 0x14091B194
 * Callers:
 *     RawShutdown @ 0x1408058B0 (RawShutdown.c)
 *     RawMountVolume @ 0x14091B1FC (RawMountVolume.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExTryToAcquireFastMutex @ 0x140470010 (ExTryToAcquireFastMutex.c)
 *     RawCheckForDeleteVolume @ 0x1404F6FE8 (RawCheckForDeleteVolume.c)
 */

void RawScanDeletedList()
{
  struct _KTHREAD *RelativeTimerBias; // rbx
  void **p_KernelShadowStackInitial; // rsi

  if ( (unsigned __int64 *)NormalizationListLock.RelativeTimerBias != &NormalizationListLock.RelativeTimerBias )
  {
    ExAcquireFastMutex((PKGUARDED_MUTEX)&NormalizationListLock.Timer.Header.WaitListHead);
    RelativeTimerBias = (struct _KTHREAD *)NormalizationListLock.RelativeTimerBias;
    while ( RelativeTimerBias != (struct _KTHREAD *)&NormalizationListLock.RelativeTimerBias )
    {
      p_KernelShadowStackInitial = &RelativeTimerBias[-1].KernelShadowStackInitial;
      RelativeTimerBias = *(struct _KTHREAD **)&RelativeTimerBias->Header.Lock;
      if ( ExTryToAcquireFastMutex((PFAST_MUTEX)(p_KernelShadowStackInitial + 30)) )
      {
        if ( !RawCheckForDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)p_KernelShadowStackInitial) )
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(p_KernelShadowStackInitial + 30));
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&NormalizationListLock.Timer.Header.WaitListHead);
  }
}
