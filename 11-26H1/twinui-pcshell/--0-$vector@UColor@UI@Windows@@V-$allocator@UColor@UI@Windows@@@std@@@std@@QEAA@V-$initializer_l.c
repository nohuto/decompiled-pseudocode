/*
 * XREFs of ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V?$initializer_list@UColor@UI@Windows@@@1@AEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x180144888
 * Callers:
 *     _dynamic_initializer_for__BlockListening__ @ 0x180144760 (_dynamic_initializer_for__BlockListening__.c)
 *     _dynamic_initializer_for__thinking__ @ 0x180146BD0 (_dynamic_initializer_for__thinking__.c)
 * Callees:
 *     ?_Buy_raw@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x18012DE84 (-_Buy_raw@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 */

__int64 *__fastcall std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(__int64 *a1, __int64 a2)
{
  __int64 v2; // r14
  void *v3; // rbp
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  __int64 v7; // rbx

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(void **)a2;
  v4 = v2 - *(_QWORD *)a2;
  *a1 = 0LL;
  v5 = v4 >> 2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v5 )
  {
    if ( v5 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<int>::_Buy_raw(a1, v5);
    v7 = *a1;
    std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
      v3,
      v2,
      (void *)*a1);
    a1[1] = v7 + 4 * v5;
  }
  return a1;
}
