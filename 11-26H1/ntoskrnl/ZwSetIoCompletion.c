/*
 * XREFs of ZwSetIoCompletion @ 0x14072B640
 * Callers:
 *     DifZwSetIoCompletionWrapper @ 0x1406BF1C0 (DifZwSetIoCompletionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetIoCompletion(
        HANDLE IoCompletionHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}
