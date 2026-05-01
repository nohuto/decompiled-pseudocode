/*
 * XREFs of SdbGetTagFromTagID @ 0x18008DA4C
 * Callers:
 *     SdbGetFirstChild @ 0x18008D5B8 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18008D95C (SdbGetNextChild.c)
 *     InitOnceScanIndexes @ 0x180092930 (InitOnceScanIndexes.c)
 *     SdbpGetFirstIndexedRecord @ 0x180092DD8 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x180092F50 (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 *     SdbFindNextTag @ 0x180093130 (SdbFindNextTag.c)
 *     SdbGetBinaryTagData @ 0x180093330 (SdbGetBinaryTagData.c)
 *     SdbGetStringTagPtr @ 0x1800933A4 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x180093454 (SdbGetTagDataSize.c)
 *     SdbReadBinaryTag @ 0x1800936A4 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x180093760 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x1800937FC (SdbReadQWORDTag.c)
 *     SdbReadWORDTag @ 0x18009389C (SdbReadWORDTag.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x180093A30 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x180093C9C (SdbpReadStringRef.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180094584 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpFindMatcher @ 0x180096360 (SdbpFindMatcher.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x18008F444 (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return v3;
  AslLogCallPrintf(1LL, "SdbGetTagFromTagID", 2821LL, "Error reading data");
  return 0LL;
}
