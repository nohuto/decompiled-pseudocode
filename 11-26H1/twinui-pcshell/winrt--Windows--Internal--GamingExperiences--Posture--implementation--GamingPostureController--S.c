/*
 * XREFs of winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032DD20
 * Callers:
 *     ?SetGamingPostureStateAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@67@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@0@Z @ 0x18032F1CC (-SetGamingPostureStateAsync@GamingPostureController@implementation@Posture@GamingExperiences@Int.c)
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800283DC (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800C89D8 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800CA6B4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800F7638 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801D0FF4 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?get_strong@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@QEAA?AU?$com_ptr@VCopilotHotkeyManager@@@2@XZ @ 0x1801EBF6C (-get_strong@-$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWin.c)
 *     ?value@?$optional@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@std@@QEGAAAEAW4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@XZ @ 0x180201AC4 (-value@-$optional@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@w.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028038C (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18028BF74 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??$wnf_publish@H@wil@@YAXAEBU_WNF_STATE_NAME@@AEBH@Z @ 0x1802AC13C (--$wnf_publish@H@wil@@YAXAEBU_WNF_STATE_NAME@@AEBH@Z.c)
 *     ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x1802B5A0C (--0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@QEBG@Z @ 0x1802BD11C (--4hstring@winrt@@QEAAAEAU01@QEBG@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1802C78AC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$EndSession@PEAG@GamingPostureCoreTelemetryProvider@@SAX$$QEAPEAG@Z @ 0x180325940 (--$EndSession@PEAG@GamingPostureCoreTelemetryProvider@@SAX$$QEAPEAG@Z.c)
 *     ??$StartSession@PEAG@GamingPostureCoreTelemetryProvider@@SAX$$QEAPEAG@Z @ 0x180325EB0 (--$StartSession@PEAG@GamingPostureCoreTelemetryProvider@@SAX$$QEAPEAG@Z.c)
 *     ??$TriedLaunchingApp@AEB_N@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAXAEB_N@Z @ 0x180325F20 (--$TriedLaunchingApp@AEB_N@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEA.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@experimental@std@@@Z @ 0x180326020 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Foundation.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@@?$await_adapter@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@@experimental@std@@@Z @ 0x18032605C (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGa.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@@experimental@std@@@Z @ 0x180326094 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@@timespan_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@@experimental@std@@@Z @ 0x1803260CC (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@_ea_1803260CC.c)
 *     ??$await_transform@UIAsyncAction@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA$$QEAUIAsyncAction@Foundation@Windows@2@$$QEAU3452@@Z @ 0x180326108 (--$await_transform@UIAsyncAction@Foundation@Windows@winrt@@@-$promise_base@Upromise_type@-$corou.c)
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x180326550 (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     ??$wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180328108 (--$wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ??1?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ @ 0x180328D64 (--1-$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x180328DF0 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180328E2C (--1-$com_ptr_t@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@Ue.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180328F74 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUG.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180328FDC (--1-$test_data_control@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@.c)
 *     ??1SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x1803291C8 (--1SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x180329200 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x180329228 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ??C?$test_data_control@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEBAPEAV?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@1@XZ @ 0x1803293AC (--C-$test_data_control@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@1@XZ @ 0x1803293B8 (--C-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@ti.c)
 *     ?BeginStateChange@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAXXZ @ 0x180329C20 (-BeginStateChange@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAXXZ.c)
 *     ?CheckConfigurationPrerequisitesAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@XZ @ 0x18032A13C (-CheckConfigurationPrerequisitesAsync@GamingPostureController@implementation@Posture@GamingExper.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18032A41C (-ContinueOnCurrentThread@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$.c)
 *     ?CreateSystemDialog@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUGamingPostureSystemDialog@34567@AEBUhstring@7@AEBUguid@7@@Z @ 0x18032A600 (-CreateSystemDialog@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Wi.c)
 *     ?HandleEnterFSEDialogResult@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@AEAAJUhstring@7@AEAVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@@Z @ 0x18032C500 (-HandleEnterFSEDialogResult@GamingPostureController@implementation@Posture@GamingExperiences@Int.c)
 *     ?IncrementW@TraceLoggingCorrelationVector@@QEAA_NPEAG@Z @ 0x18032C6B4 (-IncrementW@TraceLoggingCorrelationVector@@QEAA_NPEAG@Z.c)
 *     ?PublishedWnf@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAXXZ @ 0x18032D1BC (-PublishedWnf@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAXXZ.c)
 *     ?SignaledInProgressStateChangeEvent@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAXXZ @ 0x18032F3E4 (-SignaledInProgressStateChangeEvent@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProv.c)
 *     ?ToStringW@TraceLoggingCorrelationVector@@QEAA_NPEAG@Z @ 0x18032F8E0 (-ToStringW@TraceLoggingCorrelationVector@@QEAA_NPEAG@Z.c)
 *     ?TryLaunchGamingAppAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@UUri@967@@Z @ 0x180330004 (-TryLaunchGamingAppAsync@GamingPostureController@implementation@Posture@GamingExperiences@Intern.c)
 *     ?WaitForInProgressStateChange@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAXXZ @ 0x1803300E0 (-WaitForInProgressStateChange@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ @ 0x1803306B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@QEAA_NXZ @ 0x1803306F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59011247@@@details@wil@@QEAA_NXZ @ 0x180330734 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59011247@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59783520@@@details@wil@@QEAA_NXZ @ 0x180330770 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59783520@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x1803307EC (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18033080C (-await_resume@-$await_adapter@U-$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Found.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180330894 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QE.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x180330924 (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x180330970 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1803309B4 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1803309B4.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180330F40 (-ensure_data@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details.c)
 *     ?reset@?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAAXXZ @ 0x180332EB4 (-reset@-$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAAXXZ.c)
 *     ?CurrentSessionId@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@@Z @ 0x180335778 (-CurrentSessionId@GamingPostureConfiguration@implementation@Posture@GamingExperienc_ea_180335778.c)
 *     ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA_NXZ @ 0x180335958 (-EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperienc_ea_180335958.c)
 */

