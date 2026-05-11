/*
 * XREFs of CsCompleteCanceledIrp @ 0x140034C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CsCompleteCanceledIrp(PIO_CSQ Csq, PIRP Irp)
{
  ExFreePool(Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink);
  Irp->IoStatus.Status = -1073741536;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
}
