/*
 * XREFs of ??$call@AEAV_lambda_f6412da80843da22cf270b1b12cf80a7_@@@?$factory_cache_entry@USolidColorBrush@Media@Xaml@UI@Windows@winrt@@UISolidColorBrushFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_f6412da80843da22cf270b1b12cf80a7_@@@Z @ 0x180574464
 * Callers:
 *     ??0SolidColorBrush@Media@Xaml@UI@Windows@winrt@@QEAA@AEBUColor@345@@Z @ 0x180574E8C (--0SolidColorBrush@Media@Xaml@UI@Windows@winrt@@QEAA@AEBUColor@345@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UISolidColorBrushFactory@Media@Xaml@UI@Windows@winrt@@@winrt@@YA?AUISolidColorBrushFactory@Media@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1805749F0 (--$get_activation_factory@UISolidColorBrushFactory@Media@Xaml@UI@Windows@winrt@@@winrt@@YA-AUISo.c)
 *     ??R_lambda_f6412da80843da22cf270b1b12cf80a7_@@QEBA@AEBUISolidColorBrushFactory@Media@Xaml@UI@Windows@winrt@@@Z @ 0x1805752A8 (--R_lambda_f6412da80843da22cf270b1b12cf80a7_@@QEBA@AEBUISolidColorBrushFactory@Media@Xaml@UI@Win.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Media::SolidColorBrush,winrt::Windows::UI::Xaml::Media::ISolidColorBrushFactory>::call<_lambda_f6412da80843da22cf270b1b12cf80a7_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        __int64 a3)
{
  __int64 v6[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v7[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-28h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+10h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF

  v9 = a1;
  v7[0] = (__int64)L"Windows.UI.Xaml.Media.SolidColorBrush";
  v7[1] = 37LL;
  winrt::param::hstring::hstring((__int64)v8, v7);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::Media::ISolidColorBrushFactory>(&v9, v8);
  if ( v9 && (v10 = 0LL, (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10), (v6[0] = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_18089CC58;
    _InterlockedIncrement64(&qword_18089CC58);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::SolidColorBrush,winrt::Windows::UI::Xaml::Media::ISolidColorBrushFactory>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089CC60);
    }
    _lambda_f6412da80843da22cf270b1b12cf80a7_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::SolidColorBrush,winrt::Windows::UI::Xaml::Media::ISolidColorBrushFactory>);
    _InterlockedDecrement64(&qword_18089CC58);
  }
  else
  {
    _lambda_f6412da80843da22cf270b1b12cf80a7_::operator()(a3, a2, &v9);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
