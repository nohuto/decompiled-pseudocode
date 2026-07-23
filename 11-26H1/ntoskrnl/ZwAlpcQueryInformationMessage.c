/*
 * XREFs of ZwAlpcQueryInformationMessage @ 0x140729140
 * Callers:
 *     DifZwAlpcQueryInformationMessageWrapper @ 0x14069F3B0 (DifZwAlpcQueryInformationMessageWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcQueryInformationMessage(
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ALPC_MESSAGE_INFORMATION_CLASS MessageInformationClass,
        PVOID MessageInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
