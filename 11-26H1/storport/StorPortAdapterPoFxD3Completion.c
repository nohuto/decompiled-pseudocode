/*
 * XREFs of StorPortAdapterPoFxD3Completion @ 0x140049FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorPortAdapterPoFxD3Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context)
{
  if ( *((_DWORD *)Context + 258) > 1u )
    KeCancelTimer((PKTIMER)(Context + 5856));
  Context[107] &= ~4u;
}
