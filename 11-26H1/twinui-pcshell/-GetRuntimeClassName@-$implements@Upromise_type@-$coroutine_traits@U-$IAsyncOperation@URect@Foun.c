/*
 * XREFs of ?GetRuntimeClassName@?$implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@34@PEAUHWND__@@_NAEBURect@234@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@winrt@@EEBA?AUhstring@2@XZ @ 0x1805C1D80
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$runtime_class_name@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1805C2A34 (-get@-$runtime_class_name@U-$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows.c)
 */

__int64 __fastcall winrt::implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HMONITOR__ *,winrt::Windows::UI::Xaml::FrameworkElement const &,HWND__ *,bool,winrt::Windows::Foundation::Rect const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::IAsyncInfo>::GetRuntimeClassName(
        __int64 a1,
        __int64 a2)
{
  winrt::impl::runtime_class_name<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,void>::get(a2);
  return a2;
}
