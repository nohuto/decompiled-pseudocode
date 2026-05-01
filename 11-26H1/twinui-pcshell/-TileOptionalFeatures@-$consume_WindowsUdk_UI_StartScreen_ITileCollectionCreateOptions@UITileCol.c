/*
 * XREFs of ?TileOptionalFeatures@?$consume_WindowsUdk_UI_StartScreen_ITileCollectionCreateOptions@UITileCollectionCreateOptions@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW40StartScreen@UI@WindowsUdk@3@@Z @ 0x180616908
 * Callers:
 *     ?RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180028850 (-RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_WindowsUdk_UI_StartScreen_ITileCollectionCreateOptions<winrt::WindowsUdk::UI::StartScreen::ITileCollectionCreateOptions>::TileOptionalFeatures(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = *a2;
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 120LL))(v2, v3);
  return winrt::check_hresult(&v8, v4, (__int64)&v6);
}
