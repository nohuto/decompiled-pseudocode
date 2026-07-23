/*
 * XREFs of ZwAlpcOpenSenderProcess @ 0x1407290E0
 * Callers:
 *     DifZwAlpcOpenSenderProcessWrapper @ 0x14069F050 (DifZwAlpcOpenSenderProcessWrapper.c)
 *     PopUmpoProcessMessage @ 0x140AA77A8 (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcOpenSenderProcess(
        PHANDLE ProcessHandle,
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ULONG Flags,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
