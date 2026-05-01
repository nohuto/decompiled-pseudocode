/*
 * XREFs of ??0?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18031FAF0
 * Callers:
 *     ?ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_NW4CollectionOfficeSKU@2345@@Z @ 0x18032019C (-ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_.c)
 *     ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z @ 0x180320768 (-GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAH.c)
 * Callees:
 *     ??$_Construct_n@AEBQEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBQEAW412345@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAX_KAEBQEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@1@Z @ 0x18031F6F8 (--$_Construct_n@AEBQEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 */

_QWORD *__fastcall std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Construct_n<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU * const &,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU * const &>(
    a1,
    (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2,
    (const void **)a2,
    (_QWORD *)(a2 + 8));
  return a1;
}
