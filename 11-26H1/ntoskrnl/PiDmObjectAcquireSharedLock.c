/*
 * XREFs of PiDmObjectAcquireSharedLock @ 0x140967DB8
 * Callers:
 *     PiDmObjectGetCachedObjectReference @ 0x14095204C (PiDmObjectGetCachedObjectReference.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1409649B0 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 *     PiDmEnumObjectsWithCallback @ 0x140967BEC (PiDmEnumObjectsWithCallback.c)
 *     PiDmObjectIsEnumerable @ 0x140967EEC (PiDmObjectIsEnumerable.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     PiDmListAddObject @ 0x1409AA3C0 (PiDmListAddObject.c)
 *     PiDmListRemoveObject @ 0x140B165EC (PiDmListRemoveObject.c)
 *     PiDmListAddList @ 0x140B2E9E4 (PiDmListAddList.c)
 *     PiDmListRemoveList @ 0x140B6F648 (PiDmListRemoveList.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall PiDmObjectAcquireSharedLock(signed __int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v6; // rdx
  LegacyAutoBoost *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(a1, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1, 0, v7, (struct _KTHREAD *)a1);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
}
