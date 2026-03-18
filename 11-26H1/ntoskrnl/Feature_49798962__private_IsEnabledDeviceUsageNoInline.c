/*
 * XREFs of Feature_49798962__private_IsEnabledDeviceUsageNoInline @ 0x1406CB17C
 * Callers:
 *     BapdpProcessVsmKeyBlobs @ 0x140CE2A38 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     Feature_49798962__private_IsEnabledFallback @ 0x1406CB1B8 (Feature_49798962__private_IsEnabledFallback.c)
 */

__int64 Feature_49798962__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_49798962__private_featureState & 0x10) != 0 )
    return Feature_49798962__private_featureState & 1;
  else
    return Feature_49798962__private_IsEnabledFallback((unsigned int)Feature_49798962__private_featureState, 3LL);
}
