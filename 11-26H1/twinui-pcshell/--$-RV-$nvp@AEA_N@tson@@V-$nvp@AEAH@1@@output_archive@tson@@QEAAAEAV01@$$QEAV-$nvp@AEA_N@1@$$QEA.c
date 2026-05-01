/*
 * XREFs of ??$?RV?$nvp@AEA_N@tson@@V?$nvp@AEAH@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@@Z @ 0x1802B42E4
 * Callers:
 *     ??$?RV?$nvp@AEAU_tip_GamingTaskViewShowTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_GamingTaskViewShowTest@SwitcherTip@@@1@@Z @ 0x18069E2B0 (--$-RV-$nvp@AEAU_tip_GamingTaskViewShowTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01.c)
 *     ?serialize@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1806AA860 (-serialize@-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVoutpu.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x180180E4C (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 */

__int64 __fastcall tson::output_archive::operator()<tson::nvp<bool &>,tson::nvp<int &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v5; // dl

  tson::output_archive::process<tson::nvp<bool &>>(a1, a2);
  v5 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a3;
  *(_BYTE *)(a1 + 8) = v5;
  tson::output_archive::operator()<int &>(a1, *(int **)(a3 + 16));
  return a1;
}
