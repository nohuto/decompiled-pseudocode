/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805BAD28
 * Callers:
 *     ?GetIids@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UINonDelegatingInspectable@impl@7@@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805BA0B0 (-GetIids@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows.c)
 *     ?GetIids@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManager@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805BA0D0 (-GetIids@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Wi.c)
 *     ?GetIids@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UINonDelegatingInspectable@impl@7@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805BA100 (-GetIids@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shel_ea_1805BA100.c)
 *     ?GetIids@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805BA130 (-GetIids@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shel_ea_1805BA130.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??1?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802C142C (--1-$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@.c)
 *     __Platform_CoTaskMemAlloc @ 0x1802CA560 (__Platform_CoTaskMemAlloc.c)
 *     ?get_interfaces@winrt@@YA?AU?$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x18044C208 (-get_interfaces@winrt@@YA-AU-$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::NonDelegatingGetIids(
        __int64 *a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v6; // edx
  void *v7; // rax
  void *v9; // rax
  void *v10; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-20h]
  unsigned int v12; // [rsp+30h] [rbp-18h] BYREF
  void *Src; // [rsp+38h] [rbp-10h]

  (*(void (__fastcall **)(__int64 *, unsigned int *))(*a1 + 32))(a1, &v12);
  if ( !v12 )
    return (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD *))(*(_QWORD *)a1[1] + 24LL))(a1[1], a2, a3);
  winrt::get_interfaces((__int64)&v10, a1 + 1);
  v6 = v11 + v12;
  *a2 = v11 + v12;
  v7 = _Platform_CoTaskMemAlloc(16LL * v6);
  *a3 = v7;
  if ( v7 )
  {
    v9 = (void *)std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
                   Src,
                   (__int64)Src + 16 * v12,
                   v7);
    std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
      v10,
      (__int64)v10 + 16 * v11,
      v9);
    winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::~com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>((__int64)&v10);
    return 0LL;
  }
  else
  {
    winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::~com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>((__int64)&v10);
    return 2147942414LL;
  }
}
