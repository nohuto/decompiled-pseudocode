/*
 * XREFs of ?query_interface@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHWND__@@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18059E854
 * Callers:
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHWND__@@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18059E000 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_ea_18059E000.c)
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHWND__@@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18059E020 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_ea_18059E020.c)
 * Callees:
 *     ?AddRef@?$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@QEAAIXZ @ 0x180294780 (-AddRef@-$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::IAsyncInfo>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx

  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>>
    && a2[1] == 0xAA7A154637C4FDACuLL )
  {
    v5 = (unsigned __int64)(a1 + 2);
LABEL_4:
    v6 = v5 & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64);
    goto LABEL_9;
  }
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncInfo> && a2[1] == 0x46000000000000C0LL )
  {
    v5 = (unsigned __int64)(a1 + 3);
    goto LABEL_4;
  }
  v6 = 0LL;
LABEL_9:
  *a3 = v6;
  if ( !v6 )
    return winrt::impl::root_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::query_interface_common(
             a1,
             a2,
             a3);
  winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::AddRef((__int64)a1);
  return 0LL;
}
