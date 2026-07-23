/*
 * XREFs of SdbGetTagFromTagID @ 0x1409D4F94
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140718E64 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpFindNextNamedTagHelper @ 0x14088BCD4 (SdbpFindNextNamedTagHelper.c)
 *     SdbGetBinaryTagData @ 0x14088BE70 (SdbGetBinaryTagData.c)
 *     SdbReadQWORDTag @ 0x14088BF50 (SdbReadQWORDTag.c)
 *     SdbpIsEntryIdAvailableInOtherDb @ 0x14088C2C8 (SdbpIsEntryIdAvailableInOtherDb.c)
 *     SdbMergeIsEntryUpdated @ 0x14088DBE0 (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x14088DFAC (SdbpMergeAreTagValuesEqual.c)
 *     SdbFindNextTag @ 0x1409D4254 (SdbFindNextTag.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1409D4554 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     InitOnceScanIndexes @ 0x1409D48C0 (InitOnceScanIndexes.c)
 *     SdbGetTagDataSize @ 0x1409D4C00 (SdbGetTagDataSize.c)
 *     SdbpReadStringRef @ 0x1409D4E70 (SdbpReadStringRef.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x1409D5104 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x1409D51F4 (SdbGetFirstChild.c)
 *     SdbReadWORDTag @ 0x1409D53C0 (SdbReadWORDTag.c)
 *     SdbReadDWORDTag @ 0x1409D5464 (SdbReadDWORDTag.c)
 *     SdbpGetFirstIndexedRecord @ 0x1409D6DD4 (SdbpGetFirstIndexedRecord.c)
 *     SdbReadBinaryTag @ 0x1409D78C8 (SdbReadBinaryTag.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A973CC (SdbpFindFirstNamedTagHelper.c)
 *     SdbpGetNextIndexedRecord @ 0x140B29A58 (SdbpGetNextIndexedRecord.c)
 *     SdbpGetIndex @ 0x140B3A434 (SdbpGetIndex.c)
 *     SdbpFindMatcher @ 0x140B40618 (SdbpFindMatcher.c)
 * Callees:
 *     SdbpReadMappedData @ 0x1409D4FE8 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return v3;
  AslLogCallPrintf(1, (unsigned int)"SdbGetTagFromTagID", 2821, (unsigned int)"Error reading data");
  return 0LL;
}
