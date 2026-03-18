/*
 * XREFs of Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline @ 0x140460EE4
 * Callers:
 *     AppModelPolicy_GetPolicy_Internal @ 0x14045FB18 (AppModelPolicy_GetPolicy_Internal.c)
 *     SeQuerySigningPolicyWorker @ 0x140A2A0A4 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     Feature_PackagedComElevationSupport__private_IsEnabledFallback @ 0x14052F8A8 (Feature_PackagedComElevationSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_PackagedComElevationSupport__private_featureState & 2) != 0 )
    return Feature_PackagedComElevationSupport__private_featureState & 1;
  else
    return Feature_PackagedComElevationSupport__private_IsEnabledFallback(
             (unsigned int)Feature_PackagedComElevationSupport__private_featureState,
             0LL);
}
