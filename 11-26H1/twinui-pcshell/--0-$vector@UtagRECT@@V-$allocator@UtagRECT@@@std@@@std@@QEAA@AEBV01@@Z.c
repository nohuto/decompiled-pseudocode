/*
 * XREFs of ??0?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180190074
 * Callers:
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18023ED68 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c31732deb1fbe728880e2f5434a1835___::CTaskWrapper__lambda_7c31732deb1fbe728880e2f5434a1835_____lambda_7c31732deb1fbe728880e2f5434a1835___ @ 0x1803A6988 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7c31732deb1fbe728880e2f5434a1835___--CTaskW.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1801901F8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::vector<tagRECT>::vector<tagRECT>(_QWORD *a1, void **a2)
{
  unsigned __int64 v4; // rbx
  __int64 size_of; // rax
  char *v6; // rax
  char *v7; // rsi
  void *v8; // rbx
  __int64 v9; // rdi

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = ((_BYTE *)a2[1] - (_BYTE *)*a2) >> 4;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    size_of = std::_Get_size_of_n<16>(((_BYTE *)a2[1] - (_BYTE *)*a2) >> 4);
    v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v6;
    a1[1] = v6;
    v7 = v6;
    a1[2] = &v6[16 * v4];
    v8 = *a2;
    v9 = (__int64)a2[1];
    std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
      v8,
      v9,
      v6);
    a1[1] = &v7[(v9 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF0uLL];
  }
  return a1;
}
