/*
 * XREFs of UsbhFdoDevicePowerState @ 0x14004AAA8
 * Callers:
 *     UsbhFdoPower_SetPower @ 0x14004B130 (UsbhFdoPower_SetPower.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhEtwLogHubPowerEvent @ 0x14002B584 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x140030C98 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhAcquireFdoPwrLock @ 0x1400316B0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14003173C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x140031794 (UsbhSetFdoPowerState.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400325B8 (UsbhFdoSetPowerDx_Action.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     UsbhFdoSetPowerD0_Action @ 0x14004B4C0 (UsbhFdoSetPowerD0_Action.c)
 */

NTSTATUS __fastcall UsbhFdoDevicePowerState(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _DWORD *v5; // r15
  __int64 LowPart; // rbp
  int v7; // r9d
  ULONG v8; // r12d
  NTSTATUS v9; // eax
  __int64 v10; // rbx
  _DWORD *v12; // r14
  int v13; // ecx
  ULONG v14; // ecx
  _IO_STACK_LOCATION *v15; // rax
  int v16; // edx
  int v17; // r9d
  ULONG RemlockSizea[2]; // [rsp+20h] [rbp-38h]
  ULONG RemlockSizeb[2]; // [rsp+20h] [rbp-38h]
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-38h]
  int v21; // [rsp+28h] [rbp-30h]
  __int64 v22; // [rsp+28h] [rbp-30h]
  int v23; // [rsp+28h] [rbp-30h]
  __int64 v24; // [rsp+28h] [rbp-30h]
  int v25; // [rsp+28h] [rbp-30h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 16, 1348756854, 0LL, (__int64)Irp);
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v8 = v7 + 1;
  if ( (_DWORD)LowPart != v7 + 1 )
  {
    v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 306), Irp, File, v8, 0x20u);
    v10 = v9;
    if ( (v9 & 0xC0000000) == 0xC0000000 )
    {
      Irp->IoStatus.Status = v9;
      UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2888);
      Log((__int64)DeviceObject, 16, 1348761121, v10, (__int64)Irp);
      IofCompleteRequest(Irp, 0);
      return v10;
    }
  }
  v12 = FdoExt((__int64)DeviceObject) + 346;
  UsbhAcquireFdoPwrLock((__int64)DeviceObject, (KSPIN_LOCK)v12, 102, 1937139044);
  if ( (_DWORD)LowPart == v8 )
  {
    Log((__int64)DeviceObject, 16, 1348420656, 0LL, (__int64)Irp);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        v8,
        0x17u,
        (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
    v25 = 0;
    RemlockSize[0] = LowPart;
    UsbhEtwLogHubPowerEvent(
      (__int64)DeviceObject,
      (__int64)Irp,
      0LL,
      &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_DISPATCH,
      *(_QWORD *)RemlockSize,
      v25);
    UsbhSetFdoPowerState((__int64)DeviceObject, 0, 211, 107);
    UsbhReleaseFdoPwrLock((__int64)DeviceObject, (__int64)v12);
    return UsbhFdoSetPowerD0_Action(DeviceObject, v12, Irp);
  }
  else
  {
    v13 = LowPart - v8 - v8;
    if ( v13 && (v14 = v13 - v8) != 0 )
    {
      if ( v14 != v8 )
      {
        UsbhReleaseFdoPwrLock((__int64)DeviceObject, (__int64)v12);
        UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2952);
        v15 = Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v15[-1].MajorFunction = *(_OWORD *)&v15->MajorFunction;
        *(_OWORD *)&v15[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v15->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v15[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v15->Parameters.SetQuota + 6);
        v15[-1].FileObject = v15->FileObject;
        v15[-1].Control = 0;
        return PoCallDriver(*((PDEVICE_OBJECT *)v5 + 151), Irp);
      }
      Log((__int64)DeviceObject, 16, 1348420728, 4LL, (__int64)Irp);
      v21 = 0;
      RemlockSizea[0] = LowPart;
      UsbhEtwLogHubPowerEvent(
        (__int64)DeviceObject,
        (__int64)Irp,
        0LL,
        &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_DISPATCH,
        *(_QWORD *)RemlockSizea,
        v21);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v22) = 4;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            0,
            v8,
            0x19u,
            (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids,
            v22);
        }
      }
      v16 = 0;
      v17 = 105;
    }
    else
    {
      Log((__int64)DeviceObject, 16, 1348420728, LowPart, (__int64)Irp);
      v23 = 0;
      RemlockSizeb[0] = LowPart;
      UsbhEtwLogHubPowerEvent(
        (__int64)DeviceObject,
        (__int64)Irp,
        0LL,
        &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_DISPATCH,
        *(_QWORD *)RemlockSizeb,
        v23);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v24) = LowPart;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          v8,
          0x18u,
          (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids,
          v24);
      }
      v17 = 106;
      v16 = v8;
    }
    UsbhSetFdoPowerState((__int64)DeviceObject, v16, 204, v17);
    UsbhReleaseFdoPwrLock((__int64)DeviceObject, (__int64)v12);
    return UsbhFdoSetPowerDx_Action(DeviceObject, *((_QWORD *)v5 + 114), Irp);
  }
}
