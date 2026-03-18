/*
 * XREFs of wil_details_IsEnabledFallback @ 0x14013A604
 * Callers:
 *     Feature_HandleManagerHardening__private_IsEnabledFallback @ 0x1401A5248 (Feature_HandleManagerHardening__private_IsEnabledFallback.c)
 *     Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledFallback @ 0x1401A529C (Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledFallback.c)
 *     Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledFallback @ 0x1401A52F0 (Feature_Servicing_RgnObjCopyHandleNotRetained__private_IsEnabledFallback.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledFallback @ 0x1401A5344 (Feature_SharedUserCritAndUIPI__private_IsEnabledFallback.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledFallback @ 0x1401A5398 (Feature_UIPIAlwaysOn__private_IsEnabledFallback.c)
 *     Feature_UserJobImprovement__private_IsEnabledFallback @ 0x1401A53EC (Feature_UserJobImprovement__private_IsEnabledFallback.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledFallback @ 0x1401A7110 (Feature_EliminateMitRitHandoff2__private_IsEnabledFallback.c)
 *     Feature_FHLfDwmThread__private_IsEnabledFallback @ 0x1401A7164 (Feature_FHLfDwmThread__private_IsEnabledFallback.c)
 *     Feature_LearningModeSupport__private_IsEnabledFallback @ 0x1401A7220 (Feature_LearningModeSupport__private_IsEnabledFallback.c)
 *     Feature_UIAccessToCapabilities__private_IsEnabledFallback @ 0x1401A7274 (Feature_UIAccessToCapabilities__private_IsEnabledFallback.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledFallback @ 0x1401A72C8 (Feature_Win32ProcessCapabilities__private_IsEnabledFallback.c)
 *     Feature_NTUserQoSSupportEx__private_IsEnabledFallback @ 0x1401A88B0 (Feature_NTUserQoSSupportEx__private_IsEnabledFallback.c)
 *     Feature_HEATInjectionUIAccess__private_IsEnabledFallback @ 0x1401A8F94 (Feature_HEATInjectionUIAccess__private_IsEnabledFallback.c)
 *     Feature_TouchpadPublicApis__private_IsEnabledFallback @ 0x1401A98C4 (Feature_TouchpadPublicApis__private_IsEnabledFallback.c)
 *     Feature_ResponsiblePid__private_IsEnabledFallback @ 0x1401AA380 (Feature_ResponsiblePid__private_IsEnabledFallback.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledFallback @ 0x1401ABEB0 (Feature_DispBrokerOptimizations__private_IsEnabledFallback.c)
 *     Feature_IncreaseSyncAlpcTimeoutValue__private_IsEnabledFallback @ 0x1401ABF04 (Feature_IncreaseSyncAlpcTimeoutValue__private_IsEnabledFallback.c)
 *     Feature_Bugfix_PassingRapidHpdInfoInSDC__private_IsEnabledFallback @ 0x1401AEC2C (Feature_Bugfix_PassingRapidHpdInfoInSDC__private_IsEnabledFallback.c)
 *     Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledFallback @ 0x1401AEC80 (Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledFallback.c)
 *     Feature_IsPrivilegedEx__private_IsEnabledFallback @ 0x1401AF470 (Feature_IsPrivilegedEx__private_IsEnabledFallback.c)
 *     Feature_DolbyVisionForcePresent__private_IsEnabledFallback @ 0x1401B0D88 (Feature_DolbyVisionForcePresent__private_IsEnabledFallback.c)
 *     Feature_KeyboardLEDImprovements__private_IsEnabledFallback @ 0x1401B0DDC (Feature_KeyboardLEDImprovements__private_IsEnabledFallback.c)
 *     Feature_RestartDWMViaSingleDWMControl__private_IsEnabledFallback @ 0x1401B0E30 (Feature_RestartDWMViaSingleDWMControl__private_IsEnabledFallback.c)
 *     Feature_HostServiceSessionInitFailure__private_IsEnabledFallback @ 0x1401B348C (Feature_HostServiceSessionInitFailure__private_IsEnabledFallback.c)
 *     Feature_ExposePTPButtonSupport__private_IsEnabledFallback @ 0x1401B4F50 (Feature_ExposePTPButtonSupport__private_IsEnabledFallback.c)
 *     Feature_GestureOnlyTouchpadParam2__private_IsEnabledFallback @ 0x1401B4FA4 (Feature_GestureOnlyTouchpadParam2__private_IsEnabledFallback.c)
 *     Feature_NotifyProcessCreateAlways__private_IsEnabledFallback @ 0x1401B6518 (Feature_NotifyProcessCreateAlways__private_IsEnabledFallback.c)
 *     Feature_PackagedComElevationSupport__private_IsEnabledFallback @ 0x1401B6534 (Feature_PackagedComElevationSupport__private_IsEnabledFallback.c)
 *     Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledFallback @ 0x1401B6B94 (Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledFallback.c)
 *     Feature_DestroyCacheDCNoisyAssert__private_IsEnabledFallback @ 0x1401B700C (Feature_DestroyCacheDCNoisyAssert__private_IsEnabledFallback.c)
 *     Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledFallback @ 0x1401B9C30 (Feature_AsyncKeyStateRecentDown_Removal2__private_IsEnabledFallback.c)
 *     Feature_DisplayDitheringSupport__private_IsEnabledFallback @ 0x1401B9C84 (Feature_DisplayDitheringSupport__private_IsEnabledFallback.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledFallback @ 0x1401B9CD8 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledFallback.c)
 *     Feature_LogColorPipelineStateInDispdiag__private_IsEnabledFallback @ 0x1401B9D2C (Feature_LogColorPipelineStateInDispdiag__private_IsEnabledFallback.c)
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledFallback @ 0x1401B9D80 (Feature_ScalarMultiplierForBrightness__private_IsEnabledFallback.c)
 *     Feature_SpiSetStickyKeysSizeCheck__private_IsEnabledFallback @ 0x1401C1578 (Feature_SpiSetStickyKeysSizeCheck__private_IsEnabledFallback.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledFallback @ 0x1401C40C8 (Feature_GDI_GlobalsOptimization__private_IsEnabledFallback.c)
 *     Feature_Servicing_Win32kRSFloodFillBoundingBox__private_IsEnabledFallback @ 0x1401C4AF8 (Feature_Servicing_Win32kRSFloodFillBoundingBox__private_IsEnabledFallback.c)
 *     Feature_1612503355__private_IsEnabledFallback @ 0x1401C61E4 (Feature_1612503355__private_IsEnabledFallback.c)
 *     Feature_Servicing_BsodDuringLolGameplay__private_IsEnabledFallback @ 0x1401C6238 (Feature_Servicing_BsodDuringLolGameplay__private_IsEnabledFallback.c)
 *     Feature_Servicing_LockHandleCache_TVS__private_IsEnabledFallback @ 0x1401C8198 (Feature_Servicing_LockHandleCache_TVS__private_IsEnabledFallback.c)
 *     Feature_CheckCurrentDispBrokerMode__private_IsEnabledFallback @ 0x1401CFF14 (Feature_CheckCurrentDispBrokerMode__private_IsEnabledFallback.c)
 *     Feature_DispDiagBlackScreen__private_IsEnabledFallback @ 0x1401CFF68 (Feature_DispDiagBlackScreen__private_IsEnabledFallback.c)
 *     Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledFallback @ 0x1401CFFBC (Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledFallback.c)
 *     Feature_DesktopDWMCursor__private_IsEnabledFallback @ 0x1401D077C (Feature_DesktopDWMCursor__private_IsEnabledFallback.c)
 *     Feature_TouchpadProps__private_IsEnabledFallback @ 0x1401D65C8 (Feature_TouchpadProps__private_IsEnabledFallback.c)
 *     Feature_RIMDeviceIoControlUMAFix__private_IsEnabledFallback @ 0x1401D7B48 (Feature_RIMDeviceIoControlUMAFix__private_IsEnabledFallback.c)
 *     Feature_RIMPointerReliability__private_IsEnabledFallback @ 0x1401D7B9C (Feature_RIMPointerReliability__private_IsEnabledFallback.c)
 *     Feature_RIMMaxCountRetries__private_IsEnabledFallback @ 0x1401E2124 (Feature_RIMMaxCountRetries__private_IsEnabledFallback.c)
 *     Feature_TouchpadExtendedPointerInfo__private_IsEnabledFallback @ 0x1401E2178 (Feature_TouchpadExtendedPointerInfo__private_IsEnabledFallback.c)
 *     Feature_InputWakeGuardInterval__private_IsEnabledFallback @ 0x1401E7588 (Feature_InputWakeGuardInterval__private_IsEnabledFallback.c)
 *     Feature_PTPNonConfidentLift__private_IsEnabledFallback @ 0x1401EF450 (Feature_PTPNonConfidentLift__private_IsEnabledFallback.c)
 *     Feature_AssertionFixes__private_IsEnabledFallback @ 0x1401F0E18 (Feature_AssertionFixes__private_IsEnabledFallback.c)
 *     Feature_PTPContactSuppression__private_IsEnabledFallback @ 0x1401F1860 (Feature_PTPContactSuppression__private_IsEnabledFallback.c)
 *     Feature_PTPMaxCount__private_IsEnabledFallback @ 0x1401F18B4 (Feature_PTPMaxCount__private_IsEnabledFallback.c)
 *     Feature_PointerMsgDataBugcheck__private_IsEnabledFallback @ 0x14020DF3C (Feature_PointerMsgDataBugcheck__private_IsEnabledFallback.c)
 *     Feature_PTPMouseTiming__private_IsEnabledFallback @ 0x1402118E4 (Feature_PTPMouseTiming__private_IsEnabledFallback.c)
 *     Feature_CheckPointConversionResult__private_IsEnabledFallback @ 0x140212720 (Feature_CheckPointConversionResult__private_IsEnabledFallback.c)
 *     Feature_EndInertiaOnKeyPress__private_IsEnabledFallback @ 0x140212774 (Feature_EndInertiaOnKeyPress__private_IsEnabledFallback.c)
 *     Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledFallback @ 0x1402131C0 (Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledFallback.c)
 *     Feature_TouchpadHaptics__private_IsEnabledFallback @ 0x140213840 (Feature_TouchpadHaptics__private_IsEnabledFallback.c)
 *     Feature_Bugfix_57240160__private_IsEnabledFallback @ 0x14021603C (Feature_Bugfix_57240160__private_IsEnabledFallback.c)
 *     Feature_FocusEndpointInitialization__private_IsEnabledFallback @ 0x140216090 (Feature_FocusEndpointInitialization__private_IsEnabledFallback.c)
 *     Feature_SkipRepeatedModifiers2__private_IsEnabledFallback @ 0x140217AF8 (Feature_SkipRepeatedModifiers2__private_IsEnabledFallback.c)
 *     Feature_FixInteractionTrackerScrollDirection__private_IsEnabledFallback @ 0x140222C7C (Feature_FixInteractionTrackerScrollDirection__private_IsEnabledFallback.c)
 *     Feature_FixMouseCoalescing__private_IsEnabledFallback @ 0x140222CD0 (Feature_FixMouseCoalescing__private_IsEnabledFallback.c)
 *     Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback @ 0x140222D24 (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback.c)
 *     Feature_MultiFingerTapImprovements__private_IsEnabledFallback @ 0x140225544 (Feature_MultiFingerTapImprovements__private_IsEnabledFallback.c)
 *     Feature_PTPButtonUpdates__private_IsEnabledFallback @ 0x140225598 (Feature_PTPButtonUpdates__private_IsEnabledFallback.c)
 *     Feature_PTPZoomImprovements__private_IsEnabledFallback @ 0x1402255EC (Feature_PTPZoomImprovements__private_IsEnabledFallback.c)
 *     Feature_UpdateMultiFingerTiming__private_IsEnabledFallback @ 0x140225640 (Feature_UpdateMultiFingerTiming__private_IsEnabledFallback.c)
 *     Feature_UMAccessWmsgpConnect__private_IsEnabledFallback @ 0x1402261C0 (Feature_UMAccessWmsgpConnect__private_IsEnabledFallback.c)
 *     Feature_EffectHash__private_IsEnabledFallback @ 0x1402267D8 (Feature_EffectHash__private_IsEnabledFallback.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledFallback @ 0x140227FE4 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledFallback.c)
 *     Feature_1282722105__private_IsEnabledFallback @ 0x140228F00 (Feature_1282722105__private_IsEnabledFallback.c)
 *     Feature_29159638__private_IsEnabledFallback @ 0x140228F54 (Feature_29159638__private_IsEnabledFallback.c)
 *     Feature_Capture_BufferCollection__private_IsEnabledFallback @ 0x14023B714 (Feature_Capture_BufferCollection__private_IsEnabledFallback.c)
 *     Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledFallback @ 0x14023B768 (Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledFallback.c)
 *     Feature_Capture_RequestFrameAPI__private_IsEnabledFallback @ 0x14023B7BC (Feature_Capture_RequestFrameAPI__private_IsEnabledFallback.c)
 *     Feature_2936862008__private_IsEnabledFallback @ 0x140240A10 (Feature_2936862008__private_IsEnabledFallback.c)
 *     Feature_FixCitInputDelegationAV__private_IsEnabledFallback @ 0x140240A64 (Feature_FixCitInputDelegationAV__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14013A6A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1401A5A68 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A5B78 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
    wil_details_FeatureReporting_ReportUsageToService(a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, a3);
  }
  return v5 & 1;
}
