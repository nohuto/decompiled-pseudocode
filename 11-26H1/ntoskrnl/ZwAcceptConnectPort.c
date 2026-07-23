/*
 * XREFs of ZwAcceptConnectPort @ 0x140728000
 * Callers:
 *     DifZwAcceptConnectPortWrapper @ 0x14069ACE0 (DifZwAcceptConnectPortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAcceptConnectPort(
        PHANDLE PortHandle,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        BOOLEAN AcceptConnection,
        PPORT_VIEW ServerView,
        PREMOTE_PORT_VIEW ClientView)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
