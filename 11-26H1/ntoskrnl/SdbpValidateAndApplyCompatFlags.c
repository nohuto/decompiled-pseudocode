/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x1409D87A8
 * Callers:
 *     SdbOpenDatabaseEx @ 0x140887068 (SdbOpenDatabaseEx.c)
 *     SdbpOpenDatabaseInMemory @ 0x1409D8A34 (SdbpOpenDatabaseInMemory.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x1404B37E4 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbpValidateRootTagSizes @ 0x1409D616C (SdbpValidateRootTagSizes.c)
 *     SdbGetDatabaseID @ 0x1409D6BEC (SdbGetDatabaseID.c)
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
    goto LABEL_10;
LABEL_4:
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
    && (int)SdbpValidateRootTagSizes(a1) < 0 )
  {
LABEL_10:
    AslLogCallPrintf(1LL, (__int64)"SdbpValidateAndApplyCompatFlags");
    return v4;
  }
  if ( (unsigned int)SdbGetDatabaseID(a1, (void *)(a1 + 28)) )
    return 1;
  AslLogCallPrintf(1LL, (__int64)"SdbpValidateAndApplyCompatFlags");
  if ( (a3 & 8) == 0 && ((a3 & 4) == 0 || (unsigned int)SdbFindFirstTag(a1, 0LL, 28673)) )
    return 1;
  return v4;
}
