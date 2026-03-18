/*
 * XREFs of ZwOpenProcess @ 0x1407238B0
 * Callers:
 *     DifZwOpenProcessWrapper @ 0x1406ACFE0 (DifZwOpenProcessWrapper.c)
 *     EtwpNotifyProcessTracingChange @ 0x14082848C (EtwpNotifyProcessTracingChange.c)
 *     SepRmLsaConnectRequest @ 0x140AF0D9C (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&DesiredAccess);
}
