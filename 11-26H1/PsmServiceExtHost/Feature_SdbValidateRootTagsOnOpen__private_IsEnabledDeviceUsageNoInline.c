/*
 * XREFs of Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x18008D264
 * Callers:
 *     SdbGetFirstChild @ 0x18008D5B8 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18008D95C (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x18008F22C (SdbpGetNextTagId.c)
 *     SdbpOpenDatabaseInMemory @ 0x18008F2B8 (SdbpOpenDatabaseInMemory.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x18008F700 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbGetTagDataSize @ 0x180093454 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x180093BA8 (SdbpGetTagHeadSize.c)
 * Callees:
 *     <none>
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
