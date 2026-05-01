/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_SettingsStoreAppInstallerTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805C8F4C
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805DB2E0 (-deserialize@-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@EEAAXAEAVinput.c)
 * Callees:
 *     ??$?RV?$nvp@AEA_K@tson@@V?$nvp@AEAH@1@V?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@V?$nvp@AEAG@1@V51@V51@V51@V51@V51@V51@V51@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V61@V?$nvp@AEA_N@1@V71@V71@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_K@1@$$QEAV?$nvp@AEAH@1@$$QEAV?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@4444444$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@5$$QEAV?$nvp@AEA_N@1@66@Z @ 0x1805C3ACC (--$-RV-$nvp@AEA_K@tson@@V-$nvp@AEAH@1@V-$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@Ap.c)
 *     ??$?RV?$nvp@AEA_K@tson@@V?$nvp@AEAH@1@V?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@V?$nvp@AEAG@1@V51@V51@V51@V51@V51@V51@V51@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V61@V?$nvp@AEA_N@1@V71@V71@V71@V71@V71@V71@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_K@1@$$QEAV?$nvp@AEAH@1@$$QEAV?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@4444444$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@5$$QEAV?$nvp@AEA_N@1@666666@Z @ 0x1805C3CD4 (--$-RV-$nvp@AEA_K@tson@@V-$nvp@AEAH@1@V-$nvp@AEAW4AppInstallType@InstallControl@Pre_ea_1805C3CD4.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ @ 0x1805DAC18 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ.c)
 */

