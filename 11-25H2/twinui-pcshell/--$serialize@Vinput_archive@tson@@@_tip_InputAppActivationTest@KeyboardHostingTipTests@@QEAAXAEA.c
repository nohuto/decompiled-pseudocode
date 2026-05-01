/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_InputAppActivationTest@KeyboardHostingTipTests@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18045AE28
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180468D50 (-deserialize@-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@ti.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAH@2@V12@V12@V12@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAH@1@00000000$$QEAV?$nvp@AEAJ@1@@Z @ 0x18045A9A4 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAH@2@V12@V12@V12@V12@V12@V12@V12@V12@V-$nvp@AEAJ@2@@i.c)
 */

__int64 __fastcall KeyboardHostingTipTests::_tip_InputAppActivationTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  __int64 v3; // [rsp+70h] [rbp-90h] BYREF
  char v4; // [rsp+78h] [rbp-88h]
  __int64 v5; // [rsp+80h] [rbp-80h]
  __int64 v6; // [rsp+88h] [rbp-78h] BYREF
  char v7; // [rsp+90h] [rbp-70h]
  __int64 v8; // [rsp+98h] [rbp-68h]
  __int64 v9; // [rsp+A0h] [rbp-60h] BYREF
  char v10; // [rsp+A8h] [rbp-58h]
  __int64 v11; // [rsp+B0h] [rbp-50h]
  __int64 v12; // [rsp+B8h] [rbp-48h] BYREF
  char v13; // [rsp+C0h] [rbp-40h]
  __int64 v14; // [rsp+C8h] [rbp-38h]
  __int64 v15; // [rsp+D0h] [rbp-30h] BYREF
  char v16; // [rsp+D8h] [rbp-28h]
  __int64 v17; // [rsp+E0h] [rbp-20h]
  __int64 v18; // [rsp+E8h] [rbp-18h] BYREF
  char v19; // [rsp+F0h] [rbp-10h]
  __int64 v20; // [rsp+F8h] [rbp-8h]
  __int64 v21; // [rsp+100h] [rbp+0h] BYREF
  char v22; // [rsp+108h] [rbp+8h]
  __int64 v23; // [rsp+110h] [rbp+10h]
  __int64 v24; // [rsp+118h] [rbp+18h] BYREF
  char v25; // [rsp+120h] [rbp+20h]
  __int64 v26; // [rsp+128h] [rbp+28h]
  __int64 v27; // [rsp+130h] [rbp+30h] BYREF
  char v28; // [rsp+138h] [rbp+38h]
  __int64 v29; // [rsp+140h] [rbp+40h]
  const char *v30; // [rsp+148h] [rbp+48h] BYREF
  char v31; // [rsp+150h] [rbp+50h]
  __int64 v32; // [rsp+158h] [rbp+58h]
  const char *v33; // [rsp+160h] [rbp+60h] BYREF
  char v34; // [rsp+168h] [rbp+68h]
  __int64 v35; // [rsp+170h] [rbp+70h]
  const char *v36; // [rsp+178h] [rbp+78h] BYREF
  char v37; // [rsp+180h] [rbp+80h]
  __int64 v38; // [rsp+188h] [rbp+88h]

  v4 = 2;
  v3 = (__int64)"hr";
  v7 = 18;
  v5 = a1 + 36;
  v10 = 12;
  v6 = (__int64)"isConnectedStandby";
  v13 = 19;
  v8 = a1 + 32;
  v9 = (__int64)"dontRelaunch";
  v11 = a1 + 28;
  v12 = (__int64)"getInputAppIdFailed";
  v14 = a1 + 30;
  v15 = (__int64)"anotherActivationStarted";
  v17 = a1 + 29;
  v18 = (__int64)"relaunchAfterFewSeconds";
  v20 = a1 + 27;
  v21 = (__int64)"relaunchImmediately";
  v23 = a1 + 26;
  v24 = (__int64)"sessionShuttingDown";
  v26 = a1 + 25;
  v27 = (__int64)"retryCountMaxReached";
  v29 = a1 + 24;
  v30 = "retryCount";
  v32 = a1 + 20;
  v33 = "activated";
  v35 = a1 + 17;
  v36 = "inputAppIdInvalid";
  v38 = a1 + 16;
  v16 = 24;
  v19 = 23;
  v22 = 19;
  v25 = 19;
  v28 = 20;
  v31 = 10;
  v34 = 9;
  v37 = 17;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>>(
           a2,
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
