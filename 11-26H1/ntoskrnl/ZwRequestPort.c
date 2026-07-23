/*
 * XREFs of ZwRequestPort @ 0x14072B0A0
 * Callers:
 *     DifZwRequestPortWrapper @ 0x1406BB6F0 (DifZwRequestPortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
