/*
 * XREFs of ?Id@?$consume_Windows_Internal_Tiles_ITileNotification@UITileNotification@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AB30
 * Callers:
 *     ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002A2C8 (-FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?Empty@GuidHelper@Foundation@Windows@winrt@@SA@XZ @ 0x1802A1704 (-Empty@GuidHelper@Foundation@Windows@winrt@@SA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_c3d528fab69363bea486f57b2866680a_@@CA@AEBUIGuidHelperStatics@Foundation@Windows@winrt@@@Z @ 0x18057C2D0 (-_lambda_invoker_cdecl_@_lambda_c3d528fab69363bea486f57b2866680a_@@CA@AEBUIGuidHelperStatics@Fou.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall winrt::impl::consume_Windows_Internal_Tiles_ITileNotification<winrt::Windows::Internal::Tiles::ITileNotification>::Id(
        __int64 *a1,
        _OWORD *a2)
{
  __int64 v2; // rcx
  unsigned int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  *a2 = 0LL;
  v2 = *a1;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  winrt::check_hresult(&v8, v4, &v6);
  return a2;
}
