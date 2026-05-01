/*
 * XREFs of SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1805B2A60
 * Callers:
 *     ?CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@45@IW4InputDeviceKind@9UI@WindowsUdk@5@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@1@@Z @ 0x1805B3940 (-CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA-AUIAsyncAction@Foundation@Windows@winrt@@PEA.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$get_weak@VWindowDragInputProvider@@@?$root_implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VWindowDragInputProvider@@@2@XZ @ 0x180054E60 (--$get_weak@VWindowDragInputProvider@@@-$root_implements@VWindowDragInputProvider@@UIInspectable.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$SnapFlyout_CreateSnapFlyoutInstanceAsync@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@SnapFlyoutTelemetry@@SAXAEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x18007A9C4 (--$SnapFlyout_CreateSnapFlyoutInstanceAsync@AEAW4SnapControlType@SnapComponent@Shell@Internal@Wi.c)
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1W4SnapControlType@34567@W4InputDeviceKind@4UI@WindowsUdk@7@PEAUHMONITOR__@@@Z @ 0x1800A0798 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 *     ??$swap@U?$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@YAXAEAU?$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@0@Z @ 0x1800A0F78 (--$swap@U-$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800C89D8 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800CA6B4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800DC92C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801ABA3C (--$TryGetVisibleFlyoutInstance@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRW.c)
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801C46F8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ??1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ @ 0x1801C4730 (--1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ.c)
 *     ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801C7980 (--$TryGetVisibleFlyoutInstance@V-$unique_any_t@V-$unique_storage@U-$resource_policy_ea_1801C7980.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801CCA48 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?await_suspend@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801CF588 (-await_suspend@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??$make_self@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?AU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802194B0 (--$make_self@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@.c)
 *     ??$_Emplace@U?$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@9@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@1@@Z @ 0x18021FCA8 (--$_Emplace@U-$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@win.c)
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18026C9C8 (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028163C (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@1@XZ @ 0x180281674 (--C-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_da.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802817D0 (--1-$com_ptr_t@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180288A6C (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUW.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18028BF74 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@experimental@std@@@Z @ 0x180326020 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Foundation.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x180329200 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x1803307EC (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x180330924 (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18053B190 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_18053B190.c)
 *     ??$?0UFlyoutInstanceRecord@SnapFlyoutHost@@@?$_Ref_count_obj2@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@QEAA@$$QEAUFlyoutInstanceRecord@SnapFlyoutHost@@@Z @ 0x1805B17B0 (--$-0UFlyoutInstanceRecord@SnapFlyoutHost@@@-$_Ref_count_obj2@UFlyoutInstanceRecord@SnapFlyoutHo.c)
 *     ??$?0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z@SnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@$$QEAU?$weak_ref@VSnapFlyoutHost@@@5@$$QEAP8SnapFlyoutHost@@EAAXAEBUSnapFlyoutInstance@12345@@Z@Z @ 0x1805B198C (--$-0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@.c)
 *     ??$?0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@_N@Z@SnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@$$QEAU?$weak_ref@VSnapFlyoutHost@@@5@$$QEAP8SnapFlyoutHost@@EAAXAEBUSnapFlyoutInstance@12345@_N@Z@Z @ 0x1805B1A1C (--$-0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@W_ea_1805B1A1C.c)
 *     ??$SnapFlyout_InstanceFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x1805B1AF0 (--$SnapFlyout_InstanceFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 *     ??$SnapFlyout_ShutdownPrevious@I@SnapFlyoutTelemetry@@SAX$$QEAI@Z @ 0x1805B1B34 (--$SnapFlyout_ShutdownPrevious@I@SnapFlyoutTelemetry@@SAX$$QEAI@Z.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@1@QEAV21@$$QEAV21@@Z @ 0x1805B1FC4 (--$_Emplace_reallocate@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@-$vector@V-$sh.c)
 *     ??$as@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@U1implementation@23456@$0A@@impl@winrt@@YA?AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@1@PEAU2implementation@34561@@Z @ 0x1805B218C (--$as@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@U1implementation@23456@$0A.c)
 *     ??0FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@AEBV?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1805B2410 (--0FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@AEBV-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowT.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BII@AA@impl@winrt@@QEAA@XZ @ 0x1805B25C4 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@-$a.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJI@AA@impl@winrt@@QEAA@XZ @ 0x1805B2620 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B2620.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BKI@AA@impl@winrt@@QEAA@XZ @ 0x1805B267C (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B267C.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BLI@AA@impl@winrt@@QEAA@XZ @ 0x1805B26D8 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B26D8.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BMI@AA@impl@winrt@@QEAA@XZ @ 0x1805B2734 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B2734.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNI@AA@impl@winrt@@QEAA@XZ @ 0x1805B2790 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B2790.c)
 *     ?DismissRequested@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805B3B08 (-DismissRequested@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyou.c)
 *     ?InstanceReady@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805B3F40 (-InstanceReady@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutIn.c)
 *     ?InstanceShown@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805B3FCC (-InstanceShown@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutIn.c)
 *     ?InstanceShutdown@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805B4058 (-InstanceShutdown@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyou.c)
 *     ?PointerEntered@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805B4714 (-PointerEntered@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutI.c)
 *     ?PointerExited@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805B47A0 (-PointerExited@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutIn.c)
 *     ?RemoveInstanceFromMonitorMap@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805B4908 (-RemoveInstanceFromMonitorMap@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@In.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SnapBarCleanupCrash@@@details@wil@@QEAA_NXZ @ 0x1805B5628 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SnapBarCleanupCrash@@@d.c)
 *     ?await_resume@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEBAXXZ @ 0x1805B575C (-await_resume@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA-.c)
 */

