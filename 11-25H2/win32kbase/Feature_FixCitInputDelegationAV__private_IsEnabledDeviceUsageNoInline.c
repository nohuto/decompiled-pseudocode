/*
 * XREFs of Feature_FixCitInputDelegationAV__private_IsEnabledDeviceUsageNoInline @ 0x140240A2C
 * Callers:
 *     ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x14007F53C (-CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     CitEnableKeyboardDelegation @ 0x140199788 (CitEnableKeyboardDelegation.c)
 * Callees:
 *     Feature_FixCitInputDelegationAV__private_IsEnabledFallback @ 0x140240A64 (Feature_FixCitInputDelegationAV__private_IsEnabledFallback.c)
 */

__int64 Feature_FixCitInputDelegationAV__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixCitInputDelegationAV__private_featureState & 0x10) != 0 )
    return Feature_FixCitInputDelegationAV__private_featureState & 1;
  else
    return Feature_FixCitInputDelegationAV__private_IsEnabledFallback(
             (unsigned int)Feature_FixCitInputDelegationAV__private_featureState,
             3LL);
}
