/*
 * XREFs of UsbhAcquireEnumBusLock @ 0x140012E54
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x140004D00 (UsbhHubDispatchPortEvent.c)
 *     UsbhPortConnect @ 0x140013B30 (UsbhPortConnect.c)
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 *     UsbhDriverResetPort @ 0x1400578C0 (UsbhDriverResetPort.c)
 * Callees:
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhAcquireEnumBusLock(struct _DEVICE_OBJECT *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r14
  _DWORD *v6; // rbx
  __int64 v7; // r8
  void *DeviceExtension; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  void *v11; // rdx
  __int64 v12; // rcx
  KIRQL v13; // al
  __int64 v14; // r8
  void *v15; // rdx
  __int64 v16; // rcx
  KIRQL v17; // r10

  v3 = a3;
  v6 = FdoExt((__int64)a1);
  v7 = (unsigned int)v6[768];
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v9 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_DWORD *)v9 = 1398096481;
        *(_QWORD *)(v9 + 16) = v7;
        *(_QWORD *)(v9 + 24) = v3;
      }
    }
  }
  v10 = (unsigned int)v6[768];
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v11 = a1->DeviceExtension;
      if ( v11 )
      {
        v12 = *((_QWORD *)v11 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_DWORD *)v12 = 1129071201;
        *(_QWORD *)(v12 + 16) = v10;
        *(_QWORD *)(v12 + 24) = a2;
      }
    }
  }
  if ( *((_QWORD *)v6 + 549) )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 383);
    if ( v6[768] == (_DWORD)v3 || *((_QWORD *)v6 + 385) == a2 )
    {
      Log((_DWORD)a1, 4, 2017613139, v6[768], v3);
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 383, v17);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 383, v13);
      Usbh_SSH_Event(a1, 6u, a2);
      (*((void (__fastcall **)(_QWORD))v6 + 549))(*((_QWORD *)v6 + 529));
      v14 = (unsigned int)v6[768];
      if ( (UsbhLogMask & 4) != 0 && a1 )
      {
        v15 = a1->DeviceExtension;
        if ( v15 )
        {
          v16 = *((_QWORD *)v15 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v15 + 220) & *((_DWORD *)v15 + 221));
          *(_QWORD *)(v16 + 8) = 0LL;
          *(_DWORD *)v16 = 1398096492;
          *(_QWORD *)(v16 + 16) = v14;
          *(_QWORD *)(v16 + 24) = v3;
        }
      }
      v6[768] = v3;
      *((_QWORD *)v6 + 385) = a2;
      *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
      _InterlockedIncrement(v6 + 774);
      *((_QWORD *)v6 + 386) = UsbhIncHubBusy((__int64)a1, a2, (__int64)a1, 1430416236, 1);
    }
  }
}
