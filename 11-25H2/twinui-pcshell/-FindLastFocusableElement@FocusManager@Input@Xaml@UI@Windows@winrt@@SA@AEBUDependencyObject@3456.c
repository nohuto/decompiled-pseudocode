/*
 * XREFs of ?FindLastFocusableElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456@@Z @ 0x1806962F0
 * Callers:
 *     ?MoveFocus@TaskViewFrame@@UEAAJI@Z @ 0x180696530 (-MoveFocus@TaskViewFrame@@UEAAJI@Z.c)
 * Callees:
 *     ??R_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@QEBA@AEBUIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x1800F4AD8 (--R_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@QEBA@AEBUIAppExtensionStatics@AppExtensions@Applic.c)
 *     ??$call@AEAV_lambda_ff98fc05277ac080bf005904487943da_@@@?$factory_cache_entry@UFocusManager@Input@Xaml@UI@Windows@winrt@@UIFocusManagerStatics4@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_ff98fc05277ac080bf005904487943da_@@@Z @ 0x1806949D8 (--$call@AEAV_lambda_ff98fc05277ac080bf005904487943da_@@@-$factory_cache_entry@UFocusManager@Inpu.c)
 */

const struct winrt::Windows::UI::Xaml::DependencyObject *__fastcall winrt::Windows::UI::Xaml::Input::FocusManager::FindLastFocusableElement(
        const struct winrt::Windows::UI::Xaml::DependencyObject *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_18089CDE8;
  _InterlockedIncrement64(&qword_18089CDE8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4> )
  {
    _lambda_e84bcefeb7ed3703767eef0b25e91c21_::operator()(
      &v4,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>);
    _InterlockedDecrement64(&qword_18089CDE8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089CDE8);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>::call<_lambda_ff98fc05277ac080bf005904487943da_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      &v4);
  }
  return a1;
}
