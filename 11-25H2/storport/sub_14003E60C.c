/*
 * XREFs of sub_14003E60C @ 0x14003E60C
 * Callers:
 *     sub_14008DF74 @ 0x14008DF74 (sub_14008DF74.c)
 *     sub_14017A9D0 @ 0x14017A9D0 (sub_14017A9D0.c)
 *     sub_1401B12DC @ 0x1401B12DC (sub_1401B12DC.c)
 * Callees:
 *     sub_140018E30 @ 0x140018E30 (sub_140018E30.c)
 */

__int64 __fastcall sub_14003E60C(PDEVICE_OBJECT DeviceObject, ULONG_PTR a2, USHORT a3, USHORT a4, __int64 a5)
{
  PIRP Irp; // rax
  IRP *v10; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS Status; // edi

  Irp = IoAllocateIrp(DeviceObject->StackSize, 0);
  v10 = Irp;
  if ( !Irp )
    return 3221225626LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Status = -1073741637;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
  CurrentStackLocation[-1].Parameters.QueryInterface.Size = a3;
  CurrentStackLocation[-1].Parameters.QueryInterface.Version = a4;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = a5;
  Status = sub_140018E30(DeviceObject, Irp);
  if ( Status >= 0 )
    Status = v10->IoStatus.Status;
  IoFreeIrp(v10);
  return (unsigned int)Status;
}