// Hidden C++ exception states: #wind=20 #try_helpers=2
void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync__ResumeCoro_1(
        __int64 a1)
{
  __int64 v2; // r15
  wil::ActivityThreadWatcher *v3; // rax
  _QWORD *v4; // rax
  char v5; // bl
  char v6; // bl
  char v7; // di
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  wil::ActivityThreadWatcher *v11; // rax
  __int64 *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *v17; // rax
  unsigned int v18; // eax
  void **v19; // rbx
  char v20; // bl
  __int64 v21; // rax
  int v22; // ecx
  void *v23; // rdx
  char v24; // al
  int v25; // eax
  __int64 v26; // rcx
  const struct winrt::impl::slim_source_location *v27; // rax
  int v28; // ebx
  bool v29; // al
  const unsigned __int16 *v30; // rdx
  __int64 v31; // r14
  const unsigned __int16 *v32; // kr18_8
  _QWORD *v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  wil::ActivityThreadWatcher *v37; // rax
  __int64 v38; // rbx
  int v39; // edi
  wil::ActivityThreadWatcher *v40; // rax
  int v41; // edi
  int v42; // edi
  int v43; // eax
  unsigned int v44; // r8d
  volatile signed __int32 **v45; // rax
  __int64 v46; // rsi
  const unsigned __int16 **v47; // rbx
  __int64 v48; // rdi
  char v49; // al
  TraceLoggingCorrelationVector *v50; // rcx
  unsigned __int16 *v51; // rdx
  winrt::hstring *v52; // rax
  winrt::Windows::Foundation::Uri *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdi
  HWND WindowW; // rax
  __int64 *v58; // rax
  __int16 v59; // cx
  HWND v60; // rax
  char v61; // r15
  __int64 v62; // rdi
  wil::ActivityThreadWatcher *v63; // rax
  __int64 *v64; // rbx
  wil::ActivityThreadWatcher *v65; // rax
  wil::ActivityThreadWatcher *v66; // rax
  __int64 v67; // rbx
  void *v68; // rdx
  signed int v69; // esi
  __int64 *v70; // rax
  unsigned int v71; // eax
  __int64 v72; // [rsp+20h] [rbp-188h]
  _BYTE pExceptionObject[112]; // [rsp+60h] [rbp-148h] BYREF
  const unsigned __int16 *v74; // [rsp+D0h] [rbp-D8h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v72 = a1;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_128;
    case 2:
      v2 = *(_QWORD *)(a1 + 1544);
      winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::get_strong(
        v2,
        (_QWORD *)(a1 + 16));
      *(_BYTE *)(a1 + 104) = 0;
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
      {
        v3 = wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
               (struct wil::details::IFailureCallback *)(a1 + 1560),
               (wil::ActivityThreadWatcher *)(a1 + 112));
        std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>(a1 + 32, (__int64)v3);
        wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 112));
      }
      *(_QWORD *)(a1 + 184) = 0LL;
      v4 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::ensure_data(a1 + 184);
      tip2::details::shared_data<1,0,0>::start(*v4 + 8LL, (_OWORD *)(a1 + 1424));
      v5 = *(_BYTE *)(a1 + 1552);
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                    a1 + 184,
                    (__int64 *)(a1 + 192))
               + 272) = v5;
      tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::~test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>((void **)(a1 + 192));
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59011247>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59011247>::GetImpl'::`2'::impl) )
      {
        v6 = *(_BYTE *)(v2 + 112);
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                      a1 + 184,
                      (__int64 *)(a1 + 200))
                 + 288) = v6 == 0;
        tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::~test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>((void **)(a1 + 200));
      }
      v7 = 1;
      if ( *(_BYTE *)(a1 + 1552) )
      {
        *(_QWORD *)(a1 + 1440) = a1 + 24;
        wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1 + 1560);
        std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::reset(a1 + 32);
        v8 = winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::CheckConfigurationPrerequisitesAsync(
               v2,
               (__int64 *)(a1 + 208));
        v9 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::Windows::Foundation::IAsyncAction>(
               a1 - 112,
               (__int64)v8);
        *(_QWORD *)(a1 + 216) = 0LL;
        *(_QWORD *)(a1 + 224) = v9;
        *(_QWORD *)(a1 + 232) = 0LL;
        *(_BYTE *)(a1 + 240) = 1;
        *(_WORD *)(a1 + 8) = 4;
        v10 = v72;
        if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerRequestPinItem,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type>(
                                (__int64 *)(a1 + 216),
                                v72) )
          return;
