/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAH@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@@Z @ 0x18045AB9C
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAH@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAH@1@@Z @ 0x18045A8B4 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAH@2@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@.c)
 *     ?deserialize@?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180678D20 (-deserialize@-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEA.c)
 *     ?deserialize@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180682FA0 (-deserialize@-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXAEAVinp.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

tson::input_archive *__fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<int &>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  char v3; // r9
  bool *v6; // rsi
  __int64 v7; // rdx
  char *v8; // rax
  char v9; // cl
  bool v10; // al
  __int64 v11; // rax

  v3 = *(_BYTE *)(a2 + 8);
  a1[2] = *(_QWORD *)a2;
  *((_BYTE *)a1 + 24) = v3;
  v6 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    v10 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(a1, 10, -2147023267);
  v7 = *a1;
  v8 = *(char **)(*a1 + 8);
  if ( (unsigned __int64)v8 < *(_QWORD *)(*a1 + 16) )
  {
    v9 = *v8;
    *(_QWORD *)(v7 + 8) = v8 + 1;
    v10 = v9 != 0;
LABEL_6:
    *v6 = v10;
    goto LABEL_7;
  }
  *(_BYTE *)(v7 + 24) = 1;
LABEL_7:
  v11 = *a3;
  *((_BYTE *)a1 + 24) = *((_BYTE *)a3 + 8);
  a1[2] = v11;
  return tson::input_archive::operator()<int &>((tson::input_archive *)a1, (_DWORD *)a3[2]);
}
