/*
 * XREFs of ?FindTiles@?$consume_Windows_Internal_Tiles_ITileStore@UITileStore@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@_JAEBUTileQueryFilter@Tiles@Internal@Windows@3@@Z @ 0x1805815F8
 * Callers:
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180583140 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Tiles_ITileStore<winrt::Windows::Internal::Tiles::ITileStore>::FindTiles(
        __int64 **a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 *v4; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // eax
  int v11; // [rsp+38h] [rbp-20h] BYREF
  __int128 v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = a2;
  v4 = *a1;
  v13 = 0LL;
  v11 = 0;
  v7 = *v4;
  v8 = *a4;
  v12 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v7 + 56))(v4, a3, v8, &v13);
  winrt::check_hresult((int *)&v14, v9, (__int64)&v11);
  *a2 = v13;
  return a2;
}
