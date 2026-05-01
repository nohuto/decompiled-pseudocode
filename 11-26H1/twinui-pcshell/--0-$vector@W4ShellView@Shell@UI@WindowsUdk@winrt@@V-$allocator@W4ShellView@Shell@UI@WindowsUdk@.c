/*
 * XREFs of ??0?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@QEAA@V?$initializer_list@W4ShellView@Shell@UI@WindowsUdk@winrt@@@1@AEBV?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@1@@Z @ 0x18013B86C
 * Callers:
 *     ??0EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAA@AEBUShellAnimationCoordinator@23456@@Z @ 0x1802079E0 (--0EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAA.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ?_Buy_nonzero@?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@AEAAX_K@Z @ 0x18013BEB0 (-_Buy_nonzero@-$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$allocator@W4ShellView@Shell@UI@.c)
 */

__int64 *__fastcall std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r14
  void *v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rsi
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
    std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>::_Buy_nonzero(a1, v5);
    v7 = *a1;
    std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
      v3,
      v2,
      (void *)*a1);
    a1[1] = v7 + 4 * v5;
  }
  return a1;
}
