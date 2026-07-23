/*
 * XREFs of PiDmObjectGetCachedObjectReference @ 0x14095204C
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x140965250 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140AFD84C (PiDmGetReferencedObjectFromProperty.c)
 * Callees:
 *     PiDmGetCachedKeyIndex @ 0x140951FF0 (PiDmGetCachedKeyIndex.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x140966AAC (CmpUnlockSiloKeyLockTracker.c)
 *     PiDmObjectAcquireSharedLock @ 0x140967DB8 (PiDmObjectAcquireSharedLock.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectReference(
        unsigned int a1,
        __int64 a2,
        struct _KTHREAD *a3,
        __int64 a4,
        _QWORD *a5)
{
  struct _KTHREAD *v5; // rbx
  char v6; // si
  unsigned int Object; // edi
  unsigned int v11; // r8d
  DEVPROPKEY **v12; // rcx
  unsigned int v13; // r9d
  unsigned int CachedKeyIndex; // eax
  __int64 v15; // r14
  unsigned int v16; // r9d
  int v17; // eax
  __int64 v18; // rcx
  struct _KTHREAD *v20; // [rsp+50h] [rbp+18h] BYREF

  v20 = a3;
  v5 = a3;
  v6 = 0;
  Object = -1073741802;
  v11 = a1 - 1;
  switch ( a1 )
  {
    case 1u:
      v12 = &PiDmCachedDeviceKeys;
      v13 = v11 + 10;
      break;
    case 3u:
      v12 = &PiDmCachedDeviceInterfaceKeys;
      v13 = 1;
      break;
    case 5u:
      v12 = &PiDmCachedDeviceContainerKeys;
      v13 = 3;
      break;
    default:
      return Object;
  }
  CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v12, v13, a4);
  v15 = CachedKeyIndex;
  if ( CachedKeyIndex < v16 )
  {
    if ( !v5 )
    {
      Object = PiDmGetObject(a1, a2, &v20);
      if ( (Object & 0x80000000) != 0 )
        return Object;
      v5 = v20;
      v6 = 1;
    }
    PiDmObjectAcquireSharedLock(v5);
    v17 = *((_DWORD *)&v5->WaitRegister.Flags + 6 * v15);
    if ( v17 == 6 )
    {
      v18 = *((_QWORD *)&v5->SystemCallNumber + 3 * v15);
      *a5 = v18;
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
      Object = 0;
    }
    else if ( v17 == 2 )
    {
      Object = -1073741275;
    }
    else
    {
      Object = -1073741802;
    }
    CmpUnlockSiloKeyLockTracker(v5);
    if ( v6 )
      PiDmObjectRelease(v5);
  }
  return Object;
}
