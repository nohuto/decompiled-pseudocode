/*
 * XREFs of SdbFindFirstTag @ 0x1409D4F20
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140718E64 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpMatchAll @ 0x140719160 (SdbpMatchAll.c)
 *     SdbpMatchEquality @ 0x140719210 (SdbpMatchEquality.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140780CF0 (SdbpCheckMatchingWildcardFiles.c)
 *     KsepDbGetShimInfo @ 0x1407BFA9C (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1407BFE40 (KsepDbReadKData.c)
 *     SdbGetKShimTagRef @ 0x14088814C (SdbGetKShimTagRef.c)
 *     SdbQueryDataExTagID @ 0x1408882D8 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x1408886F8 (SdbReadEntryInformation.c)
 *     SdbpCheckContainment @ 0x1408888D0 (SdbpCheckContainment.c)
 *     SdbpCheckMatchingDevice @ 0x140888A40 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140888B80 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x140888DB0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckSdbCapability @ 0x14088A250 (SdbpCheckSdbCapability.c)
 *     SdbpFindFirstTagWithoutIndex @ 0x14088A324 (SdbpFindFirstTagWithoutIndex.c)
 *     SdbpFindFirstWildcardTagWithoutIndex @ 0x14088A3E0 (SdbpFindFirstWildcardTagWithoutIndex.c)
 *     SdbpFindNextTagWithoutIndex @ 0x14088A49C (SdbpFindNextTagWithoutIndex.c)
 *     SdbpFindNextWildcardTagWithoutIndex @ 0x14088A518 (SdbpFindNextWildcardTagWithoutIndex.c)
 *     SdbpGetDeviceDWORD @ 0x14088A668 (SdbpGetDeviceDWORD.c)
 *     SdbpGetExeEntryFlags @ 0x14088A6B8 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x14088A7F0 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14088AAC8 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchAcpi @ 0x14088B19C (SdbpMatchAcpi.c)
 *     SdbpMatchBios @ 0x14088B278 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x14088B310 (SdbpMatchCpu.c)
 *     SdbpMatchDeviceString @ 0x14088B45C (SdbpMatchDeviceString.c)
 *     SdbpMatchList @ 0x14088B4CC (SdbpMatchList.c)
 *     SdbpMatchOem @ 0x14088B72C (SdbpMatchOem.c)
 *     SdbpMatchOne @ 0x14088B7E0 (SdbpMatchOne.c)
 *     SdbFindParentTagFromAncestors @ 0x14088BC74 (SdbFindParentTagFromAncestors.c)
 *     SdbpFindNextNamedTagHelper @ 0x14088BCD4 (SdbpFindNextNamedTagHelper.c)
 *     __SdbpFindTagFromAncestors @ 0x14088BDFC (__SdbpFindTagFromAncestors.c)
 *     SdbMergeIsEntryUpdated @ 0x14088DBE0 (SdbMergeIsEntryUpdated.c)
 *     InitOnceScanIndexes @ 0x1409D48C0 (InitOnceScanIndexes.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1409D5500 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbGetDatabaseEdition @ 0x1409D60CC (SdbGetDatabaseEdition.c)
 *     SdbGetDatabaseID @ 0x1409D6BEC (SdbGetDatabaseID.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1409D767C (KsepDbCacheReadDeviceInternal.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1409D84BC (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1409D87A8 (SdbpValidateAndApplyCompatFlags.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409D8FD8 (KsepDbGetDriverShimsInternal.c)
 *     SdbpSearchDB @ 0x140A96E98 (SdbpSearchDB.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A973CC (SdbpFindFirstNamedTagHelper.c)
 *     SdbpCheckForMatch @ 0x140A974B0 (SdbpCheckForMatch.c)
 *     SdbpMatchOsVersion @ 0x140A975D4 (SdbpMatchOsVersion.c)
 *     InitOnceGetStringTableOffset @ 0x140B24390 (InitOnceGetStringTableOffset.c)
 *     SdbpFindMatchingName @ 0x140B29968 (SdbpFindMatchingName.c)
 *     SdbpGetDatabaseRuntimePlatform @ 0x140B3A888 (SdbpGetDatabaseRuntimePlatform.c)
 *     SdbpCheckAllAttributes @ 0x140B47B94 (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x140B6AC94 (KsepDbReadKFlag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1409D4F94 (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x1409D5104 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x1409D51F4 (SdbGetFirstChild.c)
 */

__int64 __fastcall SdbFindFirstTag(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebp
  unsigned int i; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx

  v3 = 0;
  v5 = a2;
  for ( i = SdbGetFirstChild(a1, a2); ; i = SdbGetNextChild(a1, v5, v10) )
  {
    v10 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i, v8, v9) == a3 )
      return v10;
  }
  return v3;
}
