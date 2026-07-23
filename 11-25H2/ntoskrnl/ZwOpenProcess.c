/*
 * XREFs of ZwOpenProcess @ 0x14069B600
 * Callers:
 *     DifZwOpenProcessWrapper @ 0x140636540 (DifZwOpenProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x14068C42C (BiLogFileOwnerProcess.c)
 *     EtwpNotifyProcessTracingChange @ 0x14079B1A8 (EtwpNotifyProcessTracingChange.c)
 *     SepRmLsaConnectRequest @ 0x140A4F304 (SepRmLsaConnectRequest.c)
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
