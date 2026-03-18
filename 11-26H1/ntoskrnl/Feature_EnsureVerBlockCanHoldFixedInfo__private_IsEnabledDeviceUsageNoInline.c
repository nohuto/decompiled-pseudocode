/*
 * XREFs of Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline @ 0x140714F90
 * Callers:
 *     AslpFileGetVersionBlock @ 0x14088DAFC (AslpFileGetVersionBlock.c)
 * Callees:
 *     Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledFallback @ 0x140714FCC (Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledFallback.c)
 */

__int64 Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EnsureVerBlockCanHoldFixedInfo__private_featureState & 0x10) != 0 )
    return Feature_EnsureVerBlockCanHoldFixedInfo__private_featureState & 1;
  else
    return Feature_EnsureVerBlockCanHoldFixedInfo__private_IsEnabledFallback(
             (unsigned int)Feature_EnsureVerBlockCanHoldFixedInfo__private_featureState,
             3LL);
}
