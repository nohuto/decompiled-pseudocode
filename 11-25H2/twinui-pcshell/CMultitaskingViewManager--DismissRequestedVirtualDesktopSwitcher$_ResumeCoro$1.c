/*
 * XREFs of CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18048FA40
 * Callers:
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_InitCoro$2 @ 0x18048F9D8 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_InitCoro$2.c)
 * Callees:
 *     ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180022320 (-GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEA.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?add_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ @ 0x180084AB8 (-add_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x1800EA2C4 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 *     ?Run@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180227A18 (-Run@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIIm.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180229FFC (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x18024634C (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180246FE4 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180352F78 (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 *     ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x180490140 (-IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
void __fastcall CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher__ResumeCoro_1(__int64 a1)
{
  volatile int *v1; // rdx
  __int64 *v2; // rcx
  __int64 v3; // r8
  int IsMultitaskingViewVisible; // eax
  _QWORD *v5; // rsi
  int v6; // eax
  volatile int *v7; // rdx
  int v8; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    LOWORD(v8) = *(_WORD *)(a1 + 8);
    switch ( (__int16)v8 )
    {
      case -1:
      case 3:
        goto LABEL_21;
      case 2:
        *(_QWORD *)(a1 + 64) = a1 + 9;
        winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
          (__int64 **)(a1 + 89),
          (_QWORD *)(a1 + 16));
        v2 = (__int64 *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = 0LL;
        v3 = *(_QWORD *)(a1 + 81);
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
        IsMultitaskingViewVisible = CMultitaskingViewManager::IsMultitaskingViewVisible(
                                      *(_QWORD *)(a1 + 81),
                                      16LL,
                                      a1 + 48);
        if ( IsMultitaskingViewVisible < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x48F,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
            (const char *)(unsigned int)IsMultitaskingViewVisible,
            v8);
        if ( *(_DWORD *)(a1 + 48) )
        {
          v5 = (_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 56) = 0LL;
          if ( (int)CMultitaskingViewManager::GetMultitaskingView(
                      *(_QWORD *)(a1 + 81),
                      16,
                      (__int64)&GUID_1be71764_e771_4442_b78f_eda2c7f067f3,
                      (_QWORD *)(a1 + 56)) >= 0 )
          {
            v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v5 + 56LL))(*v5, 1LL);
            if ( v6 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x496,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v6);
          }
          if ( *v5 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 56));
        }
        winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result((__int64 *)(*(_QWORD *)(a1 + 64) + 80LL));
        winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::Run((__int64 *)(a1 + 16));
        if ( *(_QWORD *)(a1 + 24) )
          winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref((__int64 *)(a1 + 24), v7);
        goto LABEL_20;
      case 5:
        if ( *(_QWORD *)(a1 + 24) )
          winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref((__int64 *)(a1 + 24), &_ImageBase.unused);
LABEL_20:
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
LABEL_21:
        *(_QWORD *)(a1 + 64) = a1 + 9;
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 89));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0x70);
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
