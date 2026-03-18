/*
 * XREFs of ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14014B830
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     UserThreadCallout @ 0x140139A60 (UserThreadCallout.c)
 *     DrvProcessDxgkDisplayCallout @ 0x14013D67C (DrvProcessDxgkDisplayCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x140170DB4 (-UserInitialize@@YAJXZ.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401D2960 (xxxDisplayDiagBlackScreenDetected.c)
 *     NtUserChangeDisplaySettings @ 0x1401E21D0 (NtUserChangeDisplaySettings.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserSetDisplayConfig @ 0x1401E82B0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

void __fastcall CDisplayScenarioContextScope::~CDisplayScenarioContextScope(
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *this)
{
  if ( *(_BYTE *)this )
    DisplayScenarioContextDissociate(this + 1);
}
