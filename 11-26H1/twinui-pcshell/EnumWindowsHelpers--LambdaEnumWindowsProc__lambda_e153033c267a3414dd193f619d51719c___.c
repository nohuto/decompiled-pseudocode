/*
 * XREFs of EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_e153033c267a3414dd193f619d51719c___ @ 0x1806BFC90
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 */

_BOOL8 __fastcall EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_e153033c267a3414dd193f619d51719c___(
        HWND a1,
        __int64 *a2)
{
  __int64 v2; // rsi
  _DWORD *v5; // rcx
  _DWORD *i; // r8
  _DWORD *j; // rax

  v2 = *a2;
  v5 = *(_DWORD **)(*a2 + 8);
  for ( i = *(_DWORD **)*a2; i != v5 && *i != (_DWORD)a1; ++i )
    ;
  if ( i != v5 )
  {
    for ( j = i + 1; j != v5; ++j )
    {
      if ( *j != (_DWORD)a1 )
        *i++ = *j;
    }
    if ( i != v5 )
      *(_QWORD *)(v2 + 8) = std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
                              v5,
                              *(_QWORD *)(v2 + 8),
                              i);
  }
  return *(_QWORD *)*a2 != *(_QWORD *)(*a2 + 8) && a1 != *(HWND *)a2[1];
}
