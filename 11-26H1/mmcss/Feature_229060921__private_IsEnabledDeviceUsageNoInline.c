/*
 * XREFs of Feature_229060921__private_IsEnabledDeviceUsageNoInline @ 0x140004D38
 * Callers:
 *     CiNdisCleanupThrottle @ 0x14000DB84 (CiNdisCleanupThrottle.c)
 *     CiNdisThrottle @ 0x14000DD50 (CiNdisThrottle.c)
 * Callees:
 *     Feature_229060921__private_IsEnabledFallback @ 0x140004D74 (Feature_229060921__private_IsEnabledFallback.c)
 */

__int64 Feature_229060921__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_229060921__private_featureState & 0x10) != 0 )
    return Feature_229060921__private_featureState & 1;
  else
    return Feature_229060921__private_IsEnabledFallback((unsigned int)Feature_229060921__private_featureState, 3LL);
}
