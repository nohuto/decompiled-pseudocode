/*
 * XREFs of Feature_TestUex12__private_IsEnabledNoReportingNoInline @ 0x1406E79F0
 * Callers:
 *     CmFcpComputeLatestMarker @ 0x1406E7300 (CmFcpComputeLatestMarker.c)
 * Callees:
 *     Feature_TestUex12__private_IsEnabledFallback @ 0x1406E79D0 (Feature_TestUex12__private_IsEnabledFallback.c)
 */

__int64 Feature_TestUex12__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_TestUex12__private_featureState & 2) != 0 )
    return Feature_TestUex12__private_featureState & 1;
  else
    return Feature_TestUex12__private_IsEnabledFallback((unsigned int)Feature_TestUex12__private_featureState, 0);
}
