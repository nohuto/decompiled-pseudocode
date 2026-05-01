/*
 * XREFs of ??1?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@QEAA@XZ @ 0x1802832D4
 * Callers:
 *     ?Release@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ @ 0x18028328C (-Release@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ @ 0x18028334C (-on_destroy@-$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::~merged_data<_tip_SearchHideTest,_tip_SearchHideTest>(
        _QWORD *a1)
{
  *a1 = &tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::`vftable';
  tip2::details::shared_data<0,0,0>::on_destroy(a1 + 1);
  std::wstring::_Tidy_deallocate(a1 + 38);
  return tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(a1 + 1);
}
