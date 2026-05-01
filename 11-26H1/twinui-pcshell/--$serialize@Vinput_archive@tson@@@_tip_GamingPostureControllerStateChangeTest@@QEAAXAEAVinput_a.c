/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_GamingPostureControllerStateChangeTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180327CF0
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180330ED0 (-deserialize@-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@EEAAX.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000000000$$QEAV?$nvp@AEAJ@1@0@Z @ 0x180326F0C (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@V-$nvp@AEAJ@2@V12@@inp.c)
 */

__int64 __fastcall _tip_GamingPostureControllerStateChangeTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  __int64 v3; // [rsp+80h] [rbp-80h] BYREF
  char v4; // [rsp+88h] [rbp-78h]
  __int64 v5; // [rsp+90h] [rbp-70h]
  __int64 v6; // [rsp+98h] [rbp-68h] BYREF
  char v7; // [rsp+A0h] [rbp-60h]
  __int64 v8; // [rsp+A8h] [rbp-58h]
  __int64 v9; // [rsp+B0h] [rbp-50h] BYREF
  char v10; // [rsp+B8h] [rbp-48h]
  __int64 v11; // [rsp+C0h] [rbp-40h]
  __int64 v12; // [rsp+C8h] [rbp-38h] BYREF
  char v13; // [rsp+D0h] [rbp-30h]
  __int64 v14; // [rsp+D8h] [rbp-28h]
  __int64 v15; // [rsp+E0h] [rbp-20h] BYREF
  char v16; // [rsp+E8h] [rbp-18h]
  __int64 v17; // [rsp+F0h] [rbp-10h]
  __int64 v18; // [rsp+F8h] [rbp-8h] BYREF
  char v19; // [rsp+100h] [rbp+0h]
  __int64 v20; // [rsp+108h] [rbp+8h]
  __int64 v21; // [rsp+110h] [rbp+10h] BYREF
  char v22; // [rsp+118h] [rbp+18h]
  __int64 v23; // [rsp+120h] [rbp+20h]
  __int64 v24; // [rsp+128h] [rbp+28h] BYREF
  char v25; // [rsp+130h] [rbp+30h]
  __int64 v26; // [rsp+138h] [rbp+38h]
  __int64 v27; // [rsp+140h] [rbp+40h] BYREF
  char v28; // [rsp+148h] [rbp+48h]
  __int64 v29; // [rsp+150h] [rbp+50h]
  __int64 v30; // [rsp+158h] [rbp+58h] BYREF
  char v31; // [rsp+160h] [rbp+60h]
  __int64 v32; // [rsp+168h] [rbp+68h]
  __int64 v33; // [rsp+170h] [rbp+70h] BYREF
  char v34; // [rsp+178h] [rbp+78h]
  __int64 v35; // [rsp+180h] [rbp+80h]
  const char *v36; // [rsp+188h] [rbp+88h] BYREF
  char v37; // [rsp+190h] [rbp+90h]
  __int64 v38; // [rsp+198h] [rbp+98h]
  const char *v39; // [rsp+1A0h] [rbp+A0h] BYREF
  char v40; // [rsp+1A8h] [rbp+A8h]
  __int64 v41; // [rsp+1B0h] [rbp+B0h]
  const char *v42; // [rsp+1B8h] [rbp+B8h] BYREF
  char v43; // [rsp+1C0h] [rbp+C0h]
  __int64 v44; // [rsp+1C8h] [rbp+C8h]

  v4 = 14;
  v3 = (__int64)"isInitializing";
  v7 = 8;
  v5 = a1 + 32;
  v6 = (__int64)"resultHr";
  v8 = a1 + 28;
  v9 = (__int64)"raisedDesktop";
  v11 = a1 + 27;
  v12 = (__int64)"showDialogSucceeded";
  v14 = a1 + 26;
  v15 = (__int64)"arePrerequisitesMet";
  v17 = a1 + 17;
  v18 = (__int64)"signaledInProgressStateChangeEvent";
  v20 = a1 + 25;
  v21 = (__int64)"launchedGamingApp";
  v23 = a1 + 24;
  v24 = (__int64)"publishedWnf";
  v26 = a1 + 23;
  v27 = (__int64)"beginStateChange";
  v29 = a1 + 22;
  v30 = (__int64)"waitedOnInProgressChange";
  v32 = a1 + 21;
  v33 = (__int64)"isCurrentStateTheSameAsRequested";
  v35 = a1 + 20;
  v36 = "isInProgressStateChangeTheSameAsRequested";
  v38 = a1 + 19;
  v39 = "isAnotherStateChangeInProgress";
  v41 = a1 + 18;
  v42 = "requestToEnterGamingPosture";
  v44 = a1 + 16;
  v10 = 13;
  v13 = 19;
  v16 = 19;
  v19 = 34;
  v22 = 17;
  v25 = 12;
  v28 = 16;
  v31 = 24;
  v34 = 32;
  v37 = 41;
  v40 = 30;
  v43 = 27;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
           a2,
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
