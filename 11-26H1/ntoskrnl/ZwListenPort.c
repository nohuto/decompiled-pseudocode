/*
 * XREFs of ZwListenPort @ 0x14072A160
 * Callers:
 *     DifZwListenPortWrapper @ 0x1406AC550 (DifZwListenPortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwListenPort(HANDLE PortHandle, PPORT_MESSAGE ConnectionRequest)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
