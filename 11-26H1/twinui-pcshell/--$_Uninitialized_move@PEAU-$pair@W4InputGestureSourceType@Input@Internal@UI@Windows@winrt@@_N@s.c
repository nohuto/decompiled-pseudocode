/*
 * XREFs of ??$_Uninitialized_move@PEAU?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@V?$allocator@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@@2@@std@@YAPEAU?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@@0@@Z @ 0x18020B030
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x1800B5EB0 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQE.c)
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x18025445C (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 */

char *__fastcall std::_Uninitialized_move<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool> *,std::allocator<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>>(
        void *a1,
        __int64 a2,
        char *a3)
{
  std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
    a1,
    a2,
    a3);
  return &a3[8 * ((a2 - (__int64)a1) >> 3)];
}
