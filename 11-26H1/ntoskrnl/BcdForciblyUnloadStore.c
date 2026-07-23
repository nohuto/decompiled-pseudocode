/*
 * XREFs of BcdForciblyUnloadStore @ 0x140B6D9BC
 * Callers:
 *     BiCleanupLoadedStores @ 0x1409A4348 (BiCleanupLoadedStores.c)
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 * Callees:
 *     BiExportStoreAlterationsToFirmware @ 0x14089911C (BiExportStoreAlterationsToFirmware.c)
 *     BiIsSystemStore @ 0x1409A1114 (BiIsSystemStore.c)
 *     BiUnloadHiveByHandle @ 0x1409A12A4 (BiUnloadHiveByHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A4F38 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdForciblyUnloadStore(HANDLE BcdStoreHandle)
{
  char v2; // si
  NTSTATUS v3; // eax
  NTSTATUS v4; // r8d
  NTSTATUS v6; // ebx
  NTSTATUS v7; // eax

  v2 = (unsigned __int8)BcdStoreHandle & 1;
  v3 = BiAcquireBcdSyncMutant((unsigned __int8)BcdStoreHandle & 1);
  if ( v3 >= 0 )
  {
    v6 = 0;
    if ( BiIsSystemStore((__int64)BcdStoreHandle) && ((unsigned __int8)BcdStoreHandle & 2) == 0 )
    {
      BiLogMessage(2LL, L"Exporting forcible unload to firmware");
      v6 = BiExportStoreAlterationsToFirmware(BcdStoreHandle);
    }
    v7 = BiUnloadHiveByHandle(BcdStoreHandle, 1);
    if ( v6 < 0 )
      BiLogMessage(4LL, L"Failed to export unload alterations to firmware. Status: %x", (unsigned int)v6);
    else
      v6 = v7;
    BiReleaseBcdSyncMutant(v2);
    return v6;
  }
  else
  {
    BiLogMessage(4LL, L"BcdForciblyUnloadStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v3);
    return v4;
  }
}
