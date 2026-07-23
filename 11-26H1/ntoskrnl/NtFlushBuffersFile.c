/*
 * XREFs of NtFlushBuffersFile @ 0x140981D40
 * Callers:
 *     DifNtFlushBuffersFileWrapper @ 0x14067BA70 (DifNtFlushBuffersFileWrapper.c)
 * Callees:
 *     NtFlushBuffersFileEx @ 0x140981D70 (NtFlushBuffersFileEx.c)
 */

NTSTATUS __cdecl NtFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  return NtFlushBuffersFileEx(FileHandle, 0, 0LL, 0, IoStatusBlock);
}
