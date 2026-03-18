/*
 * XREFs of ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EDF8
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EA660 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1400F76B4 (DrvProcessDxgkDisplayCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x140135AA0 (-UserInitialize@@YAJXZ.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     UserThreadCallout @ 0x14016AE90 (UserThreadCallout.c)
 *     NtUserChangeDisplaySettings @ 0x14016EAB0 (NtUserChangeDisplaySettings.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016F3A0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserSetDisplayConfig @ 0x1401744E0 (NtUserSetDisplayConfig.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401AED90 (xxxDisplayDiagBlackScreenDetected.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     <none>
 */

void __fastcall CDisplayScenarioContextScope::~CDisplayScenarioContextScope(
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *this)
{
  if ( *(_BYTE *)this )
    DisplayScenarioContextDissociate(this + 1);
}
