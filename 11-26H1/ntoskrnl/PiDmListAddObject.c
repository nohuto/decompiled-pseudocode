/*
 * XREFs of PiDmListAddObject @ 0x1409D94D0
 * Callers:
 *     PiDmListInitEnumCallback @ 0x1407A75B0 (PiDmListInitEnumCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     IopRegisterDeviceInterface @ 0x1409D8950 (IopRegisterDeviceInterface.c)
 * Callees:
 *     CmpUnlockSiloKeyLockTracker @ 0x1409A604C (CmpUnlockSiloKeyLockTracker.c)
 *     PiDmObjectAcquireSharedLock @ 0x1409A7358 (PiDmObjectAcquireSharedLock.c)
 *     KsepCacheLock @ 0x1409A73D0 (KsepCacheLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1409D90D0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListAddObjectWorker @ 0x140AF3F20 (PiDmListAddObjectWorker.c)
 */

__int64 __fastcall PiDmListAddObject(int a1, __int64 a2, signed __int64 *a3, __int64 a4)
{
  unsigned int ObjectManagerForObjectType; // ebx
  unsigned __int64 *v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9

  ObjectManagerForObjectType = (unsigned int)PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  KsepCacheLock(v9, (__int64)v9, v10, v11);
  PiDmObjectAcquireSharedLock(a3, v12, v13, v14);
  PiDmListAddObjectWorker(a1, ObjectManagerForObjectType, a2, (_DWORD)a3, a4);
  CmpUnlockSiloKeyLockTracker((struct _KTHREAD *)a3);
  return CmpUnlockSiloKeyLockTracker((struct _KTHREAD *)a2);
}
