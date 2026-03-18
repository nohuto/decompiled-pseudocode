/*
 * XREFs of BcdForciblyUnloadStore @ 0x140B6A7AC
 * Callers:
 *     BiCleanupLoadedStores @ 0x1409D3368 (BiCleanupLoadedStores.c)
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 * Callees:
 *     BiExportStoreAlterationsToFirmware @ 0x140892D1C (BiExportStoreAlterationsToFirmware.c)
 *     BiIsSystemStore @ 0x1409D0134 (BiIsSystemStore.c)
 *     BiUnloadHiveByHandle @ 0x1409D02C4 (BiUnloadHiveByHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x1409D3F58 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 */

__int64 __fastcall BcdForciblyUnloadStore(__int64 a1)
{
  char v2; // si
  int v3; // eax
  unsigned int v4; // r8d
  int v6; // ebx
  int v7; // eax

  v2 = a1 & 1;
  v3 = BiAcquireBcdSyncMutant(a1 & 1);
  if ( v3 >= 0 )
  {
    v6 = 0;
    if ( BiIsSystemStore(a1) && (a1 & 2) == 0 )
    {
      BiLogMessage(2LL, L"Exporting forcible unload to firmware");
      v6 = BiExportStoreAlterationsToFirmware(a1);
    }
    v7 = BiUnloadHiveByHandle((HANDLE)a1, 1);
    if ( v6 < 0 )
      BiLogMessage(4LL, L"Failed to export unload alterations to firmware. Status: %x", (unsigned int)v6);
    else
      v6 = v7;
    BiReleaseBcdSyncMutant(v2);
    return (unsigned int)v6;
  }
  else
  {
    BiLogMessage(4LL, L"BcdForciblyUnloadStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v3);
    return v4;
  }
}
