/*
 * XREFs of ZwUnlockFile @ 0x14072BB80
 * Callers:
 *     DifZwUnlockFileWrapper @ 0x1406C2130 (DifZwUnlockFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
