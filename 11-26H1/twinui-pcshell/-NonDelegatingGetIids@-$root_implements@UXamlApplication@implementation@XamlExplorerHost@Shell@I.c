/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x18044B738
 * Callers:
 *     ?GetIids@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides2@Xaml@UI@67@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18044B310 (-GetIids@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@.c)
 *     ?GetIids@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@67@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18044B330 (-GetIids@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inte_ea_18044B330.c)
 *     ?GetIids@?$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplication_WASDK@345678@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18044B350 (-GetIids@-$produce_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Inter.c)
 *     ?GetIids@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x18044B370 (-GetIids@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inte_ea_18044B370.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??1?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802C142C (--1-$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     __Platform_CoTaskMemAlloc @ 0x1802CA560 (__Platform_CoTaskMemAlloc.c)
 *     ?get_interfaces@winrt@@YA?AU?$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x18044C208 (-get_interfaces@winrt@@YA-AU-$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::NonDelegatingGetIids(
        _QWORD **a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v6; // edx
  void *v7; // rax
  void *v9; // rax
  void *v10; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v11; // [rsp+28h] [rbp-40h]
  unsigned int v12; // [rsp+30h] [rbp-38h] BYREF
  void *Src; // [rsp+38h] [rbp-30h]

  ((void (__fastcall *)(_QWORD **, unsigned int *))(*a1)[4])(a1, &v12);
  if ( !v12 )
    return (*(__int64 (__fastcall **)(_QWORD *, _DWORD *, _QWORD *))(*a1[1] + 24LL))(a1[1], a2, a3);
  winrt::get_interfaces(&v10, a1 + 1);
  v6 = v12 + v11;
  *a2 = v12 + v11;
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
