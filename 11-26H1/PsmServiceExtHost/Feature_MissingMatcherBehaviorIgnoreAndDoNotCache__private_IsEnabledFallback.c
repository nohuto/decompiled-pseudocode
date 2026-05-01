/*
 * XREFs of Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledFallback @ 0x180094548
 * Callers:
 *     Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline @ 0x180094514 (Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_descriptor);
}
