/*
 * XREFs of ?Activate@ProviderActivator@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUTransitionScreen@7CloudDesktop@3456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18064AF98
 * Callers:
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1806427E0 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180645610 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@AEBU?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@3@@Z @ 0x180242D50 (-Completed@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Start.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??1?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18062F710 (--1-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt.c)
 *     ??1?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BGA@AA@impl@winrt@@QEAA@XZ @ 0x1806426D8 (--1-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@_ea_1806426D8.c)
 *     ?Rendered@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTransitionScreen@1CloudDesktop@Shell@Internal@Windows@winrt@@UTransitionScreenId@123456@@Foundation@Windows@3@@Z @ 0x180643AC8 (-Rendered@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITra.c)
 *     ?push_back@?$vector@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAAX$$QEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@Z @ 0x180643D44 (-push_back@-$vector@U-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Inte.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::ProviderActivator::Activate(
        winrt::Windows::Internal::Shell::implementation::ProviderActivator *this,
        const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen *a2,
        __int64 **a3)
{
  _DWORD *v6; // rax
  char v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 **v11; // rax
  volatile signed __int32 *v12; // rcx
  _DWORD *v13; // rax
  volatile signed __int32 *v14; // rcx
  volatile signed __int32 *v15; // [rsp+20h] [rbp-40h] BYREF
  winrt::Windows::Internal::Shell::implementation::ProviderActivator *v16; // [rsp+28h] [rbp-38h] BYREF
  volatile signed __int32 *v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19[3]; // [rsp+48h] [rbp-18h] BYREF
  winrt::Windows::Internal::Shell::implementation::ProviderActivator **v20; // [rsp+80h] [rbp+20h] BYREF
  __int64 v21; // [rsp+98h] [rbp+38h] BYREF

  v6 = operator new(0x18uLL);
  v6[2] = 1;
  *((_QWORD *)v6 + 2) = this;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v6 = off_180734258;
  v20 = (winrt::Windows::Internal::Shell::implementation::ProviderActivator **)v6;
  v8 = winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Rendered(
         (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a2,
         v18,
         v7,
         &v20);
  v9 = v8[1];
  v10 = *v8;
  *v8 = 0LL;
  v19[0] = v10;
  v19[1] = (__int64) Windows::Foundation::IPropertyValue::`vcall'{96,{flat}};
  v19[2] = v9;
  __1__event_revoker_UITransitionScreen_TransitionScreen_CloudDesktop_Shell_Internal_Windows_winrt___MP8type___abi_UITransitionScreen_TransitionScreen_CloudDesktop_Shell_Internal_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BGA_AA_impl_winrt__QEAA_XZ(v18);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v20);
  std::vector<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>>::push_back(
    (__int64 *)this + 1,
    v19);
  (*(void (__fastcall **)(winrt::Windows::Internal::Shell::implementation::ProviderActivator *, __int64 *, __int64 **))(*(_QWORD *)this + 72LL))(
    this,
    &v21,
    a3);
  v11 = (volatile signed __int32 **)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                                      a3,
                                      &v15);
  v16 = this;
  v12 = *v11;
  *v11 = 0LL;
  v17 = v12;
  v20 = &v16;
  v13 = operator new(0x20uLL);
  v13[2] = 1;
  *((_QWORD *)v13 + 2) = v16;
  v14 = v17;
  v17 = 0LL;
  *((_QWORD *)v13 + 3) = v14;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v13 = off_180734278;
  v20 = (winrt::Windows::Internal::Shell::implementation::ProviderActivator **)v13;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v17);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::Completed(
    &v21,
    (__int64 *)&v20);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v20);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
  winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::~event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>(v19);
}
