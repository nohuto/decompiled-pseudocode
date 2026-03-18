/*
 * XREFs of Feature_PTPContactSuppression__private_IsEnabledDeviceUsageNoInline @ 0x1401F1828
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1401842B0 (rimApplyPointerDevicePolicies.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x140184450 (rimDisplayOffPolicyUpdateStateAndApply.c)
 * Callees:
 *     Feature_PTPContactSuppression__private_IsEnabledFallback @ 0x1401F1860 (Feature_PTPContactSuppression__private_IsEnabledFallback.c)
 */

__int64 Feature_PTPContactSuppression__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PTPContactSuppression__private_featureState & 0x10) != 0 )
    return Feature_PTPContactSuppression__private_featureState & 1;
  else
    return Feature_PTPContactSuppression__private_IsEnabledFallback(
             (unsigned int)Feature_PTPContactSuppression__private_featureState,
             3LL);
}
