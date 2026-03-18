/*
 * XREFs of UsbhFdoD0PoComplete_Action @ 0x14004A3D0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwLogHubPowerEvent @ 0x140028B5C (UsbhEtwLogHubPowerEvent.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x14002A47C (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x14002A57C (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhFdoScheduleDeferredPowerRequest @ 0x14002A840 (UsbhFdoScheduleDeferredPowerRequest.c)
 *     UsbhAcquireFdoPwrLock @ 0x14002AFD0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x14002B0B8 (UsbhSetFdoPowerState.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhFdoD0PoComplete_Action(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v8; // r14
  _DWORD *v9; // rbp
  char v10; // r13
  int Status; // r15d
  IRP *v12; // r12
  KSPIN_LOCK v13; // r10
  PDEVICE_OBJECT v14; // rcx
  int v15; // r8d
  unsigned int v16; // edx
  _DWORD *v17; // rax
  __int64 v18; // [rsp+20h] [rbp-38h]
  KSPIN_LOCK v19; // [rsp+78h] [rbp+20h]
  int IoStatusa; // [rsp+80h] [rbp+28h]

  v8 = (__int64)Context;
  v9 = FdoExt(DeviceObject);
  Log(DeviceObject, 16, 1680896111, v8, IoStatus->Status);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x11u,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
  v10 = 0;
  Status = IoStatus->Status;
  v12 = (IRP *)Context[7];
  v19 = Context[9];
  Log(DeviceObject, 16, 1685090097, (__int64)Context, v19);
  UsbhAcquireFdoPwrLock(DeviceObject, v13, 110, 829436004);
  *((_QWORD *)v9 + 636) = MEMORY[0xFFFFF78000000014];
  v14 = (PDEVICE_OBJECT)DeviceObject;
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    v15 = Status;
    v16 = 120;
LABEL_6:
    UsbhFdoPower_PowerFailureEntry((__int64)v14, v16, v15, (__int64)Context);
    v8 = 0LL;
    goto LABEL_10;
  }
  v17 = FdoExt(DeviceObject);
  UsbhSetFdoPowerState(DeviceObject, v17[1053], 210, 110);
  FdoExt(DeviceObject)[1052] = 1;
  UsbhReleaseFdoPwrLock(DeviceObject, v19);
  IoStatusa = UsbhFdoScheduleDeferredPowerRequest(DeviceObject, (__int64)UsbhFdoD0Worker_Action, (__int64)Context, 0LL);
  if ( (IoStatusa & 0xC0000000) == 0xC0000000 )
  {
    *((_QWORD *)v9 + 637) = MEMORY[0xFFFFF78000000014];
    UsbhAcquireFdoPwrLock(DeviceObject, v19, 132, 846213220);
    v15 = IoStatusa;
    v16 = 132;
    v14 = (PDEVICE_OBJECT)DeviceObject;
    goto LABEL_6;
  }
  v10 = 1;
LABEL_10:
  LODWORD(v18) = PowerState;
  UsbhEtwLogHubPowerEvent(
    DeviceObject,
    0LL,
    (__int128 *)((v8 + 120) & -(__int64)(v8 != 0)),
    &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COMPLETE,
    v18,
    Status);
  if ( dword_1400706DC )
  {
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, v12, 2054);
    IofCompleteRequest(v12, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 306), v12, 0x20u);
  }
  *((_QWORD *)v9 + 635) = MEMORY[0xFFFFF78000000014];
  if ( !v10 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 306), Context, 0x20u);
}
