/*
 * XREFs of wil_details_IsEnabledFallback @ 0x140269C88
 * Callers:
 *     Feature_DesktopDWMCursor__private_IsEnabledFallback @ 0x140269C6C (Feature_DesktopDWMCursor__private_IsEnabledFallback.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledFallback @ 0x140270A6C (Feature_Win32ProcessCapabilities__private_IsEnabledFallback.c)
 *     Feature_3444625720__private_IsEnabledFallback @ 0x140272090 (Feature_3444625720__private_IsEnabledFallback.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledFallback @ 0x1402720E4 (Feature_ApplyWindowActionConvergence__private_IsEnabledFallback.c)
 *     Feature_FixArrangeAnimateFlickering2__private_IsEnabledFallback @ 0x140272138 (Feature_FixArrangeAnimateFlickering2__private_IsEnabledFallback.c)
 *     Feature_FixSwpNoActivateAddedViaPosChanging2__private_IsEnabledFallback @ 0x14027218C (Feature_FixSwpNoActivateAddedViaPosChanging2__private_IsEnabledFallback.c)
 *     Feature_NTUserQoSSupportEx__private_IsEnabledFallback @ 0x1402721E0 (Feature_NTUserQoSSupportEx__private_IsEnabledFallback.c)
 *     Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledFallback @ 0x140272234 (Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledFallback.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledFallback @ 0x140272288 (Feature_SharedUserCritAndUIPI__private_IsEnabledFallback.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledFallback @ 0x1402735F8 (Feature_DispBrokerOptimizations__private_IsEnabledFallback.c)
 *     Feature_FixCursorShadowUpdate__private_IsEnabledFallback @ 0x140273F04 (Feature_FixCursorShadowUpdate__private_IsEnabledFallback.c)
 *     Feature_ShowHideCursorWinEventFix__private_IsEnabledFallback @ 0x140273F58 (Feature_ShowHideCursorWinEventFix__private_IsEnabledFallback.c)
 *     Feature_FixMisdeliveredRawInput__private_IsEnabledFallback @ 0x1402750F4 (Feature_FixMisdeliveredRawInput__private_IsEnabledFallback.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledFallback @ 0x140275148 (Feature_FixRawInputSendMessageForwarding__private_IsEnabledFallback.c)
 *     Feature_Bugfix_57240160__private_IsEnabledFallback @ 0x140276FE0 (Feature_Bugfix_57240160__private_IsEnabledFallback.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledFallback @ 0x140277034 (Feature_EliminateMitRitHandoff2__private_IsEnabledFallback.c)
 *     Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback @ 0x140277088 (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback.c)
 *     Feature_InputInjectionDoInputCheck__private_IsEnabledFallback @ 0x1402770DC (Feature_InputInjectionDoInputCheck__private_IsEnabledFallback.c)
 *     Feature_RawMouseFlush__private_IsEnabledFallback @ 0x140277130 (Feature_RawMouseFlush__private_IsEnabledFallback.c)
 *     Feature_ReserveSystemKeyCombination__private_IsEnabledFallback @ 0x140277184 (Feature_ReserveSystemKeyCombination__private_IsEnabledFallback.c)
 *     Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledFallback @ 0x1402771D8 (Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledFallback.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledFallback @ 0x14027722C (Feature_UIPIAlwaysOn__private_IsEnabledFallback.c)
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledFallback @ 0x14027A118 (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledFallback.c)
 *     Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledFallback @ 0x14027A16C (Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledFallback.c)
 *     Feature_ResponsiblePid__private_IsEnabledFallback @ 0x14027A1C0 (Feature_ResponsiblePid__private_IsEnabledFallback.c)
 *     Feature_SetShellWindow__private_IsEnabledFallback @ 0x14027A214 (Feature_SetShellWindow__private_IsEnabledFallback.c)
 *     Feature_ShellWinKeyUpdate__private_IsEnabledFallback @ 0x14027A268 (Feature_ShellWinKeyUpdate__private_IsEnabledFallback.c)
 *     Feature_HEATInjectionUIAccess__private_IsEnabledFallback @ 0x14027AF48 (Feature_HEATInjectionUIAccess__private_IsEnabledFallback.c)
 *     Feature_PointerMsgDataBugcheck__private_IsEnabledFallback @ 0x14027C494 (Feature_PointerMsgDataBugcheck__private_IsEnabledFallback.c)
 *     Feature_AbydosMessageInsertionPointFix__private_IsEnabledFallback @ 0x140281B74 (Feature_AbydosMessageInsertionPointFix__private_IsEnabledFallback.c)
 *     Feature_MiPTransform__private_IsEnabledFallback @ 0x140281BC8 (Feature_MiPTransform__private_IsEnabledFallback.c)
 *     Feature_TouchpadPublicApis__private_IsEnabledFallback @ 0x140281C1C (Feature_TouchpadPublicApis__private_IsEnabledFallback.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledFallback @ 0x140281C70 (Feature_UserModeNonClientScrollBars2__private_IsEnabledFallback.c)
 *     Feature_YieldInputQueue2__private_IsEnabledFallback @ 0x140281CC4 (Feature_YieldInputQueue2__private_IsEnabledFallback.c)
 *     Feature_UserJobImprovement__private_IsEnabledFallback @ 0x1402832E0 (Feature_UserJobImprovement__private_IsEnabledFallback.c)
 *     Feature_IsPrivilegedEx__private_IsEnabledFallback @ 0x1402836B8 (Feature_IsPrivilegedEx__private_IsEnabledFallback.c)
 *     Feature_HtTransparentDisabledFix__private_IsEnabledFallback @ 0x1402842A4 (Feature_HtTransparentDisabledFix__private_IsEnabledFallback.c)
 *     Feature_HostServiceSessionInitFailure__private_IsEnabledFallback @ 0x1402855B4 (Feature_HostServiceSessionInitFailure__private_IsEnabledFallback.c)
 *     Feature_W32PageEntireDriverOnlyOncePerBoot__private_IsEnabledFallback @ 0x140285608 (Feature_W32PageEntireDriverOnlyOncePerBoot__private_IsEnabledFallback.c)
 *     Feature_HandleHookDestroyedDuringCallout__private_IsEnabledFallback @ 0x140286DA0 (Feature_HandleHookDestroyedDuringCallout__private_IsEnabledFallback.c)
 *     Feature_WallpaperInvalidate__private_IsEnabledFallback @ 0x140287A10 (Feature_WallpaperInvalidate__private_IsEnabledFallback.c)
 *     Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledFallback @ 0x1402880A8 (Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledFallback.c)
 *     Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledFallback @ 0x140288690 (Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledFallback.c)
 *     Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledFallback @ 0x1402886E4 (Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledFallback.c)
 *     Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledFallback @ 0x140288738 (Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledFallback.c)
 *     Feature_NotifyProcessCreateAlways__private_IsEnabledFallback @ 0x14028A30C (Feature_NotifyProcessCreateAlways__private_IsEnabledFallback.c)
 *     Feature_PackagedComElevationSupport__private_IsEnabledFallback @ 0x14028A328 (Feature_PackagedComElevationSupport__private_IsEnabledFallback.c)
 *     Feature_C2DAndLLKbdHook__private_IsEnabledFallback @ 0x14028B958 (Feature_C2DAndLLKbdHook__private_IsEnabledFallback.c)
 *     Feature_C2DCancelOnNonModifierUp__private_IsEnabledFallback @ 0x14028B9AC (Feature_C2DCancelOnNonModifierUp__private_IsEnabledFallback.c)
 *     Feature_LetOOBEHotKeyBE__private_IsEnabledFallback @ 0x14028BA00 (Feature_LetOOBEHotKeyBE__private_IsEnabledFallback.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback @ 0x14028BC2C (Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback.c)
 *     Feature_DialTracing__private_IsEnabledFallback @ 0x14028D730 (Feature_DialTracing__private_IsEnabledFallback.c)
 *     Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledFallback @ 0x14029438C (Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledFallback.c)
 *     Feature_FHLfDwmThread__private_IsEnabledFallback @ 0x1402943E0 (Feature_FHLfDwmThread__private_IsEnabledFallback.c)
 *     Feature_NextWindow_ForegroundHackRemoval__private_IsEnabledFallback @ 0x140294434 (Feature_NextWindow_ForegroundHackRemoval__private_IsEnabledFallback.c)
 *     Feature_PromotePrimaryPointerInputApi__private_IsEnabledFallback @ 0x140294488 (Feature_PromotePrimaryPointerInputApi__private_IsEnabledFallback.c)
 *     Feature_Servicing_NtUserQuerySendMessageTelemetry__private_IsEnabledFallback @ 0x1402944DC (Feature_Servicing_NtUserQuerySendMessageTelemetry__private_IsEnabledFallback.c)
 *     Feature_TouchpadHaptics__private_IsEnabledFallback @ 0x140294530 (Feature_TouchpadHaptics__private_IsEnabledFallback.c)
 *     Feature_KeyboardLEDImprovements__private_IsEnabledFallback @ 0x1402A5900 (Feature_KeyboardLEDImprovements__private_IsEnabledFallback.c)
 *     Feature_FixSizeFromArrangeNearTop__private_IsEnabledFallback @ 0x1402AC350 (Feature_FixSizeFromArrangeNearTop__private_IsEnabledFallback.c)
 *     Feature_MigrateCheckpointForSSWP__private_IsEnabledFallback @ 0x1402AC3A4 (Feature_MigrateCheckpointForSSWP__private_IsEnabledFallback.c)
 *     Feature_ExposePTPButtonSupport__private_IsEnabledFallback @ 0x1402AF73C (Feature_ExposePTPButtonSupport__private_IsEnabledFallback.c)
 *     Feature_GestureOnlyTouchpadParam2__private_IsEnabledFallback @ 0x1402AF790 (Feature_GestureOnlyTouchpadParam2__private_IsEnabledFallback.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledFallback @ 0x1402B318C (Feature_MsgUseCSRSSTrueIL__private_IsEnabledFallback.c)
 *     Feature_AssertionFixes__private_IsEnabledFallback @ 0x1402B6094 (Feature_AssertionFixes__private_IsEnabledFallback.c)
 *     Feature_CreateWindowInBandCapabilities__private_IsEnabledFallback @ 0x1402B60E8 (Feature_CreateWindowInBandCapabilities__private_IsEnabledFallback.c)
 *     Feature_QoSCleanupChildWindow__private_IsEnabledFallback @ 0x1402B613C (Feature_QoSCleanupChildWindow__private_IsEnabledFallback.c)
 *     Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledFallback @ 0x1402B6190 (Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledFallback.c)
 *     Feature_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledFallback @ 0x1402B61E4 (Feature_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledFallback.c)
 *     Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledFallback @ 0x1402BA390 (Feature_CaptionTruncatedUTF8CodePage__private_IsEnabledFallback.c)
 *     Feature_Servicing_ComponentServicesFreeze__private_IsEnabledFallback @ 0x1402F3AB4 (Feature_Servicing_ComponentServicesFreeze__private_IsEnabledFallback.c)
 *     Feature_1254418747__private_IsEnabledFallback @ 0x1402FBBC8 (Feature_1254418747__private_IsEnabledFallback.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledFallback @ 0x1402FDDA4 (Feature_GDI_GlobalsOptimization__private_IsEnabledFallback.c)
 *     Feature_GDI_GB18030_2022A__private_IsEnabledFallback @ 0x14030E658 (Feature_GDI_GB18030_2022A__private_IsEnabledFallback.c)
 *     Feature_Servicing_EudcLiveDumpRemoval__private_IsEnabledFallback @ 0x14030E6AC (Feature_Servicing_EudcLiveDumpRemoval__private_IsEnabledFallback.c)
 *     Feature_1251264824__private_IsEnabledFallback @ 0x14030F40C (Feature_1251264824__private_IsEnabledFallback.c)
 *     Feature_Servicing_AddWppToGre__private_IsEnabledFallback @ 0x14030FC4C (Feature_Servicing_AddWppToGre__private_IsEnabledFallback.c)
 *     Feature_Servicing_BrushHTVfree__private_IsEnabledFallback @ 0x14032195C (Feature_Servicing_BrushHTVfree__private_IsEnabledFallback.c)
 *     Feature_Servicing_GreDrawStreamAPIDCOBJ__private_IsEnabledFallback @ 0x140331900 (Feature_Servicing_GreDrawStreamAPIDCOBJ__private_IsEnabledFallback.c)
 *     Feature_2056530233__private_IsEnabledFallback @ 0x140337F3C (Feature_2056530233__private_IsEnabledFallback.c)
 *     Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledFallback @ 0x140338ED4 (Feature_Servicing_MonitorATMAPIsAndBackDoorEvents__private_IsEnabledFallback.c)
 *     Feature_1522854203__private_IsEnabledFallback @ 0x14033ADF0 (Feature_1522854203__private_IsEnabledFallback.c)
 *     Feature_1886439739__private_IsEnabledFallback @ 0x14033AE44 (Feature_1886439739__private_IsEnabledFallback.c)
 *     Feature_Servicing_EngCreateBitmapMemoryLeak__private_IsEnabledFallback @ 0x14033AE98 (Feature_Servicing_EngCreateBitmapMemoryLeak__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401ADD18 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14026F27C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x140270E74 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, _QWORD *a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2, 1LL);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, a3);
  }
  return v5 & 1;
}
