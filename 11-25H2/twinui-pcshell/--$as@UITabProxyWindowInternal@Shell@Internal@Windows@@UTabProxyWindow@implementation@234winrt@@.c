/*
 * XREFs of ??$as@UITabProxyWindowInternal@Shell@Internal@Windows@@UTabProxyWindow@implementation@234winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITabProxyWindowInternal@Shell@Internal@Windows@@@1@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@1@@Z @ 0x18055C1B0
 * Callers:
 *     ?CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJ_KPEAPEAUITabProxyWindowInternal@345@@Z @ 0x18055C300 (-CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::as<Windows::Internal::Shell::ITabProxyWindowInternal,winrt::Windows::Internal::Shell::implementation::TabProxyWindow,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64 *, __int64 *))
{
  __int64 (__fastcall **v3)(_QWORD, __int64 *, __int64 *); // rax
  int v4; // eax
  int v6; // [rsp+28h] [rbp-20h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    v9 = 0LL;
    v6 = 0;
    v3 = *a2;
    v7 = 0LL;
    v4 = (*v3)(a2, &winrt::impl::guid_v<Windows::Internal::Shell::ITabProxyWindowInternal>, &v9);
    winrt::check_hresult(&v8, v4, (__int64)&v6);
    *a1 = v9;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
