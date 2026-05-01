/*
 * XREFs of ??$call@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@?$factory_cache_entry@UFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@UIFlyoutBaseStatics@234567@@impl@winrt@@QEAA?A_PAEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@Z @ 0x18059C5A0
 * Callers:
 *     ?OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x180102620 (-OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 *     ??$call_factory@UFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@UIFlyoutBaseStatics@234567@V_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@impl@winrt@@YA?A_P$$QEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@Z @ 0x1802167F0 (--$call_factory@UFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@UIFlyoutBaseStatics@23456.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??R_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@QEBA@AEBUIFocusManagerStatics4@Input@Xaml@UI@Windows@winrt@@@Z @ 0x1802C81EC (--R_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@QEBA@AEBUIFocusManagerStatics4@Input@Xaml@UI@Windo.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIFlyoutBaseStatics@Primitives@Controls@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIFlyoutBaseStatics@Primitives@Controls@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x18059CAAC (--$get_activation_factory@UIFlyoutBaseStatics@Primitives@Controls@Xaml@UI@Windows@winrt@@@winrt@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>::call<_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_ &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 **a3)
{
  __int64 v6[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v7[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v9; // [rsp+80h] [rbp+10h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF

  v9 = a1;
  v7[0] = (__int64)L"Windows.UI.Xaml.Controls.Primitives.FlyoutBase";
  v7[1] = 46LL;
  winrt::param::hstring::hstring((__int64)v8, v7);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>(&v9, v8);
  if ( v9
    && (v10 = 0LL,
        (*(void (__fastcall **)(__int64 *, __int64 *, __int64 *))*v9)(
          v9,
          &winrt::impl::guid_v<winrt::impl::IAgileObject>,
          &v10),
        (v6[0] = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_18089CDC8;
    _InterlockedIncrement64(&qword_18089CDC8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089CDD0);
    }
    _lambda_49e62eb3f931e46ad527edc5ebe4a7b3_::operator()(
      a3,
      a2,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase,winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>);
    _InterlockedDecrement64(&qword_18089CDC8);
  }
  else
  {
    _lambda_49e62eb3f931e46ad527edc5ebe4a7b3_::operator()(a3, a2, &v9);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
