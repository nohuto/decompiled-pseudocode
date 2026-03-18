/*
 * XREFs of CmpUnlockGlobalKeyLockTracker @ 0x14085BB70
 * Callers:
 *     CmpGlobalUnlockKeyForWrite @ 0x14085BA00 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpGlobalLockKeyForWrite @ 0x140B1034C (CmpGlobalLockKeyForWrite.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
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
