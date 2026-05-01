/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_LockWidgetCanvasDelayedInitializationTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805A4A04
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805B7890 (-deserialize@-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@EE.c)
 * Callees:
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@V01@V01@V01@V01@V01@V01@V01@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@000000000@Z @ 0x180328F88 (--$-RV-$nvp@AEA_N@tson@@V01@V01@V01@V01@V01@V01@V01@V01@V01@@input_archive@tson@@QEAAAEAV01@$$QE.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000000000@Z @ 0x1805A37E4 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@@input_archive@tson@@A.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000000000000@Z @ 0x1805A3AC0 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@@input_archive.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55480066@@@details@wil@@QEAA_NXZ @ 0x1805B720C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55480066@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55707948@@@details@wil@@QEAA_NXZ @ 0x1805B7288 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55707948@@@details@wil@@QEAA_NXZ.c)
 */

char __fastcall _tip_LockWidgetCanvasDelayedInitializationTest::serialize<tson::input_archive>(__int64 a1, __int64 a2)
{
  const char *v5; // [rsp+88h] [rbp-80h] BYREF
  char v6; // [rsp+90h] [rbp-78h]
  __int64 v7; // [rsp+98h] [rbp-70h]
  const char *v8; // [rsp+A0h] [rbp-68h] BYREF
  char v9; // [rsp+A8h] [rbp-60h]
  __int64 v10; // [rsp+B0h] [rbp-58h]
  const char *v11; // [rsp+B8h] [rbp-50h] BYREF
  char v12; // [rsp+C0h] [rbp-48h]
  __int64 v13; // [rsp+C8h] [rbp-40h]
  const char *v14; // [rsp+D0h] [rbp-38h] BYREF
  char v15; // [rsp+D8h] [rbp-30h]
  __int64 v16; // [rsp+E0h] [rbp-28h]
  const char *v17; // [rsp+E8h] [rbp-20h] BYREF
  char v18; // [rsp+F0h] [rbp-18h]
  __int64 v19; // [rsp+F8h] [rbp-10h]
  const char *v20; // [rsp+100h] [rbp-8h] BYREF
  char v21; // [rsp+108h] [rbp+0h]
  __int64 v22; // [rsp+110h] [rbp+8h]
  const char *v23; // [rsp+118h] [rbp+10h] BYREF
  char v24; // [rsp+120h] [rbp+18h]
  __int64 v25; // [rsp+128h] [rbp+20h]
  const char *v26; // [rsp+130h] [rbp+28h] BYREF
  char v27; // [rsp+138h] [rbp+30h]
  __int64 v28; // [rsp+140h] [rbp+38h]
  const char *v29; // [rsp+148h] [rbp+40h] BYREF
  char v30; // [rsp+150h] [rbp+48h]
  __int64 v31; // [rsp+158h] [rbp+50h]
  const char *v32; // [rsp+160h] [rbp+58h] BYREF
  char v33; // [rsp+168h] [rbp+60h]
  __int64 v34; // [rsp+170h] [rbp+68h]
  const char *v35; // [rsp+178h] [rbp+70h] BYREF
  char v36; // [rsp+180h] [rbp+78h]
  __int64 v37; // [rsp+188h] [rbp+80h]
  const char *v38; // [rsp+190h] [rbp+88h] BYREF
  char v39; // [rsp+198h] [rbp+90h]
  __int64 v40; // [rsp+1A0h] [rbp+98h]
  const char *v41; // [rsp+1A8h] [rbp+A0h] BYREF
  char v42; // [rsp+1B0h] [rbp+A8h]
  __int64 v43; // [rsp+1B8h] [rbp+B0h]
  const char *v44; // [rsp+1C0h] [rbp+B8h] BYREF
  char v45; // [rsp+1C8h] [rbp+C0h]
  __int64 v46; // [rsp+1D0h] [rbp+C8h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55707948>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55707948>::GetImpl'::`2'::impl) )
  {
    v42 = 13;
    v41 = "isInDMARegion";
    v43 = a1 + 29;
    v44 = "attemptInstallSEAInbox";
    v46 = a1 + 24;
    v35 = "wasSEAPreviouslyInstalled";
    v37 = a1 + 28;
    v38 = "isSEAInstalled";
    v40 = a1 + 27;
    v5 = "isWPRInstalled";
    v7 = a1 + 26;
    v8 = "isWEPInstalled";
    v10 = a1 + 25;
    v11 = "attemptInstallSEA";
    v13 = a1 + 23;
    v14 = "attemptInstallWPRInbox";
    v16 = a1 + 22;
    v17 = "attemptInstallWPR";
    v19 = a1 + 21;
    v20 = "attemptInstallWEP";
    v22 = a1 + 20;
    v23 = "isLockWidgetCanvasDisabledByUser";
    v25 = a1 + 19;
    v26 = "isLockWidgetCanvasDisabledByPolicy";
    v28 = a1 + 18;
    v29 = "keyCapabilityAdded";
    v31 = a1 + 17;
    v32 = "keyCreated";
    v34 = a1 + 16;
    v45 = 22;
    v36 = 25;
    v39 = 14;
    v6 = 14;
    v9 = 14;
    v12 = 17;
    v15 = 22;
    v18 = 17;
    v21 = 17;
    v24 = 32;
    v27 = 34;
    v30 = 18;
    v33 = 10;
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
             a2,
             (__int64)&v32,
             (__int64)&v29,
             (__int64)&v26,
             (__int64)&v23,
             (__int64)&v20,
             (__int64)&v17,
             (__int64)&v14,
             (__int64)&v11,
             (__int64)&v8,
             (__int64)&v5,
             (__int64)&v38,
             (__int64)&v35,
             (__int64)&v44,
             (__int64 *)&v41);
  }
  else
  {
    v24 = 14;
    v15 = 17;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55480066>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55480066>::GetImpl'::`2'::impl) )
    {
      v33 = 13;
      v32 = "isInDMARegion";
      v30 = 22;
      v34 = a1 + 29;
      v27 = 25;
      v29 = "attemptInstallSEAInbox";
      v28 = a1 + 28;
      v31 = a1 + 24;
      v25 = a1 + 27;
      v26 = "wasSEAPreviouslyInstalled";
      v23 = "isSEAInstalled";
      v20 = "isWPRInstalled";
      v17 = "isWEPInstalled";
      v14 = "attemptInstallSEA";
      v11 = "attemptInstallWPRInbox";
      v13 = a1 + 22;
      v8 = "attemptInstallWPR";
      v10 = a1 + 21;
      v5 = "attemptInstallWEP";
      v7 = a1 + 20;
      v38 = "keyCapabilityAdded";
      v40 = a1 + 17;
      v35 = "keyCreated";
      v37 = a1 + 16;
      v21 = 14;
      v22 = a1 + 26;
      v18 = 14;
      v19 = a1 + 25;
      v16 = a1 + 23;
      v12 = 22;
      v9 = 17;
      v6 = 17;
      v39 = 18;
      v36 = 10;
      return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
               a2,
               (__int64)&v35,
               (__int64)&v38,
               (__int64)&v5,
               (__int64)&v8,
               (__int64)&v11,
               (__int64)&v14,
               (__int64)&v17,
               (__int64)&v20,
               (__int64)&v23,
               (__int64)&v26,
               (__int64)&v29,
               (__int64 *)&v32);
    }
    else
    {
      v33 = 25;
      v32 = "wasSEAPreviouslyInstalled";
      v34 = a1 + 28;
      v29 = "isSEAInstalled";
      v30 = 14;
      v26 = "isWPRInstalled";
      v31 = a1 + 27;
      v23 = "isWEPInstalled";
      v27 = 14;
      v20 = "attemptInstallSEA";
      v17 = "attemptInstallWPRInbox";
      v19 = a1 + 22;
      v14 = "attemptInstallWPR";
      v16 = a1 + 21;
      v11 = "attemptInstallWEP";
      v13 = a1 + 20;
      v8 = "keyCapabilityAdded";
      v10 = a1 + 17;
      v5 = "keyCreated";
      v7 = a1 + 16;
      v28 = a1 + 26;
      v25 = a1 + 25;
      v21 = 17;
      v22 = a1 + 23;
      v18 = 22;
      v12 = 17;
      v9 = 18;
      v6 = 10;
      return tson::input_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
               a2,
               (int)&v5,
               (int)&v8,
               (int)&v11,
               (__int64)&v14,
               (__int64)&v17,
               (__int64)&v20,
               (__int64)&v23,
               (__int64)&v26,
               (__int64)&v29,
               (__int64)&v32);
    }
  }
}
