/*
 * XREFs of ??$call@AEAV_lambda_ff98fc05277ac080bf005904487943da_@@@?$factory_cache_entry@UFocusManager@Input@Xaml@UI@Windows@winrt@@UIFocusManagerStatics4@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_ff98fc05277ac080bf005904487943da_@@@Z @ 0x1806BBEB0
 * Callers:
 *     ?FindLastFocusableElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456@@Z @ 0x1806BDA10 (-FindLastFocusableElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@QEBA@AEBUIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x1800CD730 (--R_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@QEBA@AEBUIAppExtensionStatics@AppExtensions@Applic.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@_WU?$char_traits@_W@std@@@std@@@Z @ 0x1802C3488 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@_WU-$char_traits@_W@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIFocusManagerStatics4@Input@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIFocusManagerStatics4@Input@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1806BBFE4 (--$get_activation_factory@UIFocusManagerStatics4@Input@Xaml@UI@Windows@winrt@@@winrt@@YA-AUIFocu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>::call<_lambda_ff98fc05277ac080bf005904487943da_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2,
        _QWORD *a3)
{
  signed __int64 v5; // rbx
  __int64 *v6; // rax
  char v7; // si
  _QWORD v9[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 **); // [rsp+80h] [rbp+20h] BYREF
  __int64 *v12; // [rsp+98h] [rbp+38h] BYREF

  v11 = a1;
  v9[0] = L"Windows.UI.Xaml.Input.FocusManager";
  v9[1] = 34LL;
  winrt::param::hstring::hstring((winrt::param::hstring *)v10, (__int64)v9);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>(&v11, v10);
  v5 = (signed __int64)v11;
  v12 = 0LL;
  if ( !v11 )
  {
    v6 = 0LL;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  (**v11)(v11, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v12);
  v6 = v12;
  if ( !v12 )
    goto LABEL_3;
  v7 = 1;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  if ( v7 )
  {
    v12 = &qword_1808DD4A8;
    _InterlockedIncrement64(&qword_1808DD4A8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>,
            v5,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DD4B0);
    }
    _lambda_e84bcefeb7ed3703767eef0b25e91c21_::operator()(
      a3,
      a2,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>);
    _InterlockedDecrement64(&qword_1808DD4A8);
  }
  else
  {
    _lambda_e84bcefeb7ed3703767eef0b25e91c21_::operator()(a3, a2, (__int64)&v11);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return a2;
}