LABEL_13:
        v7 = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_resume(a1 + 216);
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 216));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 208));
        v11 = wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
                (struct wil::details::IFailureCallback *)(*(_QWORD *)(a1 + 1440) + 1536LL),
                (wil::ActivityThreadWatcher *)(a1 + 248));
        std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>(a1 + 32, (__int64)v11);
        wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 248));
      }
      else
      {
        v10 = v72;
      }
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                    a1 + 184,
                    (__int64 *)(a1 + 320))
               + 273) = v7;
      tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::~test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>((void **)(a1 + 320));
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
      {
        if ( !v7 )
        {
          v12 = tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                  a1 + 184,
                  (__int64 *)(a1 + 328));
          *(_DWORD *)(tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->((__int64)v12)
                    + 284) = -2147024875;
          tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::~test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>((void **)(a1 + 328));
          tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)(a1 + 184));
          v13 = wil::verify_hresult<long>(0x8007000A);
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x159,
            (int)"pcshell\\twinui\\gamingposture\\lib\\gamingposturecontroller.cpp",
            (const char *)v13,
            v72);
        }
      }
      else if ( !v7 )
      {
        goto LABEL_125;
      }
      *(_BYTE *)(a1 + 340) = 0;
      v14 = *(_QWORD *)(a1 + 1544);
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 344), (RTL_SRWLOCK *)(v14 + 104));
      if ( *(_DWORD *)(v14 + 96) )
      {
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                      a1 + 184,
                      (__int64 *)(a1 + 352))
                 + 274) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::~test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>((void **)(a1 + 352));
        if ( *(_BYTE *)(a1 + 1552) )
        {
          if ( *(_DWORD *)(v14 + 96) == 1 )
            goto LABEL_26;
        }
        else if ( *(_DWORD *)(v14 + 96) == 2 )
        {
LABEL_26:
          v19 = (void **)(a1 + 368);
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                        a1 + 184,
                        (__int64 *)(a1 + 368))
                   + 275) = 1;
