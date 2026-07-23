/*
 * XREFs of ZwSetEaFile @ 0x14072B3E0
 * Callers:
 *     DifZwSetEaFileWrapper @ 0x1406BCF10 (DifZwSetEaFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
