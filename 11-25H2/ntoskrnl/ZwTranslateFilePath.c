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

__int64 __fastcall ZwTranslateFilePath(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
