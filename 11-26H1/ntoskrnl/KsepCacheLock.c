/*
 * XREFs of KsepCacheLock @ 0x1409A73D0
 * Callers:
 *     PiPnpRtlEnsureObjectCached @ 0x1407A71F8 (PiPnpRtlEnsureObjectCached.c)
 *     KsepDbCacheInsertDevice @ 0x1407BC81C (KsepDbCacheInsertDevice.c)
 *     KseLookupHardwareId @ 0x1407BE31C (KseLookupHardwareId.c)
 *     CmInitServerSiloState @ 0x140854BE4 (CmInitServerSiloState.c)
 *     PiPnpRtlObjectEventWorker @ 0x140990D44 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x140991140 (PiDmObjectProcessPropertyChange.c)
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1409A3F50 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1409A4F20 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1409A60B0 (PiDmObjectUpdateCachedObjectProperty.c)
 *     IopProcessSetInterfaceState @ 0x1409D82B0 (IopProcessSetInterfaceState.c)
 *     PiDmListAddObject @ 0x1409D94D0 (PiDmListAddObject.c)
 *     KseAddHardwareId @ 0x1409E4D00 (KseAddHardwareId.c)
 *     KseResetDeviceCache @ 0x1409E4E40 (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDevice @ 0x1409E4E84 (KsepDbCacheQueryDevice.c)
 *     CmLockKeyForWrite @ 0x140A30B0C (CmLockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A67634 (CmpStopSiloKeyLockTracker.c)
 *     PiDmListRemoveObject @ 0x140AF3FE0 (PiDmListRemoveObject.c)
 *     KseQueryDeviceDataList @ 0x140B2C3B0 (KseQueryDeviceDataList.c)
 *     PiDmListAddList @ 0x140B2C964 (PiDmListAddList.c)
 *     PiDmListRemoveList @ 0x140B6C54C (PiDmListRemoveList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall KsepCacheLock(unsigned __int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1, v6, (__int64)a1);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
}
