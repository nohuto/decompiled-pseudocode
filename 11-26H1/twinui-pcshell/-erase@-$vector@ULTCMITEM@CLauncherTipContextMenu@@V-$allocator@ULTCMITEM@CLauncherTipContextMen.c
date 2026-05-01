/*
 * XREFs of ?erase@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@@2@@Z @ 0x180604478
 * Callers:
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1801927C4 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 */

_QWORD *__fastcall std::vector<CLauncherTipContextMenu::LTCMITEM>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *result; // rax

  std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
    (void *)(a3 + 12),
    *(_QWORD *)(a1 + 8),
    (void *)a3);
  *(_QWORD *)(a1 + 8) -= 12LL;
  result = a2;
  *a2 = a3;
  return result;
}
