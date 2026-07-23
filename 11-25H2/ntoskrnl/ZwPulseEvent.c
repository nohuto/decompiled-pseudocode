/*
 * XREFs of ZwPulseEvent @ 0x14069DA40
 * Callers:
 *     DifZwPulseEventWrapper @ 0x140637CC0 (DifZwPulseEventWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPulseEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
