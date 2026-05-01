/*
 * XREFs of CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x180253BA0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_809da4074b2def485a571e5b447a149a___::Invoke @ 0x1804A0BD0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1804A0BD0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A624 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ?Query@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002C774 (-Query@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006CF04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180094210 (-GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEA.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CC128 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?add_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ @ 0x18010DA98 (-add_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x1801C5D64 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801D0FF4 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x1801DF120 (-CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEA.c)
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180214EBC (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?Run@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802187CC (-Run@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIIm.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x18021B1B0 (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x180237340 (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ?WindowAction@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180237F80 (-WindowAction@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@S.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180358FEC (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?WorkAreaOffset@?$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18036601C (-WorkAreaOffset@-$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManag.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@QEAA_NXZ @ 0x180369C54 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@QEAA_NXZ.c)
 *     ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x1804A0C60 (-IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
void __fastcall CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__ResumeCoro_1(char *a1)
{
  volatile int *v2; // rdx
  __int64 *v3; // rcx
  __int64 v4; // r8
  __int64 *v5; // rcx
  __int64 v6; // r13
  int IsMultitaskingViewVisible; // eax
  char v8; // r8
  int v9; // eax
  _QWORD *v10; // rbx
  __int64 v11; // r15
  __int64 *v12; // rax
  HWND v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // r15
  __int64 (__fastcall *v16)(__int64, char *, GUID *, GUID *); // r12
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // r14d
  __int64 v21; // r13
  __int64 *v22; // rax
  int v23; // ebx
  int v24; // ebx
  __int64 **v25; // rax
  _QWORD *v26; // rax
  BOOL v27; // ebx
  __int64 v28; // r15
  int v29; // eax
  __int64 *v30; // rbx
  int MultitaskingView; // eax
  int v32; // eax
  int v33; // [rsp+20h] [rbp-B8h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_48;
      case 2:
        *((_QWORD *)a1 + 18) = a1 + 16;
        winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
          (__int64 **)a1 + 22,
          (_QWORD *)a1 + 2);
        v3 = (__int64 *)(a1 + 24);
        *((_QWORD *)a1 + 3) = 0LL;
        v4 = *((_QWORD *)a1 + 21);
        if ( v4 )
        {
          *v3 = v4;
          winrt::com_ptr<CMultitaskingViewManager>::add_ref(v3, v2);
        }
        *((_QWORD *)a1 + 4) = v4 + 456;
        *((_QWORD *)a1 + 5) = 0LL;
        *((_WORD *)a1 + 4) = 4;
        if ( (unsigned __int8)winrt::impl::apartment_awaiter::await_suspend(a1 + 32, a1) )
          return;
        goto LABEL_10;
      case 4:
LABEL_10:
        winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 32));
        *((_DWORD *)a1 + 12) = 0;
        v6 = *((_QWORD *)a1 + 21);
        IsMultitaskingViewVisible = CMultitaskingViewManager::IsMultitaskingViewVisible(v6, 2LL, a1 + 48);
        if ( IsMultitaskingViewVisible < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x44F,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
            (const char *)(unsigned int)IsMultitaskingViewVisible,
            v33);
        *((_DWORD *)a1 + 13) = 0;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
          1u,
          v8);
        v9 = CMultitaskingViewManager::IsMultitaskingViewVisible(v6, 4LL, a1 + 52);
        if ( v9 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x454,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
            (const char *)(unsigned int)v9,
            v33);
        if ( !*((_DWORD *)a1 + 12) && !*((_DWORD *)a1 + 13) && !*(_BYTE *)(v6 + 472) )
        {
          v10 = a1 + 56;
          *((_QWORD *)a1 + 7) = 0LL;
          v11 = *((_QWORD *)a1 + 18);
          v12 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                  (__int64 **)(v11 + 160),
                  (_QWORD *)a1 + 8);
          v13 = (HWND)winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size(v12);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 64));
          if ( v13 )
          {
            v14 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                    (__int64 **)(v11 + 160),
                    (_QWORD *)a1 + 9);
            winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaOffset(
              v14,
              a1 + 80);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 72));
            *((_DWORD *)a1 + 22) = (int)*((float *)a1 + 20);
            *((_DWORD *)a1 + 23) = (int)*((float *)a1 + 21);
            MapWindowPoints(v13, 0LL, (LPPOINT)a1 + 11, 1u);
            v15 = *(_QWORD *)(v6 + 240);
            v16 = *(__int64 (__fastcall **)(__int64, char *, GUID *, GUID *))(*(_QWORD *)v15 + 96LL);
            if ( *v10 )
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 7);
            v33 = (_DWORD)a1 + 56;
            v17 = v16(
                    v15,
                    a1 + 88,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
            if ( v17 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x466,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v17);
          }
          if ( !*v10 )
          {
            v33 = (_DWORD)a1 + 56;
            v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, GUID *))(**(_QWORD **)(v6 + 240) + 72LL))(
                    *(_QWORD *)(v6 + 240),
                    0LL,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
            if ( v18 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x46C,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v18,
                v33);
          }
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_41356296>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_41356296>::GetImpl'::`2'::impl) )
          {
            v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v10 + 40LL))(*v10, v6 + 480);
            if ( v19 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x471,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v19);
          }
          v20 = 0;
          v21 = *((_QWORD *)a1 + 18);
          v22 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                  (__int64 **)(v21 + 160),
                  (_QWORD *)a1 + 12);
          v23 = winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowAction(v22);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 96));
          v24 = v23 - 2;
          if ( v24 )
          {
            if ( v24 == 1 )
            {
              v25 = (__int64 **)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                                  (__int64 **)(v21 + 160),
                                  (_QWORD *)a1 + 13);
              v26 = winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::Query(
                      v25,
                      (_QWORD *)a1 + 14);
              v27 = winrt::operator==((__int64)v26, (__int64)L"FlyOut.TakeFocus");
              winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1 + 14);
              winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 104));
              v20 = 2 * v27 + 4;
            }
          }
          else
          {
            v20 = 1;
          }
          *((_QWORD *)a1 + 15) = 0LL;
          v28 = *((_QWORD *)a1 + 21);
          if ( (int)CMultitaskingViewManager::GetMultitaskingView(
                      v28,
                      16,
                      (__int64)&GUID_1be71764_e771_4442_b78f_eda2c7f067f3,
                      (_QWORD *)a1 + 15) < 0 )
          {
            v30 = (__int64 *)(a1 + 128);
            *((_QWORD *)a1 + 16) = 0LL;
            MultitaskingView = CMultitaskingViewManager::CreateMultitaskingView(
                                 v28,
                                 0x10u,
                                 (__int64)&GUID_1be71764_e771_4442_b78f_eda2c7f067f3,
                                 (__int64)(a1 + 128));
            if ( MultitaskingView < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x48C,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)MultitaskingView,
                v33);
            v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)*v30 + 48LL))(
                    *v30,
                    *((_QWORD *)a1 + 7),
                    v20);
            if ( v32 < 0 )
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x490,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v32);
              v30 = (__int64 *)(a1 + 128);
            }
            if ( *v30 )
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v30);
          }
          else
          {
            v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 15) + 48LL))(
                    *((_QWORD *)a1 + 15),
                    *((_QWORD *)a1 + 7),
                    v20);
            if ( v29 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x487,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v29);
          }
          if ( *((_QWORD *)a1 + 15) )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 15);
          if ( *((_QWORD *)a1 + 7) )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 7);
        }
        winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result((__int64 *)(*((_QWORD *)a1 + 18) + 160LL));
        winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::Run((__int64 *)a1 + 2);
        if ( *((_QWORD *)a1 + 3) )
          winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref((__int64 *)a1 + 3);
        goto LABEL_9;
      case 5:
        v5 = (__int64 *)(a1 + 24);
        if ( *((_QWORD *)a1 + 3) )
          winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref(v5);
LABEL_9:
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
LABEL_48:
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 176));
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0xC0);
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
