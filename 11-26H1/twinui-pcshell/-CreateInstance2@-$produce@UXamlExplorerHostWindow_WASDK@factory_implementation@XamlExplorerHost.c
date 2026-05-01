/*
 * XREFs of ?CreateInstance2@?$produce@UXamlExplorerHostWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDKFactory@34567@@impl@winrt@@UEAAHIURect@Foundation@Windows@3@IPEAPEAX@Z @ 0x180451370
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$make@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@AEAI@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@0@Z @ 0x180450CCC (--$make@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Interna_ea_180450CCC.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_WASDKFactory>::CreateInstance2(
        __int64 a1,
        unsigned int a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        unsigned int a4,
        _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v9; // [rsp+30h] [rbp-18h] BYREF

  *a5 = 0LL;
  v9 = a4;
  v8 = a2;
  winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,unsigned int &,winrt::Windows::Foundation::Rect const &,unsigned int &>(
    &v7,
    &v8,
    a3,
    &v9);
  v5 = v7;
  v7 = 0LL;
  *a5 = v5;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
  return 0LL;
}
