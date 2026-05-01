/*
 * XREFs of ?CMEventCallback@GamingOverlayExperienceManager@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x180345880
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x18034B39C (-HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::CMEventCallback(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a2 )
    GamingOverlayExperienceManager::HandleXusbDeviceConnectionEvent(a2, a3);
  return 0LL;
}
