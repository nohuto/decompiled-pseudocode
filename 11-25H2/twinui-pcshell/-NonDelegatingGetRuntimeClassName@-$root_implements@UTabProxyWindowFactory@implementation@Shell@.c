/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowFactoryInternal@345@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1804E3FDC
 * Callers:
 *     ?GetRuntimeClassName@?$implements@VGamingFallbackWindow@@UIInspectable@@@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1804E2BF0 (-GetRuntimeClassName@-$implements@VGamingFallbackWindow@@UIInspectable@@@winrt@@UEAAJPEAPEAUHSTR.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    a1 = 8LL;
  v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)a1 + 40LL))(a1, &v6);
  v4 = *v3;
  *v3 = 0LL;
  *a2 = v4;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
  return 0LL;
}
