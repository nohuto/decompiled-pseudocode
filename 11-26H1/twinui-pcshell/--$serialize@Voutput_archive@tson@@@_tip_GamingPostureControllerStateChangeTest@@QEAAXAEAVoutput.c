/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_GamingPostureControllerStateChangeTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180327EF4
 * Callers:
 *     ?serialize@?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180333380 (-serialize@-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@EEAAXAE.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000$$QEAV?$nvp@AEAJ@1@0@Z @ 0x1803275FC (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V-$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$.c)
 */

char __fastcall _tip_GamingPostureControllerStateChangeTest::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  const char *v4; // [rsp+50h] [rbp-B0h] BYREF
  char v5; // [rsp+58h] [rbp-A8h]
  __int64 v6; // [rsp+60h] [rbp-A0h]
  const char *v7; // [rsp+68h] [rbp-98h] BYREF
  char v8; // [rsp+70h] [rbp-90h]
  __int64 v9; // [rsp+78h] [rbp-88h]
  const char *v10; // [rsp+80h] [rbp-80h] BYREF
  char v11; // [rsp+88h] [rbp-78h]
  __int64 v12; // [rsp+90h] [rbp-70h]
  const char *v13; // [rsp+98h] [rbp-68h] BYREF
  char v14; // [rsp+A0h] [rbp-60h]
  __int64 v15; // [rsp+A8h] [rbp-58h]
  const char *v16; // [rsp+B0h] [rbp-50h] BYREF
  char v17; // [rsp+B8h] [rbp-48h]
  __int64 v18; // [rsp+C0h] [rbp-40h]
  const char *v19; // [rsp+C8h] [rbp-38h] BYREF
  char v20; // [rsp+D0h] [rbp-30h]
  __int64 v21; // [rsp+D8h] [rbp-28h]
  const char *v22; // [rsp+E0h] [rbp-20h] BYREF
  char v23; // [rsp+E8h] [rbp-18h]
  __int64 v24; // [rsp+F0h] [rbp-10h]
  const char *v25; // [rsp+F8h] [rbp-8h] BYREF
  char v26; // [rsp+100h] [rbp+0h]
  __int64 v27; // [rsp+108h] [rbp+8h]
  const char *v28; // [rsp+110h] [rbp+10h] BYREF
  char v29; // [rsp+118h] [rbp+18h]
  __int64 v30; // [rsp+120h] [rbp+20h]
  const char *v31; // [rsp+128h] [rbp+28h] BYREF
  char v32; // [rsp+130h] [rbp+30h]
  __int64 v33; // [rsp+138h] [rbp+38h]
  const char *v34; // [rsp+140h] [rbp+40h] BYREF
  char v35; // [rsp+148h] [rbp+48h]
  __int64 v36; // [rsp+150h] [rbp+50h]
  const char *v37; // [rsp+158h] [rbp+58h] BYREF
  char v38; // [rsp+160h] [rbp+60h]
  __int64 v39; // [rsp+168h] [rbp+68h]
  const char *v40; // [rsp+170h] [rbp+70h] BYREF
  char v41; // [rsp+178h] [rbp+78h]
  __int64 v42; // [rsp+180h] [rbp+80h]
  const char *v43; // [rsp+188h] [rbp+88h] BYREF
  char v44; // [rsp+190h] [rbp+90h]
  __int64 v45; // [rsp+198h] [rbp+98h]

  v23 = 14;
  v22 = "isInitializing";
  v26 = 8;
  v24 = a1 + 32;
  v29 = 13;
  v25 = "resultHr";
  v27 = a1 + 28;
  v28 = "raisedDesktop";
  v30 = a1 + 27;
  v31 = "showDialogSucceeded";
  v33 = a1 + 26;
  v34 = "arePrerequisitesMet";
  v36 = a1 + 17;
  v37 = "signaledInProgressStateChangeEvent";
  v39 = a1 + 25;
  v40 = "launchedGamingApp";
  v42 = a1 + 24;
  v43 = "publishedWnf";
  v45 = a1 + 23;
  v19 = "beginStateChange";
  v21 = a1 + 22;
  v16 = "waitedOnInProgressChange";
  v18 = a1 + 21;
  v13 = "isCurrentStateTheSameAsRequested";
  v15 = a1 + 20;
  v10 = "isInProgressStateChangeTheSameAsRequested";
  v12 = a1 + 19;
  v7 = "isAnotherStateChangeInProgress";
  v9 = a1 + 18;
  v4 = "requestToEnterGamingPosture";
  v6 = a1 + 16;
  v32 = 19;
  v35 = 19;
  v38 = 34;
  v41 = 17;
  v44 = 12;
  v20 = 16;
  v17 = 24;
  v14 = 32;
  v11 = 41;
  v8 = 30;
  v5 = 27;
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v4);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v7);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v10);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v13);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v16);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v19);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v43,
           (__int64)&v40,
           (__int64)&v37,
           (__int64)&v34,
           (__int64)&v31,
           (__int64)&v28,
           (__int64 *)&v25,
           (__int64)&v22);
}
