/*
 * XREFs of SdbpGetMappedTagData @ 0x1409D4464
 * Callers:
 *     KsepDbReadKData @ 0x1407BFE40 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1408882D8 (SdbQueryDataExTagID.c)
 *     SdbGetBinaryTagData @ 0x14088BE70 (SdbGetBinaryTagData.c)
 *     SdbMergeIsEntryUpdated @ 0x14088DBE0 (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x14088DFAC (SdbpMergeAreTagValuesEqual.c)
 *     SdbpGetMappedStringFromTable @ 0x1409D44E8 (SdbpGetMappedStringFromTable.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbpGetFirstIndexedRecord @ 0x1409D6DD4 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x140B29A58 (SdbpGetNextIndexedRecord.c)
 *     SdbpGetIndex @ 0x140B3A434 (SdbpGetIndex.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x1409D52D0 (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbx

  v3 = (unsigned int)SdbpGetTagHeadSize(a1, a2) + (unsigned int)a2;
  if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMappedData",
      893,
      (unsigned int)"Trying to read mapped data past the end of the database offset 0x%x size 0x%x");
    v4 = 0LL;
    goto LABEL_5;
  }
  v4 = v3 + *(_QWORD *)(a1 + 8);
  if ( !v4 )
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMappedTagData", 550, (unsigned int)"Error getting ptr to tag data");
  return v4;
}
