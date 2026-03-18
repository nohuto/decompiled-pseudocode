/*
 * XREFs of Feature_TouchpadProps__private_IsEnabledDeviceUsageNoInline @ 0x1401D6590
 * Callers:
 *     ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x1401810B0 (-PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z.c)
 *     ?RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401D5E2C (-RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 * Callees:
 *     Feature_TouchpadProps__private_IsEnabledFallback @ 0x1401D65C8 (Feature_TouchpadProps__private_IsEnabledFallback.c)
 */

__int64 Feature_TouchpadProps__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TouchpadProps__private_featureState & 0x10) != 0 )
    return Feature_TouchpadProps__private_featureState & 1;
  else
    return Feature_TouchpadProps__private_IsEnabledFallback(
             (unsigned int)Feature_TouchpadProps__private_featureState,
             3LL);
}
