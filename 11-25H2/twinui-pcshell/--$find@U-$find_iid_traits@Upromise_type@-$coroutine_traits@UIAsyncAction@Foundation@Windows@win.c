/*
 * XREFs of ??$find@U?$find_iid_traits@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVApplicationFlyoutView@@PEAUHWND__@@@experimental@std@@@impl@winrt@@@?$interface_list@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@234@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVApplicationFlyoutView@@PEAUHWND__@@@experimental@std@@@12@@Z @ 0x180445E6C
 * Callers:
 *     ?find_interface@?$implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVCVirtualDesktopManager@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1804474E0 (-find_interface@-$implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundat_ea_1804474E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::find<winrt::impl::find_iid_traits<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,ApplicationFlyoutView *,HWND__ *>::promise_type>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncAction> && v1[1] == 0x7BADDFE5269D5B86LL )
  {
    v2 = *a1;
    v3 = *a1 + 16;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncInfo> && v1[1] == 0x46000000000000C0LL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
