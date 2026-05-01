/*
 * XREFs of ?OverrideScale@?$consume_Microsoft_UI_Content_IContentSiteBridge@UDesktopChildSiteBridge@Content@UI@Microsoft@winrt@@@impl@winrt@@QEBA@M@Z @ 0x18044EA04
 * Callers:
 *     ?Scale@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXM@Z @ 0x18044EF80 (-Scale@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Inte_ea_18044EF80.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Microsoft_UI_Content_IContentSiteBridge<winrt::Microsoft::UI::Content::DesktopChildSiteBridge>::OverrideScale(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall ***v1)(_QWORD, void *, __int64 *); // rcx
  int v2; // eax
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  int v6; // [rsp+28h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-20h] BYREF

  v1 = *a1;
  if ( v1 )
  {
    v8 = 0LL;
    v2 = (**v1)(v1, &winrt::impl::guid_v<winrt::Microsoft::UI::Content::IContentSiteBridge>, &v8);
    v3 = v8;
    v5 = v8;
  }
  else
  {
    v2 = 0;
    v5 = 0LL;
    v3 = 0LL;
  }
  v6 = 0;
  v7 = 0LL;
  winrt::check_hresult((int *)&v8, v2, (__int64)&v6);
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  winrt::check_hresult((int *)&v8, v4, (__int64)&v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
}
