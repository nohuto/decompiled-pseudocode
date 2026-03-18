/*
 * XREFs of SdbGetStringTagPtr @ 0x1409E7DF4
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140714174 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x14077E1F0 (SdbpCheckMatchingWildcardFiles.c)
 *     KsepDbGetSdbString @ 0x1407BCA08 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x1407BCDE0 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140881ED8 (SdbQueryDataExTagID.c)
 *     SdbpCheckContainment @ 0x1408824D0 (SdbpCheckContainment.c)
 *     SdbpCheckMatchingDevice @ 0x140882640 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140882780 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x1408829B0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckSdbCapability @ 0x140883E50 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408843F0 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1408846C8 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x14088505C (SdbpMatchDeviceString.c)
 *     SdbpMatchList @ 0x1408850CC (SdbpMatchList.c)
 *     SdbpFindNextNamedTagHelper @ 0x1408858D4 (SdbpFindNextNamedTagHelper.c)
 *     SdbMergeIsEntryUpdated @ 0x1408877E4 (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140887BB0 (SdbpMergeAreTagValuesEqual.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1409E4454 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1409E7480 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x140A92348 (SdbpSearchDB.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A9287C (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindMatchingName @ 0x140B27CD8 (SdbpFindMatchingName.c)
 *     SdbpCheckAllAttributes @ 0x140B45B64 (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x140B67D04 (KsepDbReadKFlag.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x1409E7A4C (SdbpGetMappedTagData.c)
 *     SdbpGetMappedStringFromTable @ 0x1409E7AD0 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x1409E8460 (SdbpReadStringRef.c)
 *     SdbGetTagFromTagID @ 0x1409E8584 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetStringTagPtr(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int16 v7; // ax
  const char *v10; // r9
  int v11; // r8d

  v4 = 0LL;
  v5 = a2;
  if ( a1 )
  {
    v7 = SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000;
    if ( v7 == (__int16)0x8000 )
      return SdbpGetMappedTagData((__int64)a1, v5);
    if ( v7 != 24576 )
      return v4;
    if ( (unsigned int)SdbpReadStringRef(a1, v5) )
      return SdbpGetMappedStringFromTable(a1);
    v10 = "Error getting StringRef";
    v11 = 742;
  }
  else
  {
    v10 = "Invalid pdb";
    v11 = 722;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbGetStringTagPtr", v11, (_DWORD)v10);
  return 0LL;
}
