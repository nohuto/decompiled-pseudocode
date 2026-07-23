/*
 * XREFs of Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline @ 0x14060D314
 * Callers:
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14051704C (PpmHeteroHgsUpdateContainmentConfiguration.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmGetPolicyAction @ 0x140AD881C (PpmGetPolicyAction.c)
 *     PpmReapplyPerfPolicy @ 0x140AD8B10 (PpmReapplyPerfPolicy.c)
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     Feature_ReinitWpsMinEfficiency__private_IsEnabledFallback @ 0x14060D350 (Feature_ReinitWpsMinEfficiency__private_IsEnabledFallback.c)
 */

__int64 Feature_ReinitWpsMinEfficiency__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ReinitWpsMinEfficiency__private_featureState & 0x10) != 0 )
    return Feature_ReinitWpsMinEfficiency__private_featureState & 1;
  else
    return Feature_ReinitWpsMinEfficiency__private_IsEnabledFallback(
             (unsigned int)Feature_ReinitWpsMinEfficiency__private_featureState,
             3LL);
}
