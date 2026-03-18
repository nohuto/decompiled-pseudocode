/*
 * XREFs of Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledDeviceUsageNoInline @ 0x140099758
 * Callers:
 *     ?GetBasicDisplayParams@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x140281820 (-GetBasicDisplayParams@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayPa.c)
 * Callees:
 *     Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledFallback @ 0x140099794 (Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledFallback.c)
 */

__int64 Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixDisplayIDMonitorSizeCalculation__private_featureState & 0x10) != 0 )
    return Feature_FixDisplayIDMonitorSizeCalculation__private_featureState & 1;
  else
    return Feature_FixDisplayIDMonitorSizeCalculation__private_IsEnabledFallback(
             (unsigned int)Feature_FixDisplayIDMonitorSizeCalculation__private_featureState,
             3LL);
}
