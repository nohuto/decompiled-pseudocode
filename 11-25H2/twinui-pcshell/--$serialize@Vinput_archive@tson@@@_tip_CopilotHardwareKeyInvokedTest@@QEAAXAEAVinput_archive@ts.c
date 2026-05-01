/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805FCBFC
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180610D40 (-deserialize@-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXAEAVinput.c)
 * Callees:
 *     ??$process@V?$nvp@W4reason@_tip_CopilotHardwareKeyInvokedTest@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@W4reason@_tip_CopilotHardwareKeyInvokedTest@@@1@@Z @ 0x1805FCB88 (--$process@V-$nvp@W4reason@_tip_CopilotHardwareKeyInvokedTest@@@tson@@@input_archive@tson@@AEAAX.c)
 */

char __fastcall _tip_CopilotHardwareKeyInvokedTest::serialize<tson::input_archive>(__int64 a1, __int64 a2)
{
  const char *v4; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  const char *v7; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+38h] [rbp-10h]
  int v9; // [rsp+3Ch] [rbp-Ch]

  v8 = 20;
  v9 = 2;
  v7 = "reason::searchInvoke";
  v5 = 22;
  v4 = "reason::settingsInvoke";
  v6 = 3;
  tson::input_archive::process<tson::nvp<enum _tip_CopilotHardwareKeyInvokedTest::reason>>(a2, (__int64)&v4);
  return tson::input_archive::process<tson::nvp<enum _tip_CopilotHardwareKeyInvokedTest::reason>>(a2, (__int64)&v7);
}
