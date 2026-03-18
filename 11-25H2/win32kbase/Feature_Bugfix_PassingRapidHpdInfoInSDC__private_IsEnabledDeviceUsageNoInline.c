/*
 * XREFs of Feature_Bugfix_PassingRapidHpdInfoInSDC__private_IsEnabledDeviceUsageNoInline @ 0x1401AEBF4
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     Feature_Bugfix_PassingRapidHpdInfoInSDC__private_IsEnabledFallback @ 0x1401AEC2C (Feature_Bugfix_PassingRapidHpdInfoInSDC__private_IsEnabledFallback.c)
 */

__int64 Feature_Bugfix_PassingRapidHpdInfoInSDC__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Bugfix_PassingRapidHpdInfoInSDC__private_featureState & 0x10) != 0 )
    return Feature_Bugfix_PassingRapidHpdInfoInSDC__private_featureState & 1;
  else
    return Feature_Bugfix_PassingRapidHpdInfoInSDC__private_IsEnabledFallback(
             (unsigned int)Feature_Bugfix_PassingRapidHpdInfoInSDC__private_featureState,
             3LL);
}
