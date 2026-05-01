/*
 * XREFs of ??$_Uninitialized_move@PEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@QEAU123456@0PEAU123456@AEAV?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1805BDC4C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x1805BDB30 (--$_Emplace_reallocate@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@-$vect.c)
 *     ??$_Reallocate@$0A@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXAEA_K@Z @ 0x1806A8670 (--$_Reallocate@$0A@@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$a.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 */

char *__fastcall std::_Uninitialized_move<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion *>(
        void *a1,
        __int64 a2,
        char *a3)
{
  std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
    a1,
    a2,
    a3);
  return &a3[(a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFE0uLL];
}
