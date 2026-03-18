/*
 * XREFs of UsbhPortResumeTimeout @ 0x140047A28
 * Callers:
 *     UsbhWaitForPortResume @ 0x140011070 (UsbhWaitForPortResume.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x140034344 (UsbhSendSynchronousUsbIoctlRequest.c)
 *     UsbhQueueSoftConnectChange @ 0x1400443D0 (UsbhQueueSoftConnectChange.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 */

__int64 __fastcall UsbhPortResumeTimeout(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
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
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // dl
  __int64 v18; // r9
  int v19; // eax
  int v20; // ebp
  __int64 v21; // r9
  _DWORD *v22; // rax
  _DWORD *v23; // rax
  int v24; // [rsp+90h] [rbp+18h] BYREF
  int v25; // [rsp+98h] [rbp+20h] BYREF

  v3 = *(unsigned __int16 *)(a3 + 4);
  v4 = 0;
  v24 = 0;
  v25 = 0;
  FdoExt((__int64)DeviceObject);
  v8 = UsbhQueryPortState((__int64)DeviceObject, *(_WORD *)(a3 + 4), (__int64)&v25, &v24);
  Log((__int64)DeviceObject, 16, 1920233265, v8, 0LL);
  if ( Usb_Disconnected(v9) )
    return v10;
  UsbhException((__int64)DeviceObject, *(_WORD *)(a3 + 4), 124, 0LL, 0, v10, v24, usbfile_bus_c, 7550, 0);
  v12 = (struct _DEVICE_OBJECT *)UsbhLatchPdo((__int64)DeviceObject, v3, 0LL, 0x7761726Du);
  Log((__int64)DeviceObject, 16, 1920233266, v3, (__int64)v12);
  if ( v12 )
  {
    v13 = (16 * (v25 & 1)) | 3;
    if ( (v25 & 4) == 0 )
      v13 = (16 * (v25 & 1)) | 1;
    v14 = v13;
    v15 = v13 | 4;
    if ( (v25 & 8) == 0 )
      v15 = v14;
    v16 = v15;
    v17 = v15 | 8;
    if ( (v25 & 2) == 0 )
      v17 = v16;
    Log((__int64)DeviceObject, 16, 1347899987, v17, v3);
    if ( (_BYTE)v18 == 25 )
    {
      Log((__int64)DeviceObject, 16, 1920233267, v18, 0LL);
    }
    else if ( (_BYTE)v18 == 31 )
    {
      v4 = -1073741810;
      Log((__int64)DeviceObject, 16, 1920233268, v18, -1073741810LL);
    }
    else
    {
      v19 = UsbhSyncResetDeviceInternal(DeviceObject);
      v20 = v19;
      if ( (v19 & 0xC0000000) == 0xC0000000 )
      {
        Log((__int64)DeviceObject, 16, 1920233269, 0LL, v19);
        LOBYTE(v21) = 1;
        UsbhQueueSoftConnectChange((__int64)DeviceObject, v3, a2, v21);
        v22 = PdoExt((__int64)v12);
        v22[355] &= ~0x4000u;
        UsbhException((__int64)DeviceObject, 0, 125, 0LL, 0, v20, 0, usbfile_bus_c, 7610, 0);
      }
      else
      {
        v23 = PdoExt((__int64)v12);
        v23[355] &= ~0x4000u;
        if ( (PdoExt((__int64)v12)[355] & 4) != 0 )
          UsbhSendSynchronousUsbIoctlRequest((__int64)DeviceObject, v12, 0x220FA7u);
      }
    }
    UsbhUnlatchPdo((__int64)DeviceObject, (__int64)v12, 0LL, 0x7761726Du);
  }
  return v4;
}
