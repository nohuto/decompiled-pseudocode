/*
 * XREFs of Feature_TestUxGate__private_IsEnabledNoReportingNoInline @ 0x1406E7A48
 * Callers:
 *     CmFcpComputeLatestMarker @ 0x1406E7300 (CmFcpComputeLatestMarker.c)
 * Callees:
 *     Feature_TestUxGate__private_IsEnabledFallback @ 0x1406E7A28 (Feature_TestUxGate__private_IsEnabledFallback.c)
 */

__int64 Feature_TestUxGate__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_TestUxGate__private_featureState & 2) != 0 )
    return Feature_TestUxGate__private_featureState & 1;
  else
    return Feature_TestUxGate__private_IsEnabledFallback((unsigned int)Feature_TestUxGate__private_featureState, 0);
}
