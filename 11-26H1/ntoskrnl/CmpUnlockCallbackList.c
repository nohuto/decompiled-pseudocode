/*
 * XREFs of CmpUnlockCallbackList @ 0x1409F0B40
 * Callers:
 *     CmUnRegisterCallback @ 0x1408568E0 (CmUnRegisterCallback.c)
 *     CmpInsertCallbackInListByAltitude @ 0x1409F0994 (CmpInsertCallbackInListByAltitude.c)
 *     CmpEnumerateCallback @ 0x1409F0A70 (CmpEnumerateCallback.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 */

__int64 CmpUnlockCallbackList()
{
  struct _LIST_ENTRY *v0; // rdx
  struct _LIST_ENTRY *Flink; // rtt

  _m_prefetchw(&CmpContextListLock.Header.WaitListHead);
  v0 = CmpContextListLock.Header.WaitListHead.Flink - 1;
  if ( ((unsigned __int64)CmpContextListLock.Header.WaitListHead.Flink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( ((__int64)CmpContextListLock.Header.WaitListHead.Flink & 2) != 0
    || (Flink = CmpContextListLock.Header.WaitListHead.Flink,
        Flink != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&CmpContextListLock.Header.WaitListHead.Flink,
                                         (signed __int64)v0,
                                         (signed __int64)CmpContextListLock.Header.WaitListHead.Flink)) )
  {
    ExfReleasePushLock(&CmpContextListLock.Header.WaitListHead.Flink);
  }
  KeAbPostRelease((unsigned __int64)&CmpContextListLock.Header.WaitListHead);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
