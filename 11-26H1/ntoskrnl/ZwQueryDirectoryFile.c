/*
 * XREFs of ZwQueryDirectoryFile @ 0x140723A90
 * Callers:
 *     DifZwQueryDirectoryFileWrapper @ 0x1406B02E0 (DifZwQueryDirectoryFileWrapper.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407B46BC (IopFileUtilWalkDirectoryTreeHelper.c)
 *     AslPathWildcardFindNext @ 0x140889EE8 (AslPathWildcardFindNext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        BOOLEAN ReturnSingleEntry,
        PUNICODE_STRING FileName,
        BOOLEAN RestartScan)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, Event);
}
