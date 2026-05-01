/*
 * XREFs of ?serialize@?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180681090
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DDF6C (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DF23C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$process@AEAU_tip_TaskViewShowTest@SwitcherTip@@@output_archive@tson@@AEAAXAEAU_tip_TaskViewShowTest@SwitcherTip@@@Z @ 0x18067E4A0 (--$process@AEAU_tip_TaskViewShowTest@SwitcherTip@@@output_archive@tson@@AEAAXAEAU_tip_TaskViewSh.c)
 */

void __fastcall tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  if ( (a3 & 2) != 0 )
  {
    *((_BYTE *)a2 + 8) = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *(_DWORD *)(a1 + 184) = 0;
    tson::output_archive::finishNode(a2);
  }
  if ( (a3 & 1) != 0 )
  {
    *((_BYTE *)a2 + 8) = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::process<SwitcherTip::_tip_TaskViewShowTest &>(a2, (a1 + 248) & -(__int64)(a1 != 0));
  }
}
