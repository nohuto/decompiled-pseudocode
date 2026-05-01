/*
 * XREFs of ?deserialize@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805ECB50
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180177078 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805E235C (--$serialize@Vinput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXAEAVinput_arc.c)
 */

void __fastcall tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  PinManagerTipTests::_tip_PinManagerPinTest::serialize<tson::input_archive>(
    (a1 + 256) & -(__int64)(a1 != 0),
    (tson::input_archive *)a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
