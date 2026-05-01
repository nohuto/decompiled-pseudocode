/*
 * XREFs of ??$process@AEAU_tip_TaskViewShowTest@SwitcherTip@@@output_archive@tson@@AEAAXAEAU_tip_TaskViewShowTest@SwitcherTip@@@Z @ 0x1806A537C
 * Callers:
 *     ?serialize@?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1806A8300 (-serialize@-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVoutput_.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DF434 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E00F0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x180180E4C (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 */

void __fastcall tson::output_archive::process<SwitcherTip::_tip_TaskViewShowTest &>(
        tson::output_archive *this,
        __int64 a2)
{
  __int64 v4; // r8
  const char *v5; // [rsp+20h] [rbp-28h] BYREF
  char v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  tson::output_archive::startNode(this);
  v6 = 5;
  v5 = "shown";
  v7 = a2 + 16;
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, (__int64)&v5);
  *((_BYTE *)this + 8) = 15;
  *(_QWORD *)this = "switchItemCount";
  tson::output_archive::operator()<int &>((__int64)this, (int *)(a2 + 20));
  *((_BYTE *)this + 8) = 12;
  *(_QWORD *)this = "monitorCount";
  tson::output_archive::operator()<int &>((__int64)this, (int *)(a2 + 24));
  *((_BYTE *)this + 8) = 12;
  *(_QWORD *)this = "invokeMethod";
  tson::output_archive::saveValue(this, *(unsigned int *)(a2 + 28), v4);
  tson::output_archive::finishNode(this);
}
