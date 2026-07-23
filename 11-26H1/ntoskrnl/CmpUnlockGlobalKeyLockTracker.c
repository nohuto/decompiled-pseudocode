/*
 * XREFs of CmpUnlockGlobalKeyLockTracker @ 0x140861E64
 * Callers:
 *     CmpGlobalUnlockKeyForWrite @ 0x140861CF4 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x140B11D8C (CmpGlobalLockKeyForWrite.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

void CmpUnlockGlobalKeyLockTracker()
{
  signed __int64 v0; // rdx
  __int64 v1; // rtt

  _m_prefetchw(&CmpKeyLockTracker);
  v0 = *(_QWORD *)&CmpKeyLockTracker.Header.Lock - 16LL;
  if ( (*(_QWORD *)&CmpKeyLockTracker.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpKeyLockTracker.Header.Type & 2) != 0
    || (v1 = *(_QWORD *)&CmpKeyLockTracker.Header.Lock,
        v1 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpKeyLockTracker,
                v0,
                *(signed __int64 *)&CmpKeyLockTracker.Header.Lock)) )
  {
    ExfReleasePushLock(&CmpKeyLockTracker);
  }
  KeAbPostRelease((unsigned __int64)&CmpKeyLockTracker);
  KeLeaveCriticalRegion();
}
