/*
 * XREFs of CmpUnlockSiloKeyLockTracker @ 0x140966AAC
 * Callers:
 *     PiPnpRtlEnsureObjectCached @ 0x1407A9DA8 (PiPnpRtlEnsureObjectCached.c)
 *     CmInitServerSiloState @ 0x14085AEF4 (CmInitServerSiloState.c)
 *     PiPnpRtlObjectEventWorker @ 0x1409517A4 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x140951BA0 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectGetCachedObjectReference @ 0x14095204C (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1409649B0 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140966B10 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmEnumObjectsWithCallback @ 0x140967BEC (PiDmEnumObjectsWithCallback.c)
 *     PiDmObjectIsEnumerable @ 0x140967EEC (PiDmObjectIsEnumerable.c)
 *     IopProcessSetInterfaceState @ 0x1409A91A0 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     PiDmListAddObject @ 0x1409AA3C0 (PiDmListAddObject.c)
 *     CmLockKeyForWrite @ 0x140A4BA6C (CmLockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A74604 (CmpStopSiloKeyLockTracker.c)
 *     PiDmListRemoveObject @ 0x140B165EC (PiDmListRemoveObject.c)
 *     PiDmListAddList @ 0x140B2E9E4 (PiDmListAddList.c)
 *     PiDmListRemoveList @ 0x140B6F648 (PiDmListRemoveList.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall CmpUnlockSiloKeyLockTracker(struct _KTHREAD *a1)
{
  signed __int64 v2; // rax
  unsigned __int64 v3; // rdx
  signed __int64 v4; // rcx

  _m_prefetchw(a1);
  v2 = *(_QWORD *)&a1->Header.Lock;
  v3 = *(_QWORD *)&a1->Header.Lock & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = *(_QWORD *)&a1->Header.Lock - 16LL;
  if ( v3 <= 0x10 )
    v4 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, v4, v2) )
    ExfReleasePushLock(a1);
  KeAbPostRelease((unsigned __int64)a1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
