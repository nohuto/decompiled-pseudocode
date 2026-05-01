/*
 * XREFs of ??1?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@QEAA@XZ @ 0x1803AE130
 * Callers:
 *     ?Release@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@AEAAKXZ @ 0x180281B54 (-Release@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x180283260 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::~merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>(
        _QWORD *a1)
{
  *a1 = &tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::`vftable';
  tip2::details::shared_data<1,0,0>::on_destroy((__int64)(a1 + 1));
  std::wstring::_Tidy_deallocate(a1 + 37);
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>((__int64)(a1 + 1));
}
