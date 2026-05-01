/*
 * XREFs of ?serialize@?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180637F20
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DDF6C (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DF23C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_LaunchRemoteSystemSettingsTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180632074 (--$serialize@Voutput_archive@tson@@@_tip_LaunchRemoteSystemSettingsTipTest@@QEAAXAEAVoutput_arch.c)
 */

void __fastcall tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>::serialize(
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
    tson::output_archive::startNode(a2);
    _tip_LaunchRemoteSystemSettingsTipTest::serialize<tson::output_archive>(
      (a1 + 248) & -(__int64)(a1 != 0),
      (__int64)a2);
    tson::output_archive::finishNode(a2);
  }
}
