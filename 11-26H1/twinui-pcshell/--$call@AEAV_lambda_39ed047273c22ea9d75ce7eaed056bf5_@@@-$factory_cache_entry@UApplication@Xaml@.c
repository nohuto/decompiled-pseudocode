/*
 * XREFs of ??$call@AEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@?$factory_cache_entry@UApplication@Xaml@UI@Windows@winrt@@UIApplicationFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@Z @ 0x180209FA8
 * Callers:
 *     ??0?$XamlApplication_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802907C4 (--0-$XamlApplication_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Window.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$get_activation_factory@UIApplicationFactory@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIApplicationFactory@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x18020A0D0 (--$get_activation_factory@UIApplicationFactory@Xaml@UI@Windows@winrt@@@winrt@@YA-AUIApplicationF.c)
 *     ??R_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Windows@winrt@@@Z @ 0x18020A150 (--R_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Windows@winrt.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Application,winrt::Windows::UI::Xaml::IApplicationFactory>::call<_lambda_39ed047273c22ea9d75ce7eaed056bf5_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2)
{
  signed __int64 v3; // rbx
  __int64 *v4; // rax
  char v5; // di
  _DWORD *v6; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v7[4]; // [rsp+28h] [rbp-18h] BYREF
  const wchar_t *v8; // [rsp+38h] [rbp-8h]
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 **); // [rsp+60h] [rbp+20h] BYREF
  __int64 *v10; // [rsp+70h] [rbp+30h] BYREF

  v9 = a1;
  v7[0] = 1;
  v7[1] = 27;
  v8 = L"Windows.UI.Xaml.Application";
  v6 = v7;
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::IApplicationFactory>(&v9, &v6);
  v3 = (signed __int64)v9;
  v10 = 0LL;
  if ( !v9 )
  {
    v4 = 0LL;
LABEL_3:
    v5 = 0;
    goto LABEL_4;
  }
  (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10);
  v4 = v10;
  if ( !v10 )
    goto LABEL_3;
  v5 = 1;
LABEL_4:
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
  if ( v5 )
  {
    v10 = &qword_1808DC838;
    _InterlockedIncrement64(&qword_1808DC838);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Application,winrt::Windows::UI::Xaml::IApplicationFactory>,
            v3,
            0LL) )
    {
      v3 = 0LL;
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DC840);
    }
    _lambda_39ed047273c22ea9d75ce7eaed056bf5_::operator()(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Application,winrt::Windows::UI::Xaml::IApplicationFactory>);
    _InterlockedDecrement64(&qword_1808DC838);
    if ( v3 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v9);
  }
  else
  {
    _lambda_39ed047273c22ea9d75ce7eaed056bf5_::operator()(a2, &v9);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  }
}
