/*
 * XREFs of ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@AEAAPEAHQEAH$$QEAH@Z @ 0x180249ECC
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180350550 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?push_back@?$vector@HV?$allocator@H@std@@@std@@QEAAX$$QEAH@Z @ 0x180475A2C (-push_back@-$vector@HV-$allocator@H@std@@@std@@QEAAX$$QEAH@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18013BF14 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXQEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@_K1@Z @ 0x1802BAA98 (-_Change_array@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIn.c)
 *     ?_Calculate_growth@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1802BADF0 (-_Calculate_growth@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@.c)
 *     ??1_Reallocation_guard@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18031C5DC (--1_Reallocation_guard@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@win.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

char *__fastcall std::vector<int>::_Emplace_reallocate<int>(const void **a1, _BYTE *a2, int *a3)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  __int64 size_of; // rax
  char *v11; // rax
  int v12; // ecx
  char *v13; // rdi
  char *v14; // r14
  _BYTE *v15; // r8
  void *v16; // rcx
  _BYTE *v17; // rdx
  size_t v18; // r8
  const void **v20; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-58h]
  char *v22; // [rsp+38h] [rbp-50h]
  _DWORD *v23; // [rsp+40h] [rbp-48h]

  v5 = (a2 - (_BYTE *)*a1) >> 2;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Calculate_growth(
         a1,
         v6 + 1);
  size_of = std::_Get_size_of_n<4>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = *a3;
  v13 = v11;
  v20 = a1;
  v21 = v9;
  v14 = &v11[4 * v5];
  *(_DWORD *)v14 = v12;
  v15 = a1[1];
  v16 = v11;
  v17 = *a1;
  v23 = v14 + 4;
  v22 = v14;
  if ( a2 == v15 )
  {
    v18 = v15 - v17;
  }
  else
  {
    memmove_0(v11, v17, a2 - (_BYTE *)*a1);
    v17 = a2;
    v18 = (_BYTE *)a1[1] - a2;
    v22 = v13;
    v16 = v14 + 4;
  }
  memmove_0(v16, v17, v18);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Change_array(
    a1,
    v13,
    v8,
    v9,
    v20,
    0LL,
    v21,
    v22,
    v23);
  std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v14;
}
