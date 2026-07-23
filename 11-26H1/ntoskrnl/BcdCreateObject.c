/*
 * XREFs of BcdCreateObject @ 0x140777E00
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1406D9F4C (WheaPersistBadPageToBcd.c)
 *     PopBcdRegenerateResumeObject @ 0x1407E6954 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     BiCreateObject @ 0x1409A3A50 (BiCreateObject.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A4F38 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1409A570C (BiIsLinkedToFirmwareVariable.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiSetFirmwareModified @ 0x1409A5900 (BiSetFirmwareModified.c)
 */

NTSTATUS __cdecl BcdCreateObject(
        HANDLE BcdStoreHandle,
        PGUID Identifier,
        PBCD_OBJECT_DESCRIPTION Description,
        PHANDLE BcdObjectHandle)
{
  HANDLE v4; // rsi
  char v5; // bl
  int v7; // edi
  int v8; // ebp
  int v9; // eax
  NTSTATUS v10; // r8d
  __int64 v12; // rcx
  NTSTATUS Object; // edi
  __int64 v14; // rdx

  v4 = BcdStoreHandle;
  v5 = (unsigned __int8)BcdStoreHandle & 1;
  LOBYTE(BcdStoreHandle) = (unsigned __int8)BcdStoreHandle & 1;
  v7 = (int)Description;
  v8 = (int)Identifier;
  v9 = BiAcquireBcdSyncMutant(BcdStoreHandle);
  if ( v9 >= 0 )
  {
    Object = BiCreateObject((_DWORD)v4, v8, v7, 0, (__int64)BcdObjectHandle);
    if ( Object >= 0 )
    {
      if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(*BcdObjectHandle, 0LL) )
      {
        LOBYTE(v14) = 1;
        BiSetFirmwareModified(v4, v14);
      }
    }
    LOBYTE(v12) = v5;
    BiReleaseBcdSyncMutant(v12);
    return Object;
  }
  else
  {
    BiLogMessage(4LL, L"BcdCreateObject: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v9);
    return v10;
  }
}
