/*
 * XREFs of SdbReadBinaryTag @ 0x1409E3C80
 * Callers:
 *     SdbReadEntryInformation @ 0x1408822F8 (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x1408842B8 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408843F0 (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x140885AE4 (SdbReadGUIDTag.c)
 *     SdbGetDatabaseID @ 0x1409E3B6C (SdbGetDatabaseID.c)
 * Callees:
 *     SdbpReadTagData @ 0x1409E8130 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1409E8584 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v6; // ebx
  __int64 v8; // r8
  __int64 v9; // r9

  v4 = a4;
  v6 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v6, a3, v4) )
      return 1LL;
    AslLogCallPrintf(1, (unsigned int)"SdbReadBinaryTag", 1010, (unsigned int)"Error reading buffer");
  }
  else
  {
    SdbGetTagFromTagID(a1, v6, v8, v9);
    AslLogCallPrintf(1, (unsigned int)"SdbReadBinaryTag", 1005, (unsigned int)"TagID 0x%08X, Tag %04X not BINARY type");
  }
  return 0LL;
}
