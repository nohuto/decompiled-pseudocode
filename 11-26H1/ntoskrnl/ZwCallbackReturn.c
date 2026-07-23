/*
 * XREFs of ZwCallbackReturn @ 0x140728060
 * Callers:
 *     DifZwCallbackReturnWrapper @ 0x1406A00C0 (DifZwCallbackReturnWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCallbackReturn(PVOID OutputBuffer, ULONG OutputLength, NTSTATUS Status)
{
  _disable();
  __readeflags();
  return KiServiceInternal(OutputBuffer);
}
