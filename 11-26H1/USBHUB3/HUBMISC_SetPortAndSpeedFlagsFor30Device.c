/*
 * XREFs of HUBMISC_SetPortAndSpeedFlagsFor30Device @ 0x1400339F4
 * Callers:
 *     HUBPSM30_IssuingAttachDeviceToDsm @ 0x140014070 (HUBPSM30_IssuingAttachDeviceToDsm.c)
 *     HUBPSM30_IssuingAttachDeviceWithResetToDsm @ 0x1400140A0 (HUBPSM30_IssuingAttachDeviceWithResetToDsm.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140010074 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140010624 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall HUBMISC_SetPortAndSpeedFlagsFor30Device(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 DeviceObjectExtension_low; // [rsp+30h] [rbp+8h]

  DeviceObjectExtension_low = LODWORD(WPP_MAIN_CB.DeviceObjectExtension);
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 0x10) == 0 )
  {
    LODWORD(DeviceObjectExtension_low) = LODWORD(WPP_MAIN_CB.DeviceObjectExtension) | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_UISCSF__private_descriptor,
      DeviceObjectExtension_low,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      DeviceObjectExtension_low,
      3,
      (__int64)&Feature_UISCSF__private_descriptor);
  }
  v2 = *(_QWORD *)(a1 + 1328);
  switch ( *(_DWORD *)(a1 + 188) & 0xF )
  {
    case 5:
      *(_DWORD *)(v2 + 192) = 4;
      break;
    case 6:
      *(_DWORD *)(v2 + 192) = 5;
      break;
    case 7:
      *(_DWORD *)(v2 + 192) = 6;
      break;
    default:
      *(_DWORD *)(v2 + 192) = 3;
      break;
  }
  result = *(_QWORD *)(a1 + 1328);
  *(_DWORD *)(result + 1464) |= 0x20800u;
  return result;
}
