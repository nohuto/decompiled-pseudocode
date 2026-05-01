/*
 * XREFs of ?TransparentBackground@?$consume_Windows_UI_Xaml_IWindowPrivate@UIWindowPrivate@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180242CA4
 * Callers:
 *     ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x1800A2034 (--0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAE.c)
 *     ?Initialize@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x1801B4F34 (-Initialize@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@w.c)
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x1801C1220 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Xaml_IWindowPrivate<winrt::Windows::UI::Xaml::IWindowPrivate>::TransparentBackground(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  char v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *a1;
  LOBYTE(a2) = 1;
  v5 = 0;
  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, a2);
  return winrt::check_hresult(&v7, v3, &v5);
}
