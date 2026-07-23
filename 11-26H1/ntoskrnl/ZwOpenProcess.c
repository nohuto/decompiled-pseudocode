/*
 * XREFs of ZwOpenProcess @ 0x140728480
 * Callers:
 *     DifZwOpenProcessWrapper @ 0x1406B0BC0 (DifZwOpenProcessWrapper.c)
 *     EtwpNotifyProcessTracingChange @ 0x14082E6CC (EtwpNotifyProcessTracingChange.c)
 *     SepRmLsaConnectRequest @ 0x140AF39DC (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
