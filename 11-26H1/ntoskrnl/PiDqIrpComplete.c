/*
 * XREFs of PiDqIrpComplete @ 0x1409900E4
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x14098E4A4 (PiDqIrpQueryGetResult.c)
 *     PiDqIrpQueryCreate @ 0x14098EFF8 (PiDqIrpQueryCreate.c)
 *     PiDqQueryCompletePendedIrp @ 0x14098FED0 (PiDqQueryCompletePendedIrp.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
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
