/*
 * XREFs of Feature_49798962__private_IsEnabledDeviceUsageNoInline @ 0x1406CF1AC
 * Callers:
 *     BapdpProcessVsmKeyBlobs @ 0x140CE8DD8 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     Feature_49798962__private_IsEnabledFallback @ 0x1406CF1E8 (Feature_49798962__private_IsEnabledFallback.c)
 */

__int64 Feature_49798962__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_49798962__private_featureState & 0x10) != 0 )
    return Feature_49798962__private_featureState & 1;
  else
    return Feature_49798962__private_IsEnabledFallback((unsigned int)Feature_49798962__private_featureState, 3LL);
}