LABEL_38:
          tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::~test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>(v19);
          goto LABEL_42;
        }
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
        {
          v17 = tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                  a1 + 184,
                  (__int64 *)(a1 + 360));
          *(_DWORD *)(tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->((__int64)v17)
                    + 284) = -2147019873;
          tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::~test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>((void **)(a1 + 360));
        }
        tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)(a1 + 184));
        v18 = wil::verify_hresult<long>(0x8007139F);
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x174,
          (int)"pcshell\\twinui\\gamingposture\\lib\\gamingposturecontroller.cpp",
          (const char *)v18,
          v72);
      }
      v20 = 0;
      *(_DWORD *)(a1 + 376) = 0;
      if ( wil::wnf_query<unsigned long>(v15, a1 + 376, v16) )
        v20 = *(_DWORD *)(a1 + 376) != 0;
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
      {
        if ( *(_BYTE *)(v14 + 112) && *(_BYTE *)(a1 + 1552) == v20 )
        {
          *(_DWORD *)(a1 + 380) = 0;
          *(_BYTE *)(a1 + 384) = 1;
          v21 = *(_QWORD *)(a1 + 380);
          v19 = (void **)(a1 + 392);
LABEL_37:
          *(_QWORD *)(a1 + 336) = v21;
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                        a1 + 184,
                        (__int64 *)v19)
                   + 276) = 1;
          goto LABEL_38;
        }
        v22 = 2 - (*(_BYTE *)(a1 + 1552) != 0);
        *(_DWORD *)(v14 + 96) = v22;
        *(_DWORD *)(a1 + 400) = v22;
        *(_BYTE *)(a1 + 404) = 1;
        *(_QWORD *)(a1 + 336) = *(_QWORD *)(a1 + 400);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl) )
          *(_DWORD *)(*(_QWORD *)(a1 + 1544) + 100LL) = 0;
      }
      else
      {
        v24 = *(_BYTE *)(a1 + 1552);
        if ( v24 == v20 )
        {
          *(_DWORD *)(a1 + 408) = 0;
          *(_BYTE *)(a1 + 412) = 1;
          v21 = *(_QWORD *)(a1 + 408);
          v19 = (void **)(a1 + 416);
          goto LABEL_37;
        }
        v25 = 2 - (v24 != 0);
        *(_DWORD *)(v14 + 96) = v25;
        *(_DWORD *)(a1 + 424) = v25;
        *(_BYTE *)(a1 + 428) = 1;
        *(_QWORD *)(a1 + 336) = *(_QWORD *)(a1 + 424);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl) )
          *(_DWORD *)(v14 + 100) = 0;
      }
      wil::details::ResetEvent(*(wil::details **)(*(_QWORD *)(a1 + 1544) + 120LL), v23);
LABEL_42:
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 344));
      *(_DWORD *)(a1 + 448) = 0;
      if ( !*(_BYTE *)(a1 + 340) )
      {
        *(_QWORD *)(a1 + 1456) = a1 + 24;
        GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::WaitForInProgressStateChange((GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *)(a1 + 1560));
        wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1 + 1560);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57804088>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57804088>::GetImpl'::`2'::impl) )
          std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::reset(a1 + 32);
        v26 = *(_QWORD *)(*(_QWORD *)(a1 + 1544) + 120LL);
        *(_QWORD *)(a1 + 456) = 0LL;
        *(_QWORD *)(a1 + 464) = 0LL;
        *(_QWORD *)(a1 + 472) = 0LL;
        *(_QWORD *)(a1 + 480) = v26;
        *(_DWORD *)(a1 + 488) = 0;
        *(_QWORD *)(a1 + 496) = 0LL;
        *(_DWORD *)(a1 + 504) = 0;
        if ( *(_DWORD *)(a1 - 16) == 2 )
        {
          v27 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 1472);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v27);
          throw (winrt::hresult_canceled *)pExceptionObject;
        }
        if ( !winrt::impl::signal_awaiter::await_ready((winrt::impl::signal_awaiter *)(a1 + 456)) )
        {
          *(_WORD *)(a1 + 8) = 6;
          winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type>(
            (__int64 *)(a1 + 456),
            v10);
          return;
        }
