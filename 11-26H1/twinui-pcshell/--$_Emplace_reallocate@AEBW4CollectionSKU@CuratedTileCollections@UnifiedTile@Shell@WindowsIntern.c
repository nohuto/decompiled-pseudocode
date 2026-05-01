/*
 * XREFs of ??$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAPEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAW423456@AEBW423456@@Z @ 0x180234038
 * Callers:
 *     ??$copy@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@@std@@V?$back_insert_iterator@V?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@@0@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@@0@0V10@@Z @ 0x18031C1E4 (--$copy@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@W4CollectionSKU@CuratedTileCol.c)
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18031C790 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_NW4CollectionOfficeSKU@2345@@Z @ 0x18031C9C0 (-ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1803F1F0C (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     ?ParseOfficeSKUAttributeValue@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEBGAEAUSelectionData@2345@@Z @ 0x18067785C (-ParseOfficeSKUAttributeValue@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@Windo.c)
 *     ?ParseSKUAttributeValue@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEBGAEAUSelectionData@2345@@Z @ 0x180677A7C (-ParseSKUAttributeValue@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInte.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18013BF14 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXQEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@_K1@Z @ 0x1802BAA98 (-_Change_array@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIn.c)
 *     ??$_Uninitialized_move@PEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@std@@@std@@YAPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@QEAU12345@0PEAU12345@AEAV?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@0@@Z @ 0x1802BD9EC (--$_Uninitialized_move@PEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1_Reallocation_guard@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18031C5DC (--1_Reallocation_guard@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@win.c)
 */

_DWORD *__fastcall std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Emplace_reallocate<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU const &>(
        _QWORD *a1,
        __int64 a2,
        int *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdi
  _DWORD *v16; // r8
  _DWORD *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  _DWORD *v23; // [rsp+38h] [rbp-40h]
  _DWORD *v24; // [rsp+40h] [rbp-38h]

  v3 = 0x3FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 2;
  v7 = (__int64)(a1[1] - *a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 2;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<4>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = v13;
  v21 = a1;
  v16 = (_DWORD *)v13;
  v22 = v3;
  v17 = (_DWORD *)(v13 + 4 * v5);
  *v17 = v14;
  v18 = a1[1];
  v19 = *a1;
  v24 = v17 + 1;
  v23 = v17;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId *>(v19, a2, v13);
    v18 = a1[1];
    v16 = v17 + 1;
    v19 = a2;
    v23 = (_DWORD *)v15;
  }
  std::_Uninitialized_move<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId *>(v19, v18, v16);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Change_array(
    a1,
    v15,
    v9,
    v3,
    v21,
    0LL,
    v22,
    v23,
    v24);
  std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Reallocation_guard::~_Reallocation_guard(&v21);
  return v17;
}
