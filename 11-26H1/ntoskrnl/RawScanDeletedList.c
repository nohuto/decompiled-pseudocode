/*
 * XREFs of RawScanDeletedList @ 0x140A36128
 * Callers:
 *     RawShutdown @ 0x1407FFE80 (RawShutdown.c)
 *     RawMountVolume @ 0x140A35E6C (RawMountVolume.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExTryToAcquireFastMutex @ 0x140476890 (ExTryToAcquireFastMutex.c)
 *     RawCheckForDeleteVolume @ 0x1404FDAA8 (RawCheckForDeleteVolume.c)
 */

void RawScanDeletedList()
{
  struct _KTHREAD *QuadPart; // rbx
  void **p_KernelShadowStackInitial; // rsi

  if ( (_ULARGE_INTEGER *)NormalizationListLock.Timer.DueTime.QuadPart != &NormalizationListLock.Timer.DueTime )
  {
    ExAcquireFastMutex((PKGUARDED_MUTEX)&NormalizationListLock.WaitStatus);
    QuadPart = (struct _KTHREAD *)NormalizationListLock.Timer.DueTime.QuadPart;
    while ( QuadPart != (struct _KTHREAD *)&NormalizationListLock.Timer.DueTime )
    {
      p_KernelShadowStackInitial = &QuadPart[-1].KernelShadowStackInitial;
      QuadPart = *(struct _KTHREAD **)&QuadPart->Header.Lock;
      if ( ExTryToAcquireFastMutex((PFAST_MUTEX)(p_KernelShadowStackInitial + 30)) )
      {
        if ( !RawCheckForDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)p_KernelShadowStackInitial) )
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(p_KernelShadowStackInitial + 30));
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&NormalizationListLock.WaitStatus);
  }
}
