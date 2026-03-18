/*
 * XREFs of Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x1404B9F54
 * Callers:
 *     SdbpValidateAndApplyCompatFlags @ 0x1409E3A44 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpOpenDatabaseInMemory @ 0x1409E4018 (SdbpOpenDatabaseInMemory.c)
 *     SdbpGetNextTagId @ 0x1409E79BC (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x1409E81F0 (SdbGetTagDataSize.c)
 *     SdbGetNextChild @ 0x1409E86F4 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x1409E87E4 (SdbGetFirstChild.c)
 *     SdbpGetTagHeadSize @ 0x1409E88C0 (SdbpGetTagHeadSize.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledFallback @ 0x14052E940 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledFallback.c)
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
