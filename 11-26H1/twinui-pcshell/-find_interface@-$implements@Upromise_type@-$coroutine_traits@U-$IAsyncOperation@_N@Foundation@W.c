/*
 * XREFs of ?find_interface@?$implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1803318D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,CopilotHotkeyManager *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Foundation::IAsyncInfo>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncOperation<bool>> && a2[1] == 0x2A36A3B8CC71E19BLL )
  {
    v2 = a1 + 16;
  }
  else
  {
    if ( *a2 != winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncInfo> || a2[1] != 0x46000000000000C0LL )
      return 0LL;
    v2 = a1 + 24;
  }
  return v2 & -(__int64)(a1 != 0);
}
