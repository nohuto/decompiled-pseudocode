/*
 * XREFs of PiDmObjectAcquireSharedLock @ 0x1409A7358
 * Callers:
 *     PiDmObjectGetCachedObjectReference @ 0x1409915EC (PiDmObjectGetCachedObjectReference.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1409A3F50 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1409A4F20 (PiPnpRtlObjectActionCallback.c)
 *     PiDmEnumObjectsWithCallback @ 0x1409A718C (PiDmEnumObjectsWithCallback.c)
 *     PiDmObjectIsEnumerable @ 0x1409A748C (PiDmObjectIsEnumerable.c)
 *     IopRegisterDeviceInterface @ 0x1409D8950 (IopRegisterDeviceInterface.c)
 *     PiDmListAddObject @ 0x1409D94D0 (PiDmListAddObject.c)
 *     PiDmListRemoveObject @ 0x140AF3FE0 (PiDmListRemoveObject.c)
 *     PiDmListAddList @ 0x140B2C964 (PiDmListAddList.c)
 *     PiDmListRemoveList @ 0x140B6C54C (PiDmListRemoveList.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
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
