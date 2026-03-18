/*
 * XREFs of BcdDeleteObject @ 0x140891108
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x1407E18C4 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiEntries @ 0x1409CFCA8 (BiBindEfiEntries.c)
 *     BiBindEfiBootManager @ 0x1409D2C60 (BiBindEfiBootManager.c)
 * Callees:
 *     BiDeleteKey @ 0x1409D15A8 (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1409D3F58 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1409D472C (BiIsLinkedToFirmwareVariable.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1409D496C (BiSetFirmwareModifiedFromObject.c)
 */

__int64 __fastcall BcdDeleteObject(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // di
  int v3; // eax
  unsigned int v4; // r8d
  unsigned int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx

  v1 = a1;
  v2 = a1 & 1;
  LOBYTE(a1) = a1 & 1;
  v3 = BiAcquireBcdSyncMutant(a1);
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
