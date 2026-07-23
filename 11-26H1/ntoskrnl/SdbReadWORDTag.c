/*
 * XREFs of SdbReadWORDTag @ 0x1409D53C0
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x14088DBE0 (SdbMergeIsEntryUpdated.c)
 *     InitOnceScanIndexes @ 0x1409D48C0 (InitOnceScanIndexes.c)
 *     SdbpCheckForMatch @ 0x140A974B0 (SdbpCheckForMatch.c)
 *     SdbpCheckAllAttributes @ 0x140B47B94 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbpReadTagData @ 0x1409D4B40 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1409D4F94 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadWORDTag(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v4; // ebx
  int TagData; // eax
  unsigned __int16 v7; // cx
  unsigned __int16 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x3000 )
  {
    TagData = SdbpReadTagData(a1, v4, (__int64)&v9, 2u);
    v7 = v9;
    if ( !TagData )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(1LL, (__int64)"SdbReadWORDTag");
    return a3;
  }
}
