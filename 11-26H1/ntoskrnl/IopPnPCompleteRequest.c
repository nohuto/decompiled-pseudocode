/*
 * XREFs of IopPnPCompleteRequest @ 0x1403FB9B0
 * Callers:
 *     IopPnPDispatch @ 0x140AA13D0 (IopPnPDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  IofCompleteRequest(a1, 0);
}
