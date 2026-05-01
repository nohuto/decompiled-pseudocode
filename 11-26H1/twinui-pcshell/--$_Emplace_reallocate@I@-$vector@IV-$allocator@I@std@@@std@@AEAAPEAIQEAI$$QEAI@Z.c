/*
 * XREFs of ??$_Emplace_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAI$$QEAI@Z @ 0x18027B42C
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1800AB350 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?GetUIIDs@MonitorIDFinder@SnapAccessibilityHelpers@@QEBA?AV?$vector@IV?$allocator@I@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1805BECF8 (-GetUIIDs@MonitorIDFinder@SnapAccessibilityHelpers@@QEBA-AV-$vector@IV-$allocator@I@std@@@std@@P.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@Z @ 0x180650A4C (-RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@In.c)
 * Callees:
 *     ?allocate@?$allocator@I@std@@QEAAPEAI_K@Z @ 0x1801B2848 (-allocate@-$allocator@I@std@@QEAAPEAI_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?_Change_array@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXQEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@_K1@Z @ 0x1802BAA98 (-_Change_array@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIn.c)
 *     ?_Calculate_growth@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1802BADF0 (-_Calculate_growth@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@.c)
 *     ??$_Uninitialized_move@PEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@std@@@std@@YAPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@QEAU12345@0PEAU12345@AEAV?$allocator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@0@@Z @ 0x1802BD9EC (--$_Uninitialized_move@PEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1_Reallocation_guard@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18031C5DC (--1_Reallocation_guard@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@win.c)
 */

_DWORD *__fastcall std::vector<unsigned int>::_Emplace_reallocate<unsigned int>(_QWORD *a1, __int64 a2, int *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rdi
  _DWORD *v14; // r8
  _DWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-48h]
  _DWORD *v21; // [rsp+38h] [rbp-40h]
  _DWORD *v22; // [rsp+40h] [rbp-38h]

  v5 = (a2 - *a1) >> 2;
  v6 = (__int64)(a1[1] - *a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Calculate_growth(
         a1,
         v6 + 1);
  v11 = std::allocator<unsigned int>::allocate(v10, v9);
  v12 = *a3;
  v13 = v11;
  v19 = a1;
  v14 = (_DWORD *)v11;
  v20 = v9;
  v15 = (_DWORD *)(v11 + 4 * v5);
  *v15 = v12;
  v16 = a1[1];
  v17 = *a1;
  v22 = v15 + 1;
  v21 = v15;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId *>(v17, a2, v11);
    v16 = a1[1];
    v14 = v15 + 1;
    v17 = a2;
    v21 = (_DWORD *)v13;
  }
  std::_Uninitialized_move<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId *>(v17, v16, v14);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Change_array(
    a1,
    v13,
    v8,
    v9,
    v19,
    0LL,
    v20,
    v21,
    v22);
  std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Reallocation_guard::~_Reallocation_guard(&v19);
  return v15;
}
