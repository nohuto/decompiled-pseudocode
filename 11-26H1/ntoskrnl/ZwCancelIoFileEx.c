/*
 * XREFs of ZwCancelIoFileEx @ 0x140729240
 * Callers:
 *     DifZwCancelIoFileExWrapper @ 0x1406A0240 (DifZwCancelIoFileExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelIoFileEx(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoRequestToCancel,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
