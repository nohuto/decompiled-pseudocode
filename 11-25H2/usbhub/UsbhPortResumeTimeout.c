/*
 * XREFs of UsbhPortResumeTimeout @ 0x140047ED8
 * Callers:
 *     UsbhWaitForPortResume @ 0x140035AC8 (UsbhWaitForPortResume.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhQueryPortState @ 0x140007140 (UsbhQueryPortState.c)
 *     UsbhLatchPdo @ 0x1400082B0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x14000D730 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x14002E664 (UsbhSendSynchronousUsbIoctlRequest.c)
 *     UsbhQueueSoftConnectChange @ 0x1400448AC (UsbhQueueSoftConnectChange.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 */

__int64 __fastcall UsbhPortResumeTimeout(PDEVICE_OBJECT DeviceObject, int a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // ebx
  int v8; // eax
  int v9; // r10d
  unsigned int v10; // r10d
  struct _DEVICE_OBJECT *v12; // rsi
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // r9
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // r10
  __int64 v17; // r9
  char v18; // r10
  int v19; // eax
  int v20; // ebp
  _DWORD *v21; // rax
  _DWORD *v22; // rax
  int v23; // [rsp+90h] [rbp+18h] BYREF
  int v24; // [rsp+98h] [rbp+20h] BYREF

  v3 = *(unsigned __int16 *)(a3 + 4);
  v4 = 0;
  v23 = 0;
  v24 = 0;
  FdoExt((__int64)DeviceObject);
  v8 = UsbhQueryPortState((__int64)DeviceObject, *(_WORD *)(a3 + 4), (__int64)&v24, &v23);
  Log((__int64)DeviceObject, 16, 1920233265, v8, 0LL);
  if ( Usb_Disconnected(v9) )
    return v10;
  UsbhException((__int64)DeviceObject, *(_WORD *)(a3 + 4), 124, 0LL, 0, v10, v23, usbfile_bus_c, 7550, 0);
  v12 = (struct _DEVICE_OBJECT *)UsbhLatchPdo((__int64)DeviceObject, v3, 0LL, 0x7761726Du);
  Log((__int64)DeviceObject, 16, 1920233266, v3, (__int64)v12);
  if ( v12 )
  {
    v13 = (16 * (v24 & 1)) | 3;
    if ( (v24 & 4) == 0 )
      v13 = (16 * (v24 & 1)) | 1;
    v14 = v13;
    v15 = v13 | 4;
    if ( (v24 & 8) == 0 )
      v15 = v14;
    v16 = v15 | 8;
    if ( (v24 & 2) == 0 )
      v16 = v15;
    Log((__int64)DeviceObject, 16, 1347899987, v16, v3);
    if ( v18 == 25 )
    {
      Log((__int64)DeviceObject, 16, 1920233267, v17, 0LL);
    }
    else if ( v18 == 31 )
    {
      v4 = -1073741810;
      Log((__int64)DeviceObject, 16, 1920233268, v17, -1073741810LL);
    }
    else
    {
      v19 = UsbhSyncResetDeviceInternal(DeviceObject);
      v20 = v19;
      if ( (v19 & 0xC0000000) == 0xC0000000 )
      {
        Log((__int64)DeviceObject, 16, 1920233269, 0LL, v19);
        UsbhQueueSoftConnectChange((__int64)DeviceObject, v3, a2, 1);
        v21 = PdoExt((__int64)v12);
        v21[355] &= ~0x4000u;
        UsbhException((__int64)DeviceObject, 0, 125, 0LL, 0, v20, 0, usbfile_bus_c, 7610, 0);
      }
      else
      {
        v22 = PdoExt((__int64)v12);
        v22[355] &= ~0x4000u;
        if ( (PdoExt((__int64)v12)[355] & 4) != 0 )
          UsbhSendSynchronousUsbIoctlRequest((__int64)DeviceObject, v12, 0x220FA7u);
      }
    }
    UsbhUnlatchPdo((__int64)DeviceObject, (__int64)v12, 0LL, 0x7761726Du);
  }
  return v4;
}
