/*
 * XREFs of ACPIRegisterForDeviceNotificationsByDeviceExtension @ 0x140049968
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x140047240 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIRegisterForDeviceNotifications2 @ 0x140049950 (ACPIRegisterForDeviceNotifications2.c)
 * Callees:
 *     ACPIRegisterForDeviceNotificationsByPowerInfo @ 0x1400530EC (ACPIRegisterForDeviceNotificationsByPowerInfo.c)
 */

__int64 __fastcall ACPIRegisterForDeviceNotificationsByDeviceExtension(__int64 a1)
{
  if ( !a1 || a1 == -376 )
    return 3221225486LL;
  else
    return ACPIRegisterForDeviceNotificationsByPowerInfo();
}
