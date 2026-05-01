/*
 * XREFs of XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x180250D60
 * Callers:
 *     XamlLauncher::SearchShowRequested$_InitCoro$2 @ 0x180250CF8 (XamlLauncher--SearchShowRequested$_InitCoro$2.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180063FE8 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Query@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AB7B0 (-Query@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _anonymous_namespace_::ContextToSearchShowArgs @ 0x1800F1EAC (_anonymous_namespace_--ContextToSearchShowArgs.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SetPositioningAnchorRect@XamlLauncher@@UEAAJUtagRECT@@0@Z @ 0x1801C40E0 (-SetPositioningAnchorRect@XamlLauncher@@UEAAJUtagRECT@@0@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ @ 0x1801E7314 (-InternalAddRef@-$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x1801E73B4 (-unconditional_release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180223CCC (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?Run@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180227A18 (-Run@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIIm.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180229FFC (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x18024634C (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180246FE4 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ?Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x1802510A0 (-Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180352F78 (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
void __fastcall XamlLauncher::SearchShowRequested__ResumeCoro_1(char *a1)
{
  volatile int *v2; // rdx
  __int64 *v3; // rcx
  __int64 v4; // r8
  volatile signed __int32 **v5; // rcx
  __int64 **v6; // r13
  __int64 *v7; // rax
  HWND v8; // rbx
  HMONITOR v9; // rax
  XamlLauncher *v10; // rcx
  int v11; // eax
  __int64 v12; // r14
  __int64 **v13; // rax
  __int64 *v14; // rax
  unsigned int v15; // r8d
  HSTRING Reserved1; // rdx
  int v17; // eax
  int v18; // [rsp+20h] [rbp-B8h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  try
  {
    LOWORD(v18) = *((_WORD *)a1 + 4);
    switch ( (__int16)v18 )
    {
      case -1:
      case 3:
        goto LABEL_20;
      case 2:
        *((_QWORD *)a1 + 26) = a1 + 9;
        winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
          (__int64 **)(a1 + 233),
          (_QWORD *)a1 + 2);
        v3 = (__int64 *)(a1 + 24);
        *((_QWORD *)a1 + 3) = 0LL;
        v4 = *(_QWORD *)(a1 + 225);
        if ( v4 )
        {
          *v3 = v4;
          Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalAddRef(v3, v2);
        }
        *((_QWORD *)a1 + 4) = v4 + 480;
        *((_QWORD *)a1 + 5) = 0LL;
        *((_WORD *)a1 + 4) = 4;
        if ( (unsigned __int8)winrt::impl::apartment_awaiter::await_suspend(a1 + 32, a1) )
          return;
        goto LABEL_10;
      case 4:
LABEL_10:
        winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 32));
        v6 = (__int64 **)(*((_QWORD *)a1 + 26) + 224LL);
        v7 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
               v6,
               (_QWORD *)a1 + 6);
        v8 = (HWND)winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size(v7);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 48));
        if ( v8 )
        {
          v9 = MonitorFromWindow(v8, 0);
          if ( v9 )
          {
            *((_DWORD *)a1 + 14) = 40;
            *(_OWORD *)(a1 + 60) = 0LL;
            *(_OWORD *)(a1 + 76) = 0LL;
            *((_DWORD *)a1 + 23) = 0;
            if ( GetMonitorInfoW(v9, (LPMONITORINFO)(a1 + 56)) )
            {
              v10 = (XamlLauncher *)(*(_QWORD *)(a1 + 225) + 64LL);
              *((_OWORD *)a1 + 6) = 0LL;
              *((_OWORD *)a1 + 12) = 0LL;
              *((_OWORD *)a1 + 11) = *(_OWORD *)(a1 + 60);
              v11 = XamlLauncher::SetPositioningAnchorRect(v10, (struct tagRECT *)a1 + 11, (struct tagRECT *)a1 + 12);
              if ( v11 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x790,
                  (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
                  (const char *)(unsigned int)v11);
            }
          }
        }
        v12 = *(_QWORD *)(a1 + 225);
        v13 = (__int64 **)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                            v6,
                            (_QWORD *)a1 + 19);
        v14 = winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::Query(
                v13,
                (_QWORD *)a1 + 20);
        *((_QWORD *)a1 + 18) = anonymous_namespace_::ContextToSearchShowArgs(v14);
        Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                               (HSTRING_HEADER *)(a1 + 112),
                               (const WCHAR **)a1 + 18,
                               v15)[1].Reserved.Reserved1;
        v17 = XamlLauncher::Show((XamlLauncher *)(v12 + 64), Reserved1);
        if ( v17 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x795,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            (const char *)(unsigned int)v17,
            v18);
        *((_QWORD *)a1 + 17) = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1 + 20);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 152));
        winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result((__int64 *)v6);
        winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::Run((__int64 *)a1 + 2);
        if ( *((_QWORD *)a1 + 3) )
          winrt::com_ptr<XamlLauncher>::unconditional_release_ref((volatile signed __int32 **)a1 + 3);
        goto LABEL_9;
      case 5:
        v5 = (volatile signed __int32 **)(a1 + 24);
        if ( *((_QWORD *)a1 + 3) )
          winrt::com_ptr<XamlLauncher>::unconditional_release_ref(v5);
LABEL_9:
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
LABEL_20:
        *((_QWORD *)a1 + 26) = a1 + 9;
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 233));
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0x100);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
