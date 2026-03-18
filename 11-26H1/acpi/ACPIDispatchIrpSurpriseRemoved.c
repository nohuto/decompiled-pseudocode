/*
 * XREFs of ACPIDispatchIrpSurpriseRemoved @ 0x14004BB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDispatchIrpSurpriseRemoved(__int64 a1, IRP *a2)
{
  a2->IoStatus.Status = -1073741810;
  IofCompleteRequest(a2, 0);
  return 3221225486LL;
}
