/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x140728EE0
 * Callers:
 *     DifZwAlpcAcceptConnectPortWrapper @ 0x14069DC80 (DifZwAlpcAcceptConnectPortWrapper.c)
 *     SshpAlpcProcessAlpcMessage @ 0x1407EA404 (SshpAlpcProcessAlpcMessage.c)
 *     PopUmpoProcessMessage @ 0x140AA77A8 (PopUmpoProcessMessage.c)
 *     SepRmLsaConnectRequest @ 0x140AF39DC (SepRmLsaConnectRequest.c)
 *     PopMonitorProcessLoop @ 0x140B27108 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcAcceptConnectPort(
        PHANDLE PortHandle,
        HANDLE ConnectionPortHandle,
        ULONG Flags,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        PALPC_MESSAGE_ATTRIBUTES ConnectionMessageAttributes,
        BOOLEAN AcceptConnection)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
