/*
 * XREFs of XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x18044EE40
 * Callers:
 *     XamlLauncher::LauncherDismissRequested$_InitCoro$2 @ 0x18044EDD4 (XamlLauncher--LauncherDismissRequested$_InitCoro$2.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180063FE8 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x1800A9908 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F5554 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ @ 0x1801E7314 (-InternalAddRef@-$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x1801E73B4 (-unconditional_release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180223CCC (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?Run@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180227A18 (-Run@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIIm.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180229FFC (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ?RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ @ 0x18022A380 (-RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ.c)
 *     ?Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180241290 (-Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x18024634C (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180246FE4 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180352F78 (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?AnimationData@?$consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties@UIShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18035DAB0 (-AnimationData@-$consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties@UIShellViewAnimationP.c)
 *     ?AnimationProperties@?$consume_WindowsUdk_UI_Shell_IDismissShellViewOptions2@UDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18035DB00 (-AnimationProperties@-$consume_WindowsUdk_UI_Shell_IDismissShellViewOptions2@UDismissShellViewOp.c)
 *     _anonymous_namespace_::ContextToLauncherDismissMethod @ 0x18044DB14 (_anonymous_namespace_--ContextToLauncherDismissMethod.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=24 #try_helpers=1
void __fastcall XamlLauncher::LauncherDismissRequested__ResumeCoro_1(char *a1)
{
  volatile int *v2; // rdx
  __int64 *v3; // rcx
  __int64 v4; // r8
  volatile signed __int32 **v5; // rcx
  __int64 v6; // r13
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  bool v9; // bl
  __int64 **v10; // rcx
  _QWORD *v11; // rax
  __int64 *v12; // rax
  _QWORD *v13; // rax
  __int64 *v14; // rax
  _QWORD *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rax
  int v18; // eax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v19; // rcx
  __int64 **v20; // rax
  __int64 *View; // rax
  int v22; // eax
  int v23; // [rsp+20h] [rbp-C8h]
  __int64 (__fastcall *v24)(__int64, __int64, __int64, __int64); // [rsp+38h] [rbp-B0h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  __int64 v27; // [rsp+F8h] [rbp+10h]
  __int64 v28; // [rsp+100h] [rbp+18h]
  __int64 v29; // [rsp+108h] [rbp+20h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_22;
      case 2:
        *((_QWORD *)a1 + 24) = a1 + 9;
        *((_QWORD *)a1 + 22) = a1 + 9;
        winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
          (__int64 **)(a1 + 217),
          (_QWORD *)a1 + 2);
        v3 = (__int64 *)(a1 + 24);
        *((_QWORD *)a1 + 3) = 0LL;
        v4 = *(_QWORD *)(a1 + 209);
        if ( v4 )
        {
          *v3 = v4;
          Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalAddRef(v3, v2);
        }
        *((_QWORD *)a1 + 4) = v4 + 480;
        *((_QWORD *)a1 + 5) = 0LL;
        *((_WORD *)a1 + 4) = 4;
        if ( winrt::impl::apartment_awaiter::await_suspend((__int64 **)a1 + 4, (void (*)(void *, void *))a1) )
          return;
        goto LABEL_10;
      case 4:
LABEL_10:
        winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 32));
        v6 = *(_QWORD *)(a1 + 209);
        if ( !*(_QWORD *)(v6 + 376) )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x73E,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            (const char *)0x80070490LL,
            v23);
        XamlLauncher::RepairWNFStalenessIfNecessary(*(XamlLauncher **)(a1 + 209));
        *((_QWORD *)a1 + 6) = 0LL;
        v7 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
               (__int64 **)(*((_QWORD *)a1 + 24) + 208LL),
               (_QWORD *)a1 + 7);
        v8 = winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewOptions2<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions>::AnimationProperties(
               (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v7,
               (_QWORD *)a1 + 8);
        v9 = winrt::Windows::Foundation::operator!=(
               (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v8,
               (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1 + 6);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 64));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
        *((_QWORD *)a1 + 24) = a1 + 9;
        v10 = (__int64 **)(a1 + 217);
        if ( v9 )
        {
          v29 = *(_QWORD *)(v6 + 168);
          v24 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v29 + 160LL);
          v11 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                  v10,
                  (_QWORD *)a1 + 9);
          v12 = winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewOptions2<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions>::AnimationProperties(
                  (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v11,
                  (_QWORD *)a1 + 10);
          v27 = winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties<winrt::WindowsUdk::UI::Shell::IShellViewAnimationProperties>::AnimationData(
                  v12,
                  (_QWORD *)a1 + 11)[1];
          v13 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                  (__int64 **)(a1 + 217),
                  (_QWORD *)a1 + 13);
          v14 = winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewOptions2<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions>::AnimationProperties(
                  (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v13,
                  (_QWORD *)a1 + 14);
          v28 = *winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewAnimationProperties<winrt::WindowsUdk::UI::Shell::IShellViewAnimationProperties>::AnimationData(
                   v14,
                   (_QWORD *)a1 + 15);
          v15 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                  (__int64 **)(*((_QWORD *)a1 + 22) + 208LL),
                  (_QWORD *)a1 + 17);
          v16 = winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewOptions2<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions>::AnimationProperties(
                  (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v15,
                  (_QWORD *)a1 + 18);
          v17 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size(v16);
          v18 = v24(v29, v17, v28, v27);
          if ( v18 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x76D,
              (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              (const char *)(unsigned int)v18,
              v23);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 144));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 136));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 112));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 104));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 80));
          v19 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72);
        }
        else
        {
          v20 = (__int64 **)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                              v10,
                              (_QWORD *)a1 + 19);
          View = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
                   v20,
                   (_QWORD *)a1 + 20);
          anonymous_namespace_::ContextToLauncherDismissMethod(View);
          v22 = XamlLauncher::Dismiss(v6 + 24);
          if ( v22 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x771,
              (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              (const char *)(unsigned int)v22,
              v23);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1 + 20);
          v19 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 152);
        }
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v19);
        winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result((__int64 *)(*((_QWORD *)a1 + 22) + 208LL));
        winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::Run((__int64 *)a1 + 2);
        if ( *((_QWORD *)a1 + 3) )
          winrt::com_ptr<XamlLauncher>::unconditional_release_ref((volatile signed __int32 **)a1 + 3);
        goto LABEL_21;
      case 5:
        v5 = (volatile signed __int32 **)(a1 + 24);
        if ( *((_QWORD *)a1 + 3) )
          winrt::com_ptr<XamlLauncher>::unconditional_release_ref(v5);
LABEL_21:
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
LABEL_22:
        *((_QWORD *)a1 + 24) = a1 + 9;
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 217));
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0xF0);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
