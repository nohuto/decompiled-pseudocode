/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x18008F700
 * Callers:
 *     SdbOpenDatabaseEx @ 0x18008DAA0 (SdbOpenDatabaseEx.c)
 *     SdbpOpenDatabaseInMemory @ 0x18008F2B8 (SdbpOpenDatabaseInMemory.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x18008D264 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetDatabaseID @ 0x18008D4A8 (SdbGetDatabaseID.c)
 *     SdbpValidateRootTagSizes @ 0x18008F814 (SdbpValidateRootTagSizes.c)
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpValidateAndApplyCompatFlags(__int64 a1, _DWORD *a2, char a3)
{
  unsigned int v4; // ebx
  int v6; // eax

  v4 = 0;
  if ( *a2 == 1 )
  {
    *(_DWORD *)(a1 + 2608) |= 1u;
    goto LABEL_7;
  }
  if ( *a2 == 2 )
  {
LABEL_7:
    *(_DWORD *)(a1 + 2608) |= 2u;
    goto LABEL_8;
  }
  if ( *a2 != 3 && (a3 & 1) == 0 )
  {
    AslLogCallPrintf(
      1LL,
      "SdbpValidateAndApplyCompatFlags",
      959LL,
      "MajorVersion mismatch, MajorVersion [0x%lx] Expected 0x%lx",
      *a2,
      3);
    return v4;
  }
LABEL_8:
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
    && (v6 = SdbpValidateRootTagSizes(a1), v6 < 0) )
  {
    AslLogCallPrintf(
      1LL,
      "SdbpValidateAndApplyCompatFlags",
      970LL,
      "SdbpValidateRootTagSizes failed to validate SDB [%x]",
      v6);
  }
  else
  {
    if ( (unsigned int)SdbGetDatabaseID(a1, (void *)(a1 + 28)) )
      return 1;
    AslLogCallPrintf(1LL, "SdbpValidateAndApplyCompatFlags", 983LL, "Failed to get the database ID");
    if ( (a3 & 8) == 0 && ((a3 & 4) == 0 || (unsigned int)SdbFindFirstTag(a1, 0LL, 28673LL)) )
      return 1;
  }
  return v4;
}
