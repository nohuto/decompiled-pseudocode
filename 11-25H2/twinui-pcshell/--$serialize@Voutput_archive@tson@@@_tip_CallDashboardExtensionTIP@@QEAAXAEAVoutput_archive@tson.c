/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800DF40C
 * Callers:
 *     ?serialize@?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1802946E0 (-serialize@-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXAEAVoutput_arch.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180224928 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 */

__int64 __fastcall _tip_CallDashboardExtensionTIP::serialize<tson::output_archive>(__int64 a1, int a2)
{
  const char *v3; // [rsp+30h] [rbp-9h] BYREF
  char v4; // [rsp+38h] [rbp-1h]
  __int64 v5; // [rsp+40h] [rbp+7h]
  const char *v6; // [rsp+48h] [rbp+Fh] BYREF
  char v7; // [rsp+50h] [rbp+17h]
  __int64 v8; // [rsp+58h] [rbp+1Fh]
  const char *v9; // [rsp+60h] [rbp+27h] BYREF
  char v10; // [rsp+68h] [rbp+2Fh]
  __int64 v11; // [rsp+70h] [rbp+37h]
  const char *v12; // [rsp+78h] [rbp+3Fh] BYREF
  char v13; // [rsp+80h] [rbp+47h]
  __int64 v14; // [rsp+88h] [rbp+4Fh]

  v4 = 15;
  v7 = 16;
  v3 = "packageFullName";
  v10 = 27;
  v5 = a1 + 24;
  v13 = 24;
  v6 = "isCallSuccessful";
  v8 = a1 + 18;
  v9 = "isDashboardExtensionPresent";
  v11 = a1 + 17;
  v12 = "isDashboardExtensionNull";
  v14 = a1 + 16;
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           a2,
           (unsigned int)&v12,
           (unsigned int)&v9,
           (unsigned int)&v6,
           (__int64)&v3);
}
