/*
 * XREFs of Feature_TestLoc03__private_IsEnabledNoReportingNoInline @ 0x1406E7940
 * Callers:
 *     CmFcpComputeLatestMarker @ 0x1406E7300 (CmFcpComputeLatestMarker.c)
 * Callees:
 *     Feature_TestLoc03__private_IsEnabledFallback @ 0x1406E7920 (Feature_TestLoc03__private_IsEnabledFallback.c)
 */

__int64 Feature_TestLoc03__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_TestLoc03__private_featureState & 2) != 0 )
    return Feature_TestLoc03__private_featureState & 1;
  else
    return Feature_TestLoc03__private_IsEnabledFallback((unsigned int)Feature_TestLoc03__private_featureState, 0);
}
