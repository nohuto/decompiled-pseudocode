/*
 * XREFs of CmpUnlockContextList @ 0x140A36190
 * Callers:
 *     CmUnRegisterCallback @ 0x1408568E0 (CmUnRegisterCallback.c)
 *     CmpCallbackFillObjectContext @ 0x1408D0DB0 (CmpCallbackFillObjectContext.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 */

__int64 CmpUnlockContextList()
{
  signed __int64 v0; // rdx
  __int64 v1; // rtt

  _m_prefetchw(&CmpContextListLock);
  v0 = *(_QWORD *)&CmpContextListLock.Header.Lock - 16LL;
  if ( (*(_QWORD *)&CmpContextListLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpContextListLock.Header.Type & 2) != 0
    || (v1 = *(_QWORD *)&CmpContextListLock.Header.Lock,
        v1 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpContextListLock,
                v0,
                *(signed __int64 *)&CmpContextListLock.Header.Lock)) )
  {
    ExfReleasePushLock(&CmpContextListLock);
  }
  KeAbPostRelease((unsigned __int64)&CmpContextListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
