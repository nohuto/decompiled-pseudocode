/*
 * XREFs of ??1?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@QEAA@XZ @ 0x1805A7F94
 * Callers:
 *     ?Release@?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@AEAAKXZ @ 0x1805B1C58 (-Release@-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x180294FA0 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>::~merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>(
        __int64 a1)
{
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>::`vftable';
  tip2::details::shared_data<1,0,0>::on_destroy(a1 + 8);
  std::wstring::_Tidy_deallocate((void **)(a1 + 280));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(a1 + 8);
}
