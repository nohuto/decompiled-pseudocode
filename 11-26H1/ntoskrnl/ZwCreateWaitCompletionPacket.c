/*
 * XREFs of ZwCreateWaitCompletionPacket @ 0x140729A00
 * Callers:
 *     DifZwCreateWaitCompletionPacketWrapper @ 0x1406A6FB0 (DifZwCreateWaitCompletionPacketWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WaitCompletionPacketHandle);
}
