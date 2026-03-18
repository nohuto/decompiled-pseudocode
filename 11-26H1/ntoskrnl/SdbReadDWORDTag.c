/*
 * XREFs of SdbReadDWORDTag @ 0x1409E8A54
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140714174 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbGetShimInfo @ 0x1407BCA3C (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1407BCDE0 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140881ED8 (SdbQueryDataExTagID.c)
 *     SdbpCheckContainment @ 0x1408824D0 (SdbpCheckContainment.c)
 *     SdbpCheckOSKind @ 0x140883CB0 (SdbpCheckOSKind.c)
 *     SdbpCheckRuntimePlatform @ 0x140883D30 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x140884268 (SdbpGetDeviceDWORD.c)
 *     SdbpGetExeEntryFlags @ 0x1408842B8 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408843F0 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1408846C8 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x1408877E4 (SdbMergeIsEntryUpdated.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409E47C0 (KsepDbGetDriverShimsInternal.c)
 *     SdbGetDatabaseEdition @ 0x1409E6C00 (SdbGetDatabaseEdition.c)
 *     InitOnceScanIndexes @ 0x1409E7EB0 (InitOnceScanIndexes.c)
 *     SdbpGetDatabaseRuntimePlatform @ 0x140B38678 (SdbpGetDatabaseRuntimePlatform.c)
 *     SdbpCheckAllAttributes @ 0x140B45B64 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbpReadTagData @ 0x1409E8130 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1409E8584 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
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
