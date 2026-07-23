/*
 * XREFs of ZwAlpcOpenSenderThread @ 0x140729100
 * Callers:
 *     DifZwAlpcOpenSenderThreadWrapper @ 0x14069F200 (DifZwAlpcOpenSenderThreadWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcOpenSenderThread(
        PHANDLE ThreadHandle,
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ULONG Flags,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
