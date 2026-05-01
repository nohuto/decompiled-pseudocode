/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_ToggleDashboardUsingHotkey@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805A6604
 * Callers:
 *     ?serialize@?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805B92F0 (-serialize@-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@EEAAXAEAVoutput_arc.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805A4300 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAJ@2@V-$nvp@AEAV-$basic_string@GU-$c_ea_1805A4300.c)
 */

char __fastcall _tip_ToggleDashboardUsingHotkey::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  const char *v3; // [rsp+30h] [rbp-29h] BYREF
  char v4; // [rsp+38h] [rbp-21h]
  __int64 v5; // [rsp+40h] [rbp-19h]
  const char *v6; // [rsp+48h] [rbp-11h] BYREF
  char v7; // [rsp+50h] [rbp-9h]
  __int64 v8; // [rsp+58h] [rbp-1h]
  const char *v9; // [rsp+60h] [rbp+7h] BYREF
  char v10; // [rsp+68h] [rbp+Fh]
  __int64 v11; // [rsp+70h] [rbp+17h]
  const char *v12; // [rsp+78h] [rbp+1Fh] BYREF
  char v13; // [rsp+80h] [rbp+27h]
  __int64 v14; // [rsp+88h] [rbp+2Fh]
  const char *v15; // [rsp+90h] [rbp+37h] BYREF
  char v16; // [rsp+98h] [rbp+3Fh]
  __int64 v17; // [rsp+A0h] [rbp+47h]

  v4 = 15;
  v3 = "packageFullName";
  v7 = 2;
  v5 = a1 + 24;
  v10 = 24;
  v13 = 27;
  v6 = "hr";
  v16 = 38;
  v8 = a1 + 20;
  v9 = "isRelevantExtensionError";
  v11 = a1 + 18;
  v12 = "isDashboardExtensionPresent";
  v14 = a1 + 17;
  v15 = "isDashboardExtensionCreationSuccessful";
  v17 = a1 + 16;
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v15,
           (__int64)&v12,
           (__int64)&v9,
           (__int64 *)&v6,
           (__int64)&v3);
}
