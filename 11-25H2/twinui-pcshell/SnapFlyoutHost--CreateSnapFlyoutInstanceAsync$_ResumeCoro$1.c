/*
 * XREFs of SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x18058E8F0
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_InitCoro$2 @ 0x18058E75C (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_InitCoro$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180099708 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800A589C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$swap@U?$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@YAXAEAU?$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@0@Z @ 0x1800A6838 (--$swap@U-$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@.c)
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1800A6BC0 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ??1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ @ 0x1800A8078 (--1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNA@AA@impl@winrt@@QEAA@XZ @ 0x1800A80DC (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@-$a.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BKA@AA@impl@winrt@@QEAA@XZ @ 0x1800A8150 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1800A8150.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BLA@AA@impl@winrt@@QEAA@XZ @ 0x1800A81C8 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1800A81C8.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BIA@AA@impl@winrt@@QEAA@XZ @ 0x1800A8240 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1800A8240.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BMA@AA@impl@winrt@@QEAA@XZ @ 0x1800A82B8 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1800A82B8.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800A852C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1W4SnapControlType@34567@W4InputDeviceKind@4UI@WindowsUdk@7@PEAUHMONITOR__@@@Z @ 0x1801035C4 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801B2B84 (--$TryGetVisibleFlyoutInstance@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRW.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801C872C (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?await_suspend@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801DA6D4 (-await_suspend@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA.c)
 *     ??$SnapFlyout_CreateSnapFlyoutInstanceAsync@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@SnapFlyoutTelemetry@@SAXAEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x180207650 (--$SnapFlyout_CreateSnapFlyoutInstanceAsync@AEAW4SnapControlType@SnapComponent@Shell@Internal@Wi.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180219E7C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??$make_self@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?AU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802285BC (--$make_self@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1802291B8 (--1-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foun.c)
 *     ??$_Emplace@U?$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@9@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@1@@Z @ 0x18022FD8C (--$_Emplace@U-$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@win.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18024210C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1802749FC (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028AB88 (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028C690 (--1-$com_ptr_t@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@1@XZ @ 0x18028C808 (--C-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_da.c)
 *     ??0?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x18028CB9C (--0-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802CEE8C (--0bad_alloc@std@@QEAA@XZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802CFFBC (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJA@AA@impl@winrt@@QEAA@XZ @ 0x1802D1B4C (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1802D1B4C.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031B410 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@experimental@std@@@Z @ 0x1803296AC (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Foundation.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032BE28 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x180331794 (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x1803318B8 (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180331904 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180331904.c)
 *     ??$?0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z@SnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@$$QEAU?$weak_ref@VSnapFlyoutHost@@@5@$$QEAP8SnapFlyoutHost@@EAAXAEBUSnapFlyoutInstance@12345@@Z@Z @ 0x18058D6C4 (--$-0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@.c)
 *     ??$?0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@_N@Z@SnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@$$QEAU?$weak_ref@VSnapFlyoutHost@@@5@$$QEAP8SnapFlyoutHost@@EAAXAEBUSnapFlyoutInstance@12345@_N@Z@Z @ 0x18058D750 (--$-0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@W_ea_18058D750.c)
 *     ??$SnapFlyout_InstanceFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x18058D820 (--$SnapFlyout_InstanceFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 *     ??$SnapFlyout_ShutdownPrevious@I@SnapFlyoutTelemetry@@SAX$$QEAI@Z @ 0x18058D864 (--$SnapFlyout_ShutdownPrevious@I@SnapFlyoutTelemetry@@SAX$$QEAI@Z.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@1@QEAV21@$$QEAV21@@Z @ 0x18058DCE0 (--$_Emplace_reallocate@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@-$vector@V-$sh.c)
 *     ??$as@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@U1implementation@23456@$0A@@impl@winrt@@YA?AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@1@PEAU2implementation@34561@@Z @ 0x18058DEB0 (--$as@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@U1implementation@23456@$0A.c)
 *     ??$make_shared@UFlyoutInstanceRecord@SnapFlyoutHost@@U12@@std@@YA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@$$QEAUFlyoutInstanceRecord@SnapFlyoutHost@@@Z @ 0x18058DFAC (--$make_shared@UFlyoutInstanceRecord@SnapFlyoutHost@@U12@@std@@YA-AV-$shared_ptr@UFlyoutInstance.c)
 *     ?DismissRequested@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x18058FB20 (-DismissRequested@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyou.c)
 *     ?InstanceReady@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x18058FF70 (-InstanceReady@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutIn.c)
 *     ?InstanceShown@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x18058FFF8 (-InstanceShown@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutIn.c)
 *     ?InstanceShutdown@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x180590084 (-InstanceShutdown@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyou.c)
 *     ?PointerEntered@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805906E0 (-PointerEntered@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutI.c)
 *     ?PointerExited@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x18059076C (-PointerExited@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutIn.c)
 *     ?await_resume@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEBAXXZ @ 0x1805917CC (-await_resume@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=38 #try_helpers=2
void __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // r13
  __int64 weak_ref; // rax
  int v4; // eax
  __int64 v5; // rcx
  void *v6; // r8
  const struct winrt::impl::slim_source_location *v7; // rax
  __int64 v8; // rcx
  const struct winrt::impl::slim_source_location *v9; // rax
  __int64 v10; // rbx
  void *v11; // rdx
  const char *v12; // r9
  void *v13; // rdx
  const struct winrt::impl::slim_source_location *v14; // rax
  __int64 v15; // r15
  __int64 *v16; // rdx
  __int64 v17; // rbx
  std::_Ref_count_base *v18; // rcx
  char v19; // r12
  char v20; // bl
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // r8
  __int64 *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // r8
  __int64 *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // r8
  __int64 *v36; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // r8
  __int64 *v42; // rax
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // r8
  __int64 *v48; // rax
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // r8
  __int64 *v54; // rax
  __int64 v55; // r8
  __int64 v56; // rdx
  _QWORD **v57; // r13
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rdx
  std::_Ref_count_base *v61; // rcx
  _BYTE pExceptionObject[24]; // [rsp+E0h] [rbp-418h] BYREF
  _BYTE v63[24]; // [rsp+F8h] [rbp-400h] BYREF
  _BYTE v64[24]; // [rsp+110h] [rbp-3E8h] BYREF
  _BYTE v65[24]; // [rsp+128h] [rbp-3D0h] BYREF
  _BYTE v66[24]; // [rsp+140h] [rbp-3B8h] BYREF
  _BYTE v67[24]; // [rsp+158h] [rbp-3A0h] BYREF
  _BYTE v68[24]; // [rsp+170h] [rbp-388h] BYREF
  _BYTE v69[24]; // [rsp+188h] [rbp-370h] BYREF
  _BYTE v70[24]; // [rsp+1A0h] [rbp-358h] BYREF
  _BYTE v71[32]; // [rsp+1B8h] [rbp-340h] BYREF
  __int64 v72; // [rsp+1D8h] [rbp-320h]
  __int64 v73; // [rsp+1E8h] [rbp-310h]
  __int64 v74; // [rsp+1F8h] [rbp-300h]
  __int64 v75; // [rsp+208h] [rbp-2F0h]
  __int64 v76; // [rsp+218h] [rbp-2E0h]
  __int64 v77; // [rsp+228h] [rbp-2D0h]
  __int64 v79; // [rsp+248h] [rbp-2B0h]
  __int64 v80; // [rsp+258h] [rbp-2A0h]
  __int64 v81; // [rsp+268h] [rbp-290h]
  __int64 v82; // [rsp+278h] [rbp-280h]
  __int64 v83; // [rsp+288h] [rbp-270h]
  __int64 v84; // [rsp+298h] [rbp-260h]
  wil::details::in1diag3 *retaddr; // [rsp+4F8h] [rbp+0h]
  _WORD *v87; // [rsp+518h] [rbp+20h]

  v2 = (_WORD *)(a1 + 8);
  v87 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_93;
    case 2:
      *(_DWORD *)(a1 + 752) = 0;
      SnapFlyoutTelemetry::SnapFlyout_CreateSnapFlyoutInstanceAsync<enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType &>((int *)(a1 + 1249));
      weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(*(volatile signed __int64 **)(a1 + 1233));
      if ( !weak_ref )
      {
        std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
        throw (std::bad_alloc *)pExceptionObject;
      }
      *(_QWORD *)(a1 + 760) = weak_ref;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_DWORD *)(a1 + 752) = 2;
      *(_DWORD *)(a1 + 768) = 0;
      *(_QWORD *)(a1 + 776) = 0LL;
      *(_QWORD *)(a1 + 784) = 0LL;
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)weak_ref + 24LL))(weak_ref);
      winrt::check_hresult((int *)(a1 + 792), v4, a1 + 768);
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 760));
      *(_BYTE *)(a1 + 24) = 0;
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v7 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 800);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v63, v7);
        throw (winrt::hresult_canceled *)v63;
      }
      *v2 = 4;
      `winrt::resume_background'::`2'::awaitable::await_suspend(v5, (void (*)(void *, void *))a1, v6);
      return;
    case 4:
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 1233) + 72LL);
      *(_QWORD *)(a1 + 32) = 0LL;
      *(_QWORD *)(a1 + 40) = 0LL;
      *(_QWORD *)(a1 + 48) = 0LL;
      *(_QWORD *)(a1 + 56) = v8;
      *(_DWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_DWORD *)(a1 + 80) = 0;
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v9 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 824);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v64, v9);
        throw (winrt::hresult_canceled *)v64;
      }
      if ( winrt::impl::signal_awaiter::await_ready((HANDLE *)(a1 + 32)) )
        goto LABEL_17;
      *v2 = 6;
      winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type>(
        (__int64 *)(a1 + 32),
        a1);
      return;
    case 5:
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
      goto LABEL_93;
    case 6:
LABEL_17:
      winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(a1 + 32));
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 32));
      *(_QWORD *)(a1 + 88) = 0LL;
      winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), (struct IUnknown *)(a1 + 96));
      if ( !*(_QWORD *)(a1 + 96) )
        goto LABEL_25;
      v10 = *(_QWORD *)(a1 + 1233);
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 104), (RTL_SRWLOCK *)(v10 + 176));
      if ( *(_DWORD *)(v10 + 168) )
      {
        if ( !*(_QWORD *)(v10 + 96) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x2E8,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
            v12);
        winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(a1 + 88), (__int64 *)(v10 + 96));
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 104));
        v2 = v87;
LABEL_25:
        winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 96));
        *(_QWORD *)(a1 + 112) = a1 + 88;
        *(_DWORD *)(a1 + 120) = 0;
        *(_QWORD *)(a1 + 128) = 0LL;
        *(_BYTE *)(a1 + 136) = 0;
        if ( *(_DWORD *)(a1 - 16) == 2 )
        {
          v14 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 848);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v65, v14);
          throw (winrt::hresult_canceled *)v65;
        }
        *v2 = 8;
        `wil::resume_foreground<winrt::Windows::System::DispatcherQueue>'::`2'::awaitable::await_suspend(a1 + 112, a1);
      }
      else
      {
        wil::details::ResetEvent(*(wil::details **)(v10 + 72), v11);
        wil::details::SetEvent(*(wil::details **)(v10 + 80), v13);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 104));
        winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 96));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
LABEL_92:
        *(_QWORD *)(a1 + 744) = a1 - 112;
        *v87 = 0;
        if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
                (__int64 *)(a1 + 744),
                0LL) )
        {
LABEL_93:
          winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,void>((__int64 *)(a1 - 112));
          wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>((void **)(a1 + 1273));
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x580);
        }
      }
      return;
    case 7:
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 32));
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
      goto LABEL_93;
    case 8:
      `wil::resume_foreground<winrt::Windows::System::DispatcherQueue>'::`2'::awaitable::await_resume(a1 + 112);
      winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), (struct IUnknown *)(a1 + 144));
      if ( !*(_QWORD *)(a1 + 144) )
        goto LABEL_90;
      v15 = *(_QWORD *)(a1 + 1233);
      Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)(a1 + 152), (RTL_SRWLOCK *)(v15 + 176));
      if ( *(_DWORD *)(a1 + 1253) == *(_DWORD *)(v15 + 48) )
      {
        SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
          v15,
          (_QWORD *)(a1 + 168));
        v17 = *v16;
        if ( *v16 )
        {
          *(_DWORD *)(a1 + 184) = *(_DWORD *)(*(_QWORD *)(v17 + 8) + 320LL);
          SnapFlyoutTelemetry::SnapFlyout_ShutdownPrevious<unsigned int>((int *)(a1 + 184));
          winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(*(winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)(v17 + 8));
        }
        v18 = *(std::_Ref_count_base **)(a1 + 176);
        if ( v18 )
          std::_Ref_count_base::_Decref(v18);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 152));
        v19 = *(_DWORD *)(a1 + 1281) & 1;
        v20 = (*(_DWORD *)(a1 + 1281) & 2) != 0;
        winrt::make_self<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,>((_QWORD *)(a1 + 192));
        if ( winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Initialize(
               *(_QWORD *)(a1 + 192),
               *(_DWORD *)(a1 + 1253),
               *(_QWORD *)(a1 + 1241),
               v19,
               v20,
               *(_DWORD *)(a1 + 1249),
               *(_DWORD *)(a1 + 1257),
               *(HMONITOR *)(a1 + 1265)) )
        {
          wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 200), (RTL_SRWLOCK *)(v15 + 176));
          tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(
            (__int64 *)(a1 + 208),
            (_QWORD *)(a1 + 1273));
          *(_QWORD *)(a1 + 216) = 0LL;
          *(_QWORD *)(a1 + 224) = 0LL;
          *(_QWORD *)(a1 + 232) = 0LL;
          *(_QWORD *)(a1 + 240) = 0LL;
          *(_QWORD *)(a1 + 248) = 0LL;
          *(_QWORD *)(a1 + 256) = 0LL;
          *(_QWORD *)(a1 + 264) = 0LL;
          *(_QWORD *)(a1 + 272) = 0LL;
          *(_QWORD *)(a1 + 280) = 0LL;
          *(_QWORD *)(a1 + 288) = 0LL;
          *(_QWORD *)(a1 + 296) = 0LL;
          *(_QWORD *)(a1 + 304) = 0LL;
          *(_QWORD *)(a1 + 312) = 0LL;
          winrt::impl::as<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,0>(
            (_QWORD *)(a1 + 320),
            *(volatile signed __int64 **)(a1 + 192));
          *(_DWORD *)(a1 + 752) = 5;
          v21 = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref((volatile signed __int64 *)v15);
          if ( !v21 )
          {
            std::bad_alloc::bad_alloc((std::bad_alloc *)v66);
            throw (std::bad_alloc *)v66;
          }
          *(_QWORD *)(a1 + 872) = v21;
          *(_QWORD *)(a1 + 368) = 0LL;
          *(_DWORD *)(a1 + 752) = 21;
          *(_DWORD *)(a1 + 880) = 0;
          *(_QWORD *)(a1 + 888) = 0LL;
          *(_QWORD *)(a1 + 896) = 0LL;
          v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 24LL))(v21, a1 + 368);
          winrt::check_hresult((int *)(a1 + 904), v22, a1 + 880);
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 872));
          *(_DWORD *)(a1 + 752) = 13;
          *(_QWORD *)(a1 + 352) = SnapFlyoutHost::OnFlyoutInstanceReady;
          *(_DWORD *)(a1 + 360) = 0;
          *(_OWORD *)(a1 + 336) = *(_OWORD *)(a1 + 352);
          winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
            (_QWORD *)(a1 + 328),
            (__int64 *)(a1 + 368),
            (__int128 *)(a1 + 336));
          v24 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::InstanceReady(
                             a1 + 320,
                             a1 + 376,
                             v23,
                             a1 + 328);
          v25 = *v24;
          *v24 = 0LL;
          *(_QWORD *)(a1 + 912) = v25;
          *(_QWORD *)(a1 + 920) = v24[1];
          std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
            (__int64 *)(a1 + 912),
            (__int64 *)(a1 + 224));
          v72 = *(_QWORD *)(a1 + 920);
          v26 = v72;
          v79 = *(_QWORD *)(a1 + 232);
          *(_QWORD *)(a1 + 920) = v79;
          *(_QWORD *)(a1 + 232) = v26;
          __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BIA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 912));
          __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BIA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 376));
          if ( *(_QWORD *)(a1 + 328) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 328));
          if ( *(_QWORD *)(a1 + 368) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 368));
          v27 = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref((volatile signed __int64 *)v15);
          if ( !v27 )
          {
            std::bad_alloc::bad_alloc((std::bad_alloc *)v67);
            throw (std::bad_alloc *)v67;
          }
          *(_QWORD *)(a1 + 928) = v27;
          *(_QWORD *)(a1 + 432) = 0LL;
          *(_DWORD *)(a1 + 752) = 77;
          *(_DWORD *)(a1 + 936) = 0;
          *(_QWORD *)(a1 + 944) = 0LL;
          *(_QWORD *)(a1 + 952) = 0LL;
          v28 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 24LL))(v27, a1 + 432);
          winrt::check_hresult((int *)(a1 + 960), v28, a1 + 936);
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 928));
          *(_DWORD *)(a1 + 752) = 45;
          *(_QWORD *)(a1 + 416) = SnapFlyoutHost::OnFlyoutInstanceShown;
          *(_DWORD *)(a1 + 424) = 0;
          *(_OWORD *)(a1 + 400) = *(_OWORD *)(a1 + 416);
          winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler::SnapFlyoutInstanceShownHandler(
            (_QWORD *)(a1 + 392),
            (__int64 *)(a1 + 432),
            (__int128 *)(a1 + 400));
          v30 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::InstanceShown(
                             a1 + 320,
                             a1 + 440,
                             v29,
                             a1 + 392);
          v31 = *v30;
          *v30 = 0LL;
          *(_QWORD *)(a1 + 968) = v31;
          *(_QWORD *)(a1 + 976) = v30[1];
          std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
            (__int64 *)(a1 + 968),
            (__int64 *)(a1 + 240));
          v73 = *(_QWORD *)(a1 + 976);
          v32 = v73;
          v80 = *(_QWORD *)(a1 + 248);
          *(_QWORD *)(a1 + 976) = v80;
          *(_QWORD *)(a1 + 248) = v32;
          __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 968));
          __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 440));
          if ( *(_QWORD *)(a1 + 392) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 392));
          if ( *(_QWORD *)(a1 + 432) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 432));
          v33 = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref((volatile signed __int64 *)v15);
          if ( !v33 )
          {
            std::bad_alloc::bad_alloc((std::bad_alloc *)v68);
            throw (std::bad_alloc *)v68;
          }
          *(_QWORD *)(a1 + 984) = v33;
          *(_QWORD *)(a1 + 496) = 0LL;
          *(_DWORD *)(a1 + 752) = 301;
          *(_DWORD *)(a1 + 992) = 0;
          *(_QWORD *)(a1 + 1000) = 0LL;
          *(_QWORD *)(a1 + 1008) = 0LL;
          v34 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 24LL))(v33, a1 + 496);
          winrt::check_hresult((int *)(a1 + 1016), v34, a1 + 992);
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 984));
          *(_DWORD *)(a1 + 752) = 173;
          *(_QWORD *)(a1 + 480) = SnapFlyoutHost::OnFlyoutInstanceShutdown;
          *(_DWORD *)(a1 + 488) = 0;
          *(_OWORD *)(a1 + 464) = *(_OWORD *)(a1 + 480);
          winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
            (_QWORD *)(a1 + 456),
            (__int64 *)(a1 + 496),
            (__int128 *)(a1 + 464));
          v36 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::InstanceShutdown(
                             a1 + 320,
                             a1 + 504,
                             v35,
                             a1 + 456);
          v37 = *v36;
          *v36 = 0LL;
          *(_QWORD *)(a1 + 1024) = v37;
          *(_QWORD *)(a1 + 1032) = v36[1];
          std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
            (__int64 *)(a1 + 1024),
            (__int64 *)(a1 + 256));
          v74 = *(_QWORD *)(a1 + 1032);
          v38 = v74;
          v81 = *(_QWORD *)(a1 + 264);
          *(_QWORD *)(a1 + 1032) = v81;
          *(_QWORD *)(a1 + 264) = v38;
          __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BKA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 1024));
          __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BKA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 504));
          if ( *(_QWORD *)(a1 + 456) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 456));
          if ( *(_QWORD *)(a1 + 496) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 496));
          v39 = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref((volatile signed __int64 *)v15);
          if ( !v39 )
          {
            std::bad_alloc::bad_alloc((std::bad_alloc *)v69);
            throw (std::bad_alloc *)v69;
          }
          *(_QWORD *)(a1 + 1040) = v39;
          *(_QWORD *)(a1 + 560) = 0LL;
          *(_DWORD *)(a1 + 752) = 1197;
          *(_DWORD *)(a1 + 1048) = 0;
          *(_QWORD *)(a1 + 1056) = 0LL;
          *(_QWORD *)(a1 + 1064) = 0LL;
          v40 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 24LL))(v39, a1 + 560);
          winrt::check_hresult((int *)(a1 + 1072), v40, a1 + 1048);
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 1040));
          *(_DWORD *)(a1 + 752) = 685;
          *(_QWORD *)(a1 + 544) = SnapFlyoutHost::OnFlyoutInstancePointerEntered;
          *(_DWORD *)(a1 + 552) = 0;
          *(_OWORD *)(a1 + 528) = *(_OWORD *)(a1 + 544);
          winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
            (_QWORD *)(a1 + 520),
            (__int64 *)(a1 + 560),
            (__int128 *)(a1 + 528));
          v42 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::PointerEntered(
                             a1 + 320,
                             a1 + 568,
                             v41,
                             a1 + 520);
          v43 = *v42;
          *v42 = 0LL;
          *(_QWORD *)(a1 + 1080) = v43;
          *(_QWORD *)(a1 + 1088) = v42[1];
          std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
            (__int64 *)(a1 + 1080),
            (__int64 *)(a1 + 272));
          v75 = *(_QWORD *)(a1 + 1088);
          v44 = v75;
          v82 = *(_QWORD *)(a1 + 280);
          *(_QWORD *)(a1 + 1088) = v82;
          *(_QWORD *)(a1 + 280) = v44;
          __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BLA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 1080));
          __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BLA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 568));
          if ( *(_QWORD *)(a1 + 520) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 520));
          if ( *(_QWORD *)(a1 + 560) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 560));
          v45 = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref((volatile signed __int64 *)v15);
          if ( !v45 )
          {
            std::bad_alloc::bad_alloc((std::bad_alloc *)v70);
            throw (std::bad_alloc *)v70;
          }
          *(_QWORD *)(a1 + 1096) = v45;
          *(_QWORD *)(a1 + 624) = 0LL;
          *(_DWORD *)(a1 + 752) = 4781;
          *(_DWORD *)(a1 + 1104) = 0;
          *(_QWORD *)(a1 + 1112) = 0LL;
          *(_QWORD *)(a1 + 1120) = 0LL;
          v46 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v45 + 24LL))(v45, a1 + 624);
          winrt::check_hresult((int *)(a1 + 1128), v46, a1 + 1104);
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 1096));
          *(_DWORD *)(a1 + 752) = 2733;
          *(_QWORD *)(a1 + 608) = SnapFlyoutHost::OnFlyoutInstancePointerExited;
          *(_DWORD *)(a1 + 616) = 0;
          *(_OWORD *)(a1 + 592) = *(_OWORD *)(a1 + 608);
          winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
            (_QWORD *)(a1 + 584),
            (__int64 *)(a1 + 624),
            (__int128 *)(a1 + 592));
          v48 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::PointerExited(
                             a1 + 320,
                             a1 + 632,
                             v47,
                             a1 + 584);
          v49 = *v48;
          *v48 = 0LL;
          *(_QWORD *)(a1 + 1136) = v49;
          *(_QWORD *)(a1 + 1144) = v48[1];
          std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
            (__int64 *)(a1 + 1136),
            (__int64 *)(a1 + 288));
          v76 = *(_QWORD *)(a1 + 1144);
          v50 = v76;
          v83 = *(_QWORD *)(a1 + 296);
          *(_QWORD *)(a1 + 1144) = v83;
          *(_QWORD *)(a1 + 296) = v50;
          __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BMA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 1136));
          __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BMA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 632));
          if ( *(_QWORD *)(a1 + 584) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 584));
          if ( *(_QWORD *)(a1 + 624) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 624));
          v51 = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref((volatile signed __int64 *)v15);
          if ( !v51 )
          {
            std::bad_alloc::bad_alloc((std::bad_alloc *)v71);
            throw (std::bad_alloc *)v71;
          }
          *(_QWORD *)(a1 + 1152) = v51;
          *(_QWORD *)(a1 + 688) = 0LL;
          *(_DWORD *)(a1 + 752) = 19117;
          *(_DWORD *)(a1 + 1160) = 0;
          *(_QWORD *)(a1 + 1168) = 0LL;
          *(_QWORD *)(a1 + 1176) = 0LL;
          v52 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 24LL))(v51, a1 + 688);
          winrt::check_hresult((int *)(a1 + 1184), v52, a1 + 1160);
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 1152));
          *(_QWORD *)(a1 + 672) = SnapFlyoutHost::OnFlyoutInstanceDismissRequested;
          *(_DWORD *)(a1 + 680) = 0;
          *(_OWORD *)(a1 + 656) = *(_OWORD *)(a1 + 672);
          winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
            (_QWORD *)(a1 + 648),
            (__int64 *)(a1 + 688),
            (__int128 *)(a1 + 656));
          v54 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::DismissRequested(
                             a1 + 320,
                             a1 + 696,
                             v53,
                             a1 + 648);
          v55 = *v54;
          *v54 = 0LL;
          *(_QWORD *)(a1 + 1192) = v55;
          *(_QWORD *)(a1 + 1200) = v54[1];
          std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
            (__int64 *)(a1 + 1192),
            (__int64 *)(a1 + 304));
          v77 = *(_QWORD *)(a1 + 1200);
          v56 = v77;
          v84 = *(_QWORD *)(a1 + 312);
          *(_QWORD *)(a1 + 1200) = v84;
          *(_QWORD *)(a1 + 312) = v56;
          __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BNA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 1192));
          __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BNA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 696));
          if ( *(_QWORD *)(a1 + 648) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 648));
          if ( *(_QWORD *)(a1 + 688) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 688));
          if ( *(_QWORD *)(a1 + 216) )
            winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)(a1 + 216));
          v57 = (_QWORD **)(a1 + 192);
          v58 = *(_QWORD *)(a1 + 192);
          *(_QWORD *)(a1 + 192) = 0LL;
          *(_QWORD *)(a1 + 216) = v58;
          v59 = std::make_shared<SnapFlyoutHost::FlyoutInstanceRecord,SnapFlyoutHost::FlyoutInstanceRecord>(
                  (_QWORD *)(a1 + 712),
                  (__int64 *)(a1 + 208));
          v60 = *(_QWORD *)(v15 + 32);
          if ( v60 == *(_QWORD *)(v15 + 40) )
          {
            std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::_Emplace_reallocate<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>(
              (__int64 *)(v15 + 24),
              (char *)v60,
              v59);
          }
          else
          {
            *(_QWORD *)v60 = 0LL;
            *(_QWORD *)(v60 + 8) = 0LL;
            *(_QWORD *)v60 = *v59;
            *(_QWORD *)(v60 + 8) = v59[1];
            *v59 = 0LL;
            v59[1] = 0LL;
            *(_QWORD *)(v15 + 32) += 16LL;
          }
          v61 = *(std::_Ref_count_base **)(a1 + 720);
          if ( v61 )
            std::_Ref_count_base::_Decref(v61);
          if ( *(_DWORD *)(a1 + 1249) == 2 )
          {
            *(_QWORD *)(a1 + 728) = *(_QWORD *)(a1 + 1265);
            *(_QWORD *)(a1 + 736) = *(_QWORD *)(a1 + 320);
            Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 736));
            std::_Tree<std::_Tmap_traits<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>,0>>::_Emplace<std::pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>(
              (__int64 **)(v15 + 144),
              a1 + 1208,
              (unsigned __int64 *)(a1 + 728));
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 736));
            *(_DWORD *)(v15 + 120) = *(_DWORD *)(a1 + 1257);
            *(_QWORD *)(v15 + 128) = *(_QWORD *)(a1 + 1241);
          }
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 320));
          SnapFlyoutHost::FlyoutInstanceRecord::~FlyoutInstanceRecord((SnapFlyoutHost::FlyoutInstanceRecord *)(a1 + 208));
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 200));
        }
        else
        {
          SnapFlyoutTelemetry::SnapFlyout_InstanceFailed<unsigned int &>((int *)(a1 + 1253));
          v57 = (_QWORD **)(a1 + 192);
        }
        if ( *v57 )
          winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(v57);
LABEL_90:
        winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 144));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
      }
      else
      {
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                      a1 + 1273,
                      (__int64 *)(a1 + 160))
                 + 266) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>((__int64 *)(a1 + 160));
        tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)(a1 + 1273));
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 152));
        winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 144));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
      }
      goto LABEL_92;
    case 9:
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
      goto LABEL_93;
    default:
      __debugbreak();
      return;
  }
}
