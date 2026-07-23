/*
 * XREFs of SdbReadDWORDTag @ 0x1409D5464
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140718E64 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbGetShimInfo @ 0x1407BFA9C (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1407BFE40 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1408882D8 (SdbQueryDataExTagID.c)
 *     SdbpCheckContainment @ 0x1408888D0 (SdbpCheckContainment.c)
 *     SdbpCheckOSKind @ 0x14088A0B0 (SdbpCheckOSKind.c)
 *     SdbpCheckRuntimePlatform @ 0x14088A130 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x14088A668 (SdbpGetDeviceDWORD.c)
 *     SdbpGetExeEntryFlags @ 0x14088A6B8 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x14088A7F0 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14088AAC8 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x14088DBE0 (SdbMergeIsEntryUpdated.c)
 *     InitOnceScanIndexes @ 0x1409D48C0 (InitOnceScanIndexes.c)
 *     SdbGetDatabaseEdition @ 0x1409D60CC (SdbGetDatabaseEdition.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409D8FD8 (KsepDbGetDriverShimsInternal.c)
 *     SdbpGetDatabaseRuntimePlatform @ 0x140B3A888 (SdbpGetDatabaseRuntimePlatform.c)
 *     SdbpCheckAllAttributes @ 0x140B47B94 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbpReadTagData @ 0x1409D4B40 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1409D4F94 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadDWORDTag(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int TagData; // eax
  unsigned int v7; // ecx
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x4000 )
  {
    TagData = SdbpReadTagData(a1, v4, (__int64)&v9, 4u);
    v7 = v9;
    if ( !TagData )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(1LL, (__int64)"SdbReadDWORDTag");
    return a3;
  }
}
