/*
 * XREFs of Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline @ 0x14060F844
 * Callers:
 *     PopPowerAdapterAdd @ 0x1407DCEF0 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterQueryStatus @ 0x140B76DFC (PopPowerAdapterQueryStatus.c)
 * Callees:
 *     Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledFallback @ 0x14060F880 (Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledFallback.c)
 */

__int64 Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PowerAdapterIrpCompleteFlagFix__private_featureState & 0x10) != 0 )
    return Feature_PowerAdapterIrpCompleteFlagFix__private_featureState & 1;
  else
    return Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledFallback(
             (unsigned int)Feature_PowerAdapterIrpCompleteFlagFix__private_featureState,
             3LL);
}
