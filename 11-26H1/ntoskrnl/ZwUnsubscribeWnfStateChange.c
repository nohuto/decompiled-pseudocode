/*
 * XREFs of ZwUnsubscribeWnfStateChange @ 0x14072BBE0
 * Callers:
 *     DifZwUnsubscribeWnfStateChangeWrapper @ 0x1406C2750 (DifZwUnsubscribeWnfStateChangeWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
