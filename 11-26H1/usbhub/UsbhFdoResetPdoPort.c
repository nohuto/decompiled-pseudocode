/*
 * XREFs of UsbhFdoResetPdoPort @ 0x14004063C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x14000F910 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhAcquirePdoStateLock @ 0x140010E10 (UsbhAcquirePdoStateLock.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhAcquireFdoPwrLock @ 0x14002AFD0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     Usbh__TestPoint__Ulong @ 0x1400367D4 (Usbh__TestPoint__Ulong.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 */

__int64 __fastcall UsbhFdoResetPdoPort(
        PDEVICE_OBJECT DeviceObject,
        __int64 BugCheckParameter3,
        IRP *BugCheckParameter4)
{
  ULONG_PTR v3; // r13
  _DWORD *v6; // rsi
  __int64 v7; // r15
  int v8; // ebx
  KIRQL CurrentIrql; // al
  unsigned __int16 v10; // dx
  __int64 v11; // r13
  __int64 v12; // rcx
  bool v13; // zf
  KIRQL v14; // dl
  int v15; // eax
  bool v16; // cc

  v3 = BugCheckParameter3;
  Log((__int64)DeviceObject, 4, 1919251233, (__int64)BugCheckParameter4, BugCheckParameter3);
  v6 = PdoExt(v3);
  v7 = (__int64)(v6 + 236);
  UsbhEtwLogDeviceIrpEvent(
    (__int64)v6,
    (__int64)BugCheckParameter4,
    &USBHUB_ETW_EVENT_DEVICE_IOCTL_INTERNAL_USB_RESET_PORT_START,
    0LL);
  UsbhAcquireFdoPwrLock((__int64)DeviceObject, (KSPIN_LOCK)(v6 + 236), 134, 1936028228);
  if ( PdoExt(v3)[282] == 1 )
  {
    UsbhReleaseFdoPwrLock((__int64)DeviceObject, v7);
    CurrentIrql = KeGetCurrentIrql();
    v10 = *((_WORD *)v6 + 714);
    if ( CurrentIrql )
    {
      v8 = -1073741811;
      UsbhException((__int64)DeviceObject, v10, 68, 0LL, 0, -1073741811, -1, usbfile_dioctl_c, 769, 0);
    }
    else
    {
      v8 = -1073741810;
      v11 = UsbhLatchPdo((__int64)DeviceObject, v10, (__int64)BugCheckParameter4, 0x64545352u);
      Log((__int64)DeviceObject, 8, 1920169068, *((unsigned __int16 *)v6 + 714), v11);
      if ( !v11 )
        goto LABEL_27;
      if ( BugCheckParameter3 == v11 )
      {
        UsbhAcquirePdoStateLock(v12, v7, 13);
        v13 = PdoExt(BugCheckParameter3)[281] == 3;
        v6[270] = 0;
        qword_140070600 = 0LL;
        v6[258] = 1734964085;
        v14 = *((_BYTE *)v6 + 1076);
        if ( v13 )
        {
          KeReleaseSpinLock(&HubG, v14);
          Usbh__TestPoint__Ulong((__int64)DeviceObject, 0, 0xC000000E, *((unsigned __int16 *)v6 + 714));
          v15 = UsbhSyncResetDeviceInternal(DeviceObject);
          ++v6[597];
          v8 = v15;
          v16 = v6[597] <= 0xAu;
          v6[596] = 1;
          if ( !v16 )
          {
            UsbhException((__int64)DeviceObject, *((_WORD *)v6 + 714), 76, 0LL, 0, v15, -1, usbfile_dioctl_c, 803, 0);
            v6[597] = 0;
          }
          if ( v8 >= 0 )
            Usbh__TestPoint__Ulong((__int64)DeviceObject, 1u, v8, *((unsigned __int16 *)v6 + 714));
        }
        else
        {
          KeReleaseSpinLock(&HubG, v14);
        }
      }
      UsbhUnlatchPdo((__int64)DeviceObject, v11, (__int64)BugCheckParameter4, 0x64545352u);
      if ( (v8 & 0xC0000000) == 0xC0000000 )
      {
LABEL_27:
        if ( !Usb_Disconnected(v8) )
          UsbhException((__int64)DeviceObject, *((_WORD *)v6 + 714), 77, 0LL, 0, v8, -1, usbfile_dioctl_c, 828, 0);
      }
      v3 = BugCheckParameter3;
    }
  }
  else
  {
    v8 = -1073741101;
    UsbhException((__int64)DeviceObject, *((_WORD *)v6 + 714), 69, 0LL, 0, -1073741101, -1, usbfile_dioctl_c, 749, 0);
    UsbhReleaseFdoPwrLock((__int64)DeviceObject, v7);
  }
  UsbhEtwLogDeviceIrpEvent(
    (__int64)v6,
    (__int64)BugCheckParameter4,
    &USBHUB_ETW_EVENT_DEVICE_IOCTL_INTERNAL_USB_RESET_PORT_COMPLETE,
    (unsigned int)v8);
  if ( *((_BYTE *)v6 + 2740) && v8 < 0 )
  {
    Log((__int64)DeviceObject, 8, 1920169062, (__int64)v6, v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        3u,
        0xBu,
        (__int64)&WPP_6755297163953fe01245bafdfc38d5a5_Traceguids);
    UsbhException((__int64)DeviceObject, 0, 62, 0LL, 0, -1073741823, -1073704960, usbfile_dioctl_c, 841, 1);
    *((_QWORD *)v6 + 348) = BugCheckParameter4;
    v8 = 259;
    BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  else
  {
    BugCheckParameter4->IoStatus.Status = v8;
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  UsbhDecPdoIoCount(v3, (ULONG_PTR)BugCheckParameter4);
  return (unsigned int)v8;
}
