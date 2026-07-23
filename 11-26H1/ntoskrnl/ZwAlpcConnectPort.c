/*
 * XREFs of ZwAlpcConnectPort @ 0x140728F20
 * Callers:
 *     DifZwAlpcConnectPortWrapper @ 0x14069E200 (DifZwAlpcConnectPortWrapper.c)
 *     IopConnectLinkTrackingPort @ 0x140797100 (IopConnectLinkTrackingPort.c)
 *     SepRmLsaConnectRequest @ 0x140AF39DC (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x140B5AFE4 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        ULONG Flags,
        PSID RequiredServerSid,
        PPORT_MESSAGE ConnectionMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES OutMessageAttributes,
        PALPC_MESSAGE_ATTRIBUTES InMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
