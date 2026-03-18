/*
 * XREFs of DpiPendingIrpCancelQueueComplete @ 0x140086C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPendingIrpCancelQueueComplete(PIO_CSQ Csq, PIRP Irp)
{
  Irp->IoStatus.Status = -1073741536;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
}
