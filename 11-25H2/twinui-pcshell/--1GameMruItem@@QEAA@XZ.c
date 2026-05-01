/*
 * XREFs of ??1GameMruItem@@QEAA@XZ @ 0x1803145D0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UGameMruItem@@@std@@EEAAXXZ @ 0x180318C40 (-_Destroy@-$_Ref_count_obj2@UGameMruItem@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall GameMruItem::~GameMruItem(void **this)
{
  std::wstring::_Tidy_deallocate(this + 9);
  std::wstring::_Tidy_deallocate(this + 5);
  std::wstring::_Tidy_deallocate(this + 1);
}
