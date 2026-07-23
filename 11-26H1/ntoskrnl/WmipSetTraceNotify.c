/*
 * XREFs of WmipSetTraceNotify @ 0x140B4BA8C
 * Callers:
 *     IoWMIRegistrationControl @ 0x140ACF980 (IoWMIRegistrationControl.c)
 * Callees:
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IoAllocateIrp @ 0x14026BA40 (IoAllocateIrp.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     IoWMIDeviceObjectToProviderId @ 0x14048FDC0 (IoWMIDeviceObjectToProviderId.c)
 *     WmipForwardWmiIrp @ 0x140A0E218 (WmipForwardWmiIrp.c)
 */

void __fastcall WmipSetTraceNotify(PDEVICE_OBJECT DeviceObject, int a2)
{
  __int64 *v3; // rax
  CCHAR v4; // bl
  PIRP Irp; // rax
  IRP *v6; // rbx
  ULONG v7; // eax
  __int64 v8; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v9; // [rsp+38h] [rbp-8h]

  LODWORD(v9) = 0;
  v8 = 0LL;
  if ( a2 == 0x100000 )
  {
    v3 = &EtwpDiskIoNotifyRoutines;
    goto LABEL_9;
  }
  if ( a2 == 0x200000 )
  {
    v3 = (__int64 *)EtwpTdiIoNotify;
LABEL_9:
    LODWORD(v8) = 1;
    goto LABEL_10;
  }
  if ( a2 != 0x400000 )
  {
    if ( a2 != 0x800000 )
      goto LABEL_11;
    v3 = &EtwpSplitIoNotifyRoutines;
    goto LABEL_9;
  }
  LODWORD(v8) = 2;
  v3 = (__int64 *)&EtwpFileIoNotifyRoutines;
LABEL_10:
  v9 = v3;
LABEL_11:
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = WmipServiceDeviceObject->StackSize + 1;
  KeReleaseMutex(&WmipSMMutex, 0);
  Irp = IoAllocateIrp(v4, 0);
  v6 = Irp;
  if ( Irp )
  {
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
    v7 = IoWMIDeviceObjectToProviderId(DeviceObject);
    WmipForwardWmiIrp(v6, 0xDu, v7, 0LL, 0x10u, (__int64)&v8);
    IoFreeIrp(v6);
  }
}
