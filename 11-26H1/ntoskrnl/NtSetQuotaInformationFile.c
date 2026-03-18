/*
 * XREFs of NtSetQuotaInformationFile @ 0x140799CC0
 * Callers:
 *     DifNtSetQuotaInformationFileWrapper @ 0x14068D470 (DifNtSetQuotaInformationFileWrapper.c)
 * Callees:
 *     IopSetEaOrQuotaInformationFile @ 0x140795248 (IopSetEaOrQuotaInformationFile.c)
 */

NTSTATUS __stdcall NtSetQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length)
{
  char v5; // [rsp+20h] [rbp-18h]

  return IopSetEaOrQuotaInformationFile(FileHandle, IoStatusBlock, Buffer, Length, v5);
}
