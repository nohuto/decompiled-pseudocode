/*
 * XREFs of NtCreatePagingFile @ 0x14086CCE0
 * Callers:
 *     DifNtCreatePagingFileWrapper @ 0x1406722E0 (DifNtCreatePagingFileWrapper.c)
 * Callees:
 *     MiCreatePagingFile @ 0x14086B464 (MiCreatePagingFile.c)
 */

__int64 __fastcall NtCreatePagingFile(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return MiCreatePagingFile(a1, a2, a3, KeGetCurrentThread()->PreviousMode, a4, &MiSystemPartition);
}
