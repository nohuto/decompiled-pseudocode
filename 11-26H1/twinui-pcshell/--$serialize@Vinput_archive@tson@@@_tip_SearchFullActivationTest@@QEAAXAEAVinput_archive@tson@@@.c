/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_SearchFullActivationTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1803AC258
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1803BB7D0 (-deserialize@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXAEAVinput_arch.c)
 * Callees:
 *     ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@V12@V?$nvp@AEA_N@2@V32@V32@V32@V32@V32@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V32@V32@V32@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@0$$QEAV?$nvp@AEA_N@1@1111111111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@11111@Z @ 0x1803A93C8 (--$process@V-$nvp@AEAW4FullActivationTestSource@@@tson@@V12@V-$nvp@AEA_N@2@V32@V32@V32@V32@V32@V.c)
 */

__int64 __fastcall _tip_SearchFullActivationTest::serialize<tson::input_archive>(__int64 a1, tson::input_archive *a2)
{
  const char *v3; // [rsp+C8h] [rbp-80h] BYREF
  char v4; // [rsp+D0h] [rbp-78h]
  __int64 v5; // [rsp+D8h] [rbp-70h]
  const char *v6; // [rsp+E0h] [rbp-68h] BYREF
  char v7; // [rsp+E8h] [rbp-60h]
  __int64 v8; // [rsp+F0h] [rbp-58h]
  const char *v9; // [rsp+F8h] [rbp-50h] BYREF
  char v10; // [rsp+100h] [rbp-48h]
  __int64 v11; // [rsp+108h] [rbp-40h]
  const char *v12; // [rsp+110h] [rbp-38h] BYREF
  char v13; // [rsp+118h] [rbp-30h]
  __int64 v14; // [rsp+120h] [rbp-28h]
  const char *v15; // [rsp+128h] [rbp-20h] BYREF
  char v16; // [rsp+130h] [rbp-18h]
  __int64 v17; // [rsp+138h] [rbp-10h]
  const char *v18; // [rsp+140h] [rbp-8h] BYREF
  char v19; // [rsp+148h] [rbp+0h]
  __int64 v20; // [rsp+150h] [rbp+8h]
  const char *v21; // [rsp+158h] [rbp+10h] BYREF
  char v22; // [rsp+160h] [rbp+18h]
  __int64 v23; // [rsp+168h] [rbp+20h]
  const char *v24; // [rsp+170h] [rbp+28h] BYREF
  char v25; // [rsp+178h] [rbp+30h]
  __int64 v26; // [rsp+180h] [rbp+38h]
  __int64 v27; // [rsp+188h] [rbp+40h] BYREF
  char v28; // [rsp+190h] [rbp+48h]
  __int64 v29; // [rsp+198h] [rbp+50h]
  __int64 v30; // [rsp+1A0h] [rbp+58h] BYREF
  char v31; // [rsp+1A8h] [rbp+60h]
  __int64 v32; // [rsp+1B0h] [rbp+68h]
  __int64 v33; // [rsp+1B8h] [rbp+70h] BYREF
  char v34; // [rsp+1C0h] [rbp+78h]
  __int64 v35; // [rsp+1C8h] [rbp+80h]
  __int64 v36; // [rsp+1D0h] [rbp+88h] BYREF
  char v37; // [rsp+1D8h] [rbp+90h]
  __int64 v38; // [rsp+1E0h] [rbp+98h]
  __int64 v39; // [rsp+1E8h] [rbp+A0h] BYREF
  char v40; // [rsp+1F0h] [rbp+A8h]
  __int64 v41; // [rsp+1F8h] [rbp+B0h]
  __int64 v42; // [rsp+200h] [rbp+B8h] BYREF
  char v43; // [rsp+208h] [rbp+C0h]
  __int64 v44; // [rsp+210h] [rbp+C8h]
  __int64 v45; // [rsp+218h] [rbp+D0h] BYREF
  char v46; // [rsp+220h] [rbp+D8h]
  __int64 v47; // [rsp+228h] [rbp+E0h]
  __int64 v48; // [rsp+230h] [rbp+E8h] BYREF
  char v49; // [rsp+238h] [rbp+F0h]
  __int64 v50; // [rsp+240h] [rbp+F8h]
  __int64 v51; // [rsp+248h] [rbp+100h] BYREF
  char v52; // [rsp+250h] [rbp+108h]
  __int64 v53; // [rsp+258h] [rbp+110h]
  __int64 v54; // [rsp+260h] [rbp+118h] BYREF
  char v55; // [rsp+268h] [rbp+120h]
  __int64 v56; // [rsp+270h] [rbp+128h]
  __int64 v57; // [rsp+278h] [rbp+130h] BYREF
  char v58; // [rsp+280h] [rbp+138h]
  __int64 v59; // [rsp+288h] [rbp+140h]
  __int64 v60; // [rsp+290h] [rbp+148h] BYREF
  char v61; // [rsp+298h] [rbp+150h]
  __int64 v62; // [rsp+2A0h] [rbp+158h]
  const char *v63; // [rsp+2A8h] [rbp+160h] BYREF
  char v64; // [rsp+2B0h] [rbp+168h]
  __int64 v65; // [rsp+2B8h] [rbp+170h]
  const char *v66; // [rsp+2C0h] [rbp+178h] BYREF
  char v67; // [rsp+2C8h] [rbp+180h]
  __int64 v68; // [rsp+2D0h] [rbp+188h]
  const char *v69; // [rsp+2D8h] [rbp+190h] BYREF
  char v70; // [rsp+2E0h] [rbp+198h]
  __int64 v71; // [rsp+2E8h] [rbp+1A0h]

  v4 = 17;
  v3 = "is_full_trust_app";
  v7 = 36;
  v5 = a1 + 84;
  v6 = "view_destroyed_when_search_activates";
  v8 = a1 + 83;
  v9 = "prelaunch_deferral_timed_out";
  v11 = a1 + 82;
  v12 = "view_navigated_to_obscured";
  v14 = a1 + 81;
  v15 = "uncloaked";
  v17 = a1 + 80;
  v18 = "searchActivationResult";
  v20 = a1 + 76;
  v21 = "transition_type";
  v23 = a1 + 72;
  v24 = "using_reactivation_udk";
  v26 = a1 + 36;
  v27 = (__int64)"invalid_hwnd";
  v29 = a1 + 35;
  v30 = (__int64)"launch_source";
  v32 = a1 + 40;
  v33 = (__int64)"view_already_navigated_to_visible";
  v35 = a1 + 34;
  v36 = (__int64)"view_already_visible";
  v38 = a1 + 33;
  v39 = (__int64)"view_already_created";
  v41 = a1 + 32;
  v42 = (__int64)"view_destroyed";
  v44 = a1 + 31;
  v45 = (__int64)"positioned";
  v47 = a1 + 30;
  v48 = (__int64)"view_navigated_to_visible";
  v50 = a1 + 29;
  v10 = 28;
  v13 = 26;
  v16 = 9;
  v19 = 22;
  v22 = 15;
  v25 = 22;
  v28 = 12;
  v31 = 13;
  v34 = 33;
  v37 = 20;
  v40 = 20;
  v43 = 14;
  v46 = 10;
  v49 = 25;
  v52 = 14;
  v51 = (__int64)"view_dismissed";
  v55 = 17;
  v53 = a1 + 28;
  v58 = 6;
  v54 = (__int64)"view_consolidated";
  v61 = 12;
  v56 = a1 + 27;
  v57 = (__int64)"hidden";
  v59 = a1 + 26;
  v60 = (__int64)"view_created";
  v62 = a1 + 25;
  v63 = "timed_out";
  v65 = a1 + 24;
  v66 = "new_source";
  v68 = a1 + 20;
  v69 = "source";
  v71 = a1 + 16;
  v64 = 9;
  v67 = 10;
  v70 = 6;
  return tson::input_archive::process<tson::nvp<enum FullActivationTestSource &>,tson::nvp<enum FullActivationTestSource &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v69,
           (__int64)&v66,
           (__int64)&v63,
           (__int64)&v60,
           (__int64)&v57,
           (__int64)&v54,
           (__int64)&v51,
           (__int64)&v48,
           (__int64)&v45,
           (__int64)&v42,
           (__int64)&v39,
           (__int64)&v36,
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
