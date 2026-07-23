/*
 * XREFs of ZwSetQuotaInformationFile @ 0x14072B6E0
 * Callers:
 *     DifZwSetQuotaInformationFileWrapper @ 0x1406BF370 (DifZwSetQuotaInformationFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
