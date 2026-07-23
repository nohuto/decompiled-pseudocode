/*
 * XREFs of KsepCacheLock @ 0x140967E30
 * Callers:
 *     PiPnpRtlEnsureObjectCached @ 0x1407A9DA8 (PiPnpRtlEnsureObjectCached.c)
 *     KsepDbCacheInsertDevice @ 0x1407BF87C (KsepDbCacheInsertDevice.c)
 *     KseLookupHardwareId @ 0x1407C137C (KseLookupHardwareId.c)
 *     CmInitServerSiloState @ 0x14085AEF4 (CmInitServerSiloState.c)
 *     PiPnpRtlObjectEventWorker @ 0x1409517A4 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x140951BA0 (PiDmObjectProcessPropertyChange.c)
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1409649B0 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140966B10 (PiDmObjectUpdateCachedObjectProperty.c)
 *     IopProcessSetInterfaceState @ 0x1409A91A0 (IopProcessSetInterfaceState.c)
 *     PiDmListAddObject @ 0x1409AA3C0 (PiDmListAddObject.c)
 *     KsepDbCacheQueryDevice @ 0x1409D7EA8 (KsepDbCacheQueryDevice.c)
 *     KseResetDeviceCache @ 0x1409D808C (KseResetDeviceCache.c)
 *     KseAddHardwareId @ 0x1409D80D0 (KseAddHardwareId.c)
 *     CmLockKeyForWrite @ 0x140A4BA6C (CmLockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A74604 (CmpStopSiloKeyLockTracker.c)
 *     PiDmListRemoveObject @ 0x140B165EC (PiDmListRemoveObject.c)
 *     KseQueryDeviceDataList @ 0x140B2E430 (KseQueryDeviceDataList.c)
 *     PiDmListAddList @ 0x140B2E9E4 (PiDmListAddList.c)
 *     PiDmListRemoveList @ 0x140B6F648 (PiDmListRemoveList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
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
