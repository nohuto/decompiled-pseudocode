/*
 * XREFs of CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180364E40
 * Callers:
 *     ?DismissRequested@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x180365230 (-DismissRequested@CActionCenterExperienceManager@@AEAA-AUfire_and_forget@winrt@@UDismissShellVie.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002824C (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A624 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CC128 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?InputDeviceKindToInputTypeConverter@@YA?AW4InputType@NotificationCenterUITelemetry@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801DE5BC (-InputDeviceKindToInputTypeConverter@@YA-AW4InputType@NotificationCenterUITelemetry@@W4InputDevi.c)
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180214EBC (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?Run@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802187CC (-Run@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIIm.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x18021B1B0 (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x180237340 (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180358FEC (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18036399C (--0-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180364094 (--1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?AnimationData@?$consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties@UIShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803648A0 (-AnimationData@-$consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties@UIShellViewAnimationP.c)
 *     ?AnimationProperties@?$consume_WindowsUdk_UI_Shell_IDismissShellViewOptions2@UDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803648F0 (-AnimationProperties@-$consume_WindowsUdk_UI_Shell_IDismissShellViewOptions2@UDismissShellViewOp.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180365DA8 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?RaiseStartAnimationEvent@CActionCenterExperienceManager@@AEAAJ_K00@Z @ 0x1803671B0 (-RaiseStartAnimationEvent@CActionCenterExperienceManager@@AEAAJ_K00@Z.c)
 *     ?StartActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@@Z @ 0x1803682EC (-StartActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QE.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803688E4 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?unconditional_release_ref@?$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x180369EA0 (-unconditional_release_ref@-$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
void __fastcall CActionCenterExperienceManager::DismissRequested__ResumeCoro_1(char *a1)
{
  volatile int *v2; // rdx
  __int64 v3; // r14
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  _QWORD *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 *v9; // rcx
  _QWORD *v10; // rax
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int64 *v13; // rax
  int started; // eax
  __int64 v15; // r15
  __int64 *v16; // rax
  int v17; // r14d
  unsigned int v18; // ebx
  int v19; // eax
  int v20; // [rsp+20h] [rbp-A8h]
  __int64 **v22; // [rsp+30h] [rbp-98h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  try
  {
    LOWORD(v20) = *((_WORD *)a1 + 4);
    switch ( (__int16)v20 )
    {
      case -1:
      case 3:
        goto LABEL_24;
      case 2:
        *((_QWORD *)a1 + 62) = a1 + 16;
        winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
          (__int64 **)a1 + 66,
          (_QWORD *)a1 + 2);
        *((_QWORD *)a1 + 3) = 0LL;
        v3 = *((_QWORD *)a1 + 65);
        if ( !v3 )
          goto LABEL_10;
        *((_QWORD *)a1 + 3) = v3;
        v4 = *(_QWORD *)(v3 + 104);
        break;
      case 4:
        goto LABEL_18;
      case 5:
        if ( *((_QWORD *)a1 + 3) )
          winrt::com_ptr<CActionCenterExperienceManager>::unconditional_release_ref();
        goto LABEL_23;
      default:
        __debugbreak();
        return;
    }
    while ( v4 >= 0 )
    {
      if ( (_DWORD)v4 != 0x7FFFFFFF )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 104), v4 + 1, v4);
        if ( v5 != v4 )
          continue;
      }
      goto LABEL_10;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v4 + 16), v2);
LABEL_10:
    v22 = (__int64 **)(a1 + 528);
    v6 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
           (__int64 **)a1 + 66,
           (_QWORD *)a1 + 4);
    v7 = *winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewOptions2<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions>::AnimationProperties(
            (__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))v6,
            (_QWORD *)a1 + 5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 40));
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 32));
    if ( v7 )
    {
      v8 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
             (__int64 **)a1 + 66,
             (_QWORD *)a1 + 6);
      v9 = winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewOptions2<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions>::AnimationProperties(
             (__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))v8,
             (_QWORD *)a1 + 7);
      *(_QWORD *)(v3 + 736) = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size(v9);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 48));
      v10 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
              v22,
              (_QWORD *)a1 + 8);
      v11 = winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewOptions2<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions>::AnimationProperties(
              (__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))v10,
              (_QWORD *)a1 + 9);
      *(_QWORD *)(v3 + 744) = *winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties<winrt::WindowsUdk::UI::Shell::IShellViewAnimationProperties>::AnimationData(
                                 v11,
                                 (_QWORD *)a1 + 10);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 64));
      v12 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
              v22,
              (_QWORD *)a1 + 12);
      v13 = winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewOptions2<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions>::AnimationProperties(
              (__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))v12,
              (_QWORD *)a1 + 13);
      *(_QWORD *)(v3 + 752) = winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties<winrt::WindowsUdk::UI::Shell::IShellViewAnimationProperties>::AnimationData(
                                v13,
                                (_QWORD *)a1 + 14)[1];
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 104));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 96));
      started = CActionCenterExperienceManager::RaiseStartAnimationEvent(
                  (CActionCenterExperienceManager *)v3,
                  *(_QWORD *)(v3 + 736),
                  *(_QWORD *)(v3 + 752),
                  *(_QWORD *)(v3 + 744));
      if ( started < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x36F,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)started);
    }
    else
    {
      *((_QWORD *)a1 + 16) = v3 + 840;
      *((_QWORD *)a1 + 17) = 0LL;
      *((_WORD *)a1 + 4) = 4;
      if ( winrt::impl::apartment_awaiter::await_suspend((__int64 **)a1 + 16, (void (*)(void *, void *))a1) )
        return;
LABEL_18:
      winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 128));
      v15 = *((_QWORD *)a1 + 62);
      v16 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
              (__int64 **)(v15 + 512),
              (_QWORD *)a1 + 18);
      v17 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(v16);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 144));
      v18 = InputDeviceKindToInputTypeConverter(v17);
      wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)(a1 + 160),
        (__int64)"DismissActionCenter");
      *((_QWORD *)a1 + 20) = &NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::`vftable';
      NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::StartActivity(a1 + 160, 2LL, v18);
      v19 = CActionCenterExperienceManager::Hide(*((CActionCenterExperienceManager **)a1 + 65));
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x379,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v19,
          v20);
      wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 160);
      winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result((__int64 *)(v15 + 512));
      NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::~DismissActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *)(a1 + 160));
    }
    winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::Run((__int64 *)a1 + 2);
    if ( *((_QWORD *)a1 + 3) )
      winrt::com_ptr<CActionCenterExperienceManager>::unconditional_release_ref();
LABEL_23:
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
LABEL_24:
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 528));
    if ( *((_WORD *)a1 + 5) )
      operator delete(a1, (const struct std::nothrow_t *)0x220);
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
