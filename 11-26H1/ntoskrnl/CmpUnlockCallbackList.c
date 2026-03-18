/*
 * XREFs of CmpUnlockCallbackList @ 0x140A05350
 * Callers:
 *     CmUnRegisterCallback @ 0x1408505D0 (CmUnRegisterCallback.c)
 *     CmpInsertCallbackInListByAltitude @ 0x140A051A4 (CmpInsertCallbackInListByAltitude.c)
 *     CmpEnumerateCallback @ 0x140A05280 (CmpEnumerateCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

__int64 CmpUnlockCallbackList()
{
  signed __int64 v0; // rdx
  __int64 v1; // rtt
  __int64 v2; // rdx
  __int64 v3; // r8

  _m_prefetchw(&CmpCallbackListLock);
  v0 = *(_QWORD *)&CmpCallbackListLock.Header.Lock - 16LL;
  if ( (*(_QWORD *)&CmpCallbackListLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpCallbackListLock.Header.Type & 2) != 0
    || (v1 = *(_QWORD *)&CmpCallbackListLock.Header.Lock,
        v1 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpCallbackListLock,
                v0,
                *(signed __int64 *)&CmpCallbackListLock.Header.Lock)) )
  {
    ExfReleasePushLock(&CmpCallbackListLock);
  }
  KeAbPostRelease((unsigned __int64)&CmpCallbackListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3);
}
