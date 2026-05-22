/*
 * XREFs of ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0
 * Callers:
 *     ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18000B120 (-DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z @ 0x18000C35C (-MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z.c)
 *     ?SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x18000C670 (-SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18000CB74 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x18000D58C (-PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInpu.c)
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000D730 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPostProcessor@@@Z @ 0x18000DFB4 (-MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPost.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18001E93C (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001FAFC (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x180023EC0 (_lambda_d12edc8f4df206c0d98be8a6673aacf9_--operator().c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180024E38 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x18007BD80 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?MPCInputProviderBase_Destroy_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x1800823AC (-MPCInputProviderBase_Destroy_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z.c)
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x18009741C (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x1800B0FEC (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 *     ?MPC3DStateHelper_FireEventsOnInputThread_@ISMTracing@@QEAAX_N0@Z @ 0x1800B11FC (-MPC3DStateHelper_FireEventsOnInputThread_@ISMTracing@@QEAAX_N0@Z.c)
 *     ??$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_NAEAK$$QEA_N2020000@Z @ 0x1800B25C4 (--$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@.c)
 *     ?MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z @ 0x1800B6E2C (-MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z.c)
 *     ?OnMouseSnappedToGaze@MPCManager@@QEAAXXZ @ 0x1800B7C24 (-OnMouseSnappedToGaze@MPCManager@@QEAAXXZ.c)
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x1800B8618 (-SendHomeGesture@MPCManager@@QEAAXKK_KII@Z.c)
 *     ?SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z @ 0x1800B86E0 (-SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z.c)
 *     ?SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z @ 0x1800B8D70 (-SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z.c)
 *     ??$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA_N$$QEAPEAUIMPCTarget@@@Z @ 0x1800B94C4 (--$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA.c)
 *     ?ForcePrimaryInputType@MPCHolographicInputManager@@QEAAJW4InputType@@@Z @ 0x1800B9FDC (-ForcePrimaryInputType@MPCHolographicInputManager@@QEAAJW4InputType@@@Z.c)
 *     ?MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z @ 0x1800BAB24 (-MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z.c)
 *     ?MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800BAC10 (-MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?MPCHolographicInputManager_ForcedPrimary_@ISMTracing@@QEAAXK@Z @ 0x1800BAD20 (-MPCHolographicInputManager_ForcedPrimary_@ISMTracing@@QEAAXK@Z.c)
 *     ?MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z @ 0x1800BAD78 (-MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z.c)
 *     ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x1800BAEE8 (-MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z.c)
 *     ?MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KIK@Z @ 0x1800BB000 (-MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KIK@Z.c)
 *     ?OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z @ 0x1800BB1EC (-OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z.c)
 *     ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800BB328 (-OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800BB490 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 *     std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x1800BBD30 (std--_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call @ 0x1800BBD90 (std--_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_--_Do_call.c)
 *     ??$MPCGestureHandler_InjectRelease@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x1800BC7A4 (--$MPCGestureHandler_InjectRelease@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ??$MPCGestureHandler_PointerDown@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z @ 0x1800BC804 (--$MPCGestureHandler_PointerDown@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z.c)
 *     ??$MPCGestureHandler_PointerUp@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z @ 0x1800BC874 (--$MPCGestureHandler_PointerUp@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z.c)
 *     ??$MPCGestureHandler_PointerUpdated@AEAJAEAJAEAIAEAIAEAKAEAKAEAW4InputType@@@ISMTracing@@SAXAEAJ0AEAI1AEAK2AEAW4InputType@@@Z @ 0x1800BC8E4 (--$MPCGestureHandler_PointerUpdated@AEAJAEAJAEAIAEAIAEAKAEAKAEAW4InputType@@@ISMTracing@@SAXAEAJ.c)
 *     ??$MPCGestureHandler_StartScroll@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x1800BC96C (--$MPCGestureHandler_StartScroll@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ??$MPCGestureHandler_StartZoom@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x1800BC9CC (--$MPCGestureHandler_StartZoom@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ?DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD734 (-DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?MPCGestureHandler_InjectPress_@ISMTracing@@QEAAXJJKK@Z @ 0x1800BE270 (-MPCGestureHandler_InjectPress_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_InjectRelease_@ISMTracing@@QEAAXJJKK@Z @ 0x1800BE318 (-MPCGestureHandler_InjectRelease_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_PointerDown_@ISMTracing@@QEAAXJJIKK@Z @ 0x1800BE3C0 (-MPCGestureHandler_PointerDown_@ISMTracing@@QEAAXJJIKK@Z.c)
 *     ?MPCGestureHandler_PointerUp_@ISMTracing@@QEAAXJJIKK@Z @ 0x1800BE484 (-MPCGestureHandler_PointerUp_@ISMTracing@@QEAAXJJIKK@Z.c)
 *     ?MPCGestureHandler_PointerUpdated_@ISMTracing@@QEAAXJJIKKKK@Z @ 0x1800BE548 (-MPCGestureHandler_PointerUpdated_@ISMTracing@@QEAAXJJIKKKK@Z.c)
 *     ?MPCGestureHandler_StartScroll_@ISMTracing@@QEAAXJJKK@Z @ 0x1800BE62C (-MPCGestureHandler_StartScroll_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_StartZoom_@ISMTracing@@QEAAXJJKK@Z @ 0x1800BE6D4 (-MPCGestureHandler_StartZoom_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z @ 0x1800BEE50 (-MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z.c)
 *     ?MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800BEEEC (-MPCCursorManager_Update2DCursor_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?Update2DCursor@MPCCursorManager@@AEAAX_N@Z @ 0x1800BEF4C (-Update2DCursor@MPCCursorManager@@AEAAX_N@Z.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800BEFC4 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 *     ?GetPoints@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1800BFC70 (-GetPoints@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV-$vector@UPointData3D@@V-$.c)
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800C0E40 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z @ 0x1800C1F48 (--$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x1800C32D4 (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 *     ?OnSpatialNavigationCanceled@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationCanceledEventArgs@3456@@Z @ 0x1800C39B0 (-OnSpatialNavigationCanceled@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogni.c)
 *     ?OnSpatialNavigationCompleted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationCompletedEventArgs@3456@@Z @ 0x1800C3A20 (-OnSpatialNavigationCompleted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 *     ??$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@$$QEA_NAEAI@Z @ 0x1800C48D4 (--$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800C4C78 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ?MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x1800C58B8 (-MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800C5C74 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 *     ??$MPCPerfCounter_ReportPerf@AEAKAEAIAEAM@ISMTracing@@SAXAEAKAEAIAEAM@Z @ 0x1800C7784 (--$MPCPerfCounter_ReportPerf@AEAKAEAIAEAM@ISMTracing@@SAXAEAKAEAIAEAM@Z.c)
 *     ?MPCPerfCounter_ReportPerf_@ISMTracing@@QEAAXKIM@Z @ 0x1800C77D0 (-MPCPerfCounter_ReportPerf_@ISMTracing@@QEAAXKIM@Z.c)
 *     ??$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAKAEA_N@ISMTracing@@SAXAEAK00AEBK0000AEA_N@Z @ 0x1800CD21C (--$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAKAEA_N@ISMTraci.c)
 *     ?GameControllerRawInputProvider_UpdateFocusPids_@ISMTracing@@QEAAXAEBK0000000AEB_N@Z @ 0x1800CD5F0 (-GameControllerRawInputProvider_UpdateFocusPids_@ISMTracing@@QEAAXAEBK0000000AEB_N@Z.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800CF858 (-QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D1D1C (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D1FC4 (-OnSelect@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x1800FE7F0 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800FF5B8 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z @ 0x1800FF8E8 (-MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z.c)
 *     ?MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z @ 0x1800FF9F4 (-MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z.c)
 *     ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800FFAD0 (-MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z @ 0x1800FFBAC (-MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z.c)
 *     ?MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCTarget@@0_K@Z @ 0x1800FFC7C (-MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCTarget@@0_K@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800FFE4C (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180100408 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1801005E0 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1801007EC (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x180101558 (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 *     ?MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z @ 0x180101A74 (-MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z.c)
 *     ?OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x180101BE0 (-OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@Applicat.c)
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2AEBI2$$QEAM1@Z @ 0x1801BE888 (--$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2A.c)
 *     ??$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000000000000000$$QEAK@Z @ 0x1801BE934 (--$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000.c)
 *     ??$MPCSixDofProcessor_HomeEventUpdate@KAEAK@ISMTracing@@SAX$$QEAKAEAK@Z @ 0x1801BEAD4 (--$MPCSixDofProcessor_HomeEventUpdate@KAEAK@ISMTracing@@SAX$$QEAKAEAK@Z.c)
 *     ??$MPCSixDofProcessor_HomeHotkey_OnButtonsChanged@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z @ 0x1801BEB10 (--$MPCSixDofProcessor_HomeHotkey_OnButtonsChanged@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z.c)
 *     ??$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEBI@ISMTracing@@SAX$$QEAKAEA_NAEAKAEBM33333AEAM44444444444AEBI@Z @ 0x1801BEB4C (--$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEA.c)
 *     ?MPCGamepadProcessor_KeyboardInputEvent_@ISMTracing@@QEAAXKK@Z @ 0x1801C39F0 (-MPCGamepadProcessor_KeyboardInputEvent_@ISMTracing@@QEAAXKK@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z @ 0x1801C4C9C (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z.c)
 *     ??$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTracing@@SAXAEAKAEAM11111AEAJ2AEAH2211@Z @ 0x1801C5960 (--$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAH.c)
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x1801C5FC0 (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 *     ?MPCMouseProcessor_InjectPress_@ISMTracing@@QEAAXJJKKK@Z @ 0x1801C6D44 (-MPCMouseProcessor_InjectPress_@ISMTracing@@QEAAXJJKKK@Z.c)
 *     ?MPCMouseProcessor_InjectRelease_@ISMTracing@@QEAAXJJKKK@Z @ 0x1801C6E08 (-MPCMouseProcessor_InjectRelease_@ISMTracing@@QEAAXJJKKK@Z.c)
 *     ?ShouldAttachDevice@MPCEyeGazeProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x1801C8810 (-ShouldAttachDevice@MPCEyeGazeProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ @ 0x180096C38 (--1Completer@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18009A4BC (atexit.c)
 */

char __fastcall ISMTracing::IsEnabled()
{
  char v0; // bl
  _DWORD *v1; // rcx
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  WINBOOL v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v6; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  v6 = 0LL;
  v5 = 0;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v3 = &`ISMTracing::Instance'::`2'::wrapper;
    v6 = &qword_1802546A8;
    qword_1802546A8 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_1802546B0 = 0LL;
    byte_1802546B8 = 0;
    dword_1802546BC = 0;
    qword_1802546C0 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::Completer::~Completer(&v3);
  }
  v1 = (_DWORD *)v6[1];
  if ( v1 && *v1 )
    return 1;
  return v0;
}
