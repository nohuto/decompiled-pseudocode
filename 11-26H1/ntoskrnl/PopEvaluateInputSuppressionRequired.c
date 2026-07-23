/*
 * XREFs of PopEvaluateInputSuppressionRequired @ 0x140CD922C
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052F77C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140534EB0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     Feature_AcDisengageInputSuppression__private_IsEnabledDeviceUsageNoInline @ 0x14060EE0C (Feature_AcDisengageInputSuppression__private_IsEnabledDeviceUsageNoInline.c)
 *     EmClientQueryRuleState @ 0x140C09B60 (EmClientQueryRuleState.c)
 */

__int64 PopEvaluateInputSuppressionRequired()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)&stru_140E67200.WaitBlockFill11[88];
  if ( *(_DWORD *)&stru_140E67200.WaitBlockFill11[88] && stru_140E67200.WaitBlockFill6[80] )
  {
    if ( PopLidStateForInputSuppressionOverride != -1 )
      PopIgnoreLidStateForInputSuppression = PopLidStateForInputSuppressionOverride != 0;
    if ( !(unsigned int)Feature_AcDisengageInputSuppression__private_IsEnabledDeviceUsageNoInline() )
    {
      v1 = (unsigned int)Feature_AggressiveInputSuppression__private_featureState;
      if ( (Feature_AggressiveInputSuppression__private_featureState & 0x10) == 0 )
      {
        LODWORD(v1) = Feature_AggressiveInputSuppression__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_AggressiveInputSuppression__private_descriptor,
          Feature_AggressiveInputSuppression__private_featureState | 1,
          3);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v1,
          3,
          (__int64)&Feature_AggressiveInputSuppression__private_descriptor);
      }
      PopInputSuppressionIgnorePowerSource = 1;
    }
    LODWORD(v1) = 1;
    result = EmClientQueryRuleState(&GUID_EM_RULE_ALLOW_INPUT_SUPPRESSION_NOTIFICATION, &v1);
    if ( (_DWORD)v1 == 2 )
    {
      PopEnableInputSuppression = 1;
    }
    else
    {
      result = (unsigned int)PopEnableInputSuppressionOverride;
      PopEnableInputSuppression = 0;
      if ( PopEnableInputSuppressionOverride != -1 )
        PopEnableInputSuppression = PopEnableInputSuppressionOverride != 0;
    }
  }
  return result;
}
