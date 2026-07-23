/*
 * XREFs of Feature_3336553784__private_IsEnabledDeviceUsageNoInline @ 0x1406CDEF4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     Feature_3336553784__private_IsEnabledFallback @ 0x1406CDF30 (Feature_3336553784__private_IsEnabledFallback.c)
 */

__int64 Feature_3336553784__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3336553784__private_featureState & 0x10) != 0 )
    return Feature_3336553784__private_featureState & 1;
  else
    return Feature_3336553784__private_IsEnabledFallback((unsigned int)Feature_3336553784__private_featureState, 3LL);
}
