/*
 * XREFs of ??$get_activation_factory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Microsoft@winrt@@@winrt@@YA?AUIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Microsoft@0@AEBUhstring@param@0@@Z @ 0x180441344
 * Callers:
 *     ??$call@AEAV_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@@?$factory_cache_entry@UXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Microsoft@winrt@@UIXamlSourceFocusNavigationRequestFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@@Z @ 0x180441078 (--$call@AEAV_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@@-$factory_cache_entry@UXamlSourceFocusNa.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801FC264 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *result; // rax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  v5 = 0;
  v6 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    (__int64)&winrt::impl::guid_v<winrt::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>,
    (__int64)&v7);
  winrt::check_hresult(&v4, v4, (__int64)&v5);
  result = a1;
  *a1 = v7;
  return result;
}
