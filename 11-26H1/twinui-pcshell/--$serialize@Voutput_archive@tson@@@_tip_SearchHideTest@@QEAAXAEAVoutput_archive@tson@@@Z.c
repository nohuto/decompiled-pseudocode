/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_SearchHideTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800E1370
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1803BD870 (-serialize@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V?$nvp@AEAW4SearchAppState@@@2@V32@V32@V32@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000000$$QEAV?$nvp@AEAW4SearchAppState@@@1@111000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1800E0CCC (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V-$nvp@AEAW4SearchAppState@@@2@V32@V32.c)
 */

__int64 __fastcall _tip_SearchHideTest::serialize<tson::output_archive>(__int64 a1, tson::output_archive *a2)
{
  const char *v4; // [rsp+90h] [rbp-80h] BYREF
  char v5; // [rsp+98h] [rbp-78h]
  __int64 v6; // [rsp+A0h] [rbp-70h]
  const char *v7; // [rsp+A8h] [rbp-68h] BYREF
  char v8; // [rsp+B0h] [rbp-60h]
  __int64 v9; // [rsp+B8h] [rbp-58h]
  const char *v10; // [rsp+C0h] [rbp-50h] BYREF
  char v11; // [rsp+C8h] [rbp-48h]
  __int64 v12; // [rsp+D0h] [rbp-40h]
  const char *v13; // [rsp+D8h] [rbp-38h] BYREF
  char v14; // [rsp+E0h] [rbp-30h]
  __int64 v15; // [rsp+E8h] [rbp-28h]
  __int64 v16; // [rsp+F0h] [rbp-20h] BYREF
  char v17; // [rsp+F8h] [rbp-18h]
  __int64 v18; // [rsp+100h] [rbp-10h]
  __int64 v19; // [rsp+108h] [rbp-8h] BYREF
  char v20; // [rsp+110h] [rbp+0h]
  __int64 v21; // [rsp+118h] [rbp+8h]
  __int64 v22; // [rsp+120h] [rbp+10h] BYREF
  char v23; // [rsp+128h] [rbp+18h]
  __int64 v24; // [rsp+130h] [rbp+20h]
  __int64 v25; // [rsp+138h] [rbp+28h] BYREF
  char v26; // [rsp+140h] [rbp+30h]
  __int64 v27; // [rsp+148h] [rbp+38h]
  __int64 v28; // [rsp+150h] [rbp+40h] BYREF
  char v29; // [rsp+158h] [rbp+48h]
  __int64 v30; // [rsp+160h] [rbp+50h]
  __int64 v31; // [rsp+168h] [rbp+58h] BYREF
  char v32; // [rsp+170h] [rbp+60h]
  __int64 v33; // [rsp+178h] [rbp+68h]
  __int64 v34; // [rsp+180h] [rbp+70h] BYREF
  char v35; // [rsp+188h] [rbp+78h]
  __int64 v36; // [rsp+190h] [rbp+80h]
  __int64 v37; // [rsp+198h] [rbp+88h] BYREF
  char v38; // [rsp+1A0h] [rbp+90h]
  __int64 v39; // [rsp+1A8h] [rbp+98h]
  __int64 v40; // [rsp+1B0h] [rbp+A0h] BYREF
  char v41; // [rsp+1B8h] [rbp+A8h]
  __int64 v42; // [rsp+1C0h] [rbp+B0h]
  __int64 v43; // [rsp+1C8h] [rbp+B8h] BYREF
  char v44; // [rsp+1D0h] [rbp+C0h]
  __int64 v45; // [rsp+1D8h] [rbp+C8h]
  __int64 v46; // [rsp+1E0h] [rbp+D0h] BYREF
  char v47; // [rsp+1E8h] [rbp+D8h]
  __int64 v48; // [rsp+1F0h] [rbp+E0h]
  __int64 v49; // [rsp+1F8h] [rbp+E8h] BYREF
  char v50; // [rsp+200h] [rbp+F0h]
  __int64 v51; // [rsp+208h] [rbp+F8h]
  __int64 v52; // [rsp+210h] [rbp+100h] BYREF
  char v53; // [rsp+218h] [rbp+108h]
  __int64 v54; // [rsp+220h] [rbp+110h]

  v8 = 9;
  v7 = "sessionId";
  v11 = 43;
  v9 = a1 + 48;
  v10 = "navigation_level_inactive_during_suspension";
  v12 = a1 + 46;
  v13 = "navigation_level_active_during_suspension";
  v15 = a1 + 45;
  v16 = (__int64)"view_visible_during_suspension";
  v18 = a1 + 44;
  v19 = (__int64)"state_during_last_resort_suspension_timer";
  v21 = a1 + 40;
  v22 = (__int64)"state_during_view_consolidation";
  v24 = a1 + 36;
  v25 = (__int64)"state_during_hide_request_timer";
  v27 = a1 + 32;
  v28 = (__int64)"initial_state";
  v30 = a1 + 28;
  v31 = (__int64)"already_hidden";
  v33 = a1 + 24;
  v34 = (__int64)"view_visibility_revoked";
  v36 = a1 + 23;
  v37 = (__int64)"view_destroyed";
  v39 = a1 + 22;
  v40 = (__int64)"activated_while_hiding";
  v42 = a1 + 21;
  v43 = (__int64)"suspend_timer_expired";
  v45 = a1 + 20;
  v46 = (__int64)"hide_view_timer_expired";
  v48 = a1 + 19;
  v49 = (__int64)"suspended";
  v51 = a1 + 18;
  v52 = (__int64)"view_cloaked";
  v54 = a1 + 17;
  v14 = 41;
  v17 = 30;
  v20 = 41;
  v23 = 31;
  v26 = 31;
  v29 = 13;
  v32 = 14;
  v35 = 23;
  v38 = 14;
  v41 = 22;
  v44 = 21;
  v47 = 23;
  v50 = 9;
  v53 = 12;
  v5 = 15;
  v4 = "shell_initiated";
  v6 = a1 + 16;
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v4);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<enum SearchAppState &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v52,
           (__int64)&v49,
           (__int64)&v46,
           (__int64)&v43,
           (__int64)&v40,
           (__int64)&v37,
           (__int64)&v34,
           (__int64)&v31,
           &v28,
           &v25,
           (__int64)&v22,
           (__int64)&v19,
           (__int64)&v16,
           (__int64)&v13,
           (__int64)&v10,
           (__int64 *)&v7);
}
