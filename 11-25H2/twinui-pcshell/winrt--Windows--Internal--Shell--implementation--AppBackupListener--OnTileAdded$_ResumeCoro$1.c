/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x1805F0C80
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_InitCoro$2 @ 0x1805F0C04 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_InitCoro$2.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18005A388 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800A4E7C (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?BackupAppLevelTileAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUTileId@StartScreen@UI@WindowsUdk@6@Uhstring@6@@Z @ 0x1800EBC0C (-BackupAppLevelTileAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUTi.c)
 *     ?ToString@?$consume_Windows_Foundation_IStringable@UTileId@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800EC018 (-ToString@-$consume_Windows_Foundation_IStringable@UTileId@StartScreen@UI@WindowsUdk@winrt@@@imp.c)
 *     winrt::Windows::Internal::Shell::implementation::CensorTileId @ 0x1800EC0D0 (winrt--Windows--Internal--Shell--implementation--CensorTileId.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800ED100 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180186F60 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@QEAA@XZ @ 0x1801CA96C (--1-$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITile@StartScreen@UI@.c)
 *     ?push_back@?$vector@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@V?$allocator@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@@std@@@std@@QEAAX$$QEAU?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@@Z @ 0x1801F2B88 (-push_back@-$vector@U-$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITi.c)
 *     ??$?0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAA?AUfire_and_forget@5@UTile@StartScreen@UI@WindowsUdk@5@UTileChangedEventArgs@89WindowsUdk@5@@Z@?$TypedEventHandler@UTile@StartScreen@UI@WindowsUdk@winrt@@UTileChangedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@$$QEAU?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@3@P8AppBackupListener@implementation@Shell@Internal@23@EAA?AUfire_and_forget@3@UTile@StartScreen@UI@WindowsUdk@3@UTileChangedEventArgs@StartScreen@UI@WindowsUdk@3@@Z@Z @ 0x180201EB8 (--$-0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAA-AUfire_and_for.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180219E7C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged_::_8_::_parameters_::__parameters_ @ 0x18029E224 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileChanged_--_8_--_param.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Changed@?$consume_WindowsUdk_UI_StartScreen_ITile@UITile@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTile@StartScreen@UI@WindowsUdk@winrt@@UTileChangedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1805EF30C (-Changed@-$consume_WindowsUdk_UI_StartScreen_ITile@UITile@StartScreen@UI@WindowsUdk@winrt@@@impl.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded__ResumeCoro_1(char *a1)
{
  __int64 v2; // rcx
  void *v3; // r8
  __int64 *v4; // rcx
  _QWORD *InstanceAsync; // rax
  winrt::hstring *v6; // rax
  const WCHAR *v7; // rax
  char *v8; // rax
  const char *v9; // r9
  __int64 v10; // r13
  winrt::hstring *v11; // rbx
  __int64 *v12; // rax
  __int64 *strong; // rax
  char v14; // r8

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_14;
      case 2:
        *((_QWORD *)a1 + 2) = 0LL;
        winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
          *(_QWORD *)(a1 + 193),
          (_QWORD *)a1 + 3);
        a1[32] = 0;
        *((_WORD *)a1 + 4) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v2, (void (*)(void *, void *))a1, v3);
        return;
      case 4:
        winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
          (__int64 **)(a1 + 209),
          (_QWORD *)a1 + 5);
        InstanceAsync = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                          (__int64 **)a1 + 5,
                          (_QWORD *)a1 + 6);
        v6 = (winrt::hstring *)winrt::impl::consume_Windows_Foundation_IStringable<winrt::WindowsUdk::UI::StartScreen::TileId>::ToString(
                                 (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))InstanceAsync,
                                 (_QWORD *)a1 + 7);
        v7 = winrt::hstring::c_str(v6);
        v8 = (char *)winrt::Windows::Internal::Shell::implementation::CensorTileId(v7);
        wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
          (_QWORD *)a1 + 8,
          v8,
          0xFFFFFFFFFFFFFFFFuLL,
          v9);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
          (void **)a1 + 2,
          (void **)a1 + 8);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)a1 + 8);
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1 + 7);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 48));
        v10 = *(_QWORD *)(a1 + 193);
        *((_QWORD *)a1 + 10) = a1 + 72;
        v11 = winrt::hstring::hstring((winrt::hstring *)(a1 + 72), L"Add");
        v12 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                (__int64 **)a1 + 5,
                (_QWORD *)a1 + 11);
        winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync(v10, v12, v11);
        strong = winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
                   v10,
                   (_QWORD *)a1 + 15);
        *((_QWORD *)a1 + 13) = &winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged;
        *((_DWORD *)a1 + 28) = 0;
        *((_OWORD *)a1 + 11) = *(_OWORD *)(a1 + 104);
        winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>(
          (__int64)(a1 + 96),
          strong,
          (__int128 *)a1 + 11);
        winrt::impl::consume_WindowsUdk_UI_StartScreen_ITile<winrt::WindowsUdk::UI::StartScreen::ITile>::Changed(
          (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1 + 5,
          (__int64 *)a1 + 16,
          v14,
          (_QWORD *)a1 + 12);
        if ( *((_QWORD *)a1 + 12) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 12);
        if ( *((_QWORD *)a1 + 15) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 15);
        *((_QWORD *)a1 + 18) = v10 + 328;
        std::_Mutex_base::lock((std::_Mutex_base *)(v10 + 328));
        _push_back___vector_U__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt__V__allocator_U__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt___std___std__QEAAX__QEAU__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt___Z(
          (__int64 **)(v10 + 192),
          (__int64 *)a1 + 16);
        _Mtx_unlock((_Mtx_t)(v10 + 328));
        __1__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt__QEAA_XZ((__int64 *)a1 + 16);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 40));
        if ( *((_QWORD *)a1 + 3) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 3);
        goto LABEL_13;
      case 5:
        v4 = (__int64 *)(a1 + 24);
        if ( *((_QWORD *)a1 + 3) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4);
LABEL_13:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)a1 + 2);
LABEL_14:
        winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged_::_8_::_parameters_::__parameters_((__int64)(a1 + 193));
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0xE0);
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
