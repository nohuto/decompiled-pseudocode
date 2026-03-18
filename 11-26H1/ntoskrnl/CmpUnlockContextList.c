/*
 * XREFs of CmpUnlockContextList @ 0x140A23680
 * Callers:
 *     CmUnRegisterCallback @ 0x1408505D0 (CmUnRegisterCallback.c)
 *     CmpCallbackFillObjectContext @ 0x1408CA800 (CmpCallbackFillObjectContext.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

__int64 CmpUnlockContextList()
{
  char *v0; // rdx
  void *SListFaultAddress; // rtt
  __int64 v2; // rdx
  __int64 v3; // r8

  _m_prefetchw(&CmpCallbackListLock.SListFaultAddress);
  v0 = (char *)CmpCallbackListLock.SListFaultAddress - 16;
  if ( ((unsigned __int64)CmpCallbackListLock.SListFaultAddress & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( ((__int64)CmpCallbackListLock.SListFaultAddress & 2) != 0
    || (SListFaultAddress = CmpCallbackListLock.SListFaultAddress,
        SListFaultAddress != (void *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)&CmpCallbackListLock.SListFaultAddress,
                                       (signed __int64)v0,
                                       (signed __int64)CmpCallbackListLock.SListFaultAddress)) )
  {
    ExfReleasePushLock(&CmpCallbackListLock.SListFaultAddress);
  }
  KeAbPostRelease((unsigned __int64)&CmpCallbackListLock.SListFaultAddress);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3);
}
