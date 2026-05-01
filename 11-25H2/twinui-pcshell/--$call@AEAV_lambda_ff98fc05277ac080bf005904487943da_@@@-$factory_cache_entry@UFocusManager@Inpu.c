/*
 * XREFs of ??$call@AEAV_lambda_ff98fc05277ac080bf005904487943da_@@@?$factory_cache_entry@UFocusManager@Input@Xaml@UI@Windows@winrt@@UIFocusManagerStatics4@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_ff98fc05277ac080bf005904487943da_@@@Z @ 0x1806949D8
 * Callers:
 *     ?FindLastFocusableElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456@@Z @ 0x1806962F0 (-FindLastFocusableElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@QEBA@AEBUIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x1800F4AD8 (--R_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@QEBA@AEBUIAppExtensionStatics@AppExtensions@Applic.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@_WU?$char_traits@_W@std@@@std@@@Z @ 0x1802CBEA0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@_WU-$char_traits@_W@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIFocusManagerStatics4@Input@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIFocusManagerStatics4@Input@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180694AF0 (--$get_activation_factory@UIFocusManagerStatics4@Input@Xaml@UI@Windows@winrt@@@winrt@@YA-AUIFocu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>::call<_lambda_ff98fc05277ac080bf005904487943da_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6[2]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v7[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-28h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+10h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF

  v9 = a1;
  v7[0] = L"Windows.UI.Xaml.Input.FocusManager";
  v7[1] = 34LL;
  winrt::param::hstring::hstring((winrt::param::hstring *)v8, (__int64)v7);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>(&v9, v8);
  if ( v9 && (v10 = 0LL, (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10), (v6[0] = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_18089CDE8;
    _InterlockedIncrement64(&qword_18089CDE8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089CDF0);
    }
    _lambda_e84bcefeb7ed3703767eef0b25e91c21_::operator()(
      a3,
      a2,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>);
    _InterlockedDecrement64(&qword_18089CDE8);
  }
  else
  {
    _lambda_e84bcefeb7ed3703767eef0b25e91c21_::operator()(a3, a2, (__int64)&v9);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
