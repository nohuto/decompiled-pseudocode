/*
 * XREFs of SdbpReadTagData @ 0x180093D4C
 * Callers:
 *     SdbReadBinaryTag @ 0x1800936A4 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x180093760 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x1800937FC (SdbReadQWORDTag.c)
 *     SdbReadWORDTag @ 0x18009389C (SdbReadWORDTag.c)
 *     SdbpReadStringRef @ 0x180093C9C (SdbpReadStringRef.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x18008F444 (SdbpReadMappedData.c)
 *     SdbGetTagDataSize @ 0x180093454 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x180093BA8 (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, __int64 a2, void *a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned int TagDataSize; // eax
  unsigned int v9; // ebx
  int TagHeadSize; // eax

  v6 = a2;
  TagDataSize = SdbGetTagDataSize(a1, a2);
  v9 = TagDataSize;
  if ( TagDataSize > a4 )
  {
    AslLogCallPrintf(1LL, "SdbpReadTagData", 439LL, "Buffer too small. Avail: %d, Need: %d", a4, TagDataSize);
    return 0LL;
  }
  TagHeadSize = SdbpGetTagHeadSize(a1, v6);
  if ( !(unsigned int)SdbpReadMappedData(a1, v6 + TagHeadSize, a3, v9) )
  {
    AslLogCallPrintf(1LL, "SdbpReadTagData", 446LL, "Error reading tag data");
    return 0LL;
  }
  return 1LL;
}
