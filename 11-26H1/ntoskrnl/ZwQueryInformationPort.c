/*
 * XREFs of ZwQueryInformationPort @ 0x14072AAC0
 * Callers:
 *     DifZwQueryInformationPortWrapper @ 0x1406B52F0 (DifZwQueryInformationPortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationPort(
        HANDLE PortHandle,
        PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
