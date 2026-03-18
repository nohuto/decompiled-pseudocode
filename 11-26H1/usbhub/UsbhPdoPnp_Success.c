/*
 * XREFs of UsbhPdoPnp_Success @ 0x14005DAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhPdoPnp_Success(__int64 a1, IRP *a2)
{
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
