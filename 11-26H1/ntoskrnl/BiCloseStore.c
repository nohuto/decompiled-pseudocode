/*
 * XREFs of BiCloseStore @ 0x1409D022C
 * Callers:
 *     BcdCloseStore @ 0x1409D0088 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x1409D43D4 (BiOpenSystemStore.c)
 * Callees:
 *     BiExportStoreAlterationsToFirmware @ 0x140892D1C (BiExportStoreAlterationsToFirmware.c)
 *     BiUnloadHiveByHandle @ 0x1409D02C4 (BiUnloadHiveByHandle.c)
 *     BiWasFirmwareModified @ 0x1409D2818 (BiWasFirmwareModified.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BiSetFirmwareModified @ 0x1409D4920 (BiSetFirmwareModified.c)
 *     BiCloseKey @ 0x1409D6368 (BiCloseKey.c)
 */

__int64 __fastcall BiCloseStore(__int64 a1, char a2)
{
  unsigned int v2; // edi
  void *v3; // rbx
  int v5; // eax

  v2 = 0;
  v3 = (void *)(a1 & 0xFFFFFFFFFFFFFFFDuLL);
  if ( (a2 & 4) != 0 && (unsigned __int8)BiWasFirmwareModified(a1 & 0xFFFFFFFFFFFFFFFDuLL) )
  {
    BiLogMessage(2LL, L"Exporting alterations to firmware.");
    v5 = BiExportStoreAlterationsToFirmware((__int64)v3);
    v2 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to export alterations to firmware. Status: %x", (unsigned int)v5);
    else
      BiSetFirmwareModified(v3, 0LL);
  }
  if ( (a2 & 2) != 0 )
    BiUnloadHiveByHandle(v3);
  else
    BiCloseKey(v3);
  return v2;
}