// Hidden C++ exception states: #wind=27 #try_helpers=2
void __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rcx
  void *v4; // r8
  const struct winrt::impl::slim_source_location *v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rcx
  const struct winrt::impl::slim_source_location *v8; // rax
  __int64 v9; // rbx
  void *v10; // rdx
  const char *v11; // r9
  void *v12; // rdx
  __int64 v13; // rdx
  const struct winrt::impl::slim_source_location *v14; // rax
  __int64 *v15; // r13
  char IsEnabled; // al
  __int64 v17; // rbx
  RTL_SRWLOCK *v18; // rdx
  __int64 *v19; // r11
  __int64 v20; // rdi
  std::_Ref_count_base *v21; // rcx
  __int64 *v22; // rdx
  __int64 v23; // rbx
  std::_Ref_count_base *v24; // rcx
  char v25; // di
  char v26; // bl
  char v27; // r9
  volatile signed __int64 **v28; // rdi
  RTL_SRWLOCK *v29; // rbx
  __int64 v30; // r8
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r13
  void *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  std::_Ref_count_base *v59; // rcx
  _BYTE pExceptionObject[24]; // [rsp+E0h] [rbp-238h] BYREF
  _BYTE v61[24]; // [rsp+F8h] [rbp-220h] BYREF
  _BYTE v62[32]; // [rsp+110h] [rbp-208h] BYREF
  __int64 v63; // [rsp+130h] [rbp-1E8h]
  __int64 v64; // [rsp+140h] [rbp-1D8h]
  __int64 v65; // [rsp+150h] [rbp-1C8h]
  __int64 v66; // [rsp+160h] [rbp-1B8h]
  __int64 v67; // [rsp+170h] [rbp-1A8h]
  __int64 v68; // [rsp+180h] [rbp-198h]
  __int64 v70; // [rsp+1A8h] [rbp-170h]
  __int64 v71; // [rsp+1B8h] [rbp-160h]
  __int64 v72; // [rsp+1C8h] [rbp-150h]
  __int64 v73; // [rsp+1D8h] [rbp-140h]
  __int64 v74; // [rsp+1E8h] [rbp-130h]
  __int64 v75; // [rsp+1F8h] [rbp-120h]
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+0h]

  v2 = a1 + 8;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_92;
    case 2:
      SnapFlyoutTelemetry::SnapFlyout_CreateSnapFlyoutInstanceAsync<enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType &>((int *)(a1 + 1016));
      winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
        *(_QWORD *)(v2 + 992),
        (_QWORD *)(a1 + 16));
      *(_BYTE *)(a1 + 24) = 0;
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v5 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 800);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v5);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      *(_WORD *)v2 = 4;
      `winrt::resume_background'::`2'::awaitable::await_suspend(v3, (void (*)(void *, void *))a1, v4);
      return;
    case 4:
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 1000) + 72LL);
      *(_QWORD *)(a1 + 32) = 0LL;
      *(_QWORD *)(a1 + 40) = 0LL;
      *(_QWORD *)(a1 + 48) = 0LL;
      *(_QWORD *)(a1 + 56) = v7;
      *(_DWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_DWORD *)(a1 + 80) = 0;
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v8 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 824);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v61, v8);
        throw (winrt::hresult_canceled *)v61;
      }
      if ( winrt::impl::signal_awaiter::await_ready((HANDLE *)(a1 + 32)) )
        goto LABEL_15;
      *(_WORD *)v2 = 6;
      winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type>(
        (__int64 *)(a1 + 32),
        a1);
      return;
    case 5:
      v6 = (__int64 *)(a1 + 16);
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
      goto LABEL_92;
    case 6:
