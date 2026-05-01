/*
 * XREFs of _dynamic_initializer_for__BlockError__ @ 0x18012F7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ?_Buy_nonzero@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x18012F394 (-_Buy_nonzero@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z.c)
 */

int dynamic_initializer_for__BlockError__()
{
  __int64 v0; // rbx
  int Src; // [rsp+30h] [rbp+8h] BYREF
  char v3; // [rsp+34h] [rbp+Ch] BYREF

  Src = 0xFFFF;
  std::vector<Windows::UI::Color>::_Buy_nonzero(&BlockError, 1uLL);
  v0 = BlockError;
  std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
    &Src,
    (__int64)&v3,
    (void *)BlockError);
  qword_1808DA6F8 = v0 + 4;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__BlockError__);
}
