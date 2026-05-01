/*
 * XREFs of SdbReadBinaryTag @ 0x1800936A4
 * Callers:
 *     SdbGetDatabaseID @ 0x18008D4A8 (SdbGetDatabaseID.c)
 *     SdbpApphelpExeInfo @ 0x1800907CC (SdbpApphelpExeInfo.c)
 *     SdbpGetMatchingTextAttributes @ 0x1800963F8 (SdbpGetMatchingTextAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180093D4C (SdbpReadTagData.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx
  unsigned __int16 TagFromTagID; // ax

  v6 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) != 0x9000 )
  {
    TagFromTagID = SdbGetTagFromTagID(a1, v6);
    AslLogCallPrintf(1LL, "SdbReadBinaryTag", 1005LL, "TagID 0x%08X, Tag %04X not BINARY type", v6, TagFromTagID);
    return 0LL;
  }
  if ( !(unsigned int)SdbpReadTagData(a1, v6, a3, a4) )
  {
    AslLogCallPrintf(1LL, "SdbReadBinaryTag", 1010LL, "Error reading buffer");
    return 0LL;
  }
  return 1LL;
}
