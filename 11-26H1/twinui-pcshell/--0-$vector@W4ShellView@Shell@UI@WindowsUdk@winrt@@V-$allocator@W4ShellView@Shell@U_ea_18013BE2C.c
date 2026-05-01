/*
 * XREFs of ??0?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18013BE2C
 * Callers:
 *     ??$?0$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@$0A@@?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@QEAA@AEBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@AEBV?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@1@@Z @ 0x18013ABC4 (--$-0$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V-$vector@W4ShellView@Shell@UI@.c)
 *     ??$emplace@AEBU?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@@?$_Hash@V?$_Umap_traits@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@V?$_Uhash_compare@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@U?$hash@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@8@@8@V?$allocator@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@1@@Z @ 0x18013C658 (--$emplace@AEBU-$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V-$vector@W4Sh.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ?_Buy_nonzero@?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@AEAAX_K@Z @ 0x18013BEB0 (-_Buy_nonzero@-$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$allocator@W4ShellView@Shell@UI@.c)
 */

__int64 *__fastcall std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>(
        __int64 *a1,
        void **a2)
{
  __int64 v4; // rdx
  void *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = ((_BYTE *)a2[1] - (_BYTE *)*a2) >> 2;
  if ( v4 )
  {
    std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>::_Buy_nonzero(a1, v4);
    v5 = *a2;
    v6 = (__int64)a2[1];
    v7 = *a1;
    std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
      v5,
      v6,
      (void *)*a1);
    a1[1] = v7 + 4 * ((v6 - (__int64)v5) >> 2);
  }
  return a1;
}
