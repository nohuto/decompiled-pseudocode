/*
 * XREFs of ZwAlpcConnectPortEx @ 0x140728F40
 * Callers:
 *     DifZwAlpcConnectPortExWrapper @ 0x14069DFF0 (DifZwAlpcConnectPortExWrapper.c)
 *     CmFcpConnectToAlpcServer @ 0x140B05DC8 (CmFcpConnectToAlpcServer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcConnectPortEx(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ConnectionPortObjectAttributes,
        POBJECT_ATTRIBUTES ClientPortObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        ULONG Flags,
        PSECURITY_DESCRIPTOR ServerSecurityRequirements,
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
