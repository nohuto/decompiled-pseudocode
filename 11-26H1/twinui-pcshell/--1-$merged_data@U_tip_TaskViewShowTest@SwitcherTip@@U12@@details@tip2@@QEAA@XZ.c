/*
 * XREFs of ??1?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ @ 0x1806A5A1C
 * Callers:
 *     ?Release@?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ @ 0x1806A7048 (-Release@-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ @ 0x18028334C (-on_destroy@-$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>::~merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>(
        _QWORD *a1)
{
  __int64 v1; // rbx

  v1 = (__int64)(a1 + 1);
  *a1 = &tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>::`vftable';
  tip2::details::shared_data<0,0,0>::on_destroy((__int64)(a1 + 1));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(v1);
}
