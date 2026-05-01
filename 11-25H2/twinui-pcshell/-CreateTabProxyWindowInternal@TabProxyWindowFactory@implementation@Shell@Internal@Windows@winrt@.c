/*
 * XREFs of ?CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJ_KPEAPEAUITabProxyWindowInternal@345@@Z @ 0x18055C300
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@AEBUWindowTabDataModel@3UI@456@AEBUWindowTabView@39456@_K@Z @ 0x18012AFD4 (-CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA-AU.c)
 *     ??$as@UITabProxyWindowInternal@Shell@Internal@Windows@@UTabProxyWindow@implementation@234winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITabProxyWindowInternal@Shell@Internal@Windows@@@1@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@1@@Z @ 0x18055C1B0 (--$as@UITabProxyWindowInternal@Shell@Internal@Windows@@UTabProxyWindow@implementation@234winrt@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::CreateTabProxyWindowInternal(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *this,
        unsigned __int64 a2,
        struct Windows::Internal::Shell::ITabProxyWindowInternal **a3)
{
  const char *v4; // r9
  struct Windows::Internal::Shell::ITabProxyWindowInternal *v5; // rbx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 *v10; // [rsp+68h] [rbp+20h] BYREF

  v8[0] = 0LL;
  v7 = 0LL;
  try
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::CreateTabProxyWindow(
      (__int64)this,
      &v10,
      (struct winrt::Windows::Internal::UI::Shell::WindowTabDataModel *)&v7,
      (const struct winrt::Windows::Internal::UI::Shell::WindowTabView *)v8,
      a2);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v8);
    winrt::impl::as<Windows::Internal::Shell::ITabProxyWindowInternal,winrt::Windows::Internal::Shell::implementation::TabProxyWindow,0>(
      v8,
      (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))v10);
    v5 = (struct Windows::Internal::Shell::ITabProxyWindowInternal *)v8[0];
    if ( v8[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8[0] + 8LL))(v8[0]);
    *a3 = v5;
    if ( v5 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v8);
    if ( v10 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x80,
                           (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
                           v4);
  }
  return result;
}
