/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1803A3E50
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1803B4630 (-serialize@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@EEAAXAEAVoutput_a.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DE4B8 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V?$nvp@AEA_N@2@V32@V?$nvp@AEAJ@2@V12@V42@V12@V12@V32@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEA_N@1@1$$QEAV?$nvp@AEAJ@1@020011@Z @ 0x1803A06F8 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@tson@@V-$nvp.c)
 */

char __fastcall _tip_SearchWebProviderInstallTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2,
        __int64 a3)
{
  __int64 v4; // rdx
  const char *v6; // [rsp+60h] [rbp-A0h] BYREF
  char v7; // [rsp+68h] [rbp-98h]
  __int64 v8; // [rsp+70h] [rbp-90h]
  const char *v9; // [rsp+78h] [rbp-88h] BYREF
  char v10; // [rsp+80h] [rbp-80h]
  __int64 v11; // [rsp+88h] [rbp-78h]
  const char *v12; // [rsp+90h] [rbp-70h] BYREF
  char v13; // [rsp+98h] [rbp-68h]
  __int64 v14; // [rsp+A0h] [rbp-60h]
  const char *v15; // [rsp+A8h] [rbp-58h] BYREF
  char v16; // [rsp+B0h] [rbp-50h]
  __int64 v17; // [rsp+B8h] [rbp-48h]
  const char *v18; // [rsp+C0h] [rbp-40h] BYREF
  char v19; // [rsp+C8h] [rbp-38h]
  __int64 v20; // [rsp+D0h] [rbp-30h]
  const char *v21; // [rsp+D8h] [rbp-28h] BYREF
  char v22; // [rsp+E0h] [rbp-20h]
  __int64 v23; // [rsp+E8h] [rbp-18h]
  const char *v24; // [rsp+F0h] [rbp-10h] BYREF
  char v25; // [rsp+F8h] [rbp-8h]
  __int64 v26; // [rsp+100h] [rbp+0h]
  const char *v27; // [rsp+108h] [rbp+8h] BYREF
  char v28; // [rsp+110h] [rbp+10h]
  __int64 v29; // [rsp+118h] [rbp+18h]
  const char *v30; // [rsp+120h] [rbp+20h] BYREF
  char v31; // [rsp+128h] [rbp+28h]
  __int64 v32; // [rsp+130h] [rbp+30h]
  const char *v33; // [rsp+138h] [rbp+38h] BYREF
  char v34; // [rsp+140h] [rbp+40h]
  __int64 v35; // [rsp+148h] [rbp+48h]
  const char *v36; // [rsp+150h] [rbp+50h] BYREF
  char v37; // [rsp+158h] [rbp+58h]
  __int64 v38; // [rsp+160h] [rbp+60h]

  *((_BYTE *)a2 + 8) = 15;
  v9 = "app_uninstalled_by_user";
  v10 = 23;
  v11 = a1 + 169;
  v12 = "app_update_version";
  v14 = a1 + 168;
  v15 = "app_install_version";
  v17 = a1 + 136;
  v18 = "app_current_version";
  v20 = a1 + 104;
  v21 = "app_installed_regkey_set_hresult";
  v23 = a1 + 96;
  v24 = "registration_error_text";
  v26 = a1 + 64;
  v27 = "registration_error_code";
  v29 = a1 + 60;
  v30 = "app_registered";
  v32 = a1 + 57;
  v33 = "app_already_installed";
  v35 = a1 + 56;
  v36 = "install_package_family_name";
  v38 = a1 + 24;
  v6 = "install_package_regkeys_not_set";
  v8 = a1 + 20;
  *(_QWORD *)a2 = "install_trigger";
  v4 = *(unsigned int *)(a1 + 16);
  v13 = 18;
  v16 = 19;
  v19 = 19;
  v22 = 32;
  v25 = 23;
  v28 = 23;
  v31 = 14;
  v34 = 21;
  v37 = 27;
  v7 = 31;
  tson::output_archive::saveValue(a2, v4, a3);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v6);
  return tson::output_archive::process<tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           (__int64)a2,
           (__int64)&v36,
           (__int64)&v33,
           (__int64)&v30,
           (__int64 *)&v27,
           (__int64 *)&v24,
           (__int64 *)&v21,
           (__int64 *)&v18,
           (__int64 *)&v15,
           (__int64)&v12,
           (__int64)&v9);
}
