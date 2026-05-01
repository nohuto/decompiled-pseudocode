/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1805F5640
 * Callers:
 *     ?InstallForCurrentUserAsync@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@56@XZ @ 0x1805F5CA4 (-InstallForCurrentUserAsync@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800C89D8 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CC128 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800DC92C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180133E4C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?get_strong@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@QEAA?AU?$com_ptr@VCopilotHotkeyManager@@@2@XZ @ 0x1801EBF6C (-get_strong@-$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWin.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x180326550 (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z @ 0x180328874 (--0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z.c)
 *     ??1?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ @ 0x180328D64 (--1-$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x180329200 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x1803307EC (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x180330924 (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     ?reset@?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAAXXZ @ 0x180332EB4 (-reset@-$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAAXXZ.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18053B190 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_18053B190.c)
 *     winrt::Windows::Foundation::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress_::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_4951771febc4dc983c3581d22c2a6e45___ @ 0x1805F12C8 (winrt--Windows--Foundation--AsyncOperationProgressHandler_winrt--Windows--Internal--Shell--MeetA.c)
 *     winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress_::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_724db070561b64a1d673c65688c83bb1___ @ 0x1805F1348 (winrt--Windows--Foundation--AsyncOperationWithProgressCompletedHandler_winrt--Windows--Internal-.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x1805F1ED4 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperationWithProgress@UMeetAndChatIns.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1805F3118 (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_Tl_ea_1805F3118.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1805F31EC (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_Tl_ea_1805F31EC.c)
 *     ??1UserInitiatedInstall@MeetAndChatTelemetry@@QEAA@XZ @ 0x1805F3BC0 (--1UserInitiatedInstall@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@UEAA@XZ @ 0x1805F3BEC (--1promise_type@-$coroutine_traits@U-$IAsyncOperationWithProgress@UMeetAndChatInstallResult@Meet.c)
 *     ?EnsureInstallManager@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUMeetAndChatInstallManager@MeetAndChat@3456@XZ @ 0x1805F4BB0 (-EnsureInstallManager@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUMee.c)
 *     ?IsInstallInProgress@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805F5FAC (-IsInstallInProgress@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     ?StartActivity@UserInitiatedInstall@MeetAndChatTelemetry@@QEAAXXZ @ 0x1805F739C (-StartActivity@UserInitiatedInstall@MeetAndChatTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805F74B0 (-Stop@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflector.c)
 *     ?IsComplete@?$consume_Windows_ApplicationModel_IPackageUpdatingEventArgs@UIPackageUpdatingEventArgs@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805F7D20 (-IsComplete@-$consume_Windows_ApplicationModel_IPackageUpdatingEventArgs@UIPackageUpdatingEventA.c)
 *     ?SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805F7D70 (-SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync__ResumeCoro_1(
        __int64 a1)
{
  char v2; // r12
  _QWORD *v3; // rbx
  __int64 v4; // r15
  __int64 v5; // r13
  void *v6; // rdx
  __int64 *v7; // rax
  __int64 *strong; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  const struct winrt::impl::slim_source_location *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 *v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rdx
  _BYTE pExceptionObject[128]; // [rsp+60h] [rbp-B8h] BYREF

  v2 = 1;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_31;
    case 2:
      v3 = (_QWORD *)(a1 + 16);
      wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 16));
      *v3 = &MeetAndChatTelemetry::UserInitiatedInstall::`vftable';
      MeetAndChatTelemetry::UserInitiatedInstall::StartActivity((MeetAndChatTelemetry::UserInitiatedInstall *)(a1 + 16));
      v4 = *(_QWORD *)(a1 + 1192);
      winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::get_strong(
        v4,
        (_QWORD *)(a1 + 352));
      v5 = a1 + 360;
      *(_QWORD *)(a1 + 360) = 0LL;
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 368), (RTL_SRWLOCK *)(v4 + 112));
      if ( winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::IsInstallInProgress((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)v4) )
      {
        winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(a1 + 360), (__int64 *)(v4 + 264));
        *(_BYTE *)(v4 + 208) = 1;
      }
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 368));
      if ( !*(_QWORD *)v5 )
      {
        wil::details::ResetEvent(*(wil::details **)(v4 + 272), v6);
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureInstallManager(
          v4,
          (__int64 *)(a1 + 376));
        v7 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
               (__int64 **)(a1 + 376),
               (_QWORD *)(a1 + 384));
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 360), v7);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 384));
        strong = winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::get_strong(
                   v4,
                   (_QWORD *)(a1 + 736));
        v9 = *strong;
        *strong = 0LL;
        *(_QWORD *)(a1 + 400) = v9;
        wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)(a1 + 408),
          a1 + 16);
        *(_QWORD *)(a1 + 408) = &MeetAndChatTelemetry::UserInitiatedInstall::`vftable';
        winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress_::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_724db070561b64a1d673c65688c83bb1___(
          a1 + 392,
          a1 + 400);
        *(_DWORD *)(a1 + 1096) = 0;
        *(_QWORD *)(a1 + 1104) = 0LL;
        *(_QWORD *)(a1 + 1112) = 0LL;
        v10 = (*(__int64 (**)(void))(**(_QWORD **)v5 + 64LL))();
        winrt::check_hresult((int *)(a1 + 1120), v10, a1 + 1096);
        if ( *(_QWORD *)(a1 + 392) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 392));
        if ( *(_QWORD *)(a1 + 736) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 736));
        wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 744), (RTL_SRWLOCK *)(v4 + 112));
        if ( !winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::IsInstallInProgress((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)v4) )
          winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(v4 + 264), (__int64 *)(a1 + 360));
        *(_BYTE *)(v4 + 208) = 1;
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 744));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 376));
      }
      wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1 + 16);
      *(_QWORD *)(a1 + 992) = a1 - 128;
      v11 = wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
              a1 + 16,
              a1 + 832);
      wil::ActivityThreadWatcher::ActivityThreadWatcher(a1 + 752, v11);
      *(_BYTE *)(a1 + 824) = 1;
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 832));
      v12 = winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::get_strong(
              v4,
              (_QWORD *)(a1 + 928));
      v13 = *v12;
      *v12 = 0LL;
      *(_QWORD *)(a1 + 912) = v13;
      *(_QWORD *)(a1 + 920) = a1 - 128;
      winrt::Windows::Foundation::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress_::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_4951771febc4dc983c3581d22c2a6e45___(
        (_QWORD *)(a1 + 904),
        (__int64 *)(a1 + 912));
      *(_DWORD *)(a1 + 1128) = 0;
      *(_QWORD *)(a1 + 1136) = 0LL;
      *(_QWORD *)(a1 + 1144) = 0LL;
      v14 = (*(__int64 (**)(void))(**(_QWORD **)v5 + 48LL))();
      winrt::check_hresult((int *)(a1 + 1152), v14, a1 + 1128);
      if ( *(_QWORD *)(a1 + 904) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 904));
      if ( *(_QWORD *)(a1 + 928) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 928));
      wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1 + 16);
      std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::reset((wil::ActivityThreadWatcher *)(a1 + 752));
      v15 = *(_QWORD *)(v4 + 272);
      *(_QWORD *)(a1 + 936) = 0LL;
      *(_QWORD *)(a1 + 944) = 0LL;
      *(_QWORD *)(a1 + 952) = 0LL;
      *(_QWORD *)(a1 + 960) = v15;
      *(_DWORD *)(a1 + 968) = 0;
      *(_QWORD *)(a1 + 976) = 0LL;
      *(_DWORD *)(a1 + 984) = 0;
      if ( *(_DWORD *)(a1 - 32) == 2 )
      {
        v16 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 1160);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v16);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      if ( winrt::impl::signal_awaiter::await_ready((HANDLE *)(a1 + 936)) )
        goto LABEL_23;
      *(_WORD *)(a1 + 8) = 6;
      winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *>::promise_type>(
        (__int64 *)(a1 + 936),
        a1);
      return;
    case 6:
