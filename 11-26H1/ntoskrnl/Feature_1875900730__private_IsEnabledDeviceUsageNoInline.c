/*
 * XREFs of Feature_1875900730__private_IsEnabledDeviceUsageNoInline @ 0x14063E87C
 * Callers:
 *     SeValidSecurityDescriptor @ 0x140A8DAC0 (SeValidSecurityDescriptor.c)
 * Callees:
 *     Feature_1875900730__private_IsEnabledFallback @ 0x14063E8B8 (Feature_1875900730__private_IsEnabledFallback.c)
 */

__int64 Feature_1875900730__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1875900730__private_featureState & 0x10) != 0 )
    return Feature_1875900730__private_featureState & 1;
  else
    return Feature_1875900730__private_IsEnabledFallback((unsigned int)Feature_1875900730__private_featureState, 3LL);
}
