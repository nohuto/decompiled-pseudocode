/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_InboxedAppInstallerTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805C98D0
 * Callers:
 *     ?serialize@?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805DCBF0 (-serialize@-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@EEAAXAEAVoutput_archiv.c)
 * Callees:
 *     ??$process@V?$nvp@AEAH@tson@@V12@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V42@V42@V42@V42@V42@V42@V42@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V52@V52@V?$nvp@AEA_N@2@V62@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@2222222$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@33$$QEAV?$nvp@AEA_N@1@4@Z @ 0x1805C63A8 (--$process@V-$nvp@AEAH@tson@@V12@V-$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@Applic.c)
 */

__int64 __fastcall _tip_InboxedAppInstallerTest::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  const char *v5; // [rsp+90h] [rbp-80h] BYREF
  char v6; // [rsp+98h] [rbp-78h]
  __int64 v7; // [rsp+A0h] [rbp-70h]
  const char *v8; // [rsp+A8h] [rbp-68h] BYREF
  char v9; // [rsp+B0h] [rbp-60h]
  __int64 v10; // [rsp+B8h] [rbp-58h]
  const char *v11; // [rsp+C0h] [rbp-50h] BYREF
  char v12; // [rsp+C8h] [rbp-48h]
  __int64 v13; // [rsp+D0h] [rbp-40h]
  const char *v14; // [rsp+D8h] [rbp-38h] BYREF
  char v15; // [rsp+E0h] [rbp-30h]
  __int64 v16; // [rsp+E8h] [rbp-28h]
  const char *v17; // [rsp+F0h] [rbp-20h] BYREF
  char v18; // [rsp+F8h] [rbp-18h]
  __int64 v19; // [rsp+100h] [rbp-10h]
  const char *v20; // [rsp+108h] [rbp-8h] BYREF
  char v21; // [rsp+110h] [rbp+0h]
  __int64 v22; // [rsp+118h] [rbp+8h]
  const char *v23; // [rsp+120h] [rbp+10h] BYREF
  char v24; // [rsp+128h] [rbp+18h]
  __int64 v25; // [rsp+130h] [rbp+20h]
  const char *v26; // [rsp+138h] [rbp+28h] BYREF
  char v27; // [rsp+140h] [rbp+30h]
  __int64 v28; // [rsp+148h] [rbp+38h]
  const char *v29; // [rsp+150h] [rbp+40h] BYREF
  char v30; // [rsp+158h] [rbp+48h]
  __int64 v31; // [rsp+160h] [rbp+50h]
  const char *v32; // [rsp+168h] [rbp+58h] BYREF
  char v33; // [rsp+170h] [rbp+60h]
  __int64 v34; // [rsp+178h] [rbp+68h]
  const char *v35; // [rsp+180h] [rbp+70h] BYREF
  char v36; // [rsp+188h] [rbp+78h]
  __int64 v37; // [rsp+190h] [rbp+80h]
  const char *v38; // [rsp+198h] [rbp+88h] BYREF
  char v39; // [rsp+1A0h] [rbp+90h]
  __int64 v40; // [rsp+1A8h] [rbp+98h]
  const char *v41; // [rsp+1B0h] [rbp+A0h] BYREF
  char v42; // [rsp+1B8h] [rbp+A8h]
  __int64 v43; // [rsp+1C0h] [rbp+B0h]
  const char *v44; // [rsp+1C8h] [rbp+B8h] BYREF
  char v45; // [rsp+1D0h] [rbp+C0h]
  __int64 v46; // [rsp+1D8h] [rbp+C8h]
  const char *v47; // [rsp+1E0h] [rbp+D0h] BYREF
  char v48; // [rsp+1E8h] [rbp+D8h]
  __int64 v49; // [rsp+1F0h] [rbp+E0h]
  const char *v50; // [rsp+1F8h] [rbp+E8h] BYREF
  char v51; // [rsp+200h] [rbp+F0h]
  __int64 v52; // [rsp+208h] [rbp+F8h]

  v6 = 20;
  v9 = 21;
  v5 = "invalidPackageVolume";
  v12 = 16;
  v7 = a1 + 17;
  v8 = "isPowerSupplyAdequate";
  v10 = a1 + 144;
  v11 = "localPackagePath";
  v13 = a1 + 112;
  v14 = "packageFamilyName";
  v16 = a1 + 80;
  v17 = "productId";
  v19 = a1 + 48;
  v31 = a1 + 40;
  v20 = "minimumVersion.Revision";
  v15 = 17;
  v18 = 9;
  v22 = a1 + 46;
  v23 = "minimumVersion.Build";
  v25 = a1 + 44;
  v26 = "minimumVersion.Minor";
  v28 = a1 + 42;
  v3 = a1 + 32;
  v21 = 23;
  v29 = "minimumVersion.Major";
  v32 = "installedVersion.Revision";
  v34 = v3 + 6;
  v35 = "installedVersion.Build";
  v37 = v3 + 4;
  v38 = "installedVersion.Minor";
  v40 = v3 + 2;
  v41 = "installedVersion.Major";
  v44 = "installState";
  v46 = a1 + 28;
  v47 = "installException.value";
  v49 = a1 + 24;
  v50 = "installError.value";
  v24 = 20;
  v27 = 20;
  v30 = 20;
  v33 = 25;
  v36 = 22;
  v39 = 22;
  v42 = 22;
  v43 = v3;
  v45 = 12;
  v48 = 22;
  v51 = 18;
  v52 = a1 + 20;
  return tson::output_archive::process<tson::nvp<int &>,tson::nvp<int &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v50,
           (__int64)&v47,
           (int)&v44,
           (__int64)&v41,
           (__int64)&v38,
           (__int64)&v35,
           (__int64)&v32,
           (__int64)&v29,
           (__int64)&v26,
           (__int64)&v23,
           (__int64)&v20,
           (__int64)&v17,
           (__int64)&v14,
           (__int64)&v11,
           (__int64)&v8,
           (__int64)&v5);
}
