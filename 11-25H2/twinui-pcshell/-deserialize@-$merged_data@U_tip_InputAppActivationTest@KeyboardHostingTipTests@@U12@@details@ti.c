/*
 * XREFs of ?deserialize@?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180468D50
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1801852A0 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_InputAppActivationTest@KeyboardHostingTipTests@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18045AE28 (--$serialize@Vinput_archive@tson@@@_tip_InputAppActivationTest@KeyboardHostingTipTests@@QEAAXAEA.c)
 */

void __fastcall tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  KeyboardHostingTipTests::_tip_InputAppActivationTest::serialize<tson::input_archive>(
    (a1 + 248) & -(__int64)(a1 != 0),
    (tson::input_archive *)a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
