/*
 * XREFs of CmpUnlockSiloKeyLockTracker @ 0x1409A604C
 * Callers:
 *     PiPnpRtlEnsureObjectCached @ 0x1407A71F8 (PiPnpRtlEnsureObjectCached.c)
 *     CmInitServerSiloState @ 0x140854BE4 (CmInitServerSiloState.c)
 *     PiPnpRtlObjectEventWorker @ 0x140990D44 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x140991140 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1409915EC (PiDmObjectGetCachedObjectReference.c)
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1409A3F50 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1409A4F20 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1409A60B0 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmEnumObjectsWithCallback @ 0x1409A718C (PiDmEnumObjectsWithCallback.c)
 *     PiDmObjectIsEnumerable @ 0x1409A748C (PiDmObjectIsEnumerable.c)
 *     IopProcessSetInterfaceState @ 0x1409D82B0 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1409D8950 (IopRegisterDeviceInterface.c)
 *     PiDmListAddObject @ 0x1409D94D0 (PiDmListAddObject.c)
 *     CmLockKeyForWrite @ 0x140A30B0C (CmLockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A67634 (CmpStopSiloKeyLockTracker.c)
 *     PiDmListRemoveObject @ 0x140AF3FE0 (PiDmListRemoveObject.c)
 *     PiDmListAddList @ 0x140B2C964 (PiDmListAddList.c)
 *     PiDmListRemoveList @ 0x140B6C54C (PiDmListRemoveList.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

__int64 __fastcall CmpUnlockSiloKeyLockTracker(struct _KTHREAD *a1)
{
  signed __int64 v2; // rax
  unsigned __int64 v3; // rdx
  signed __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8

  _m_prefetchw(a1);
  v2 = *(_QWORD *)&a1->Header.Lock;
  v3 = *(_QWORD *)&a1->Header.Lock & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = *(_QWORD *)&a1->Header.Lock - 16LL;
  if ( v3 <= 0x10 )
    v4 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, v4, v2) )
    ExfReleasePushLock(a1);
  KeAbPostRelease((unsigned __int64)a1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6);
}
