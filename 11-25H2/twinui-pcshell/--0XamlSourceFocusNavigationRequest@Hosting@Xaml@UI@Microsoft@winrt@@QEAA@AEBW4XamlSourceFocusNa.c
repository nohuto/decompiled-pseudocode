/*
 * XREFs of ??0XamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@AEBW4XamlSourceFocusNavigationReason@12345@@Z @ 0x18044174C
 * Callers:
 *     ?SetFocus@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180066C28 (-SetFocus@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windo.c)
 * Callees:
 *     ??R_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@QEBA@AEBUIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Microsoft@winrt@@@Z @ 0x1800A65D8 (--R_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@QEBA@AEBUIXamlSourceFocusNavigationRequestFactory@.c)
 *     ??$call@AEAV_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@@?$factory_cache_entry@UXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Microsoft@winrt@@UIXamlSourceFocusNavigationRequestFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@@Z @ 0x180441078 (--$call@AEAV_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@@-$factory_cache_entry@UXamlSourceFocusNa.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest *__fastcall winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest::XamlSourceFocusNavigationRequest(
        winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest *this,
        const enum winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationReason *a2)
{
  const enum winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationReason *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+38h] [rbp+10h]

  v4 = a2;
  v5 = &qword_18089C368;
  _InterlockedIncrement64(&qword_18089C368);
  if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory> )
  {
    _lambda_cdfc71d4e5fb339911b9247de9cec5c2_::operator()(
      &v4,
      (__int64)this,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>);
    _InterlockedDecrement64(&qword_18089C368);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089C368);
    winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>::call<_lambda_cdfc71d4e5fb339911b9247de9cec5c2_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)this,
      &v4);
  }
  return this;
}
