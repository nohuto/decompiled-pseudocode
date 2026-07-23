/*
 * XREFs of ZwCancelIoFile @ 0x140728B60
 * Callers:
 *     DifZwCancelIoFileWrapper @ 0x1406A03C0 (DifZwCancelIoFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelIoFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
