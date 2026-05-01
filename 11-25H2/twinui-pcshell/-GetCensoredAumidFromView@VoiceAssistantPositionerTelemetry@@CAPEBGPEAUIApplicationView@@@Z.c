/*
 * XREFs of ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x18009051C
 * Callers:
 *     ?StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18008FF44 (-StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ?StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1804E8F1C (-StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry.c)
 *     ?StartActivity@VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1804E9210 (-StartActivity@VAPositioner_HandleSwitchToViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXP.c)
 *     ?StartActivity@VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1804E92C4 (-StartActivity@VAPositioner_InitializePositionActivity@VoiceAssistantPositionerTelemetry@@QEAAXP.c)
 *     ?StartActivity@VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1804E95F8 (-StartActivity@VAPositioner_OnViewClosingActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIA.c)
 *     ?StartActivity@VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@UtagSIZE@@@Z @ 0x1804E96AC (-StartActivity@VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIAppl.c)
 *     ?Stop@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1804E9A44 (-Stop@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 *     ?VAPositioner_AppViewDestroyed_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1804EBE74 (-VAPositioner_AppViewDestroyed_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z.c)
 *     ?VAPositioner_CacheViewToManage_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1804EBEE0 (-VAPositioner_CacheViewToManage_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@.c)
 *     ?VAPositioner_ControlLostHelper_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1804EBF4C (-VAPositioner_ControlLostHelper_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@.c)
 *     ?VAPositioner_CreateAppViewOperationToUpdateView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@_NUtagRECT@@HHUtagSIZE@@@Z @ 0x1804EBFB8 (-VAPositioner_CreateAppViewOperationToUpdateView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIA.c)
 *     ?VAPositioner_HandleRecoveryForView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1804EC0CC (-VAPositioner_HandleRecoveryForView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationVie.c)
 *     ?VAPositioner_HideView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1804EC138 (-VAPositioner_HideView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x180090598 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
const unsigned __int16 *__fastcall VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(
        struct IApplicationView *a1)
{
  __int64 v1; // rax
  const WCHAR *v2; // rcx
  const unsigned __int16 *v3; // rax
  const WCHAR *v4; // rbx
  LPVOID pv; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  pv = 0LL;
  v1 = *(_QWORD *)a1;
  v7 = -1LL;
  v8 = -1LL;
  (*(void (__fastcall **)(struct IApplicationView *, LPVOID *))(v1 + 136))(a1, &pv);
  v2 = (const WCHAR *)pv;
  pv = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  v3 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v2);
  v4 = &LocaleName;
  if ( v3 )
    v4 = v3;
  if ( pv )
    CoTaskMemFree(pv);
  return v4;
}
