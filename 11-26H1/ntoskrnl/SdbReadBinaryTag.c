/*
 * XREFs of SdbReadBinaryTag @ 0x1409D78C8
 * Callers:
 *     SdbReadEntryInformation @ 0x1408886F8 (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x14088A6B8 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x14088A7F0 (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x14088BEE4 (SdbReadGUIDTag.c)
 *     SdbGetDatabaseID @ 0x1409D6BEC (SdbGetDatabaseID.c)
 * Callees:
 *     SdbpReadTagData @ 0x1409D4B40 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1409D4F94 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx

  v6 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v6, a3, a4) )
      return 1LL;
    AslLogCallPrintf(1LL, (__int64)"SdbReadBinaryTag");
  }
  else
  {
    SdbGetTagFromTagID(a1, v6);
    AslLogCallPrintf(1LL, (__int64)"SdbReadBinaryTag");
  }
  return 0LL;
}
