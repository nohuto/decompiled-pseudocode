/*
 * XREFs of RaQueryInterface @ 0x140049534
 * Callers:
 *     RaidQueryPciMsixTableConfigurationInterface @ 0x140095BEC (RaidQueryPciMsixTableConfigurationInterface.c)
 *     GetNvmeIceInterface @ 0x140187688 (GetNvmeIceInterface.c)
 *     RaInitializeBus @ 0x1401B9A44 (RaInitializeBus.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x140037340 (RaSendIrpSynchronous.c)
 */

__int64 __fastcall RaQueryInterface(
        PDEVICE_OBJECT DeviceObject,
        unsigned __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int64 a5)
{
  PIRP Irp; // rax
  IRP *v10; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS Status; // edi

  Irp = IoAllocateIrp(DeviceObject->StackSize, 0);
  v10 = Irp;
  if ( !Irp )
    return 3221225626LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Status = -1073741637;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
  CurrentStackLocation[-1].Parameters.QueryInterface.Size = a3;
  CurrentStackLocation[-1].Parameters.QueryInterface.Version = a4;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = a5;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
  Status = RaSendIrpSynchronous(DeviceObject, Irp);
  if ( Status >= 0 )
    Status = v10->IoStatus.Status;
  IoFreeIrp(v10);
  return (unsigned int)Status;
}
