/*
 * XREFs of SdbFindFirstTag @ 0x1409E8510
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140714174 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpMatchAll @ 0x140714470 (SdbpMatchAll.c)
 *     SdbpMatchEquality @ 0x140714520 (SdbpMatchEquality.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x14077E1F0 (SdbpCheckMatchingWildcardFiles.c)
 *     KsepDbGetShimInfo @ 0x1407BCA3C (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1407BCDE0 (KsepDbReadKData.c)
 *     SdbGetKShimTagRef @ 0x140881D4C (SdbGetKShimTagRef.c)
 *     SdbQueryDataExTagID @ 0x140881ED8 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x1408822F8 (SdbReadEntryInformation.c)
 *     SdbpCheckContainment @ 0x1408824D0 (SdbpCheckContainment.c)
 *     SdbpCheckMatchingDevice @ 0x140882640 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140882780 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x1408829B0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckSdbCapability @ 0x140883E50 (SdbpCheckSdbCapability.c)
 *     SdbpFindFirstTagWithoutIndex @ 0x140883F24 (SdbpFindFirstTagWithoutIndex.c)
 *     SdbpFindFirstWildcardTagWithoutIndex @ 0x140883FE0 (SdbpFindFirstWildcardTagWithoutIndex.c)
 *     SdbpFindNextTagWithoutIndex @ 0x14088409C (SdbpFindNextTagWithoutIndex.c)
 *     SdbpFindNextWildcardTagWithoutIndex @ 0x140884118 (SdbpFindNextWildcardTagWithoutIndex.c)
 *     SdbpGetDeviceDWORD @ 0x140884268 (SdbpGetDeviceDWORD.c)
 *     SdbpGetExeEntryFlags @ 0x1408842B8 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408843F0 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1408846C8 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchAcpi @ 0x140884D9C (SdbpMatchAcpi.c)
 *     SdbpMatchBios @ 0x140884E78 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x140884F10 (SdbpMatchCpu.c)
 *     SdbpMatchDeviceString @ 0x14088505C (SdbpMatchDeviceString.c)
 *     SdbpMatchList @ 0x1408850CC (SdbpMatchList.c)
 *     SdbpMatchOem @ 0x14088532C (SdbpMatchOem.c)
 *     SdbpMatchOne @ 0x1408853E0 (SdbpMatchOne.c)
 *     SdbFindParentTagFromAncestors @ 0x140885874 (SdbFindParentTagFromAncestors.c)
 *     SdbpFindNextNamedTagHelper @ 0x1408858D4 (SdbpFindNextNamedTagHelper.c)
 *     __SdbpFindTagFromAncestors @ 0x1408859FC (__SdbpFindTagFromAncestors.c)
 *     SdbMergeIsEntryUpdated @ 0x1408877E4 (SdbMergeIsEntryUpdated.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1409E3A44 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbGetDatabaseID @ 0x1409E3B6C (SdbGetDatabaseID.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1409E4454 (SdbpFindNextIndexedWildCardTag.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409E47C0 (KsepDbGetDriverShimsInternal.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1409E5724 (KsepDbCacheReadDeviceInternal.c)
 *     SdbGetDatabaseEdition @ 0x1409E6C00 (SdbGetDatabaseEdition.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1409E7480 (SdbpFindFirstIndexedWildCardTag.c)
 *     InitOnceScanIndexes @ 0x1409E7EB0 (InitOnceScanIndexes.c)
 *     SdbpSearchDB @ 0x140A92348 (SdbpSearchDB.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A9287C (SdbpFindFirstNamedTagHelper.c)
 *     SdbpCheckForMatch @ 0x140A92960 (SdbpCheckForMatch.c)
 *     SdbpMatchOsVersion @ 0x140A92A84 (SdbpMatchOsVersion.c)
 *     InitOnceGetStringTableOffset @ 0x140B21F90 (InitOnceGetStringTableOffset.c)
 *     SdbpFindMatchingName @ 0x140B27CD8 (SdbpFindMatchingName.c)
 *     SdbpGetDatabaseRuntimePlatform @ 0x140B38678 (SdbpGetDatabaseRuntimePlatform.c)
 *     SdbpCheckAllAttributes @ 0x140B45B64 (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x140B67D04 (KsepDbReadKFlag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1409E8584 (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x1409E86F4 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x1409E87E4 (SdbGetFirstChild.c)
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
