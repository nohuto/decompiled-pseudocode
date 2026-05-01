/*
 * XREFs of ?find_interface@?$implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVCVirtualDesktopManager@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180453B90
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVApplicationFlyoutView@@PEAUHWND__@@@experimental@std@@@impl@winrt@@@?$interface_list@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@234@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVApplicationFlyoutView@@PEAUHWND__@@@experimental@std@@@12@@Z @ 0x1804525B0 (--$find@U-$find_iid_traits@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@win.c)
 */

__int64 __fastcall winrt::implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,CVirtualDesktopManager *,IVirtualDesktop *,enum VirtualDesktopSwitchType>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::find<winrt::impl::find_iid_traits<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,ApplicationFlyoutView *,HWND__ *>::promise_type>>(v3);
}
