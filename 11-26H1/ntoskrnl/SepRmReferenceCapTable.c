/*
 * XREFs of SepRmReferenceCapTable @ 0x1403C8398
 * Callers:
 *     SepRmReferenceFindCap @ 0x1403C82D8 (SepRmReferenceFindCap.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

unsigned __int64 __fastcall SepRmReferenceCapTable(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v5; // rbx
  unsigned __int64 ThreadLock; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&SepRmCapTableLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&SepRmCapTableLock.Header.Lock, 0, v5, &SepRmCapTableLock);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v5 + 33) |= 2u;
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  ThreadLock = ExpPlatformBinaryLock.ThreadLock;
  if ( ExpPlatformBinaryLock.ThreadLock
    && _InterlockedIncrement64((volatile signed __int64 *)(ExpPlatformBinaryLock.ThreadLock + 40)) <= 1 )
  {
    __fastfail(0xEu);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&SepRmCapTableLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&SepRmCapTableLock);
  KeLeaveCriticalRegion();
  return ThreadLock;
}
