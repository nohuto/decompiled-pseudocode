/*
 * XREFs of ?GetTabProxyWindowFactory@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAPEAUITabProxyWindowFactoryInternal@345@@Z @ 0x18057E140
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$as@UITabProxyWindowFactoryInternal@Shell@Internal@Windows@@UTabProxyWindowFactory@implementation@234winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITabProxyWindowFactoryInternal@Shell@Internal@Windows@@@1@PEAUTabProxyWindowFactory@implementation@Shell@Internal@Windows@1@@Z @ 0x18057C764 (--$as@UITabProxyWindowFactoryInternal@Shell@Internal@Windows@@UTabProxyWindowFactory@implementat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetTabProxyWindowFactory(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        struct Windows::Internal::Shell::ITabProxyWindowFactoryInternal **a2)
{
  struct Windows::Internal::Shell::ITabProxyWindowFactoryInternal *v3; // rbx
  struct Windows::Internal::Shell::ITabProxyWindowFactoryInternal *v5; // [rsp+30h] [rbp+8h] BYREF

  winrt::impl::as<Windows::Internal::Shell::ITabProxyWindowFactoryInternal,winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,0>(
    &v5,
    *((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 14));
  v3 = v5;
  if ( v5 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ITabProxyWindowFactoryInternal *))(*(_QWORD *)v5 + 8LL))(v5);
  *a2 = v3;
  if ( v3 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v5);
  return 0LL;
}
