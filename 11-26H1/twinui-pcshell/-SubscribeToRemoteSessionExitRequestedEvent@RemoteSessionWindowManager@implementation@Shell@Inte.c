/*
 * XREFs of ?SubscribeToRemoteSessionExitRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18065C330
 * Callers:
 *     _lambda_d6825c428197dee9c36f361ea1d02b0a_::operator() @ 0x180659884 (_lambda_d6825c428197dee9c36f361ea1d02b0a_--operator().c)
 *     ?ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBURemoteDesktopProviderInfo@3456@@Z @ 0x18065A194 (-ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$get_weak@VWindowDragInputProvider@@@?$root_implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VWindowDragInputProvider@@@2@XZ @ 0x180054E60 (--$get_weak@VWindowDragInputProvider@@@-$root_implements@VWindowDragInputProvider@@UIInspectable.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801C8264 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0?$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z @ 0x1804A2CDC (--0-$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z.c)
 *     winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_c4158f368c90993acd5619817087aedd___ @ 0x18065735C (winrt--impl--make_delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Win_ea_18065735C.c)
 *     _lambda_c4158f368c90993acd5619817087aedd_::__lambda_c4158f368c90993acd5619817087aedd_ @ 0x1806589AC (_lambda_c4158f368c90993acd5619817087aedd_--__lambda_c4158f368c90993acd5619817087aedd_.c)
 *     ?TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU00CloudDesktop@3456@XZ @ 0x18066FC58 (-TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubscribeToRemoteSessionExitRequestedEvent(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // r8
  __int64 *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v10[8]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  std::_Ref_count_base *v12; // [rsp+38h] [rbp-38h]
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h] BYREF
  int v15; // [rsp+58h] [rbp-18h] BYREF
  __int128 v16; // [rsp+60h] [rbp-10h]
  __int64 *v17; // [rsp+98h] [rbp+28h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+38h] BYREF

  std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>(&v11, a2);
  v4 = (__int64 *)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(*v3, v10);
  winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
    a1,
    &v18);
  v5 = v18;
  v18 = 0LL;
  v13 = v5;
  std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>(&v14, &v11);
  v17 = &v13;
  winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_c4158f368c90993acd5619817087aedd___(
    &v19,
    &v13);
  lambda_c4158f368c90993acd5619817087aedd_::__lambda_c4158f368c90993acd5619817087aedd_(&v13);
  v9 = 0LL;
  v6 = *v4;
  v15 = 0;
  v16 = 0LL;
  v7 = v19;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 136LL))(v6, v19, &v9);
  winrt::check_hresult((int *)&v17, v8, (__int64)&v15);
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v19);
  if ( v18 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v18);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v10);
  if ( v12 )
    std::_Ref_count_base::_Decwref(v12);
}
