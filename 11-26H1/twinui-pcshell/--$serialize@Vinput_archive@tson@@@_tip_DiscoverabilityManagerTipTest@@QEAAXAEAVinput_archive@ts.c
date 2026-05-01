/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_DiscoverabilityManagerTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1806197B4
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18061CA40 (-deserialize@-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@EEAAXAEAVinput.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$nvp@AEAW4InvokeType@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4InvokeType@@@1@@Z @ 0x1806190B0 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V-$nvp@AEAV-$basic_st_ea_1806190B0.c)
 */

__int64 __fastcall _tip_DiscoverabilityManagerTipTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  __int64 v3; // [rsp+60h] [rbp-A0h] BYREF
  char v4; // [rsp+68h] [rbp-98h]
  __int64 v5; // [rsp+70h] [rbp-90h]
  __int64 v6; // [rsp+78h] [rbp-88h] BYREF
  char v7; // [rsp+80h] [rbp-80h]
  __int64 v8; // [rsp+88h] [rbp-78h]
  __int64 v9; // [rsp+90h] [rbp-70h] BYREF
  char v10; // [rsp+98h] [rbp-68h]
  __int64 v11; // [rsp+A0h] [rbp-60h]
  __int64 v12; // [rsp+A8h] [rbp-58h] BYREF
  char v13; // [rsp+B0h] [rbp-50h]
  __int64 v14; // [rsp+B8h] [rbp-48h]
  __int64 v15; // [rsp+C0h] [rbp-40h] BYREF
  char v16; // [rsp+C8h] [rbp-38h]
  __int64 v17; // [rsp+D0h] [rbp-30h]
  __int64 v18; // [rsp+D8h] [rbp-28h] BYREF
  char v19; // [rsp+E0h] [rbp-20h]
  __int64 v20; // [rsp+E8h] [rbp-18h]
  __int64 v21; // [rsp+F0h] [rbp-10h] BYREF
  char v22; // [rsp+F8h] [rbp-8h]
  __int64 v23; // [rsp+100h] [rbp+0h]
  __int64 v24; // [rsp+108h] [rbp+8h] BYREF
  char v25; // [rsp+110h] [rbp+10h]
  __int64 v26; // [rsp+118h] [rbp+18h]
  const char *v27; // [rsp+120h] [rbp+20h] BYREF
  char v28; // [rsp+128h] [rbp+28h]
  __int64 v29; // [rsp+130h] [rbp+30h]
  const char *v30; // [rsp+138h] [rbp+38h] BYREF
  char v31; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+148h] [rbp+48h]
  const char *v33; // [rsp+150h] [rbp+50h] BYREF
  char v34; // [rsp+158h] [rbp+58h]
  __int64 v35; // [rsp+160h] [rbp+60h]

  v4 = 10;
  v3 = (__int64)"invokeType";
  v7 = 11;
  v5 = a1 + 64;
  v10 = 24;
  v6 = (__int64)"description";
  v13 = 19;
  v8 = a1 + 32;
  v16 = 31;
  v9 = (__int64)"succeedIfCampaignInvoked";
  v11 = a1 + 24;
  v12 = (__int64)"succeedIfSubscribed";
  v14 = a1 + 23;
  v15 = (__int64)"ignoreIfCampaignThresholdNotMet";
  v17 = a1 + 22;
  v18 = (__int64)"ignoreIfMiracastNotAvailable";
  v20 = a1 + 21;
  v21 = (__int64)"failedGetViewCount";
  v23 = a1 + 20;
  v24 = (__int64)"failedGetViews";
  v26 = a1 + 19;
  v27 = "failedToSubscribeApplicationView";
  v29 = a1 + 18;
  v30 = "failedToGetAvailableDeviceInformation";
  v32 = a1 + 17;
  v33 = "failedToInitializeComponent";
  v35 = a1 + 16;
  v19 = 28;
  v22 = 18;
  v25 = 14;
  v28 = 32;
  v31 = 37;
  v34 = 27;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<enum InvokeType &>>(
           a2,
           (__int64)&v33,
           (__int64)&v30,
           (__int64)&v27,
           (__int64)&v24,
           (__int64)&v21,
           (__int64)&v18,
           (__int64)&v15,
           (__int64)&v12,
           (__int64)&v9,
           (__int64)&v6,
           (__int64)&v3);
}
