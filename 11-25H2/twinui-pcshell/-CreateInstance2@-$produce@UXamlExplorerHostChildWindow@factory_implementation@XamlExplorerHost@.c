/*
 * XREFs of ?CreateInstance2@?$produce@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindowFactory@34567@@impl@winrt@@UEAAH_K0PEAXPEAPEAX@Z @ 0x1804403F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AU123456@XZ @ 0x1800AF008 (-Current@XamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA-AU123456@XZ.c)
 *     ??0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_K0AEBUhstring@6@@Z @ 0x18029FD80 (--0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windo_ea_18029FD80.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowFactory>::CreateInstance2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *v7; // rbx
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF

  v10 = a4;
  *a5 = 0LL;
  winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication::Current(v9);
  v7 = (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *)operator new(0x78uLL);
  v9[1] = v7;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::XamlExplorerHostChildWindow(
    v7,
    a2,
    a3,
    (const struct winrt::hstring *)&v10);
  *(_QWORD *)v7 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow>::`vftable';
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v9);
  v10 = 0LL;
  *a5 = ((unsigned __int64)v7 + 16) & -(__int64)(v7 != 0LL);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return 0LL;
}
