/*
 * XREFs of SdbpGetNextIndexedRecord @ 0x180092F50
 * Callers:
 *     SdbpFindMatchingDWORD @ 0x1800931D4 (SdbpFindMatchingDWORD.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x18008F22C (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x180093454 (SdbGetTagDataSize.c)
 *     SdbpGetMappedTagData @ 0x1800939AC (SdbpGetMappedTagData.c)
 */

__int64 __fastcall SdbpGetNextIndexedRecord(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  const char *v6; // r9
  __int64 v7; // r8
  __int64 MappedTagData; // rsi
  unsigned int v10; // r14d
  unsigned int NextTagId; // edi
  __int16 TagFromTagID; // si
  __int16 v13; // ax
  unsigned int TagDataSize; // eax
  __int64 v15; // r8
  __int64 v16; // rdx

  v4 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) != 0x9801 )
  {
    v6 = "The tag 0x%lx is not an index tag";
    v7 = 824LL;
LABEL_3:
    AslLogCallPrintf(1LL, "SdbpGetNextIndexedRecord", v7, v6, v4);
    return 0LL;
  }
  MappedTagData = SdbpGetMappedTagData(a1, v4);
  if ( !MappedTagData )
  {
    v6 = "Failed to get pointer to the index data tagid x%lx";
    v7 = 831LL;
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
  {
    v10 = *(_DWORD *)(a3 + 4);
    if ( !v10 )
      v10 = *(_DWORD *)(MappedTagData + 12LL * *(unsigned int *)(a3 + 16) + 8);
    NextTagId = SdbpGetNextTagId(a1, v10);
    TagFromTagID = SdbGetTagFromTagID(a1, v10);
    v13 = SdbGetTagFromTagID(a1, NextTagId);
    if ( !v13 || (v13 & 0xF000) != 0x7000 || v13 != TagFromTagID || NextTagId == *(_DWORD *)(a3 + 8) )
      return 0LL;
    *(_DWORD *)(a3 + 4) = NextTagId;
  }
  else
  {
    TagDataSize = SdbGetTagDataSize(a1, v4);
    if ( TagDataSize == 0x20000000 )
      return 0LL;
    v15 = *(unsigned int *)(a3 + 16);
    if ( (_DWORD)v15 == TagDataSize / 0xC - 1 )
      return 0LL;
    v16 = (unsigned int)(v15 + 1);
    if ( *(_QWORD *)(MappedTagData + 12 * v15) != *(_QWORD *)(MappedTagData + 12 * v16) )
      return 0LL;
    *(_DWORD *)(a3 + 16) = v16;
    return *(unsigned int *)(MappedTagData + 12 * v16 + 8);
  }
  return NextTagId;
}
