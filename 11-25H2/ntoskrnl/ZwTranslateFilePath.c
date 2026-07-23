/*
 * XREFs of ZwTranslateFilePath @ 0x14069EC20
 * Callers:
 *     DifZwTranslateFilePathWrapper @ 0x14063D7A0 (DifZwTranslateFilePathWrapper.c)
 *     ExpSetBootEntry @ 0x1407ACEAC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407AD5A4 (ExpSetDriverEntry.c)
 *     SiBootEntryGetNtFilePath @ 0x1408062BC (SiBootEntryGetNtFilePath.c)
 *     BiTranslateFilePath @ 0x140A26634 (BiTranslateFilePath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        PULONG OutputFilePathLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InputFilePath);
}
