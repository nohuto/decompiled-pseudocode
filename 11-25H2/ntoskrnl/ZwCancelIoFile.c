/*
 * XREFs of ZwCancelIoFile @ 0x14069BCE0
 * Callers:
 *     DifZwCancelIoFileWrapper @ 0x140630B60 (DifZwCancelIoFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
