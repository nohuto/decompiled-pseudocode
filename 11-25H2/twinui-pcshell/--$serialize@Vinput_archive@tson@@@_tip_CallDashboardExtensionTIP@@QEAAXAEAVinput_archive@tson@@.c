/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1801854CC
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180294640 (-deserialize@-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXAEAVinput_arc.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1803A2664 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@s_ea_1803A2664.c)
 */

__int64 __fastcall _tip_CallDashboardExtensionTIP::serialize<tson::input_archive>(__int64 a1, tson::input_archive *a2)
{
  __int64 v3; // [rsp+78h] [rbp+3Fh] BYREF
  char v4; // [rsp+80h] [rbp+47h]
  __int64 v5; // [rsp+88h] [rbp+4Fh]

  v4 = 24;
  v3 = (__int64)"isDashboardExtensionNull";
  v5 = a1 + 16;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v3);
}
