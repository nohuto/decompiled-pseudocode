/*
 * XREFs of SdbpReadTagData @ 0x1409D4B40
 * Callers:
 *     SdbReadQWORDTag @ 0x14088BF50 (SdbReadQWORDTag.c)
 *     SdbpReadStringRef @ 0x1409D4E70 (SdbpReadStringRef.c)
 *     SdbReadWORDTag @ 0x1409D53C0 (SdbReadWORDTag.c)
 *     SdbReadDWORDTag @ 0x1409D5464 (SdbReadDWORDTag.c)
 *     SdbReadBinaryTag @ 0x1409D78C8 (SdbReadBinaryTag.c)
 * Callees:
 *     SdbGetTagDataSize @ 0x1409D4C00 (SdbGetTagDataSize.c)
 *     SdbpReadMappedData @ 0x1409D4FE8 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x1409D52D0 (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned int TagDataSize; // ebx
  int TagHeadSize; // eax

  v6 = a2;
  TagDataSize = SdbGetTagDataSize(a1, a2);
  if ( TagDataSize > a4 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 439, (unsigned int)"Buffer too small. Avail: %d, Need: %d");
  }
  else
  {
    TagHeadSize = SdbpGetTagHeadSize(a1, v6);
    if ( (unsigned int)SdbpReadMappedData(a1, v6 + TagHeadSize, a3, TagDataSize) )
      return 1LL;
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 446, (unsigned int)"Error reading tag data");
  }
  return 0LL;
}
