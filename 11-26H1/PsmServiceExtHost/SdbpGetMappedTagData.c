/*
 * XREFs of SdbpGetMappedTagData @ 0x1800939AC
 * Callers:
 *     SdbpGetFirstIndexedRecord @ 0x180092DD8 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x180092F50 (SdbpGetNextIndexedRecord.c)
 *     SdbGetBinaryTagData @ 0x180093330 (SdbGetBinaryTagData.c)
 *     SdbGetStringTagPtr @ 0x1800933A4 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x18009393C (SdbpGetMappedStringFromTable.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x180093BA8 (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbx

  v3 = (unsigned int)SdbpGetTagHeadSize(a1, a2) + (unsigned int)a2;
  if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(
      1LL,
      "SdbpGetMappedData",
      893LL,
      "Trying to read mapped data past the end of the database offset 0x%x size 0x%x",
      v3,
      *(_DWORD *)(a1 + 20));
    v4 = 0LL;
LABEL_4:
    AslLogCallPrintf(1LL, "SdbpGetMappedTagData", 550LL, "Error getting ptr to tag data");
    return v4;
  }
  v4 = v3 + *(_QWORD *)(a1 + 8);
  if ( !v4 )
    goto LABEL_4;
  return v4;
}
