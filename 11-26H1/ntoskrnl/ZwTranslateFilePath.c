/*
 * XREFs of ZwTranslateFilePath @ 0x14072BAC0
 * Callers:
 *     DifZwTranslateFilePathWrapper @ 0x1406C1870 (DifZwTranslateFilePathWrapper.c)
 *     ExpSetBootEntry @ 0x140842100 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14084281C (ExpSetDriverEntry.c)
 *     SiBootEntryGetNtFilePath @ 0x14089B1B4 (SiBootEntryGetNtFilePath.c)
 *     BiTranslateFilePath @ 0x1409A2C44 (BiTranslateFilePath.c)
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