LABEL_65:
        winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(a1 + 456));
        winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 456));
        v37 = wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
                (struct wil::details::IFailureCallback *)(*(_QWORD *)(a1 + 1456) + 1536LL),
                (wil::ActivityThreadWatcher *)(a1 + 512));
        std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>(a1 + 32, (__int64)v37);
        wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 512));
        v38 = *(_QWORD *)(a1 + 1544);
        Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)(a1 + 584), (RTL_SRWLOCK *)(v38 + 104));
        *(_DWORD *)(a1 + 448) = *(_DWORD *)(v38 + 100);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 584));
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                      a1 + 184,
                      (__int64 *)(a1 + 592))
                 + 277) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::~test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>((void **)(a1 + 592));
        goto LABEL_122;
      }
      if ( *(_DWORD *)std::optional<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>::value(a1 + 336) )
      {
        v28 = 0;
        if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl)
          || (*(_DWORD *)(a1 + 600) = 0, !*(_BYTE *)(a1 + 1888)) )
        {
LABEL_83:
          if ( v28 < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x251,
              (int)"pcshell\\twinui\\gamingposture\\lib\\gamingposturecontroller.cpp",
              (const char *)(unsigned int)v28);
LABEL_119:
            v67 = *(_QWORD *)(a1 + 1544);
            wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 1392), (RTL_SRWLOCK *)(v67 + 104));
            *(_DWORD *)(v67 + 96) = 0;
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl) )
              *(_DWORD *)(v67 + 100) = *(_DWORD *)(a1 + 448);
            wil::details::SetEvent(*(wil::details **)(v67 + 120), v68);
            GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::SignaledInProgressStateChangeEvent((GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *)(a1 + 1560));
            *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                          a1 + 184,
                          (__int64 *)(a1 + 1400))
                     + 281) = 1;
            tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::~test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>((void **)(a1 + 1400));
            CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 1392));
            goto LABEL_122;
          }
          v46 = a1 + 24;
          *(_QWORD *)(a1 + 432) = a1 + 24;
          GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::BeginStateChange((GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *)(a1 + 1560));
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                        a1 + 184,
                        (__int64 *)(a1 + 888))
                   + 278) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::~test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>((void **)(a1 + 888));
          *(_DWORD *)(a1 + 912) = *(_BYTE *)(a1 + 1552) != 0;
          wil::wnf_publish<int>(&WNF_GAME_IS_GAMING_POSTURE_ACTIVE, a1 + 912);
          GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::PublishedWnf((GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *)(a1 + 1560));
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                        a1 + 184,
                        (__int64 *)(a1 + 920))
                   + 279) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::~test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>((void **)(a1 + 920));
          if ( *(_BYTE *)(a1 + 340) && *(_DWORD *)(a1 + 336) == 1 )
          {
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
            {
              v47 = (const unsigned __int16 **)(a1 + 928);
              wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                (_QWORD *)(a1 + 928),
                0LL,
                129LL);
              v48 = *(_QWORD *)(a1 + 1544);
              v49 = *(_BYTE *)(v48 + 112);
              v50 = *(TraceLoggingCorrelationVector **)(v48 + 160);
              v51 = *(unsigned __int16 **)(a1 + 928);
              v74 = v51;
              if ( v49 )
              {
                TraceLoggingCorrelationVector::IncrementW(v50, v51);
                v74 = *v47;
                v52 = winrt::hstring::hstring((winrt::hstring *)(a1 + 936), v74);
                winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::CurrentSessionId(v52);
                winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 936));
                v46 = a1 + 24;
              }
              else
              {
                TraceLoggingCorrelationVector::ToStringW(v50, v51);
              }
              if ( !*(_BYTE *)(v48 + 113) )
              {
                v74 = *v47;
                *(_QWORD *)(a1 + 944) = v74;
                GamingPostureCoreTelemetryProvider::StartSession<unsigned short *>((const WCHAR **)(a1 + 944));
              }
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)(a1 + 928));
            }
            wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(v46 + 1536);
            std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::reset(a1 + 32);
            winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 968), L"windows.gaming:///home");
            v53 = winrt::Windows::Foundation::Uri::Uri(
                    (winrt::Windows::Foundation::Uri *)(a1 + 960),
                    (const struct winrt::param::hstring *)(a1 + 968));
            v54 = winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync(
                    *(_QWORD *)(a1 + 1544),
                    a1 + 1000,
                    v53);
            v55 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::Windows::Foundation::IAsyncAction>(
                    a1 - 112,
                    v54);
            *(_QWORD *)(a1 + 1008) = 0LL;
            *(_QWORD *)(a1 + 1016) = v55;
            *(_QWORD *)(a1 + 1024) = 0LL;
            *(_BYTE *)(a1 + 1032) = 1;
            *(_WORD *)(a1 + 8) = 12;
            if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerRequestPinItem,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type>(
                                    (__int64 *)(a1 + 1008),
                                    v72) )
              return;
