/*
 * XREFs of ACPIDispatchIrpInvalid @ 0x140043120
 * Callers:
 *     ACPIProcessorDeviceControl @ 0x1400C5FF0 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDispatchIrpInvalid(__int64 a1, IRP *a2)
{
  a2->IoStatus.Status = -1073741822;
  IofCompleteRequest(a2, 0);
  return 3221225474LL;
}