tson::input_archive *__fastcall _tip_SettingsStoreAppInstallerTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  __int64 v5; // [rsp+B0h] [rbp-80h] BYREF
  char v6; // [rsp+B8h] [rbp-78h]
  __int64 v7; // [rsp+C0h] [rbp-70h]
  __int64 v8; // [rsp+C8h] [rbp-68h] BYREF
  char v9; // [rsp+D0h] [rbp-60h]
  __int64 v10; // [rsp+D8h] [rbp-58h]
  __int64 v11; // [rsp+E0h] [rbp-50h] BYREF
  char v12; // [rsp+E8h] [rbp-48h]
  __int64 v13; // [rsp+F0h] [rbp-40h]
  __int64 v14; // [rsp+F8h] [rbp-38h] BYREF
  char v15; // [rsp+100h] [rbp-30h]
  __int64 v16; // [rsp+108h] [rbp-28h]
  __int64 v17; // [rsp+110h] [rbp-20h] BYREF
  char v18; // [rsp+118h] [rbp-18h]
  __int64 v19; // [rsp+120h] [rbp-10h]
  __int64 v20; // [rsp+128h] [rbp-8h] BYREF
  char v21; // [rsp+130h] [rbp+0h]
  __int64 v22; // [rsp+138h] [rbp+8h]
  __int64 v23; // [rsp+140h] [rbp+10h] BYREF
  char v24; // [rsp+148h] [rbp+18h]
  __int64 v25; // [rsp+150h] [rbp+20h]
  __int64 v26; // [rsp+158h] [rbp+28h] BYREF
  char v27; // [rsp+160h] [rbp+30h]
  __int64 v28; // [rsp+168h] [rbp+38h]
  __int64 v29; // [rsp+170h] [rbp+40h] BYREF
  char v30; // [rsp+178h] [rbp+48h]
  __int64 v31; // [rsp+180h] [rbp+50h]
  __int64 v32; // [rsp+188h] [rbp+58h] BYREF
  char v33; // [rsp+190h] [rbp+60h]
  __int64 v34; // [rsp+198h] [rbp+68h]
  __int64 v35; // [rsp+1A0h] [rbp+70h] BYREF
  char v36; // [rsp+1A8h] [rbp+78h]
  __int64 v37; // [rsp+1B0h] [rbp+80h]
  __int64 v38; // [rsp+1B8h] [rbp+88h] BYREF
  char v39; // [rsp+1C0h] [rbp+90h]
  __int64 v40; // [rsp+1C8h] [rbp+98h]
  __int64 v41; // [rsp+1D0h] [rbp+A0h] BYREF
  char v42; // [rsp+1D8h] [rbp+A8h]
  __int64 v43; // [rsp+1E0h] [rbp+B0h]
  __int64 v44; // [rsp+1E8h] [rbp+B8h] BYREF
  char v45; // [rsp+1F0h] [rbp+C0h]
  __int64 v46; // [rsp+1F8h] [rbp+C8h]
  const char *v47; // [rsp+200h] [rbp+D0h] BYREF
  char v48; // [rsp+208h] [rbp+D8h]
  __int64 v49; // [rsp+210h] [rbp+E0h]
  const char *v50; // [rsp+218h] [rbp+E8h] BYREF
  char v51; // [rsp+220h] [rbp+F0h]
  __int64 v52; // [rsp+228h] [rbp+F8h]
  const char *v53; // [rsp+230h] [rbp+100h] BYREF
  char v54; // [rsp+238h] [rbp+108h]
  __int64 v55; // [rsp+240h] [rbp+110h]
  const char *v56; // [rsp+248h] [rbp+118h] BYREF
  char v57; // [rsp+250h] [rbp+120h]
  __int64 v58; // [rsp+258h] [rbp+128h]
  const char *v59; // [rsp+260h] [rbp+130h] BYREF
  char v60; // [rsp+268h] [rbp+138h]
  __int64 v61; // [rsp+270h] [rbp+140h]
  const char *v62; // [rsp+278h] [rbp+148h] BYREF
  char v63; // [rsp+280h] [rbp+150h]
  __int64 v64; // [rsp+288h] [rbp+158h]
  const char *v65; // [rsp+290h] [rbp+160h] BYREF
  char v66; // [rsp+298h] [rbp+168h]
  __int64 v67; // [rsp+2A0h] [rbp+170h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55740385>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55740385>::GetImpl'::`2'::impl) )
  {
    v54 = 18;
    v19 = a1 + 52;
    v53 = "isCTAUpdateAllowed";
    v55 = a1 + 133;
    v50 = "isInCTARegion";
    v52 = a1 + 132;
    v47 = "isInternetUpdateAllowed";
    v49 = a1 + 131;
    v44 = (__int64)"isAutomaticInstallAllowedByPolicy";
    v46 = a1 + 17;
    v41 = (__int64)"isNetworkAvailableAndNotConstrained";
    v43 = a1 + 130;
    v38 = (__int64)"isPowerSupplyAdequate";
    v40 = a1 + 129;
    v35 = (__int64)"isInstallerAllowedToInstallProduct";
    v37 = a1 + 128;
    v32 = (__int64)"packageFamilyName";
    v34 = a1 + 96;
    v29 = (__int64)"productId";
    v31 = a1 + 64;
    v26 = (__int64)"minimumVersion.Revision";
    v28 = a1 + 58;
    v23 = (__int64)"minimumVersion.Build";
    v25 = a1 + 56;
    v20 = (__int64)"minimumVersion.Minor";
    v22 = a1 + 54;
    v51 = 13;
    v17 = (__int64)"minimumVersion.Major";
    v14 = (__int64)"installedVersion.Revision";
    v16 = a1 + 50;
    v11 = (__int64)"installedVersion.Build";
    v13 = a1 + 48;
    v8 = (__int64)"installedVersion.Minor";
    v10 = a1 + 46;
    v48 = 23;
    v45 = 33;
    v42 = 35;
    v39 = 21;
    v36 = 34;
    v33 = 17;
    v30 = 9;
    v27 = 23;
    v24 = 20;
    v21 = 20;
    v18 = 20;
    v15 = 25;
    v12 = 22;
    v9 = 22;
    v7 = a1 + 44;
    v5 = (__int64)"installedVersion.Major";
    v6 = 22;
    v56 = "installState";
    v57 = 12;
    v58 = a1 + 40;
    v60 = 11;
    v59 = "installType";
    v63 = 18;
    v61 = a1 + 36;
    v62 = "installError.value";
    v64 = a1 + 32;
    v65 = "bytesDownloaded";
    v67 = a1 + 24;
    v66 = 15;
    return tson::input_archive::operator()<tson::nvp<unsigned __int64 &>,tson::nvp<int &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
             a2,
             (__int64)&v65,
             (__int64)&v62,
             (__int64)&v59,
             (__int64)&v56,
             (__int64)&v5,
             (__int64)&v8,
             (__int64)&v11,
             (__int64)&v14,
             (__int64)&v17,
             (__int64)&v20,
             (__int64)&v23,
             (__int64)&v26,
             (__int64)&v29,
             (__int64)&v32,
             (__int64)&v35,
             (__int64)&v38,
             (__int64)&v41,
             (__int64)&v44,
             (__int64)&v47,
             (__int64)&v50,
             (__int64)&v53);
  }
  else
  {
    v6 = 35;
    v31 = a1 + 52;
    v5 = (__int64)"isNetworkAvailableAndNotConstrained";
    v7 = a1 + 130;
    v8 = (__int64)"isPowerSupplyAdequate";
    v10 = a1 + 129;
    v11 = (__int64)"isInstallerAllowedToInstallProduct";
    v13 = a1 + 128;
    v14 = (__int64)"packageFamilyName";
    v16 = a1 + 96;
    v17 = (__int64)"productId";
    v19 = a1 + 64;
    v20 = (__int64)"minimumVersion.Revision";
    v22 = a1 + 58;
    v23 = (__int64)"minimumVersion.Build";
    v25 = a1 + 56;
    v26 = (__int64)"minimumVersion.Minor";
    v28 = a1 + 54;
    v9 = 21;
    v29 = (__int64)"minimumVersion.Major";
    v32 = (__int64)"installedVersion.Revision";
    v34 = a1 + 50;
    v35 = (__int64)"installedVersion.Build";
    v37 = a1 + 48;
    v38 = (__int64)"installedVersion.Minor";
    v40 = a1 + 46;
    v41 = (__int64)"installedVersion.Major";
    v44 = (__int64)"installState";
    v46 = a1 + 40;
    v47 = "installType";
    v49 = a1 + 36;
    v50 = "installError.value";
    v52 = a1 + 32;
    v12 = 34;
    v15 = 17;
    v18 = 9;
    v21 = 23;
    v24 = 20;
    v27 = 20;
    v30 = 20;
    v33 = 25;
    v36 = 22;
    v39 = 22;
    v42 = 22;
    v43 = a1 + 44;
    v45 = 12;
    v48 = 11;
    v51 = 18;
    v53 = "bytesDownloaded";
    v54 = 15;
    v55 = a1 + 24;
    return tson::input_archive::operator()<tson::nvp<unsigned __int64 &>,tson::nvp<int &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType &>,tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
             a2,
             (__int64)&v53,
             (__int64)&v50,
             (__int64)&v47,
             (__int64)&v44,
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
}
