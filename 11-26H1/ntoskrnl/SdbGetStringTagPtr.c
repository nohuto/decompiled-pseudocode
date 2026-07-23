/*
 * XREFs of SdbGetStringTagPtr @ 0x1409D4804
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140718E64 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140780CF0 (SdbpCheckMatchingWildcardFiles.c)
 *     KsepDbGetSdbString @ 0x1407BFA68 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x1407BFE40 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1408882D8 (SdbQueryDataExTagID.c)
 *     SdbpCheckContainment @ 0x1408888D0 (SdbpCheckContainment.c)
 *     SdbpCheckMatchingDevice @ 0x140888A40 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140888B80 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x140888DB0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckSdbCapability @ 0x14088A250 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x14088A7F0 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14088AAC8 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x14088B45C (SdbpMatchDeviceString.c)
 *     SdbpMatchList @ 0x14088B4CC (SdbpMatchList.c)
 *     SdbpFindNextNamedTagHelper @ 0x14088BCD4 (SdbpFindNextNamedTagHelper.c)
 *     SdbMergeIsEntryUpdated @ 0x14088DBE0 (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x14088DFAC (SdbpMergeAreTagValuesEqual.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1409D5500 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1409D84BC (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x140A96E98 (SdbpSearchDB.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A973CC (SdbpFindFirstNamedTagHelper.c)
 *     SdbpFindMatchingName @ 0x140B29968 (SdbpFindMatchingName.c)
 *     SdbpCheckAllAttributes @ 0x140B47B94 (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x140B6AC94 (KsepDbReadKFlag.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x1409D4464 (SdbpGetMappedTagData.c)
 *     SdbpGetMappedStringFromTable @ 0x1409D44E8 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x1409D4E70 (SdbpReadStringRef.c)
 *     SdbGetTagFromTagID @ 0x1409D4F94 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
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
