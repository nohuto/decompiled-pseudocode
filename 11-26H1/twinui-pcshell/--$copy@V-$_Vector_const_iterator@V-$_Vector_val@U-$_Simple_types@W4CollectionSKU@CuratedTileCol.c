/*
 * XREFs of ??$copy@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@@std@@V?$back_insert_iterator@V?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@@0@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@@0@0V10@@Z @ 0x18031C1E4
 * Callers:
 *     ?Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z @ 0x18031CACC (-Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAPEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAW423456@AEBW423456@@Z @ 0x180234038 (--$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 */

_QWORD *__fastcall std::copy<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>>>,std::back_insert_iterator<std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>>>(
        _QWORD *a1,
        int *a2,
        int *a3,
        _QWORD *a4)
{
  int *i; // rsi
  int *v8; // rdx
  _QWORD *result; // rax

  for ( i = a2; i != a3; ++i )
  {
    v8 = (int *)a4[1];
    if ( v8 == (int *)a4[2] )
    {
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Emplace_reallocate<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU const &>(
        a4,
        (__int64)v8,
        i);
    }
    else
    {
      *v8 = *i;
      a4[1] += 4LL;
    }
  }
  result = a1;
  *a1 = a4;
  return result;
}
