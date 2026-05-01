/*
 * XREFs of CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x180490660
 * Callers:
 *     CMultitaskingViewManager::ShowRequested$_InitCoro$2 @ 0x1804905F8 (CMultitaskingViewManager--ShowRequested$_InitCoro$2.c)
 * Callees:
 *     ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180022320 (-GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEA.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180063FE8 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?add_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ @ 0x180084AB8 (-add_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x1800EA2C4 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 *     ?CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x1801875D0 (-CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEA.c)
 *     ?SetActive@ForegroundStaging@@QEAAJXZ @ 0x1801F7F5C (-SetActive@ForegroundStaging@@QEAAJXZ.c)
 *     ?EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ @ 0x1801FF5EC (-EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ.c)
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180223CCC (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?Run@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180227A18 (-Run@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIIm.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180229FFC (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x18024634C (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180246FE4 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ?WindowAction@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802470A0 (-WindowAction@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@S.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180352F78 (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?WorkAreaOffset@?$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18035F07C (-WorkAreaOffset@-$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManag.c)
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_::operator() @ 0x18048F5B4 (_lambda_2b601edba18b4fdf43345f97c13ddcab_--operator().c)
 *     ?EnsureExplorerInForeground@CMultitaskingViewManager@@AEAAJXZ @ 0x18048FCF4 (-EnsureExplorerInForeground@CMultitaskingViewManager@@AEAAJXZ.c)
 *     ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x180490140 (-IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
void __fastcall CMultitaskingViewManager::ShowRequested__ResumeCoro_1(__int64 a1)
{
  volatile int *v1; // rdx
  __int64 *v2; // rcx
  __int64 v3; // r8
  __int64 *v4; // rcx
  __int64 v5; // r15
  int IsMultitaskingViewVisible; // eax
  char v7; // dl
  _QWORD *v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  int v14; // eax
  _QWORD *v15; // rdi
  __int64 **v16; // r13
  __int64 *v17; // rax
  HWND v18; // r12
  __int64 *v19; // rax
  __int64 v20; // r12
  __int64 (__fastcall *v21)(__int64, __int64, GUID *, GUID *); // r13
  int v22; // eax
  int v23; // eax
  __int64 *v24; // rax
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  unsigned int v29; // ebx
  _QWORD *v30; // r13
  int v31; // eax
  _QWORD *v32; // r12
  int MultitaskingView; // eax
  int v34; // eax
  volatile int *v35; // rdx
  int v36; // [rsp+20h] [rbp-B8h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  __int64 **v39; // [rsp+F0h] [rbp+18h]

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_57;
      case 2:
        *(_QWORD *)(a1 + 160) = a1 + 9;
        winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
          (__int64 **)(a1 + 185),
          (_QWORD *)(a1 + 16));
        v2 = (__int64 *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = 0LL;
        v3 = *(_QWORD *)(a1 + 177);
        if ( v3 )
        {
          *v2 = v3;
          winrt::com_ptr<CMultitaskingViewManager>::add_ref(v2, v1);
        }
        *(_QWORD *)(a1 + 32) = v3 + 456;
        *(_QWORD *)(a1 + 40) = 0LL;
        *(_WORD *)(a1 + 8) = 4;
        if ( winrt::impl::apartment_awaiter::await_suspend((__int64 **)(a1 + 32), (void (*)(void *, void *))a1) )
          return;
        goto LABEL_10;
      case 4:
LABEL_10:
        winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 32));
        *(_DWORD *)(a1 + 48) = 0;
        v5 = *(_QWORD *)(a1 + 177);
        IsMultitaskingViewVisible = CMultitaskingViewManager::IsMultitaskingViewVisible(v5, 2, (_DWORD *)(a1 + 48));
        if ( IsMultitaskingViewVisible < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x3B9,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
            (const char *)(unsigned int)IsMultitaskingViewVisible,
            v36);
        if ( !*(_DWORD *)(a1 + 48) && !*(_BYTE *)(v5 + 472) )
        {
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(
            `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
            v7);
          v8 = (_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 56) = 0LL;
          if ( (int)CMultitaskingViewManager::GetMultitaskingView(
                      v5,
                      4,
                      (__int64)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9,
                      (_QWORD *)(a1 + 56)) >= 0 )
          {
            v9 = ForegroundStaging::SetActive((ForegroundStaging *)(v5 + 320));
            if ( v9 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x3C3,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v9,
                v36);
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 40LL))(*v8);
          }
          if ( *v8 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 56));
          v10 = CMultitaskingViewManager::EnsureExplorerInForeground((CMultitaskingViewManager *)v5);
          if ( v10 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x3CC,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
              (const char *)(unsigned int)v10);
          v14 = CMultitaskingViewManager::EnsureXamlCoreForThreadIfNeeded((CMultitaskingViewManager *)v5, v11, v12, v13);
          if ( v14 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x3CE,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
              (const char *)(unsigned int)v14,
              v36);
          *(_BYTE *)(a1 + 64) = 0;
          *(_QWORD *)(a1 + 72) = *(_QWORD *)(v5 + 440);
          Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 72));
          lambda_2b601edba18b4fdf43345f97c13ddcab_::operator()(a1 + 64, (_BYTE *)(a1 + 80), (__int64 *)(a1 + 72));
          v15 = (_QWORD *)(a1 + 88);
          *(_QWORD *)(a1 + 88) = 0LL;
          v16 = (__int64 **)(*(_QWORD *)(a1 + 160) + 176LL);
          v39 = v16;
          v17 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                  v16,
                  (_QWORD *)(a1 + 96));
          v18 = (HWND)winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size(v17);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 96));
          if ( v18 )
          {
            v19 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                    v16,
                    (_QWORD *)(a1 + 104));
            winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaOffset(
              v19,
              (_QWORD *)(a1 + 112));
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 104));
            *(_DWORD *)(a1 + 120) = (int)*(float *)(a1 + 112);
            *(_DWORD *)(a1 + 124) = (int)*(float *)(a1 + 116);
            MapWindowPoints(v18, 0LL, (LPPOINT)(a1 + 120), 1u);
            v20 = *(_QWORD *)(v5 + 240);
            v21 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *))(*(_QWORD *)v20 + 96LL);
            if ( *v15 )
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 88));
            v36 = a1 + 88;
            v22 = v21(
                    v20,
                    a1 + 120,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
            if ( v22 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x3E1,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v22);
            v16 = v39;
          }
          if ( !*v15 )
          {
            v36 = a1 + 88;
            v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, GUID *))(**(_QWORD **)(v5 + 240) + 72LL))(
                    *(_QWORD *)(v5 + 240),
                    0LL,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
            if ( v23 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x3E7,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v23,
                v36);
          }
          v24 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                  v16,
                  (_QWORD *)(a1 + 128));
          v25 = winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowAction(v24);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 128));
          v26 = v25 - 1;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( v27 && (v28 = v27 - 1) != 0 )
            {
              if ( v28 == 1 )
                v29 = 8;
              else
                v29 = 0;
            }
            else
            {
              v29 = 2;
            }
          }
          else
          {
            v29 = 1;
          }
          v30 = (_QWORD *)(a1 + 136);
          *(_QWORD *)(a1 + 136) = 0LL;
          if ( (int)CMultitaskingViewManager::GetMultitaskingView(
                      v5,
                      2,
                      (__int64)&GUID_389221b7_bf28_4d25_9501_b4491d822be1,
                      (_QWORD *)(a1 + 136)) < 0 )
          {
            v32 = (_QWORD *)(a1 + 144);
            *(_QWORD *)(a1 + 144) = 0LL;
            MultitaskingView = CMultitaskingViewManager::CreateMultitaskingView(
                                 v5,
                                 2u,
                                 (__int64)&GUID_389221b7_bf28_4d25_9501_b4491d822be1,
                                 a1 + 144);
            if ( MultitaskingView < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x409,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)MultitaskingView,
                v36);
            v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v32 + 48LL))(
                    *v32,
                    *(_QWORD *)(v5 + 240),
                    *v15,
                    v29);
            if ( v34 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x40D,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v34);
            if ( *v32 )
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 144));
          }
          else
          {
            v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v30 + 48LL))(
                    *v30,
                    *(_QWORD *)(v5 + 240),
                    *v15,
                    v29);
            if ( v31 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x404,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v31);
          }
          if ( *v30 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 136));
          if ( *v15 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 88));
        }
        winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result((__int64 *)(*(_QWORD *)(a1 + 160) + 176LL));
        winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::Run((__int64 *)(a1 + 16));
        if ( *(_QWORD *)(a1 + 24) )
          winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref((__int64 *)(a1 + 24), v35);
        goto LABEL_56;
      case 5:
        v4 = (__int64 *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 24) )
          winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref(v4, &_ImageBase.unused);
LABEL_56:
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
LABEL_57:
        *(_QWORD *)(a1 + 160) = a1 + 9;
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 185));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0xD0);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
