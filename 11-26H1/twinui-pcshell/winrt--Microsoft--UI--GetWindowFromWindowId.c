/*
 * XREFs of winrt::Microsoft::UI::GetWindowFromWindowId @ 0x18044E748
 * Callers:
 *     ?Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x18044E888 (-Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     winrt::Microsoft::UI::EnsureInteropImplLoaded @ 0x18044E320 (winrt--Microsoft--UI--EnsureInteropImplLoaded.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::Microsoft::UI::GetWindowFromWindowId(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-18h] BYREF

  v8 = 0LL;
  winrt::Microsoft::UI::EnsureInteropImplLoaded();
  v2 = *a1;
  v7 = 0LL;
  v6 = 0;
  v3 = ((__int64 (__fastcall *)(__int64, __int64 *))qword_1808DCA90)(v2, &v8);
  winrt::check_hresult(&v5, v3, (__int64)&v6);
  return v8;
}
