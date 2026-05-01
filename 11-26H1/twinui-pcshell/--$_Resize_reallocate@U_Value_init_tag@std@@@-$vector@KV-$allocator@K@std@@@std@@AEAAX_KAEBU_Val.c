/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@KV?$allocator@K@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1805FF66C
 * Callers:
 *     ??$load_nothrow@KV?$allocator@K@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@KV?$allocator@K@std@@@std@@@Z @ 0x1805FFD1C (--$load_nothrow@KV-$allocator@K@std@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector@KV-$allocator@K@.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18013BF14 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXQEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@_K1@Z @ 0x1802BAA98 (-_Change_array@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIn.c)
 *     ?_Calculate_growth@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1802BADF0 (-_Calculate_growth@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@.c)
 *     ??$_Uninitialized_move@PEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@std@@@std@@YAPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@QEAU12345@0PEAU12345@AEAV?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@0@@Z @ 0x1802BD9EC (--$_Uninitialized_move@PEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??1_Reallocation_guard@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18031C5DC (--1_Reallocation_guard@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@win.c)
 */

void __fastcall std::vector<unsigned long>::_Resize_reallocate<std::_Value_init_tag>(void **a1, unsigned __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int64 size_of; // rax
  char *v7; // rsi
  size_t v8; // rbx
  __int64 v9; // rdx
  _QWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF
  char *v11; // [rsp+38h] [rbp-30h]
  char *v12; // [rsp+40h] [rbp-28h]

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v4 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v5 = std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<4>(v5);
  v10[0] = a1;
  v10[2] = v5;
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v11 = &v7[4 * v4];
  v8 = 4 * (a2 - v4);
  memset_0(v11, 0, v8);
  v9 = (__int64)a1[1];
  v12 = &v11[v8];
  std::_Uninitialized_move<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId *>(*a1, v9, v7);
  v10[1] = 0LL;
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Change_array(
    (__int64)a1,
    (__int64)v7,
    a2,
    v5);
  std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Reallocation_guard::~_Reallocation_guard((__int64)v10);
}
