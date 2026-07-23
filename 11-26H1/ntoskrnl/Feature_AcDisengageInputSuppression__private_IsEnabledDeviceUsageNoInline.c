/*
 * XREFs of Feature_AcDisengageInputSuppression__private_IsEnabledDeviceUsageNoInline @ 0x14060EE0C
 * Callers:
 *     PopEvaluateInputSuppressionRequired @ 0x140CD922C (PopEvaluateInputSuppressionRequired.c)
 * Callees:
 *     Feature_AcDisengageInputSuppression__private_IsEnabledFallback @ 0x14060EE48 (Feature_AcDisengageInputSuppression__private_IsEnabledFallback.c)
 */

__int64 Feature_AcDisengageInputSuppression__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AcDisengageInputSuppression__private_featureState & 0x10) != 0 )
    return Feature_AcDisengageInputSuppression__private_featureState & 1;
  else
    return Feature_AcDisengageInputSuppression__private_IsEnabledFallback(
             (unsigned int)Feature_AcDisengageInputSuppression__private_featureState,
             3LL);
}
