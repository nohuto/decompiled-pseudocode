/*
 * XREFs of ?GetForWorkArea@?$consume_Windows_Internal_Shell_PlatformExtensions_ISnapLayoutManagerExtensionStatics@UISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1805BA038
 * Callers:
 *     ?GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBURect@Foundation@67@@Z @ 0x18020DF0C (-GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_PlatformExtensions_ISnapLayoutManagerExtensionStatics<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::GetForWorkArea(
        __int64 *a1,
        _QWORD *a2,
        __int128 *a3)
{
  __int64 v3; // rcx
  __int64 (__fastcall *v5)(__int64, __int128 *, __int64 *); // rax
  int v6; // eax
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+40h] [rbp-28h] BYREF
  __int128 v10; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+78h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *a1;
  v11 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v3 + 56LL);
  v8 = *a3;
  v6 = v5(v3, &v8, &v11);
  winrt::check_hresult((int *)&v12, v6, (__int64)&v9);
  *a2 = v11;
  return a2;
}
