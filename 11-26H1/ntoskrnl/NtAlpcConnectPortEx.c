/*
 * XREFs of NtAlpcConnectPortEx @ 0x1408EF230
 * Callers:
 *     DifNtAlpcConnectPortExWrapper @ 0x14066FB20 (DifNtAlpcConnectPortExWrapper.c)
 * Callees:
 *     AlpcpConnectPort @ 0x1408EF8A0 (AlpcpConnectPort.c)
 */

NTSTATUS __cdecl NtAlpcConnectPortEx(
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
  return AlpcpConnectPort(
           (int)PortHandle,
           0,
           (int)ConnectionPortObjectAttributes,
           (int)ClientPortObjectAttributes,
           PortAttributes,
           Flags,
           ServerSecurityRequirements,
           0LL,
           (__int64)ConnectionMessage,
           (__int64)BufferLength,
           (__int64)OutMessageAttributes,
           (__int64)InMessageAttributes,
           (__int64)Timeout);
}
