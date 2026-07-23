/*
 * XREFs of ZwAlpcCreatePort @ 0x140728F60
 * Callers:
 *     DifZwAlpcCreatePortWrapper @ 0x14069E5C0 (DifZwAlpcCreatePortWrapper.c)
 *     PopUmpoInitializeChannel @ 0x140CDB714 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140CDB990 (PopUmpoInitializeMonitorChannel.c)
 *     SshpAlpcInitialize @ 0x140CDDA0C (SshpAlpcInitialize.c)
 *     SeRmInitPhase1 @ 0x140D1143C (SeRmInitPhase1.c)
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
