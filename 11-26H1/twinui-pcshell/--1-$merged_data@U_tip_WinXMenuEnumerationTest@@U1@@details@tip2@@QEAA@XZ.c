/*
 * XREFs of ??1?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@QEAA@XZ @ 0x1806008B4
 * Callers:
 *     ?Release@?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@AEAAKXZ @ 0x180602FA8 (-Release@-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ @ 0x18028334C (-on_destroy@-$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>::~merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>(
        _QWORD *a1)
{
  void *v2; // rcx

  *a1 = &tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>::`vftable';
  tip2::details::shared_data<0,0,0>::on_destroy((__int64)(a1 + 1));
  v2 = (void *)a1[35];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)((a1[37] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL));
    a1[35] = 0LL;
    a1[36] = 0LL;
    a1[37] = 0LL;
  }
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>((__int64)(a1 + 1));
}
