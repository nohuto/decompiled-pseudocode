/*
 * XREFs of ZwUnlockFile @ 0x140726FB0
 * Callers:
 *     DifZwUnlockFileWrapper @ 0x1406BE550 (DifZwUnlockFileWrapper.c)
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
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
