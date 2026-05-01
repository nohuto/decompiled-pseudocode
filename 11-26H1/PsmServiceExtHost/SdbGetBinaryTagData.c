/*
 * XREFs of SdbGetBinaryTagData @ 0x180093330
 * Callers:
 *     SdbpGetRegistryMatchingAttributes @ 0x18009665C (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 *     SdbpGetMappedTagData @ 0x1800939AC (SdbpGetMappedTagData.c)
 */

__int64 __fastcall SdbGetBinaryTagData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int16 TagFromTagID; // ax

  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
    return SdbpGetMappedTagData(a1, v2);
  TagFromTagID = SdbGetTagFromTagID(a1, v2);
  AslLogCallPrintf(1LL, "SdbGetBinaryTagData", 1035LL, "TagID 0x%08X, Tag %04X not BINARY type", v2, TagFromTagID);
  return 0LL;
}