LABEL_110:
            v61 = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>,1>::await_resume(a1 + 1008);
            *(_BYTE *)(a1 + 952) = v61;
            winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 1008));
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 1000));
            v62 = *(_QWORD *)(a1 + 432);
            v63 = wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
                    (struct wil::details::IFailureCallback *)(v62 + 1536),
                    (wil::ActivityThreadWatcher *)(a1 + 1040));
            std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>(a1 + 32, (__int64)v63);
            wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 1040));
            GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::TriedLaunchingApp<bool const &>(
              v62 + 1536,
              (char *)(a1 + 952));
            v64 = (__int64 *)(a1 + 1112);
            *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                          a1 + 184,
                          (__int64 *)(a1 + 1112))
                     + 280) = v61;
            goto LABEL_118;
          }
          if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
            goto LABEL_119;
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59783520>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59783520>::GetImpl'::`2'::impl) )
          {
            v56 = *(_QWORD *)(a1 + 1544);
            if ( !*(_BYTE *)(v56 + 112) )
              goto LABEL_119;
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
            {
              wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                (_QWORD *)(a1 + 1120),
                0LL,
                129LL);
              TraceLoggingCorrelationVector::ToStringW(
                *(TraceLoggingCorrelationVector **)(v56 + 160),
                *(unsigned __int16 **)(a1 + 1120));
              v72 = *(_QWORD *)(a1 + 1120);
              *(_QWORD *)(a1 + 1128) = v72;
              GamingPostureCoreTelemetryProvider::EndSession<unsigned short *>((const WCHAR **)(a1 + 1128));
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)(a1 + 1120));
            }
            WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
            *(_QWORD *)(a1 + 1136) = WindowW;
            if ( !WindowW )
              goto LABEL_119;
            wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1 + 1560);
            std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::reset(a1 + 32);
            *(_QWORD *)(a1 + 1144) = 0LL;
            *(_QWORD *)(a1 + 1152) = 0LL;
            *(_QWORD *)(a1 + 1160) = 1000000LL;
            *(_QWORD *)(a1 + 1168) = 0LL;
            *(_DWORD *)(a1 + 1176) = 0;
            v58 = (__int64 *)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::Windows::Foundation::IAsyncAction>(
                               a1 - 112,
                               a1 + 1144);
            *(_QWORD *)(a1 + 1504) = v58;
            if ( v58[2] > 0 )
            {
              v59 = 14;
LABEL_104:
              *(_WORD *)(a1 + 8) = v59;
              winrt::impl::timespan_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type>(
                v58,
                v10);
              return;
            }
LABEL_113:
            winrt::impl::timespan_awaiter::await_resume(*(winrt::impl::timespan_awaiter **)(a1 + 1504));
            winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)(a1 + 1144));
            v65 = wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
                    (struct wil::details::IFailureCallback *)(*(_QWORD *)(a1 + 432) + 1536LL),
                    (wil::ActivityThreadWatcher *)(a1 + 1184));
            std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>(a1 + 32, (__int64)v65);
            wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 1184));
            SendMessageW(*(HWND *)(a1 + 1136), 0x579u, 5uLL, 0LL);
            v64 = (__int64 *)(a1 + 1256);
          }
          else
          {
            v60 = FindWindowW(L"Shell_TrayWnd", 0LL);
            *(_QWORD *)(a1 + 1264) = v60;
            if ( !v60 )
              goto LABEL_119;
            wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1 + 1560);
            std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::reset(a1 + 32);
            *(_QWORD *)(a1 + 1272) = 0LL;
            *(_QWORD *)(a1 + 1280) = 0LL;
            *(_QWORD *)(a1 + 1288) = 1000000LL;
            *(_QWORD *)(a1 + 1296) = 0LL;
            *(_DWORD *)(a1 + 1304) = 0;
            v58 = (__int64 *)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::Windows::Foundation::IAsyncAction>(
                               a1 - 112,
                               a1 + 1272);
            *(_QWORD *)(a1 + 1520) = v58;
            if ( v58[2] > 0 )
            {
              v59 = 16;
              goto LABEL_104;
            }
