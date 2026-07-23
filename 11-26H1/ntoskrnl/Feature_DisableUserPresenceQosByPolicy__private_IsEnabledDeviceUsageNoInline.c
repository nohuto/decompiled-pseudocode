/*
 * XREFs of Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline @ 0x140608E6C
 * Callers:
 *     PsComputeProcessPpmPolicy @ 0x140617D08 (PsComputeProcessPpmPolicy.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1409C17C0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AD8DD8 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     Feature_DisableUserPresenceQosByPolicy__private_IsEnabledFallback @ 0x140608EA8 (Feature_DisableUserPresenceQosByPolicy__private_IsEnabledFallback.c)
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
