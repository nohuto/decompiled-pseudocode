/*
 * XREFs of ??1?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@QEAA@XZ @ 0x1805CC0E4
 * Callers:
 *     ?Release@?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@AEAAKXZ @ 0x1805D5AA0 (-Release@-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x180283260 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>::~merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>(
        _QWORD *a1)
{
  *a1 = &tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>::`vftable';
  tip2::details::shared_data<1,0,0>::on_destroy((__int64)(a1 + 1));
  std::wstring::_Tidy_deallocate(a1 + 35);
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>((__int64)(a1 + 1));
}