LABEL_116:
            winrt::impl::timespan_awaiter::await_resume(*(winrt::impl::timespan_awaiter **)(a1 + 1520));
            winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)(a1 + 1272));
            v66 = wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
                    (struct wil::details::IFailureCallback *)(*(_QWORD *)(a1 + 432) + 1536LL),
                    (wil::ActivityThreadWatcher *)(a1 + 1312));
            std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>(a1 + 32, (__int64)v66);
            wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 1312));
            SendMessageW(*(HWND *)(a1 + 1264), 0x579u, 5uLL, 0LL);
            v64 = (__int64 *)(a1 + 1384);
          }
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                        a1 + 184,
                        v64)
                   + 283) = 1;
LABEL_118:
          tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::~test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>((void **)v64);
          goto LABEL_119;
        }
        *(_QWORD *)(a1 + 608) = 0LL;
        if ( *(_DWORD *)std::optional<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>::value(a1 + 336) == 2 )
        {
          winrt::hstring::operator=((winrt::hstring *)(a1 + 608), L"ExitGamingPostureConfirmation");
        }
        else if ( *(_DWORD *)std::optional<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>::value(a1 + 336) == 1 )
        {
          v29 = winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::EnabledAtStartup();
          v30 = L"EnterGamingPostureConfirmation";
          if ( !v29 )
            v30 = L"EnterGamingPostureConfirmation_Config";
          winrt::hstring::operator=((winrt::hstring *)(a1 + 608), v30);
        }
        v31 = *(_QWORD *)(a1 + 1832);
        v74 = *(const unsigned __int16 **)(v31 + 16);
        v32 = v74;
        *(_DWORD *)(a1 + 616) = *(_DWORD *)(v31 + 8);
        *(_WORD *)(a1 + 620) = *(_WORD *)(v31 + 12);
        *(_WORD *)(a1 + 622) = *(_WORD *)(v31 + 14);
        *(_QWORD *)(a1 + 624) = v32;
        winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::CreateSystemDialog(
          *(_QWORD *)(a1 + 1544),
          (_QWORD *)(a1 + 632),
          a1 + 608,
          a1 + 616);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57804088>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57804088>::GetImpl'::`2'::impl) )
        {
          *(_QWORD *)(a1 + 896) = a1 + 24;
          wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1 + 1560);
          std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::reset(a1 + 32);
          v33 = winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
                  (__int64 **)(a1 + 632),
                  (_QWORD *)(a1 + 640));
          v34 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::Windows::Foundation::IAsyncAction>(
                  a1 - 112,
                  (__int64)v33);
          *(_QWORD *)(a1 + 648) = 0LL;
          *(_QWORD *)(a1 + 656) = v34;
          *(_QWORD *)(a1 + 664) = 0LL;
          *(_BYTE *)(a1 + 672) = 1;
          *(_WORD *)(a1 + 8) = 8;
          if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type>(
                                  (__int64 *)(a1 + 648),
                                  v72) )
            return;
LABEL_68:
          v39 = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>,1>::await_resume(a1 + 648);
          winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 648));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 640));
          v40 = wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
                  (struct wil::details::IFailureCallback *)(*(_QWORD *)(a1 + 896) + 1536LL),
                  (wil::ActivityThreadWatcher *)(a1 + 680));
          std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>(a1 + 32, (__int64)v40);
          wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 680));
        }
        else
        {
          v35 = winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
                  (__int64 **)(a1 + 632),
                  (_QWORD *)(a1 + 752));
          v36 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::Windows::Foundation::IAsyncAction>(
                  a1 - 112,
                  (__int64)v35);
          *(_QWORD *)(a1 + 760) = 0LL;
          *(_QWORD *)(a1 + 768) = v36;
          *(_QWORD *)(a1 + 776) = 0LL;
          *(_BYTE *)(a1 + 784) = 1;
          *(_WORD *)(a1 + 8) = 10;
          if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type>(
                                  (__int64 *)(a1 + 760),
                                  v72) )
            return;
LABEL_71:
          v39 = winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>,1>::await_resume(a1 + 760);
          winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 760));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 752));
        }
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                      a1 + 184,
                      (__int64 *)(a1 + 792))
                 + 282) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::~test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>((void **)(a1 + 792));
        if ( !v39 )
          goto LABEL_81;
        v41 = v39 - 1;
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            if ( v42 == 1 )
            {
              v43 = -2147467260;
LABEL_82:
              *(_DWORD *)(a1 + 600) = v43;
              winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 632));
              v28 = *(_DWORD *)(a1 + 600);
              *(_DWORD *)(a1 + 448) = v28;
              winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 608));
              v10 = v72;
              goto LABEL_83;
            }
