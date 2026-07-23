/*
 * XREFs of Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline @ 0x14063DD90
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140A3D144 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     Feature_TrustedLaunch__private_IsEnabledFallback @ 0x14063DDCC (Feature_TrustedLaunch__private_IsEnabledFallback.c)
 */

__int64 Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TrustedLaunch__private_featureState & 0x10) != 0 )
    return Feature_TrustedLaunch__private_featureState & 1;
  else
    return Feature_TrustedLaunch__private_IsEnabledFallback(
             (unsigned int)Feature_TrustedLaunch__private_featureState,
             3LL);
}
