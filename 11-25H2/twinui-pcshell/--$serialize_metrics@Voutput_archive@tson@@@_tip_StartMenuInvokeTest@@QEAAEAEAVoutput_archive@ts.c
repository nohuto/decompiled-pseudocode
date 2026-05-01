/*
 * XREFs of ??$serialize_metrics@Voutput_archive@tson@@@_tip_StartMenuInvokeTest@@QEAAEAEAVoutput_archive@tson@@@Z @ 0x18044CADC
 * Callers:
 *     ?serialize@?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1802A8F60 (-serialize@-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@ts.c)
 * Callees:
 *     ??$serialize@Voutput_archive@tson@@@_tip_StartMenuInvokeTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800DF570 (--$serialize@Voutput_archive@tson@@@_tip_StartMenuInvokeTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 */

char __fastcall _tip_StartMenuInvokeTest::serialize_metrics<tson::output_archive>(_BYTE *a1, int a2)
{
  _tip_StartMenuInvokeTest::serialize<tson::output_archive>((__int64)a1, a2);
  return a1[64] | (2 * (a1[65] | (2 * (a1[66] | (2 * a1[67])))));
}
