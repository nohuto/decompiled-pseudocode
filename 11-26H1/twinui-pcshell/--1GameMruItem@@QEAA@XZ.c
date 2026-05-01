/*
 * XREFs of ??1GameMruItem@@QEAA@XZ @ 0x1803106BC
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UGameMruItem@@@std@@EEAAXXZ @ 0x180314E80 (-_Destroy@-$_Ref_count_obj2@UGameMruItem@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall GameMruItem::~GameMruItem(GameMruItem *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 9);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 5);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 1);
}
