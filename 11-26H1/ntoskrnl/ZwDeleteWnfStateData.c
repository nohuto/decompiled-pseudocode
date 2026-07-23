/*
 * XREFs of ZwDeleteWnfStateData @ 0x140729BC0
 * Callers:
 *     DifZwDeleteWnfStateDataWrapper @ 0x1406A80B0 (DifZwDeleteWnfStateDataWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteWnfStateData(PCWNF_STATE_NAME StateName, const void *ExplicitScope)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
