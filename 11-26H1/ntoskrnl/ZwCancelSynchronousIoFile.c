/*
 * XREFs of ZwCancelSynchronousIoFile @ 0x140729260
 * Callers:
 *     DifZwCancelSynchronousIoFileWrapper @ 0x1406A0530 (DifZwCancelSynchronousIoFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelSynchronousIoFile(
        HANDLE ThreadHandle,
        PIO_STATUS_BLOCK IoRequestToCancel,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
