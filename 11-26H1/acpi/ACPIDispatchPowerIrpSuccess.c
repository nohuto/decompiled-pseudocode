/*
 * XREFs of ACPIDispatchPowerIrpSuccess @ 0x14001BE60
 * Callers:
 *     ACPIBusIrpSetSystemPower @ 0x14001BB34 (ACPIBusIrpSetSystemPower.c)
 *     ACPIBusIrpQueryPower @ 0x14001BD80 (ACPIBusIrpQueryPower.c)
 *     ACPIDockIrpQueryPower @ 0x140056C60 (ACPIDockIrpQueryPower.c)
 *     ACPIDockIrpSetSystemPower @ 0x140057050 (ACPIDockIrpSetSystemPower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDispatchPowerIrpSuccess(__int64 a1, IRP *a2)
{
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 259LL;
}
