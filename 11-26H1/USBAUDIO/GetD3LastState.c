/*
 * XREFs of GetD3LastState @ 0x140038EAC
 * Callers:
 *     USBCntrlRestoreBoolean @ 0x140042660 (USBCntrlRestoreBoolean.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 *     memset @ 0x14001CAC0 (memset.c)
 */

__int64 __fastcall GetD3LastState(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  PIRP Irp; // rax
  IRP *v6; // rdi
  int v7; // ebx
  PIRP v8; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _QWORD v11[9]; // [rsp+20h] [rbp-58h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( !DeviceObject || !a2 )
    return 3221225485LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  v6 = Irp;
  if ( Irp )
  {
    Irp->IoStatus.Status = -1073741637;
    Irp->IoStatus.Information = 0LL;
    v8 = Irp;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&GUID_D3COLD_SUPPORT_INTERFACE;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v11;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].Parameters.Create.Options = 65608;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    v7 = IoSynchronousCallDriver(AttachedDeviceReference, v8);
    IoFreeIrp(v6);
    if ( v7 >= 0 )
    {
      if ( v11[8] )
        ((void (__fastcall *)(_QWORD, __int64))v11[8])(v11[1], a2);
    }
  }
  else
  {
    v7 = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)v7;
}
