/*
 * XREFs of ZwAlpcCreatePort @ 0x14069C0E0
 * Callers:
 *     DifZwAlpcCreatePortWrapper @ 0x140630030 (DifZwAlpcCreatePortWrapper.c)
 *     PopUmpoInitializeChannel @ 0x140C21334 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C215B0 (PopUmpoInitializeMonitorChannel.c)
 *     SshpAlpcInitialize @ 0x140C23138 (SshpAlpcInitialize.c)
 *     SeRmInitPhase1 @ 0x140C4EBE4 (SeRmInitPhase1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
