/*
 * XREFs of ??1_tip_AppPrelaunch@@QEAA@XZ @ 0x1805CC494
 * Callers:
 *     ??1?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@QEAA@XZ @ 0x1805CBF94 (--1-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_AppPrelaunch::~_tip_AppPrelaunch(_tip_AppPrelaunch *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 8);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64 *)this + 5);
}
