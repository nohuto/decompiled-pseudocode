/*
 * XREFs of ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1801C5F3C
 * Callers:
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18031E088 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180396050 (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x180400268 (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?FindPendingShareViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x180400318 (-FindPendingShareViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePan.c)
 *     ?FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@@Z @ 0x180400460 (-FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$vector@V-$shared_ptr@UPeopl.c)
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1804027D0 (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x180402858 (-RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     _lambda_ff3af0abcf4100822182f80ac5bd56ae_::operator() @ 0x18045ED54 (_lambda_ff3af0abcf4100822182f80ac5bd56ae_--operator().c)
 *     ??$find@PEBGU?$less@X@std@@$0A@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@std@@@std@@@1@AEBQEBG@Z @ 0x18054E488 (--$find@PEBGU-$less@X@std@@$0A@@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::compare(char *a1, char *a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned int v4; // r9d
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r10
  signed __int64 v7; // rcx
  unsigned __int16 v8; // bx

  result = -1LL;
  v3 = -1LL;
  v4 = 0;
  do
    ++v3;
  while ( *(_WORD *)&a2[2 * v3] );
  v5 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    a1 = *(char **)a1;
  v6 = v5;
  if ( v3 < v5 )
    v6 = v3;
  v7 = a1 - a2;
  while ( v6 )
  {
    v8 = *(_WORD *)&a2[v7];
    if ( v8 != *(_WORD *)a2 )
      return v8 < *(_WORD *)a2 ? -1 : 1;
    --v6;
    a2 += 2;
  }
  if ( v5 >= v3 )
  {
    LOBYTE(v4) = v5 > v3;
    return v4;
  }
  return result;
}
