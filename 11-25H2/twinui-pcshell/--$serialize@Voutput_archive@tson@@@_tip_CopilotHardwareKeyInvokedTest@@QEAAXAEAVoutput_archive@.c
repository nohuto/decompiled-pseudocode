/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805FCC60
 * Callers:
 *     ?serialize@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180611930 (-serialize@-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXAEAVoutput_.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DE4B8 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 */

void __fastcall _tip_CopilotHardwareKeyInvokedTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2,
        __int64 a3)
{
  __int64 v4; // r8

  *((_BYTE *)a2 + 8) = 22;
  *(_QWORD *)a2 = "reason::settingsInvoke";
  tson::output_archive::saveValue(a2, 3LL, a3);
  *((_BYTE *)a2 + 8) = 20;
  *(_QWORD *)a2 = "reason::searchInvoke";
  tson::output_archive::saveValue(a2, 2LL, v4);
}