LABEL_23:
      winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(a1 + 936));
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 936));
      v17 = wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
              a1 + 16,
              a1 + 1008);
      std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>(a1 + 752, v17);
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 1008));
      v18 = *(_QWORD *)(a1 + 1192);
      Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)(a1 + 1080), (RTL_SRWLOCK *)(v18 + 112));
      v19 = (__int64 *)(v18 + 256);
      if ( !*(_BYTE *)(v18 + 208)
        || !(unsigned __int8)winrt::impl::consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<winrt::Windows::ApplicationModel::IPackageUpdatingEventArgs>::IsComplete(v18 + 256) )
      {
        v2 = 0;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 1080));
      if ( v2 )
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::SwitchToApplicationFlyoutIfNeeded((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)v18);
      wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 16);
      v20 = *(_QWORD *)(a1 + 992);
      _Platform_AcquireSRWLockExclusive((PSRWLOCK)(v20 + 72));
      winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(v20 + 104), v19);
      ReleaseSRWLockExclusive_0((PSRWLOCK)(v20 + 72));
      std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)(a1 + 752));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 360));
      if ( *(_QWORD *)(a1 + 352) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 352));
      MeetAndChatTelemetry::UserInitiatedInstall::~UserInitiatedInstall((MeetAndChatTelemetry::UserInitiatedInstall *)(a1 + 16));
      *(_QWORD *)(a1 + 1088) = a1 - 128;
      *(_WORD *)(a1 + 8) = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(a1 + 1088),
              v21) )
        goto LABEL_31;
      return;
    case 7:
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 936));
      std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)(a1 + 752));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 360));
      if ( *(_QWORD *)(a1 + 352) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 352));
      MeetAndChatTelemetry::UserInitiatedInstall::~UserInitiatedInstall((MeetAndChatTelemetry::UserInitiatedInstall *)(a1 + 16));
LABEL_31:
      std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *>::promise_type::~promise_type((__int64 *)(a1 - 128));
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 128), (const struct std::nothrow_t *)0x530);
      break;
    default:
      __debugbreak();
      break;
  }
}
