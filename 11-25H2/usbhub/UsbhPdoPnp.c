/*
 * XREFs of UsbhPdoPnp @ 0x140034700
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPdoPnp_StartDevice @ 0x140017090 (UsbhPdoPnp_StartDevice.c)
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_c @ 0x140049F98 (WPP_RECORDER_SF_c.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhPdoPnp(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 v2; // r8
  volatile signed __int32 *DeviceExtension; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int MinorFunction; // ecx
  __int64 v8; // rax
  unsigned int Status; // ebx

  v2 = 0LL;
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (volatile signed __int32 *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *DeviceExtension != 1329877064 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  *((_DWORD *)DeviceExtension + 293) = MinorFunction;
  *((_BYTE *)DeviceExtension + (((unsigned __int8)_InterlockedExchangeAdd(DeviceExtension + 222, 1u) + 1) & 0xF) + 892) = MinorFunction;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_c(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)DeviceExtension,
      0,
      15,
      (__int64)&WPP_3a1d82179740321a06fbc3767bd9e9e7_Traceguids,
      CurrentStackLocation->MinorFunction);
  v8 = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)v8 >= 0x20u )
  {
    Status = Irp->IoStatus.Status;
    Irp->IoStatus.Status = Status;
    IofCompleteRequest(Irp, 0);
  }
  else
  {
    return ((unsigned int (__fastcall *)(PDEVICE_OBJECT, PIRP, __int64))funcs_14003478F[2 * v8])(DeviceObject, Irp, v2);
  }
  return Status;
}
