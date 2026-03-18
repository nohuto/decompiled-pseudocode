/*
 * XREFs of BcdCreateObject @ 0x140774E00
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1406D5E6C (WheaPersistBadPageToBcd.c)
 *     PopBcdRegenerateResumeObject @ 0x1407E18C4 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     BiCreateObject @ 0x1409D2A70 (BiCreateObject.c)
 *     BiReleaseBcdSyncMutant @ 0x1409D3F58 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1409D472C (BiIsLinkedToFirmwareVariable.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BiSetFirmwareModified @ 0x1409D4920 (BiSetFirmwareModified.c)
 */

__int64 __fastcall BcdCreateObject(__int64 a1, int a2, int a3, _QWORD *a4)
{
  __int64 v4; // rsi
  char v5; // bl
  int v9; // eax
  unsigned int v10; // r8d
  __int64 v12; // rcx
  int Object; // edi
  __int64 v14; // rdx

  v4 = a1;
  v5 = a1 & 1;
  LOBYTE(a1) = a1 & 1;
  v9 = BiAcquireBcdSyncMutant(a1);
  if ( v9 >= 0 )
  {
    Object = BiCreateObject(v4, a2, a3, 0, (__int64)a4);
    if ( Object >= 0 )
    {
      if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(*a4, 0LL) )
      {
        LOBYTE(v14) = 1;
        BiSetFirmwareModified(v4, v14);
      }
    }
    LOBYTE(v12) = v5;
    BiReleaseBcdSyncMutant(v12);
    return (unsigned int)Object;
  }
  else
  {
    BiLogMessage(4LL, L"BcdCreateObject: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v9);
    return v10;
  }
}
