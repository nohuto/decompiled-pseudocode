/*
 * XREFs of Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline @ 0x14060B9E4
 * Callers:
 *     PopPowerAggregatorForceSessionSwitch @ 0x1407D69C0 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopPowerAggregatorInitialize @ 0x140D0B4DC (PopPowerAggregatorInitialize.c)
 * Callees:
 *     Feature_Servicing_LidCloseDisplayOff__private_IsEnabledFallback @ 0x14060BA20 (Feature_Servicing_LidCloseDisplayOff__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_LidCloseDisplayOff__private_featureState & 0x10) != 0 )
    return Feature_Servicing_LidCloseDisplayOff__private_featureState & 1;
  else
    return Feature_Servicing_LidCloseDisplayOff__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_LidCloseDisplayOff__private_featureState,
             3LL);
}
