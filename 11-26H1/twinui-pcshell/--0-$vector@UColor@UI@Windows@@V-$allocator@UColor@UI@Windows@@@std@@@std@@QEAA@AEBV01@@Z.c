/*
 * XREFs of ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18012BC70
 * Callers:
 *     ??0?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAA@V?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@AEBV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@@Z @ 0x18012BB7C (--0-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$allocato.c)
 * Callees:
 *     ?_Buy_raw@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x18012DE84 (-_Buy_raw@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 */

__int64 *__fastcall std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(__int64 *a1, void **a2)
{
  unsigned __int64 v4; // rdx
  void *v5; // rbx
  _BYTE *v6; // rdi
  __int64 v7; // rsi

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = ((_BYTE *)a2[1] - (_BYTE *)*a2) >> 2;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<int>::_Buy_raw(a1, v4);
    v5 = *a2;
    v6 = a2[1];
    v7 = *a1;
    std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(v5);
    a1[1] = v7 + 4 * ((v6 - (_BYTE *)v5) >> 2);
  }
  return a1;
}
