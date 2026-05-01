/*
 * XREFs of ?deserialize@?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180642550
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180177078 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_RecoverRemoteSessionTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18063DDA4 (--$serialize@Vinput_archive@tson@@@_tip_RecoverRemoteSessionTipTest@@QEAAXAEAVinput_archive@tson.c)
 */

void __fastcall tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  _tip_RecoverRemoteSessionTipTest::serialize<tson::input_archive>((a1 + 256) & -(__int64)(a1 != 0), a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
