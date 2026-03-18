/*
 * XREFs of HUBPDO_EvtOutOfBandwidthTimer @ 0x140018AC0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_UH3WET__private_IsEnabledDeviceUsageNoInline @ 0x140014B8C (Feature_UH3WET__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     WMI_FireNotification @ 0x14008FAC0 (WMI_FireNotification.c)
 *     WMI_FireNotificationOld @ 0x140090190 (WMI_FireNotificationOld.c)
 */

__int64 __fastcall HUBPDO_EvtOutOfBandwidthTimer(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2568))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v1,
         off_14006D158);
  if ( (unsigned int)Feature_UH3WET__private_IsEnabledDeviceUsageNoInline() )
    return WMI_FireNotification(v2, 1LL);
  else
    return WMI_FireNotificationOld(*(_QWORD *)v2, *(unsigned __int16 *)(v2 + 200), 1LL);
}