LABEL_81:
            v43 = -2147418113;
            goto LABEL_82;
          }
        }
        else if ( winrt::operator==(a1 + 608, (__int64)L"EnterGamingPostureConfirmation")
               || winrt::operator==(a1 + 608, (__int64)L"EnterGamingPostureConfirmation_Config") )
        {
          v45 = (volatile signed __int32 **)winrt::hstring::hstring(
                                              (winrt::hstring *)(a1 + 800),
                                              (const struct winrt::hstring *)(a1 + 608),
                                              v44);
          v43 = winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::HandleEnterFSEDialogResult(
                  *(_QWORD *)(a1 + 1544),
                  v45,
                  a1 + 1560);
          goto LABEL_82;
        }
        v43 = 0;
        goto LABEL_82;
      }
LABEL_122:
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl) )
      {
        v69 = *(_DWORD *)(a1 + 448);
        if ( v69 < 0 )
        {
          v70 = tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->(
                  a1 + 184,
                  (__int64 *)(a1 + 1408));
          *(_DWORD *)(tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::operator->((__int64)v70)
                    + 284) = v69;
          tip2::test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::~test_data_control<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>((void **)(a1 + 1408));
          tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)(a1 + 184));
          v71 = wil::verify_hresult<long>(v69);
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x2CC,
            (int)"pcshell\\twinui\\gamingposture\\lib\\gamingposturecontroller.cpp",
            (const char *)v71,
            v72);
        }
      }
LABEL_125:
      std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::reset(a1 + 32);
      tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)(a1 + 184));
      wil::com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>((void **)(a1 + 184));
      std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)(a1 + 32));
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
      *(_QWORD *)(a1 + 1416) = a1 - 112;
      *(_WORD *)(a1 + 8) = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend() )
      {
LABEL_128:
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
        GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::~SetGamingPostureStateActivity((GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *)(a1 + 1560));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x7E0);
      }
      return;
    case 4:
      v10 = a1;
      goto LABEL_13;
    case 5:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 216));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 208));
      wil::com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>((void **)(a1 + 184));
      std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)(a1 + 32));
      if ( *(_QWORD *)(a1 + 16) )
        goto LABEL_70;
      goto LABEL_128;
    case 6:
      goto LABEL_65;
    case 7:
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 456));
      wil::com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>((void **)(a1 + 184));
      std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)(a1 + 32));
      if ( *(_QWORD *)(a1 + 16) )
        goto LABEL_70;
      goto LABEL_128;
    case 8:
      goto LABEL_68;
    case 9:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 648));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 640));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 632));
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 608));
      wil::com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>((void **)(a1 + 184));
      std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)(a1 + 32));
      if ( *(_QWORD *)(a1 + 16) )
        goto LABEL_70;
      goto LABEL_128;
    case 0xA:
      goto LABEL_71;
    case 0xB:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 760));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 752));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 632));
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 608));
      wil::com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>((void **)(a1 + 184));
      std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)(a1 + 32));
      if ( *(_QWORD *)(a1 + 16) )
        goto LABEL_70;
      goto LABEL_128;
    case 0xC:
      goto LABEL_110;
    case 0xD:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 1008));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 1000));
      wil::com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>((void **)(a1 + 184));
      std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)(a1 + 32));
      if ( *(_QWORD *)(a1 + 16) )
        goto LABEL_70;
      goto LABEL_128;
    case 0xE:
      goto LABEL_113;
    case 0xF:
      winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)(a1 + 1144));
      wil::com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>((void **)(a1 + 184));
      std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)(a1 + 32));
      if ( *(_QWORD *)(a1 + 16) )
        goto LABEL_70;
      goto LABEL_128;
    case 0x10:
      goto LABEL_116;
    case 0x11:
      winrt::impl::timespan_awaiter::~timespan_awaiter((winrt::cancellable_promise **)(a1 + 1272));
      wil::com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>((void **)(a1 + 184));
      std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)(a1 + 32));
      if ( *(_QWORD *)(a1 + 16) )
LABEL_70:
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
      goto LABEL_128;
    default:
      __debugbreak();
      return;
  }
}
