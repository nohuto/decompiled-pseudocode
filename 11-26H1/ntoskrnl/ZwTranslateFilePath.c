/*
 * XREFs of ZwTranslateFilePath @ 0x140726EF0
 * Callers:
 *     DifZwTranslateFilePathWrapper @ 0x1406BDC90 (DifZwTranslateFilePathWrapper.c)
 *     ExpSetBootEntry @ 0x14083BEC0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14083C5DC (ExpSetDriverEntry.c)
 *     SiBootEntryGetNtFilePath @ 0x140894DB4 (SiBootEntryGetNtFilePath.c)
 *     BiTranslateFilePath @ 0x1409D1C64 (BiTranslateFilePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTranslateFilePath(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
