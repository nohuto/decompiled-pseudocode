/*
 * XREFs of Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline @ 0x180122770
 * Callers:
 *     LdrpInitializePolicy @ 0x1800C1DF0 (LdrpInitializePolicy.c)
 * Callees:
 *     <none>
 */

__int64 Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_PackagedComElevationSupport__private_featureState & 2) != 0 )
    return Feature_PackagedComElevationSupport__private_featureState & 1;
  else
    return Feature_PackagedComElevationSupport__private_IsEnabledFallback(
             (unsigned int)Feature_PackagedComElevationSupport__private_featureState,
             0);
}
