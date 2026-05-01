/*
 * XREFs of ??0?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1802A77A0
 * Callers:
 *     ??0SnapAssistState@@QEAA@AEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEBURect@Foundation@56@HPEAUHWND__@@3AEBUISnapAssistCallback2@WindowSnapping@Shell@456@@Z @ 0x18027D32C (--0SnapAssistState@@QEAA@AEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??1?$_Tidy_guard@V?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1806BFEA0 (--1-$_Tidy_guard@V-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$all.c)
 *     ?_Buy_raw@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1806C08D0 (-_Buy_raw@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@U.c)
 */

__int64 *__fastcall std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
        __int64 *a1,
        void **a2)
{
  unsigned __int64 v4; // rdx
  void *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = ((_BYTE *)a2[1] - (_BYTE *)*a2) >> 5;
  if ( v4 )
  {
    if ( v4 > 0x7FFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Buy_raw();
    v5 = *a2;
    v6 = (__int64)a2[1];
    v7 = *a1;
    std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
      v5,
      v6,
      (void *)*a1);
    v9 = 0LL;
    a1[1] = v7 + ((v6 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFE0uLL);
    std::_Tidy_guard<std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>>::~_Tidy_guard<std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>>(&v9);
  }
  return a1;
}
