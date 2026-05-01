/*
 * XREFs of ??0?$vector@_KV?$allocator@_K@std@@@std@@QEAA@AEBV01@@Z @ 0x1805A686C
 * Callers:
 *     ?SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@@IPEA_K@Z @ 0x1805A7A90 (-SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Inte.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??1?$_Tidy_guard@V?$vector@PEAGV?$allocator@PEAG@std@@@std@@@std@@QEAA@XZ @ 0x18031C404 (--1-$_Tidy_guard@V-$vector@PEAGV-$allocator@PEAG@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Buy_raw@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1805A8C7C (-_Buy_raw@-$vector@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 */

__int64 *__fastcall std::vector<unsigned __int64>::vector<unsigned __int64>(__int64 *a1, void **a2)
{
  unsigned __int64 v4; // rdx
  void *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 *v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = ((_BYTE *)a2[1] - (_BYTE *)*a2) >> 3;
  if ( v4 )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    std::vector<unsigned __int64>::_Buy_raw();
    v5 = *a2;
    v6 = (__int64)a2[1];
    v7 = *a1;
    std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
      v5,
      v6,
      (void *)*a1);
    v9 = 0LL;
    a1[1] = v7 + 8 * ((v6 - (__int64)v5) >> 3);
    std::_Tidy_guard<std::vector<unsigned short *>>::~_Tidy_guard<std::vector<unsigned short *>>(&v9);
  }
  return a1;
}
