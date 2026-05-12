/*
 * XREFs of sub_14003FBA0 @ 0x14003FBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_14003FBA0(PDEVICE_OBJECT DeviceObject, UCHAR MinorFunction, POWER_STATE PowerState, char *Context)
{
  if ( *((_DWORD *)Context + 242) > 1u )
    KeCancelTimer((PKTIMER)(Context + 5792));
  Context[107] &= ~4u;
}
