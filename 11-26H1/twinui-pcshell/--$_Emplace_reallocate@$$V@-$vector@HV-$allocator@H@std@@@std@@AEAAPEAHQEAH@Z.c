/*
 * XREFs of ??$_Emplace_reallocate@$$V@?$vector@HV?$allocator@H@std@@@std@@AEAAPEAHQEAH@Z @ 0x1805B7ABC
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x1805BA650 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--Launch.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18013BF14 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXQEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@_K1@Z @ 0x1802BAA98 (-_Change_array@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIn.c)
 *     ?_Calculate_growth@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1802BADF0 (-_Calculate_growth@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@.c)
 *     ??1_Reallocation_guard@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18031C5DC (--1_Reallocation_guard@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@win.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

char *__fastcall std::vector<int>::_Emplace_reallocate<>(_QWORD *a1, _BYTE *a2)
{
  _BYTE *v2; // rbp
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r15
  unsigned __int64 size_of; // rax
  char *v9; // rdi
  char *v10; // r14
  _BYTE *v11; // r8
  void *v12; // rcx
  _BYTE *v13; // rdx
  size_t v14; // r8
  _QWORD v16[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v17; // [rsp+38h] [rbp-40h]
  _DWORD *v18; // [rsp+40h] [rbp-38h]

  v2 = (_BYTE *)*a1;
  v5 = (__int64)(a1[1] - *a1) >> 2;
  if ( v5 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v6 = v5 + 1;
  v7 = std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Calculate_growth(
         a1,
         v5 + 1);
  size_of = std::_Get_size_of_n<4>(v7);
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v16[0] = a1;
  v16[2] = v7;
  v10 = &v9[4 * ((a2 - v2) >> 2)];
  *(_DWORD *)v10 = 0;
  v11 = (_BYTE *)a1[1];
  v12 = v9;
  v13 = (_BYTE *)*a1;
  v18 = v10 + 4;
  v17 = v10;
  if ( a2 == v11 )
  {
    v14 = v11 - v13;
  }
  else
  {
    memmove_0(v9, v13, (size_t)&a2[-*a1]);
    v13 = a2;
    v14 = a1[1] - (_QWORD)a2;
    v17 = v9;
    v12 = v10 + 4;
  }
  memmove_0(v12, v13, v14);
  v16[1] = 0LL;
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Change_array(
    (__int64)a1,
    (__int64)v9,
    v6,
    v7);
  std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Reallocation_guard::~_Reallocation_guard((__int64)v16);
  return &v9[4 * ((a2 - v2) >> 2)];
}
