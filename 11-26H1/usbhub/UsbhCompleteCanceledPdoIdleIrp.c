/*
 * XREFs of UsbhCompleteCanceledPdoIdleIrp @ 0x140036E50
 * Callers:
 *     <none>
 * Callees:
 *     UsbhIdleIrp_Event @ 0x1400152D4 (UsbhIdleIrp_Event.c)
 */

void __fastcall UsbhCompleteCanceledPdoIdleIrp(PIO_CSQ Csq, PIRP Irp)
{
  UsbhIdleIrp_Event((__int64)Csq[-5].CsqReleaseLock, (ULONG_PTR)Csq[-10].CsqRemoveIrp, Irp, 6u, 0);
}
