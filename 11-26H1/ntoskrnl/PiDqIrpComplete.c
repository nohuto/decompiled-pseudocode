/*
 * XREFs of PiDqIrpComplete @ 0x140950B44
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x14094EF04 (PiDqIrpQueryGetResult.c)
 *     PiDqIrpQueryCreate @ 0x14094FA58 (PiDqIrpQueryCreate.c)
 *     PiDqQueryCompletePendedIrp @ 0x140950930 (PiDqQueryCompletePendedIrp.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 */

void __fastcall PiDqIrpComplete(PIRP Irp, NTSTATUS a2, unsigned int a3, _OWORD *a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG_PTR v8; // rax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v8 = 0LL;
  if ( a2 >= 0 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4653063 )
      RtlCopyToUser(Irp->UserBuffer, a4, 0x10uLL);
    else
      *(_OWORD *)&Irp->AssociatedIrp.MasterIrp->Type = *a4;
    v8 = a3;
  }
  Irp->IoStatus.Information = v8;
  Irp->IoStatus.Status = a2;
  IofCompleteRequest(Irp, 0);
}
