/*
 * XREFs of NtConnectPort @ 0x1408EC230
 * Callers:
 *     DifNtConnectPortWrapper @ 0x140672FA0 (DifNtConnectPortWrapper.c)
 * Callees:
 *     NtSecureConnectPort @ 0x1408EC280 (NtSecureConnectPort.c)
 */

NTSTATUS __cdecl NtConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos,
        PPORT_VIEW ClientView,
        PREMOTE_PORT_VIEW ServerView,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
{
  return NtSecureConnectPort(
           PortHandle,
           PortName,
           SecurityQos,
           ClientView,
           0LL,
           ServerView,
           MaxMessageLength,
           ConnectionInformation,
           ConnectionInformationLength);
}
