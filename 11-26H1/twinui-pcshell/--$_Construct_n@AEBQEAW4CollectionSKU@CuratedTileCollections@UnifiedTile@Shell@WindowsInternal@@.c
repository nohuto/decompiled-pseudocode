/*
 * XREFs of ??$_Construct_n@AEBQEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBQEAW412345@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAX_KAEBQEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@1@Z @ 0x18031BE48
 * Callers:
 *     ??0?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18031C294 (--0-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V-$a.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18013BF14 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1802C60C8 (--1-$_Tidy_guard@V-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V.c)
 */

void __fastcall std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Construct_n<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU * const &,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU * const &>(
        _QWORD *a1,
        unsigned __int64 a2,
        void **a3,
        __int64 *a4)
{
  unsigned __int64 size_of; // rax
  char *v9; // rax
  char *v10; // rsi
  void *v11; // rbx
  __int64 v12; // rdi
  __int64 *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<4>(a2);
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v9;
    a1[1] = v9;
    v10 = v9;
    a1[2] = &v9[4 * a2];
    v11 = *a3;
    v12 = *a4;
    std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
      *a3,
      v12,
      v9);
    v13 = 0LL;
    a1[1] = &v10[4 * ((v12 - (__int64)v11) >> 2)];
    std::_Tidy_guard<std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>>::~_Tidy_guard<std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>>(&v13);
  }
}
