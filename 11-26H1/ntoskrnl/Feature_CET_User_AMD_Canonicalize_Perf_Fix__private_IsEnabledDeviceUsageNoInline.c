/*
 * XREFs of Feature_CET_User_AMD_Canonicalize_Perf_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1405F71E0
 * Callers:
 *     KiSetControlEnforcement @ 0x140BFD410 (KiSetControlEnforcement.c)
 * Callees:
 *     Feature_CET_User_AMD_Canonicalize_Perf_Fix__private_IsEnabledFallback @ 0x1405F721C (Feature_CET_User_AMD_Canonicalize_Perf_Fix__private_IsEnabledFallback.c)
 */

__int64 Feature_CET_User_AMD_Canonicalize_Perf_Fix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CET_User_AMD_Canonicalize_Perf_Fix__private_featureState & 0x10) != 0 )
    return Feature_CET_User_AMD_Canonicalize_Perf_Fix__private_featureState & 1;
  else
    return Feature_CET_User_AMD_Canonicalize_Perf_Fix__private_IsEnabledFallback(
             (unsigned int)Feature_CET_User_AMD_Canonicalize_Perf_Fix__private_featureState,
             3LL);
}
