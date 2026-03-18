/*
 * XREFs of SdbGetTagFromTagID @ 0x1409E8584
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140714174 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpFindNextNamedTagHelper @ 0x1408858D4 (SdbpFindNextNamedTagHelper.c)
 *     SdbGetBinaryTagData @ 0x140885A70 (SdbGetBinaryTagData.c)
 *     SdbReadQWORDTag @ 0x140885B50 (SdbReadQWORDTag.c)
 *     SdbpIsEntryIdAvailableInOtherDb @ 0x140885EC8 (SdbpIsEntryIdAvailableInOtherDb.c)
 *     SdbMergeIsEntryUpdated @ 0x1408877E4 (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140887BB0 (SdbpMergeAreTagValuesEqual.c)
 *     SdbReadBinaryTag @ 0x1409E3C80 (SdbReadBinaryTag.c)
 *     SdbpGetFirstIndexedRecord @ 0x1409E5EDC (SdbpGetFirstIndexedRecord.c)
 *     SdbFindNextTag @ 0x1409E783C (SdbFindNextTag.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1409E7B3C (SdbpGetStringTableItemFromStringRef.c)
 *     SdbGetStringTagPtr @ 0x1409E7DF4 (SdbGetStringTagPtr.c)
 *     InitOnceScanIndexes @ 0x1409E7EB0 (InitOnceScanIndexes.c)
 *     SdbGetTagDataSize @ 0x1409E81F0 (SdbGetTagDataSize.c)
 *     SdbpReadStringRef @ 0x1409E8460 (SdbpReadStringRef.c)
 *     SdbFindFirstTag @ 0x1409E8510 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x1409E86F4 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x1409E87E4 (SdbGetFirstChild.c)
 *     SdbReadWORDTag @ 0x1409E89B0 (SdbReadWORDTag.c)
 *     SdbReadDWORDTag @ 0x1409E8A54 (SdbReadDWORDTag.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A9287C (SdbpFindFirstNamedTagHelper.c)
 *     SdbpGetNextIndexedRecord @ 0x140B27DC8 (SdbpGetNextIndexedRecord.c)
 *     SdbpGetIndex @ 0x140B38224 (SdbpGetIndex.c)
 *     SdbpFindMatcher @ 0x140B3E748 (SdbpFindMatcher.c)
 * Callees:
 *     SdbpReadMappedData @ 0x1409E85D8 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
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
