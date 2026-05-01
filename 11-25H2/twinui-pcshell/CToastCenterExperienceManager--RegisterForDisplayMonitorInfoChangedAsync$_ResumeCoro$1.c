/*
 * XREFs of CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1802474E0
 * Callers:
 *     CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_InitCoro$2 @ 0x180247488 (CToastCenterExperienceManager--RegisterForDisplayMonitorInfoChangedAsync$_InitCoro$2.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1800A6780 (--4-$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIDi.c)
 *     ??1?$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGA@AA@impl@winrt@@QEAA@XZ @ 0x1800A67D8 (--1-$event_revoker@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIDi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?GetCurrentAsync@DisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801ECF94 (-GetCurrentAsync@DisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032BAD8 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18033A36C (-await_resume@-$await_adapter@U-$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsU.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCStartExperienceManager@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCStartExperienceManager@@@experimental@std@@@experimental@std@@@Z @ 0x18035CA3C (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCStartExperienceMa.c)
 *     ?DisplayMonitorInfoChanged@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@UDisplayMonitorInfoChangedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x180364DBC (-DisplayMonitorInfoChanged@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplay.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync__ResumeCoro_1(__int64 a1)
{
  _QWORD *CurrentAsync; // rax
  __int64 *v2; // rax
  __int64 v3; // r15
  _DWORD *v4; // rax
  __int64 v5; // xmm0_8
  __int64 v6; // r8
  __int64 *v7; // rax

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_7;
      case 2:
        CurrentAsync = winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection::GetCurrentAsync((_QWORD *)(a1 + 16));
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_QWORD *)(a1 + 32) = CurrentAsync;
        *(_QWORD *)(a1 + 40) = 0LL;
        *(_BYTE *)(a1 + 48) = 1;
        *(_WORD *)(a1 + 8) = 4;
        if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CStartExperienceManager *>::promise_type>(
                                a1 + 24,
                                a1) )
          return;
        goto LABEL_6;
      case 4:
LABEL_6:
        v2 = (__int64 *)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>,1>::await_resume(
                          a1 + 24,
                          a1 + 56);
        v3 = *(_QWORD *)(a1 + 129);
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(v3 + 320), v2);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 24);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
        *(_QWORD *)(a1 + 104) = v3;
        *(_QWORD *)(a1 + 112) = &CToastCenterExperienceManager::OnDisplayMonitorInfoChanged;
        *(_DWORD *)(a1 + 120) = 0;
        *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 84);
        v4 = operator new(0x28uLL);
        v4[2] = 1;
        v5 = *(_QWORD *)(a1 + 120);
        *((_OWORD *)v4 + 1) = *(_OWORD *)(a1 + 104);
        *((_QWORD *)v4 + 4) = v5;
        _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
        *(_QWORD *)v4 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection,winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs>,_lambda_ab73a47a7e52d4de79b9df50d88832e4_>::`vftable';
        *(_QWORD *)(a1 + 64) = v4;
        v7 = (__int64 *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::DisplayMonitorInfoChanged(
                          v3 + 320,
                          a1 + 88,
                          v6,
                          a1 + 64);
        __4__event_revoker_UIDisplayMonitorInfoCollection_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIDisplayMonitorInfoCollection_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
          v3 + 328,
          v7);
        __1__event_revoker_UIDisplayMonitorInfoCollection_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIDisplayMonitorInfoCollection_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 88));
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 64));
        goto LABEL_7;
      case 5:
        winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 24);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
LABEL_7:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0x90);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
