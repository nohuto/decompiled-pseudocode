/*
 * XREFs of ??$_Construct_n@AEBQEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBQEAW412345@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAX_KAEBQEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@1@Z @ 0x18031F6F8
 * Callers:
 *     ??0?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18031FAF0 (--0-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V-$a.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180029C20 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1802CEB74 (--1-$_Tidy_guard@V-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

void __fastcall std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Construct_n<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU * const &,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU * const &>(
        _QWORD *a1,
        unsigned __int64 a2,
        const void **a3,
        _QWORD *a4)
{
  size_t size_of; // rax
  char *v9; // rax
  char *v10; // rdi
  signed __int64 v11; // rbx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<4>(a2);
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v9;
    v10 = v9;
    a1[1] = v9;
    a1[2] = &v9[4 * a2];
    v11 = *a4 - (_QWORD)*a3;
    memmove_0(v9, *a3, v11);
    v12 = 0LL;
    a1[1] = &v10[4 * (v11 >> 2)];
    std::_Tidy_guard<std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>>::~_Tidy_guard<std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>>(&v12);
  }
}
