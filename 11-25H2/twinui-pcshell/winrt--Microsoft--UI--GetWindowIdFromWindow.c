/*
 * XREFs of winrt::Microsoft::UI::GetWindowIdFromWindow @ 0x1804420A0
 * Callers:
 *     ?Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x18044215C (-Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 *     ??0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x180444888 (--0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     winrt::Microsoft::UI::EnsureInteropImplLoaded @ 0x180441BFC (winrt--Microsoft--UI--EnsureInteropImplLoaded.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::Microsoft::UI::GetWindowIdFromWindow(__int64 *a1)
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
  v6 = 0;
  v7 = 0LL;
  v3 = winrt::Microsoft::UI::s_impl(v2, &v8);
  winrt::check_hresult(&v5, v3, (__int64)&v6);
  return v8;
}
