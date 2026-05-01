/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_InputAppActivationTest@KeyboardHostingTipTests@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1804676C8
 * Callers:
 *     ?serialize@?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180475C60 (-serialize@-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DF130 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x180180E4C (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 */

char __fastcall KeyboardHostingTipTests::_tip_InputAppActivationTest::serialize<tson::output_archive>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  const char *v6; // [rsp+20h] [rbp-E0h] BYREF
  char v7; // [rsp+28h] [rbp-D8h]
  __int64 v8; // [rsp+30h] [rbp-D0h]
  const char *v9; // [rsp+38h] [rbp-C8h] BYREF
  char v10; // [rsp+40h] [rbp-C0h]
  __int64 v11; // [rsp+48h] [rbp-B8h]
  const char *v12; // [rsp+50h] [rbp-B0h] BYREF
  char v13; // [rsp+58h] [rbp-A8h]
  __int64 v14; // [rsp+60h] [rbp-A0h]
  const char *v15; // [rsp+68h] [rbp-98h] BYREF
  char v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  const char *v18; // [rsp+80h] [rbp-80h] BYREF
  char v19; // [rsp+88h] [rbp-78h]
  __int64 v20; // [rsp+90h] [rbp-70h]
  const char *v21; // [rsp+98h] [rbp-68h] BYREF
  char v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  const char *v24; // [rsp+B0h] [rbp-50h] BYREF
  char v25; // [rsp+B8h] [rbp-48h]
  __int64 v26; // [rsp+C0h] [rbp-40h]
  const char *v27; // [rsp+C8h] [rbp-38h] BYREF
  char v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  const char *v30; // [rsp+E0h] [rbp-20h] BYREF
  char v31; // [rsp+E8h] [rbp-18h]
  __int64 v32; // [rsp+F0h] [rbp-10h]
  const char *v33; // [rsp+F8h] [rbp-8h] BYREF
  char v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  const char *v36; // [rsp+110h] [rbp+10h] BYREF
  char v37; // [rsp+118h] [rbp+18h]
  __int64 v38; // [rsp+120h] [rbp+20h]

  v37 = 2;
  v36 = "hr";
  v34 = 18;
  v38 = a1 + 36;
  v31 = 12;
  v33 = "isConnectedStandby";
  v28 = 19;
  v35 = a1 + 32;
  v30 = "dontRelaunch";
  v32 = a1 + 28;
  v27 = "getInputAppIdFailed";
  v29 = a1 + 30;
  v24 = "anotherActivationStarted";
  v26 = a1 + 29;
  v21 = "relaunchAfterFewSeconds";
  v23 = a1 + 27;
  v18 = "relaunchImmediately";
  v20 = a1 + 26;
  v15 = "sessionShuttingDown";
  v17 = a1 + 25;
  v12 = "retryCountMaxReached";
  v14 = a1 + 24;
  v9 = "activated";
  v11 = a1 + 17;
  v6 = "inputAppIdInvalid";
  v8 = a1 + 16;
  v25 = 24;
  v22 = 23;
  v19 = 19;
  v16 = 19;
  v13 = 20;
  v10 = 9;
  v7 = 17;
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v6);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v9);
  *(_BYTE *)(a2 + 8) = 10;
  *(_QWORD *)a2 = "retryCount";
  tson::output_archive::operator()<int &>(a2, (int *)(a1 + 20));
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v12);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v15);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v18);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v21);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v24);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v27);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v30);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v33);
  return tson::output_archive::process<tson::nvp<long &>>(a2, (__int64 *)&v36, v4);
}
