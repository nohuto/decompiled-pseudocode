/*
 * XREFs of ZwSetIoCompletionEx @ 0x14072B660
 * Callers:
 *     DifZwSetIoCompletionExWrapper @ 0x1406BF010 (DifZwSetIoCompletionExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetIoCompletionEx(
        HANDLE IoCompletionHandle,
        HANDLE IoCompletionPacketHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}
