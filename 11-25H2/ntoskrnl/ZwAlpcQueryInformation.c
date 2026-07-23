/*
 * XREFs of ZwAlpcQueryInformation @ 0x14069C2A0
 * Callers:
 *     DifZwAlpcQueryInformationWrapper @ 0x140630640 (DifZwAlpcQueryInformationWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcQueryInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
