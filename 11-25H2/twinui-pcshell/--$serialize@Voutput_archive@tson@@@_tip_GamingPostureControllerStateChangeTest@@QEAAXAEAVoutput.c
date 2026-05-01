/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_GamingPostureControllerStateChangeTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18032AE40
 * Callers:
 *     ?serialize@?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180333C40 (-serialize@-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@EEAAXAE.c)
 * Callees:
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@V01@V01@V01@V01@V01@V01@V01@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@000000000@Z @ 0x180328FFC (--$-RV-$nvp@AEA_N@tson@@V01@V01@V01@V01@V01@V01@V01@V01@V01@@output_archive@tson@@QEAAAEAV01@$$Q.c)
 */

__int64 __fastcall _tip_GamingPostureControllerStateChangeTest::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  const char *v3; // [rsp+60h] [rbp-A0h] BYREF
  char v4; // [rsp+68h] [rbp-98h]
  __int64 v5; // [rsp+70h] [rbp-90h]
  const char *v6; // [rsp+78h] [rbp-88h] BYREF
  char v7; // [rsp+80h] [rbp-80h]
  __int64 v8; // [rsp+88h] [rbp-78h]
  const char *v9; // [rsp+90h] [rbp-70h] BYREF
  char v10; // [rsp+98h] [rbp-68h]
  __int64 v11; // [rsp+A0h] [rbp-60h]
  const char *v12; // [rsp+A8h] [rbp-58h] BYREF
  char v13; // [rsp+B0h] [rbp-50h]
  __int64 v14; // [rsp+B8h] [rbp-48h]
  const char *v15; // [rsp+C0h] [rbp-40h] BYREF
  char v16; // [rsp+C8h] [rbp-38h]
  __int64 v17; // [rsp+D0h] [rbp-30h]
  const char *v18; // [rsp+D8h] [rbp-28h] BYREF
  char v19; // [rsp+E0h] [rbp-20h]
  __int64 v20; // [rsp+E8h] [rbp-18h]
  const char *v21; // [rsp+F0h] [rbp-10h] BYREF
  char v22; // [rsp+F8h] [rbp-8h]
  __int64 v23; // [rsp+100h] [rbp+0h]
  const char *v24; // [rsp+108h] [rbp+8h] BYREF
  char v25; // [rsp+110h] [rbp+10h]
  __int64 v26; // [rsp+118h] [rbp+18h]
  const char *v27; // [rsp+120h] [rbp+20h] BYREF
  char v28; // [rsp+128h] [rbp+28h]
  __int64 v29; // [rsp+130h] [rbp+30h]
  const char *v30; // [rsp+138h] [rbp+38h] BYREF
  char v31; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+148h] [rbp+48h]

  v4 = 19;
  v3 = "arePrerequisitesMet";
  v7 = 34;
  v5 = a1 + 17;
  v10 = 17;
  v6 = "signaledInProgressStateChangeEvent";
  v13 = 12;
  v8 = a1 + 25;
  v16 = 16;
  v9 = "launchedGamingApp";
  v11 = a1 + 24;
  v12 = "publishedWnf";
  v14 = a1 + 23;
  v15 = "beginStateChange";
  v17 = a1 + 22;
  v18 = "waitedOnInProgressChange";
  v20 = a1 + 21;
  v21 = "isCurrentStateTheSameAsRequested";
  v23 = a1 + 20;
  v24 = "isInProgressStateChangeTheSameAsRequested";
  v26 = a1 + 19;
  v27 = "isAnotherStateChangeInProgress";
  v29 = a1 + 18;
  v30 = "requestToEnterGamingPosture";
  v32 = a1 + 16;
  v19 = 24;
  v22 = 32;
  v25 = 41;
  v28 = 30;
  v31 = 27;
  return tson::output_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (int)&v30,
           (int)&v27,
           (int)&v24,
           (__int64)&v21,
           (__int64)&v18,
           (__int64)&v15,
           (__int64)&v12,
           (__int64)&v9,
           (__int64)&v6,
           (__int64)&v3);
}
