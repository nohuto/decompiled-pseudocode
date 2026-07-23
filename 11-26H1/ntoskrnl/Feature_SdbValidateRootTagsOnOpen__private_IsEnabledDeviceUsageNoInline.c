/*
 * XREFs of Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x1404B37E4
 * Callers:
 *     SdbpGetNextTagId @ 0x1409D43D4 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x1409D4C00 (SdbGetTagDataSize.c)
 *     SdbGetNextChild @ 0x1409D5104 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x1409D51F4 (SdbGetFirstChild.c)
 *     SdbpGetTagHeadSize @ 0x1409D52D0 (SdbpGetTagHeadSize.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1409D87A8 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpOpenDatabaseInMemory @ 0x1409D8A34 (SdbpOpenDatabaseInMemory.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledFallback @ 0x140530E60 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledFallback.c)
 */

__int64 Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SdbValidateRootTagsOnOpen__private_featureState & 0x10) != 0 )
    return Feature_SdbValidateRootTagsOnOpen__private_featureState & 1;
  else
    return Feature_SdbValidateRootTagsOnOpen__private_IsEnabledFallback(
             (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_featureState,
             3LL);
}
