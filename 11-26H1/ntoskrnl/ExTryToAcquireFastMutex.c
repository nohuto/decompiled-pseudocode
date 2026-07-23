/*
 * XREFs of ExTryToAcquireFastMutex @ 0x140470010
 * Callers:
 *     FsRtlTryToAcquireHeaderMutex @ 0x14046FFB0 (FsRtlTryToAcquireHeaderMutex.c)
 *     KeTryToAcquireGuardedMutex @ 0x14046FFF0 (KeTryToAcquireGuardedMutex.c)
 *     DifExTryToAcquireFastMutexWrapper @ 0x140658830 (DifExTryToAcquireFastMutexWrapper.c)
 *     DifKeTryToAcquireGuardedMutexWrapper @ 0x1406686D0 (DifKeTryToAcquireGuardedMutexWrapper.c)
 *     RawScanDeletedList @ 0x14091B194 (RawScanDeletedList.c)
 *     PopFlushVolumeBlameResolverCallback @ 0x140C03280 (PopFlushVolumeBlameResolverCallback.c)
 *     CreateMiniNtBootKey @ 0x140CAFD20 (CreateMiniNtBootKey.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

BOOLEAN __stdcall ExTryToAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  struct _KLOCK_ENTRIES *v1; // r9
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 CurrentIrql; // si
  BOOLEAN result; // al

  v5 = KeAbPreAcquire((__int64)FastMutex, 0LL, 1LL, v1);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = 1;
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4, v3);
  }
  if ( _interlockedbittestandreset(&FastMutex->Count, 0) )
  {
    if ( v5 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *(_BYTE *)(v5 + 33) |= 2u;
      else
        *(_BYTE *)(v5 + 10) = 1;
    }
    result = 1;
    FastMutex->Owner = KeGetCurrentThread();
    FastMutex->OldIrql = CurrentIrql;
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v5 )
      KeAbPostReleaseEx((struct _KTHREAD *)FastMutex, v5, v6, v7);
    _mm_pause();
    return 0;
  }
  return result;
}
