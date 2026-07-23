/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x140729200
 * Callers:
 *     DifZwAssociateWaitCompletionPacketWrapper @ 0x14069FD60 (DifZwAssociateWaitCompletionPacketWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAssociateWaitCompletionPacket(
        HANDLE WaitCompletionPacketHandle,
        HANDLE IoCompletionHandle,
        HANDLE TargetObjectHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation,
        PBOOLEAN AlreadySignaled)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WaitCompletionPacketHandle);
}
