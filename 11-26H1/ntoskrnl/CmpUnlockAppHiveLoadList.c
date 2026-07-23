/*
 * XREFs of CmpUnlockAppHiveLoadList @ 0x1408B77A4
 * Callers:
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

void CmpUnlockAppHiveLoadList()
{
  signed __int64 v0; // rdx
  _ULARGE_INTEGER DueTime; // rtt

  _m_prefetchw(&CmpKeyLockTracker.Timer.DueTime);
  v0 = CmpKeyLockTracker.Timer.DueTime.QuadPart - 16;
  if ( (CmpKeyLockTracker.Timer.DueTime.QuadPart & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpKeyLockTracker.Timer.DueTime.LowPart & 2) != 0
    || (DueTime = CmpKeyLockTracker.Timer.DueTime,
        DueTime.QuadPart != _InterlockedCompareExchange64(
                              (volatile signed __int64 *)&CmpKeyLockTracker.Timer.DueTime.QuadPart,
                              v0,
                              CmpKeyLockTracker.Timer.DueTime.QuadPart)) )
  {
    ExfReleasePushLock((_ULARGE_INTEGER *)&CmpKeyLockTracker.Timer.DueTime.QuadPart);
  }
  KeAbPostRelease((unsigned __int64)&CmpKeyLockTracker.Timer.DueTime);
  KeLeaveCriticalRegion();
}
