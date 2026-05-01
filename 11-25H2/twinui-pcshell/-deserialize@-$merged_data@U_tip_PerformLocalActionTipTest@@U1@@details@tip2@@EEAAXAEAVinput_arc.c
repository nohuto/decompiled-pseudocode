/*
 * XREFs of ?deserialize@?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18062DCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1801852A0 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_PerformLocalActionTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1806220FC (--$serialize@Vinput_archive@tson@@@_tip_PerformLocalActionTipTest@@QEAAXAEAVinput_archive@tson@@.c)
 */

void __fastcall tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  _tip_PerformLocalActionTipTest::serialize<tson::input_archive>((a1 + 248) & -(__int64)(a1 != 0), (__int64 *)a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
