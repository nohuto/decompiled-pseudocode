/*
 * XREFs of ZwAlpcSetInformation @ 0x14069C320
 * Callers:
 *     DifZwAlpcSetInformationWrapper @ 0x1406309D0 (DifZwAlpcSetInformationWrapper.c)
 *     PopUmpoInitializeChannel @ 0x140C21334 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C215B0 (PopUmpoInitializeMonitorChannel.c)
 *     SshpAlpcInitialize @ 0x140C23138 (SshpAlpcInitialize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
