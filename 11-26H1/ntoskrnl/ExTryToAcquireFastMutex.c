/*
 * XREFs of ExTryToAcquireFastMutex @ 0x140476890
 * Callers:
 *     FsRtlTryToAcquireHeaderMutex @ 0x140476830 (FsRtlTryToAcquireHeaderMutex.c)
 *     KeTryToAcquireGuardedMutex @ 0x140476870 (KeTryToAcquireGuardedMutex.c)
 *     DifExTryToAcquireFastMutexWrapper @ 0x140654C50 (DifExTryToAcquireFastMutexWrapper.c)
 *     DifKeTryToAcquireGuardedMutexWrapper @ 0x140664AF0 (DifKeTryToAcquireGuardedMutexWrapper.c)
 *     RawScanDeletedList @ 0x140A36128 (RawScanDeletedList.c)
 *     PopFlushVolumeBlameResolverCallback @ 0x140BFD280 (PopFlushVolumeBlameResolverCallback.c)
 *     CreateMiniNtBootKey @ 0x140CA9D20 (CreateMiniNtBootKey.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
