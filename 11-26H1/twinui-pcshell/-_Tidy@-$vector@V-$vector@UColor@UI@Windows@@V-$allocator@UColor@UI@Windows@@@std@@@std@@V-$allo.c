/*
 * XREFs of ?_Tidy@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18012BD80
 * Callers:
 *     ??1?$_Tidy_guard@V?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@@std@@QEAA@XZ @ 0x1802C6794 (--1-$_Tidy_guard@V-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@s.c)
 *     _dynamic_atexit_destructor_for__error__ @ 0x180708CD0 (_dynamic_atexit_destructor_for__error__.c)
 *     _dynamic_atexit_destructor_for__responding__ @ 0x180708DB0 (_dynamic_atexit_destructor_for__responding__.c)
 *     _dynamic_atexit_destructor_for__idle__ @ 0x180708E30 (_dynamic_atexit_destructor_for__idle__.c)
 *     _dynamic_atexit_destructor_for__thinking__ @ 0x180708E50 (_dynamic_atexit_destructor_for__thinking__.c)
 *     _dynamic_atexit_destructor_for__listening__ @ 0x180708F30 (_dynamic_atexit_destructor_for__listening__.c)
 * Callees:
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18012BE08 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<std::vector<Windows::UI::Color>>::_Tidy(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    while ( v1 != v3 )
    {
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(v1);
      v1 += 24LL;
    }
    result = std::_Deallocate<16>(*a1, 8 * ((__int64)(a1[2] - *a1) >> 3));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