LABEL_15:
      winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(a1 + 32));
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 32));
      *(_QWORD *)(a1 + 88) = 0LL;
      winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), (struct IUnknown *)(a1 + 96));
      if ( !*(_QWORD *)(a1 + 96) )
        goto LABEL_23;
      v9 = *(_QWORD *)(v2 + 992);
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 104), (RTL_SRWLOCK *)(v9 + 176));
      if ( !*(_DWORD *)(v9 + 168) )
      {
        wil::details::ResetEvent(*(wil::details **)(v9 + 72), v10);
        wil::details::SetEvent(*(wil::details **)(v9 + 80), v12);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 104));
        winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 96));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
        goto LABEL_91;
      }
      if ( !*(_QWORD *)(v9 + 96) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2E8,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
          v11);
      winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(a1 + 88), (__int64 *)(v9 + 96));
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 104));
LABEL_23:
      winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 96));
      *(_QWORD *)(a1 + 112) = a1 + 88;
      *(_DWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 128) = 0LL;
      *(_BYTE *)(a1 + 136) = 0;
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v14 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 848);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v62, v14);
        throw (winrt::hresult_canceled *)v62;
      }
      *(_WORD *)v2 = 8;
      `wil::resume_foreground<winrt::Windows::System::DispatcherQueue>'::`2'::awaitable::await_suspend(a1 + 112, a1);
      return;
    case 7:
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 32));
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
      goto LABEL_92;
    case 8:
      `wil::resume_foreground<winrt::Windows::System::DispatcherQueue>'::`2'::awaitable::await_resume(a1 + 112);
      v15 = (__int64 *)(a1 + 16);
      winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), (struct IUnknown *)(a1 + 144));
      if ( !*(_QWORD *)(a1 + 144) )
        goto LABEL_89;
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SnapBarCleanupCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SnapBarCleanupCrash>::GetImpl'::`2'::impl);
      v17 = *(_QWORD *)(v2 + 992);
      v18 = (RTL_SRWLOCK *)(v17 + 176);
      if ( IsEnabled )
      {
        wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 152), v18);
        if ( *(_DWORD *)(a1 + 1020) != *(_DWORD *)(v17 + 48) )
        {
          *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                                  a1 + 1040,
                                  a1 + 160)
                   + 274LL) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>((__int64 *)(a1 + 160));
          tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)(a1 + 1040));
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 152));
          winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 144));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
          if ( *(_QWORD *)(a1 + 16) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
          goto LABEL_91;
        }
        SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
          v17,
          (_QWORD *)(a1 + 168));
        v20 = *v19;
        if ( *v19 )
        {
          *(_DWORD *)(a1 + 184) = *(_DWORD *)(*(_QWORD *)(v20 + 8) + 320LL);
          SnapFlyoutTelemetry::SnapFlyout_ShutdownPrevious<unsigned int>((int *)(a1 + 184));
          winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(*(winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)(v20 + 8));
          winrt::impl::as<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,0>(
            (_QWORD *)(a1 + 192),
            *(volatile signed __int64 **)(v20 + 8));
          if ( *(_QWORD *)(a1 + 192) )
            SnapFlyoutHost::RemoveInstanceFromMonitorMap(v17, a1 + 192);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 192));
        }
        v21 = *(std::_Ref_count_base **)(a1 + 176);
        if ( v21 )
          std::_Ref_count_base::_Decref(v21);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 152));
        v15 = (__int64 *)(a1 + 16);
      }
      else
      {
        Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)(a1 + 200), v18);
        if ( *(_DWORD *)(a1 + 1020) != *(_DWORD *)(v17 + 48) )
        {
          *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                                  a1 + 1040,
                                  a1 + 208)
                   + 274LL) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>((__int64 *)(a1 + 208));
          tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)(a1 + 1040));
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 200));
          winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 144));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
          if ( *v15 )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
          goto LABEL_91;
        }
        SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
          v17,
          (_QWORD *)(a1 + 216));
        v23 = *v22;
        if ( *v22 )
        {
          *(_DWORD *)(a1 + 232) = *(_DWORD *)(*(_QWORD *)(v23 + 8) + 320LL);
          SnapFlyoutTelemetry::SnapFlyout_ShutdownPrevious<unsigned int>((int *)(a1 + 232));
          winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(*(winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)(v23 + 8));
        }
        v24 = *(std::_Ref_count_base **)(a1 + 224);
        if ( v24 )
          std::_Ref_count_base::_Decref(v24);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 200));
      }
      v25 = *(_DWORD *)(a1 + 1048) & 1;
      v26 = (*(_DWORD *)(a1 + 1048) & 2) != 0;
      winrt::make_self<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,>((_QWORD *)(a1 + 240));
      v27 = v25;
      v28 = (volatile signed __int64 **)(a1 + 240);
      if ( winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Initialize(
             *(_QWORD *)(a1 + 240),
             *(_DWORD *)(a1 + 1020),
             v15[124],
             v27,
             v26,
             *(_DWORD *)(a1 + 1016),
             *(_DWORD *)(a1 + 1024),
             *(HMONITOR *)(a1 + 1032)) )
      {
        v29 = *(RTL_SRWLOCK **)(v2 + 992);
        wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 248), v29 + 22);
        SnapFlyoutHost::FlyoutInstanceRecord::FlyoutInstanceRecord((__int64 *)(a1 + 256), a1 + 1040);
        winrt::impl::as<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,0>(
          (_QWORD *)(a1 + 368),
          *v28);
        winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
          (__int64)v29,
          (_QWORD *)(a1 + 416));
        *(_QWORD *)(a1 + 400) = SnapFlyoutHost::OnFlyoutInstanceReady;
        *(_DWORD *)(a1 + 408) = 0;
        *(_OWORD *)(a1 + 384) = *(_OWORD *)(a1 + 400);
        winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
          (_QWORD *)(a1 + 376),
          (__int64 *)(a1 + 416),
          (__int128 *)(a1 + 384));
        v31 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::InstanceReady(
                           a1 + 368,
                           a1 + 424,
                           v30,
                           a1 + 376);
        v32 = *v31;
        *v31 = 0LL;
        *(_QWORD *)(a1 + 872) = v32;
        *(_QWORD *)(a1 + 880) = v31[1];
        std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
          (__int64 *)(a1 + 872),
          (__int64 *)(a1 + 272));
        v63 = *(_QWORD *)(a1 + 880);
        v33 = v63;
        v70 = *(_QWORD *)(a1 + 280);
        *(_QWORD *)(a1 + 880) = v70;
        *(_QWORD *)(a1 + 280) = v33;
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 872));
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 424));
        if ( *(_QWORD *)(a1 + 376) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 376));
        if ( *(_QWORD *)(a1 + 416) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 416));
        winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
          *(_QWORD *)(v2 + 992),
          (_QWORD *)(a1 + 480));
        *(_QWORD *)(a1 + 464) = SnapFlyoutHost::OnFlyoutInstanceShown;
        *(_DWORD *)(a1 + 472) = 0;
        *(_OWORD *)(a1 + 448) = *(_OWORD *)(a1 + 464);
        winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler::SnapFlyoutInstanceShownHandler(
          (_QWORD *)(a1 + 440),
          (__int64 *)(a1 + 480),
          (__int128 *)(a1 + 448));
        v35 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::InstanceShown(
                           a1 + 368,
                           a1 + 488,
                           v34,
                           a1 + 440);
        v36 = *v35;
        *v35 = 0LL;
        *(_QWORD *)(a1 + 888) = v36;
        *(_QWORD *)(a1 + 896) = v35[1];
        std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
          (__int64 *)(a1 + 888),
          (__int64 *)(a1 + 288));
        v64 = *(_QWORD *)(a1 + 896);
        v37 = v64;
        v71 = *(_QWORD *)(a1 + 296);
        *(_QWORD *)(a1 + 896) = v71;
        *(_QWORD *)(a1 + 296) = v37;
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 888));
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 488));
        if ( *(_QWORD *)(a1 + 440) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 440));
        if ( *(_QWORD *)(a1 + 480) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 480));
        winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
          *(_QWORD *)(v2 + 992),
          (_QWORD *)(a1 + 544));
        *(_QWORD *)(a1 + 528) = SnapFlyoutHost::OnFlyoutInstanceShutdown;
        *(_DWORD *)(a1 + 536) = 0;
        *(_OWORD *)(a1 + 512) = *(_OWORD *)(a1 + 528);
        winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
          (_QWORD *)(a1 + 504),
          (__int64 *)(a1 + 544),
          (__int128 *)(a1 + 512));
        v39 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::InstanceShutdown(
                           a1 + 368,
                           a1 + 552,
                           v38,
                           a1 + 504);
        v40 = *v39;
        *v39 = 0LL;
        *(_QWORD *)(a1 + 904) = v40;
        *(_QWORD *)(a1 + 912) = v39[1];
        std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
          (__int64 *)(a1 + 904),
          (__int64 *)(a1 + 304));
        v65 = *(_QWORD *)(a1 + 912);
        v41 = v65;
        v72 = *(_QWORD *)(a1 + 312);
        *(_QWORD *)(a1 + 912) = v72;
        *(_QWORD *)(a1 + 312) = v41;
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BKI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 904));
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BKI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 552));
        if ( *(_QWORD *)(a1 + 504) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 504));
        if ( *(_QWORD *)(a1 + 544) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 544));
        winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
          *(_QWORD *)(v2 + 992),
          (_QWORD *)(a1 + 608));
        *(_QWORD *)(a1 + 592) = SnapFlyoutHost::OnFlyoutInstancePointerEntered;
        *(_DWORD *)(a1 + 600) = 0;
        *(_OWORD *)(a1 + 576) = *(_OWORD *)(a1 + 592);
        winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
          (_QWORD *)(a1 + 568),
          (__int64 *)(a1 + 608),
          (__int128 *)(a1 + 576));
        v43 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::PointerEntered(
                           a1 + 368,
                           a1 + 616,
                           v42,
                           a1 + 568);
        v44 = *v43;
        *v43 = 0LL;
        *(_QWORD *)(a1 + 920) = v44;
        *(_QWORD *)(a1 + 928) = v43[1];
        std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
          (__int64 *)(a1 + 920),
          (__int64 *)(a1 + 320));
        v66 = *(_QWORD *)(a1 + 928);
        v45 = v66;
        v73 = *(_QWORD *)(a1 + 328);
        *(_QWORD *)(a1 + 928) = v73;
        *(_QWORD *)(a1 + 328) = v45;
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BLI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 920));
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BLI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 616));
        if ( *(_QWORD *)(a1 + 568) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 568));
        if ( *(_QWORD *)(a1 + 608) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 608));
        winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
          *(_QWORD *)(v2 + 992),
          (_QWORD *)(a1 + 672));
        *(_QWORD *)(a1 + 656) = SnapFlyoutHost::OnFlyoutInstancePointerExited;
        *(_DWORD *)(a1 + 664) = 0;
        *(_OWORD *)(a1 + 640) = *(_OWORD *)(a1 + 656);
        winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
          (_QWORD *)(a1 + 632),
          (__int64 *)(a1 + 672),
          (__int128 *)(a1 + 640));
        v47 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::PointerExited(
                           a1 + 368,
                           a1 + 680,
                           v46,
                           a1 + 632);
        v48 = *v47;
        *v47 = 0LL;
        *(_QWORD *)(a1 + 936) = v48;
        *(_QWORD *)(a1 + 944) = v47[1];
        std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
          (__int64 *)(a1 + 936),
          (__int64 *)(a1 + 336));
        v67 = *(_QWORD *)(a1 + 944);
        v49 = v67;
        v74 = *(_QWORD *)(a1 + 344);
        *(_QWORD *)(a1 + 944) = v74;
        *(_QWORD *)(a1 + 344) = v49;
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BMI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 936));
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BMI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 680));
        if ( *(_QWORD *)(a1 + 632) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 632));
        if ( *(_QWORD *)(a1 + 672) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 672));
        winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
          *(_QWORD *)(v2 + 992),
          (_QWORD *)(a1 + 736));
        *(_QWORD *)(a1 + 720) = SnapFlyoutHost::OnFlyoutInstanceDismissRequested;
        *(_DWORD *)(a1 + 728) = 0;
        *(_OWORD *)(a1 + 704) = *(_OWORD *)(a1 + 720);
        winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
          (_QWORD *)(a1 + 696),
          (__int64 *)(a1 + 736),
          (__int128 *)(a1 + 704));
        v51 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::DismissRequested(
                           a1 + 368,
                           a1 + 744,
                           v50,
                           a1 + 696);
        v52 = *v51;
        *v51 = 0LL;
        *(_QWORD *)(a1 + 952) = v52;
        *(_QWORD *)(a1 + 960) = v51[1];
        std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
          (__int64 *)(a1 + 952),
          (__int64 *)(a1 + 352));
        v68 = *(_QWORD *)(a1 + 960);
        v53 = v68;
        v75 = *(_QWORD *)(a1 + 360);
        *(_QWORD *)(a1 + 960) = v75;
        *(_QWORD *)(a1 + 360) = v53;
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BNI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 952));
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BNI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 744));
        if ( *(_QWORD *)(a1 + 696) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 696));
        if ( *(_QWORD *)(a1 + 736) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 736));
        if ( *(_QWORD *)(a1 + 264) )
          winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)(a1 + 264));
        v28 = (volatile signed __int64 **)(a1 + 240);
        v54 = *(_QWORD *)(a1 + 240);
        *(_QWORD *)(a1 + 240) = 0LL;
        *(_QWORD *)(a1 + 264) = v54;
        v55 = *(_QWORD *)(v2 + 992);
        v56 = operator new(0x80uLL);
        v57 = std::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>(
                (__int64)v56,
                (__int64 *)(a1 + 256));
        *(_QWORD *)(a1 + 760) = v57 + 16;
        *(_QWORD *)(a1 + 768) = v57;
        v58 = *(_QWORD *)(v55 + 32);
        if ( v58 == *(_QWORD *)(v55 + 40) )
        {
          std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::_Emplace_reallocate<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>(
            (_QWORD *)(v55 + 24),
            (char *)v58,
            (_QWORD *)(a1 + 760));
        }
        else
        {
          *(_QWORD *)v58 = v57 + 16;
          *(_QWORD *)(v58 + 8) = v57;
          *(_QWORD *)(a1 + 768) = 0LL;
          *(_QWORD *)(v55 + 32) += 16LL;
        }
        v59 = *(std::_Ref_count_base **)(a1 + 768);
        if ( v59 )
          std::_Ref_count_base::_Decref(v59);
        if ( *(_DWORD *)(a1 + 1016) == 2 )
        {
          *(_QWORD *)(a1 + 776) = *(_QWORD *)(a1 + 1032);
          *(_QWORD *)(a1 + 784) = *(_QWORD *)(a1 + 368);
          Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 784));
          std::_Tree<std::_Tmap_traits<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>,0>>::_Emplace<std::pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>(
            (_QWORD *)(v55 + 144),
            a1 + 968,
            (unsigned __int64 *)(a1 + 776));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 784));
          *(_DWORD *)(v55 + 120) = *(_DWORD *)(a1 + 1024);
          *(_QWORD *)(v55 + 128) = *(_QWORD *)(a1 + 1008);
          v28 = (volatile signed __int64 **)(a1 + 240);
        }
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 368));
        SnapFlyoutHost::FlyoutInstanceRecord::~FlyoutInstanceRecord((SnapFlyoutHost::FlyoutInstanceRecord *)(a1 + 256));
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 248));
        v15 = (__int64 *)(a1 + 16);
      }
      else
      {
        SnapFlyoutTelemetry::SnapFlyout_InstanceFailed<unsigned int &>((int *)(a1 + 1020));
      }
      if ( *v28 )
        winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)v28);
LABEL_89:
      winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 144));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
      if ( *v15 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v15);
LABEL_91:
      *(_QWORD *)(a1 + 792) = a1 - 112;
      *(_WORD *)v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(a1 + 792),
              v13) )
      {
LABEL_92:
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
        wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>((void **)(a1 + 1040));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x490);
      }
      return;
    case 9:
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
      goto LABEL_92;
    default:
      __debugbreak();
      return;
  }
}
