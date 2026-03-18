/*
 * XREFs of ACPIEcReadWriteCompletion @ 0x14005FAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ACPIEcReadWriteCompletion(IRP *a1)
{
  a1->IoStatus.Status = 0;
  IofCompleteRequest(a1, 0);
}
