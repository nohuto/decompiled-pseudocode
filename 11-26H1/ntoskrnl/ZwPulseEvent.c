/*
 * XREFs of ZwPulseEvent @ 0x14072A8E0
 * Callers:
 *     DifZwPulseEventWrapper @ 0x1406B32C0 (DifZwPulseEventWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPulseEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
