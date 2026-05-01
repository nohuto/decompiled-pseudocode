/*
 * XREFs of ?TabChanged@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowTabView@Shell@UI@Internal@Windows@winrt@@UWindowTabViewPropertyChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18026EE00
 * Callers:
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x18026D9F0 (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TabChanged(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 *v4; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // eax
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+28h] [rbp-20h]
  char v13; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = *a1;
  v11 = 0;
  v7 = *a3;
  v8 = *v4;
  v12 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD *))(v8 + 144))(v4, v7, a2);
  winrt::check_hresult(&v13, v9, &v11);
  return a2;
}
