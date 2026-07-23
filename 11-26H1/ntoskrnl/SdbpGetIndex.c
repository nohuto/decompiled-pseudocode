/*
 * XREFs of SdbpGetIndex @ 0x140B3A434
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1409D5500 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1409D84BC (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x1409D4464 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x1409D4C00 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x1409D4F94 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetIndex(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int TagDataSize; // eax
  unsigned __int64 v9; // rcx

  v4 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) == 0x9801 )
  {
    TagDataSize = SdbGetTagDataSize(a1, v4, v6, v7);
    v9 = 0LL;
    if ( TagDataSize != 0x20000000 )
      v9 = TagDataSize;
    *a3 = v9 / 0xC;
    return SdbpGetMappedTagData(a1, v4);
  }
  else
  {
    AslLogCallPrintf(1LL, (__int64)"SdbpGetIndex");
    return 0LL;
  }
}
