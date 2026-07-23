/*
 * XREFs of Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledDeviceUsageNoInline @ 0x14060A5F4
 * Callers:
 *     PopThermalSxExit @ 0x140516740 (PopThermalSxExit.c)
 * Callees:
 *     Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledFallback @ 0x14060A630 (Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_ThermalSxExitRereadZones__private_featureState & 0x10) != 0 )
    return Feature_Servicing_ThermalSxExitRereadZones__private_featureState & 1;
  else
    return Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_ThermalSxExitRereadZones__private_featureState,
             3LL);
}
