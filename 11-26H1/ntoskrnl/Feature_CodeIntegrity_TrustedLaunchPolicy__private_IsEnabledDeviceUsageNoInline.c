/*
 * XREFs of Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14063DD34
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140A3D144 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledFallback @ 0x14063DD70 (Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CodeIntegrity_TrustedLaunchPolicy__private_featureState & 0x10) != 0 )
    return Feature_CodeIntegrity_TrustedLaunchPolicy__private_featureState & 1;
  else
    return Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_CodeIntegrity_TrustedLaunchPolicy__private_featureState,
             3LL);
}
