/*
 * XREFs of ZwSecureConnectPort @ 0x14072B260
 * Callers:
 *     DifZwSecureConnectPortWrapper @ 0x1406BC410 (DifZwSecureConnectPortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSecureConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos,
        PPORT_VIEW ClientView,
        PSID RequiredServerSid,
        PREMOTE_PORT_VIEW ServerView,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
