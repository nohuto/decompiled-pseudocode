/*
 * XREFs of ?CreateInstance@?$produce@UXamlExplorerHostWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDKFactory@34567@@impl@winrt@@UEAAHIURect@Foundation@Windows@3@PEAPEAX@Z @ 0x1804513F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$make@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@@Z @ 0x180450C48 (--$make@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@win.c)
 *     ?Current@XamlApplication_WASDK@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AU1234567@XZ @ 0x180452D60 (-Current@XamlApplication_WASDK@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA-AU1234567.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_WASDKFactory>::CreateInstance(
        __int64 a1,
        unsigned int a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        _QWORD *a4)
{
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[8]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v11; // [rsp+30h] [rbp-28h] BYREF

  *a4 = 0LL;
  winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK::Current(v10);
  v11 = a2;
  winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,unsigned int &,winrt::Windows::Foundation::Rect const &>(
    &v9,
    &v11,
    a3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v10);
  v7 = v9;
  v9 = 0LL;
  *a4 = v7;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return 0LL;
}
