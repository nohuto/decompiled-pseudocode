/*
 * XREFs of Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline @ 0x1406066D8
 * Callers:
 *     PopPowerAdapterAdd @ 0x1407DCEF0 (PopPowerAdapterAdd.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 *     PopBatteryInitialize @ 0x140B76BD0 (PopBatteryInitialize.c)
 *     PopBatteryInitPhaseTwo @ 0x140CDB010 (PopBatteryInitPhaseTwo.c)
 * Callees:
 *     Feature_Servicing_BatteryTestExempt__private_IsEnabledFallback @ 0x140606714 (Feature_Servicing_BatteryTestExempt__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_BatteryTestExempt__private_featureState & 0x10) != 0 )
    return Feature_Servicing_BatteryTestExempt__private_featureState & 1;
  else
    return Feature_Servicing_BatteryTestExempt__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_BatteryTestExempt__private_featureState,
             3LL);
}
