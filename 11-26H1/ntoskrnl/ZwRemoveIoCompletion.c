/*
 * XREFs of ZwRemoveIoCompletion @ 0x1407280E0
 * Callers:
 *     DifZwRemoveIoCompletionWrapper @ 0x1406BA940 (DifZwRemoveIoCompletionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRemoveIoCompletion(
        HANDLE IoCompletionHandle,
        PVOID *KeyContext,
        PVOID *ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}
