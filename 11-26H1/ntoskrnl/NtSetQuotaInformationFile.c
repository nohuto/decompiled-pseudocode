/*
 * XREFs of NtSetQuotaInformationFile @ 0x14079C7F0
 * Callers:
 *     DifNtSetQuotaInformationFileWrapper @ 0x140691050 (DifNtSetQuotaInformationFileWrapper.c)
 * Callees:
 *     IopSetEaOrQuotaInformationFile @ 0x140797D78 (IopSetEaOrQuotaInformationFile.c)
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
