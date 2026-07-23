/*
 * XREFs of BcdDeleteObject @ 0x140897504
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x1407E6954 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiEntries @ 0x1409A0C88 (BiBindEfiEntries.c)
 *     BiBindEfiBootManager @ 0x1409A3C40 (BiBindEfiBootManager.c)
 * Callees:
 *     BiDeleteKey @ 0x1409A2588 (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A4F38 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1409A570C (BiIsLinkedToFirmwareVariable.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1409A594C (BiSetFirmwareModifiedFromObject.c)
 */

NTSTATUS __cdecl BcdDeleteObject(HANDLE BcdObjectHandle)
{
  HANDLE v1; // rbx
  char v2; // di
  int v3; // eax
  NTSTATUS v4; // r8d
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  NTSTATUS v8; // ebx

  v1 = BcdObjectHandle;
  v2 = (unsigned __int8)BcdObjectHandle & 1;
  LOBYTE(BcdObjectHandle) = (unsigned __int8)BcdObjectHandle & 1;
  v3 = BiAcquireBcdSyncMutant(BcdObjectHandle);
  if ( v3 >= 0 )
  {
    if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(v1, 0LL) )
      BiSetFirmwareModifiedFromObject(v1);
    v6 = BiDeleteKey(v1);
    LOBYTE(v7) = v2;
    v8 = v6;
    BiReleaseBcdSyncMutant(v7);
    return v8;
  }
  else
  {
    BiLogMessage(4LL, L"BcdDeleteObject: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v3);
    return v4;
  }
}
