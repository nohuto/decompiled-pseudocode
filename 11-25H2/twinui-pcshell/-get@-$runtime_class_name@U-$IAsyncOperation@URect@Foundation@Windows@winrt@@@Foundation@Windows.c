/*
 * XREFs of ?get@?$runtime_class_name@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x18059E744
 * Callers:
 *     ?GetRuntimeClassName@?$implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@34@PEAUHWND__@@_NAEBURect@234@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@winrt@@EEBA?AUhstring@2@XZ @ 0x18059DA90 (-GetRuntimeClassName@-$implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@URect@Foun.c)
 *     ?NonDelegatingGetRuntimeClassName@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@34@PEAUHWND__@@_NAEBURect@234@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x18059DD6C (-NonDelegatingGetRuntimeClassName@-$root_implements@Upromise_type@-$coroutine_trait_ea_18059DD6C.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800AD0B4 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::impl::runtime_class_name<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,void>::get(
        struct winrt::impl::shared_hstring_header **a1)
{
  _QWORD v3[4]; // [rsp+28h] [rbp-20h] BYREF

  v3[1] = 61LL;
  v3[0] = L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Rect>";
  winrt::hstring::hstring(a1, (__int64)v3);
  return a1;
}
