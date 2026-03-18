/*
 * XREFs of Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1401B0DA4
 * Callers:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1400E1180 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EA660 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x140106F00 (-ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z.c)
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x14012C240 (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x14018A4C0 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?NeedsUpdateKeyboardLEDs@@YA_NXZ @ 0x14018A604 (-NeedsUpdateKeyboardLEDs@@YA_NXZ.c)
 *     ?UninitializeSensor@CBaseInput@@QEAAXXZ @ 0x14018AB08 (-UninitializeSensor@CBaseInput@@QEAAXXZ.c)
 *     UpdateKeyLights @ 0x14018D000 (UpdateKeyLights.c)
 *     NlsKbdSendIMENotification @ 0x14018D8F0 (NlsKbdSendIMENotification.c)
 *     UserPowerInfoCallout @ 0x1401B1014 (UserPowerInfoCallout.c)
 *     ?GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ @ 0x14020FA34 (-GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ.c)
 *     ?SensorInitialized@CBaseInput@@IEAA_NXZ @ 0x140210D04 (-SensorInitialized@CBaseInput@@IEAA_NXZ.c)
 * Callees:
 *     Feature_KeyboardLEDImprovements__private_IsEnabledFallback @ 0x1401B0DDC (Feature_KeyboardLEDImprovements__private_IsEnabledFallback.c)
 */

__int64 Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KeyboardLEDImprovements__private_featureState & 0x10) != 0 )
    return Feature_KeyboardLEDImprovements__private_featureState & 1;
  else
    return Feature_KeyboardLEDImprovements__private_IsEnabledFallback(
             (unsigned int)Feature_KeyboardLEDImprovements__private_featureState,
             3LL);
}
