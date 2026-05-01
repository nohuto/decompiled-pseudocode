/*
 * XREFs of winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____1_::cancel_asynchronously$_InitCoro$2 @ 0x180331A0C
 * Callers:
 *     ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x180331C44 (-cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@W4GamingPostureSystemDialogResult@Post.c)
 *     ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x1805C8D1C (-cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@wi.c)
 * Callees:
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____1_::cancel_asynchronously$_ResumeCoro$1 @ 0x180331AD0 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Windo_ea_180331AD0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____1_::cancel_asynchronously__InitCoro_2(
        _BYTE *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // rax

  v4 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a3 + 17) = v4;
  *(_QWORD *)a3 = winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____1_::cancel_asynchronously__ResumeCoro_1;
  *(_DWORD *)(a3 + 8) = *a2 != 0 ? 2 : 65538;
  *a1 = 0;
  *(_BYTE *)(a3 + 16) = 0;
  return winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____1_::cancel_asynchronously__ResumeCoro_1(a3);
}
