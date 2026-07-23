/*
 * XREFs of ZwListenPort @ 0x14069D2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwListenPort(HANDLE PortHandle, PPORT_MESSAGE ConnectionRequest)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
