/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x1409E3A44
 * Callers:
 *     SdbOpenDatabaseEx @ 0x140880C68 (SdbOpenDatabaseEx.c)
 *     SdbpOpenDatabaseInMemory @ 0x1409E4018 (SdbpOpenDatabaseInMemory.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x1404B9F54 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetDatabaseID @ 0x1409E3B6C (SdbGetDatabaseID.c)
 *     SdbpValidateRootTagSizes @ 0x1409E6A38 (SdbpValidateRootTagSizes.c)
 *     SdbFindFirstTag @ 0x1409E8510 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpValidateAndApplyCompatFlags(__int64 a1, _DWORD *a2, char a3)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( *a2 == 1 )
  {
    *(_DWORD *)(a1 + 2608) |= 1u;
    goto LABEL_12;
  }
  if ( *a2 == 2 )
  {
LABEL_12:
    *(_DWORD *)(a1 + 2608) |= 2u;
    goto LABEL_4;
  }
  if ( *a2 != 3 && (a3 & 1) == 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpValidateAndApplyCompatFlags",
      959,
      (unsigned int)"MajorVersion mismatch, MajorVersion [0x%lx] Expected 0x%lx");
    return v4;
  }
LABEL_4:
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
    && (int)SdbpValidateRootTagSizes(a1) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpValidateAndApplyCompatFlags",
      970,
      (unsigned int)"SdbpValidateRootTagSizes failed to validate SDB [%x]");
  }
  else
  {
    if ( (unsigned int)SdbGetDatabaseID(a1, a1 + 28) )
      return 1;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpValidateAndApplyCompatFlags",
      983,
      (unsigned int)"Failed to get the database ID");
    if ( (a3 & 8) == 0 && ((a3 & 4) == 0 || (unsigned int)SdbFindFirstTag(a1, 0LL, 28673LL)) )
      return 1;
  }
  return v4;
}
