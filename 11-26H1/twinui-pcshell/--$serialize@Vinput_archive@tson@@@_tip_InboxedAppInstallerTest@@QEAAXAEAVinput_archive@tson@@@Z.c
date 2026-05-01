/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_InboxedAppInstallerTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805C87D0
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805DB220 (-deserialize@-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@EEAAXAEAVinput_archi.c)
 * Callees:
 *     ??$?RV?$nvp@AEAH@tson@@V01@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@V?$nvp@AEAG@1@V31@V31@V31@V31@V31@V31@V31@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V41@V41@V?$nvp@AEA_N@1@V51@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@2222222$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@33$$QEAV?$nvp@AEA_N@1@4@Z @ 0x1805C3858 (--$-RV-$nvp@AEAH@tson@@V01@V-$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationM.c)
 */

tson::input_archive *__fastcall _tip_InboxedAppInstallerTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  __int64 v3; // rcx
  __int64 v5; // [rsp+D8h] [rbp-38h] BYREF
  char v6; // [rsp+E0h] [rbp-30h]
  __int64 v7; // [rsp+E8h] [rbp-28h]
  __int64 v8; // [rsp+F0h] [rbp-20h] BYREF
  char v9; // [rsp+F8h] [rbp-18h]
  __int64 v10; // [rsp+100h] [rbp-10h]
  __int64 v11; // [rsp+108h] [rbp-8h] BYREF
  char v12; // [rsp+110h] [rbp+0h]
  __int64 v13; // [rsp+118h] [rbp+8h]
  __int64 v14; // [rsp+120h] [rbp+10h] BYREF
  char v15; // [rsp+128h] [rbp+18h]
  __int64 v16; // [rsp+130h] [rbp+20h]
  __int64 v17; // [rsp+138h] [rbp+28h] BYREF
  char v18; // [rsp+140h] [rbp+30h]
  __int64 v19; // [rsp+148h] [rbp+38h]
  __int64 v20; // [rsp+150h] [rbp+40h] BYREF
  char v21; // [rsp+158h] [rbp+48h]
  __int64 v22; // [rsp+160h] [rbp+50h]
  __int64 v23; // [rsp+168h] [rbp+58h] BYREF
  char v24; // [rsp+170h] [rbp+60h]
  __int64 v25; // [rsp+178h] [rbp+68h]
  __int64 v26; // [rsp+180h] [rbp+70h] BYREF
  char v27; // [rsp+188h] [rbp+78h]
  __int64 v28; // [rsp+190h] [rbp+80h]
  __int64 v29; // [rsp+198h] [rbp+88h] BYREF
  char v30; // [rsp+1A0h] [rbp+90h]
  __int64 v31; // [rsp+1A8h] [rbp+98h]
  __int64 v32; // [rsp+1B0h] [rbp+A0h] BYREF
  char v33; // [rsp+1B8h] [rbp+A8h]
  __int64 v34; // [rsp+1C0h] [rbp+B0h]
  const char *v35; // [rsp+1C8h] [rbp+B8h] BYREF
  char v36; // [rsp+1D0h] [rbp+C0h]
  __int64 v37; // [rsp+1D8h] [rbp+C8h]
  const char *v38; // [rsp+1E0h] [rbp+D0h] BYREF
  char v39; // [rsp+1E8h] [rbp+D8h]
  __int64 v40; // [rsp+1F0h] [rbp+E0h]
  const char *v41; // [rsp+1F8h] [rbp+E8h] BYREF
  char v42; // [rsp+200h] [rbp+F0h]
  __int64 v43; // [rsp+208h] [rbp+F8h]

  v5 = (__int64)"packageFamilyName";
  v7 = a1 + 80;
  v8 = (__int64)"productId";
  v10 = a1 + 48;
  v22 = a1 + 40;
  v11 = (__int64)"minimumVersion.Revision";
  v6 = 17;
  v9 = 9;
  v13 = a1 + 46;
  v14 = (__int64)"minimumVersion.Build";
  v16 = a1 + 44;
  v17 = (__int64)"minimumVersion.Minor";
  v19 = a1 + 42;
  v3 = a1 + 32;
  v12 = 23;
  v20 = (__int64)"minimumVersion.Major";
  v23 = (__int64)"installedVersion.Revision";
  v25 = v3 + 6;
  v26 = (__int64)"installedVersion.Build";
  v28 = v3 + 4;
  v29 = (__int64)"installedVersion.Minor";
  v31 = v3 + 2;
  v32 = (__int64)"installedVersion.Major";
  v35 = "installState";
  v37 = a1 + 28;
  v38 = "installException.value";
  v40 = a1 + 24;
  v41 = "installError.value";
  v15 = 20;
  v18 = 20;
  v21 = 20;
  v24 = 25;
  v27 = 22;
  v30 = 22;
  v33 = 22;
  v34 = v3;
  v36 = 12;
  v39 = 22;
  v42 = 18;
  v43 = a1 + 20;
  return tson::input_archive::operator()<tson::nvp<int &>,tson::nvp<int &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
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
