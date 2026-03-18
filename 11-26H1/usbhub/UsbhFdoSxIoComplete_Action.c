/*
 * XREFs of UsbhFdoSxIoComplete_Action @ 0x14004B3D0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwLogHubPowerEvent @ 0x140028B5C (UsbhEtwLogHubPowerEvent.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x14002A47C (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x14002A57C (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhAcquireFdoPwrLock @ 0x14002AFD0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x14002B0B8 (UsbhSetFdoPowerState.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhCanSuspend @ 0x14004A054 (UsbhCanSuspend.c)
 */

__int64 __fastcall UsbhFdoSxIoComplete_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _DWORD *v7; // r15
  int LowPart; // ebx
  KSPIN_LOCK v9; // r12
  bool CanSuspend; // al
  unsigned int v11; // ebp
  int v12; // r13d
  NTSTATUS v13; // eax
  int v14; // ebx
  PVOID Contexta; // [rsp+20h] [rbp-38h]
  PVOID Contextb; // [rsp+20h] [rbp-38h]
  PIRP *Irpa; // [rsp+28h] [rbp-30h]
  PIRP *Irpb; // [rsp+28h] [rbp-30h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v7 = FdoExt((__int64)DeviceObject);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == ((CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF) )
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  else
    LowPart = (CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF;
  Log((__int64)DeviceObject, 16, 1937262915, (__int64)Context, (__int64)Irp);
  v9 = Context[9];
  UsbhAcquireFdoPwrLock((__int64)DeviceObject, v9, 112, 829977449);
  v7[1054] = 0;
  CanSuspend = UsbhCanSuspend((__int64)DeviceObject, LowPart);
  v11 = 4 - CanSuspend;
  v7[1054] = CanSuspend;
  if ( LowPart > 4 && CanSuspend )
    v7[1054] = 2;
  UsbhSetFdoPowerState((__int64)DeviceObject, 0, 203, 112);
  *((_DWORD *)Context + 22) = v7[1054];
  *((_DWORD *)Context + 7) = v11;
  v12 = FdoExt((__int64)DeviceObject)[1053];
  FdoExt((__int64)DeviceObject)[1053] = LowPart;
  UsbhReleaseFdoPwrLock((__int64)DeviceObject, v9);
  Log((__int64)DeviceObject, 16, 1937265233, v11, (__int64)Irp);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x14u,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids,
      LowPart);
  LODWORD(Irpa) = 0;
  LODWORD(Contexta) = v11;
  UsbhEtwLogHubPowerEvent(
    (__int64)DeviceObject,
    (__int64)Irp,
    0LL,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_START,
    Contexta,
    Irpa);
  v13 = PoRequestPowerIrp(
          DeviceObject,
          2u,
          (POWER_STATE)v11,
          (PREQUEST_POWER_COMPLETE)UsbhFdoDxPoComplete_Action,
          Context,
          0LL);
  v14 = v13;
  if ( v13 == 259 )
    return 3221225494LL;
  Log((__int64)DeviceObject, 16, 1937261906, v13, (__int64)Irp);
  Irp->IoStatus.Status = v14;
  UsbhAcquireFdoPwrLock((__int64)DeviceObject, v9, 117, 846754665);
  FdoExt((__int64)DeviceObject)[1053] = v12;
  UsbhFdoPower_PowerFailureEntry((__int64)DeviceObject, 0x75u, v14, (__int64)Context);
  UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2526);
  LODWORD(Irpb) = v14;
  LODWORD(Contextb) = v11;
  UsbhEtwLogHubPowerEvent(
    (__int64)DeviceObject,
    (__int64)Irp,
    0LL,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_COMPLETE,
    Contextb,
    Irpb);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 306), Irp, 0x20u);
  return 0LL;
}
