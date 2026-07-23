/*
 * XREFs of ZwSetEaFile @ 0x14069E540
 * Callers:
 *     DifZwSetEaFileWrapper @ 0x14063BE90 (DifZwSetEaFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
