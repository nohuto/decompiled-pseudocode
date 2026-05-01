/*
 * XREFs of ?deserialize@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180636A00
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180177078 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180621AA4 (--$serialize@Vinput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVinput_archive@ts.c)
 */

void __fastcall tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  _tip_CopilotHardwareKeyInvokedTest::serialize<tson::input_archive>((a1 + 256) & -(__int64)(a1 != 0), a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
