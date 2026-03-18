/*
 * XREFs of Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14060636C
 * Callers:
 *     PsComputeProcessPpmPolicy @ 0x140614E6C (PsComputeProcessPpmPolicy.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140945E50 (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A9D254 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     Feature_DisableUserPresenceQosByPolicy__private_IsEnabledFallback @ 0x1406063A8 (Feature_DisableUserPresenceQosByPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisableUserPresenceQosByPolicy__private_featureState & 0x10) != 0 )
    return Feature_DisableUserPresenceQosByPolicy__private_featureState & 1;
  else
    return Feature_DisableUserPresenceQosByPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_DisableUserPresenceQosByPolicy__private_featureState,
             3LL);
}
