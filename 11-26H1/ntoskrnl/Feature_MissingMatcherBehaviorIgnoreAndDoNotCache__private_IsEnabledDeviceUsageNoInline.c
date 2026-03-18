/*
 * XREFs of Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline @ 0x140714118
 * Callers:
 *     SdbpMatchList @ 0x1408850CC (SdbpMatchList.c)
 * Callees:
 *     Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledFallback @ 0x140714154 (Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledFallback.c)
 */

__int64 Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_featureState & 0x10) != 0 )
    return Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_featureState & 1;
  else
    return Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledFallback(
             (unsigned int)Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_featureState,
             3LL);
}
