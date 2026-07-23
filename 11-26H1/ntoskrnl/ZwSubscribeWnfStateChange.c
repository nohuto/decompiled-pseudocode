/*
 * XREFs of ZwSubscribeWnfStateChange @ 0x14072B980
 * Callers:
 *     DifZwSubscribeWnfStateChangeWrapper @ 0x1406C0F10 (DifZwSubscribeWnfStateChangeWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSubscribeWnfStateChange(
        PCWNF_STATE_NAME StateName,
        WNF_CHANGE_STAMP ChangeStamp,
        ULONG EventMask,
        PULONG64 SubscriptionId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
