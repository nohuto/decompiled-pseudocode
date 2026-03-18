/*
 * XREFs of Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_IsEnabledDeviceUsageNoInline @ 0x140098CC4
 * Callers:
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x14027C314 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 * Callees:
 *     Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_IsEnabledFallback @ 0x140098D00 (Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_IsEnabledFallback.c)
 */

__int64 Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_featureState & 0x10) != 0 )
    return Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_featureState & 1;
  else
    return Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_IsEnabledFallback(
             (unsigned int)Feature_DolbyVisionVSVDBFallbackWithZeroMinLuminance__private_featureState,
             3LL);
}
