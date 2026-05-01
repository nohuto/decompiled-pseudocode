/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_InputAppActivationTest@KeyboardHostingTipTests@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18045B1D0
 * Callers:
 *     ?serialize@?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180469E80 (-serialize@-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DE8C8 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1800DFF74 (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 */

char __fastcall KeyboardHostingTipTests::_tip_InputAppActivationTest::serialize<tson::output_archive>(
        __int64 a1,
        __int64 a2)
{
  const char *v5; // [rsp+20h] [rbp-E0h] BYREF
  char v6; // [rsp+28h] [rbp-D8h]
  __int64 v7; // [rsp+30h] [rbp-D0h]
  const char *v8; // [rsp+38h] [rbp-C8h] BYREF
  char v9; // [rsp+40h] [rbp-C0h]
  __int64 v10; // [rsp+48h] [rbp-B8h]
  const char *v11; // [rsp+50h] [rbp-B0h] BYREF
  char v12; // [rsp+58h] [rbp-A8h]
  __int64 v13; // [rsp+60h] [rbp-A0h]
  const char *v14; // [rsp+68h] [rbp-98h] BYREF
  char v15; // [rsp+70h] [rbp-90h]
  __int64 v16; // [rsp+78h] [rbp-88h]
  const char *v17; // [rsp+80h] [rbp-80h] BYREF
  char v18; // [rsp+88h] [rbp-78h]
  __int64 v19; // [rsp+90h] [rbp-70h]
  const char *v20; // [rsp+98h] [rbp-68h] BYREF
  char v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  const char *v23; // [rsp+B0h] [rbp-50h] BYREF
  char v24; // [rsp+B8h] [rbp-48h]
  __int64 v25; // [rsp+C0h] [rbp-40h]
  const char *v26; // [rsp+C8h] [rbp-38h] BYREF
  char v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  const char *v29; // [rsp+E0h] [rbp-20h] BYREF
  char v30; // [rsp+E8h] [rbp-18h]
  __int64 v31; // [rsp+F0h] [rbp-10h]
  const char *v32; // [rsp+F8h] [rbp-8h] BYREF
  char v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  const char *v35; // [rsp+110h] [rbp+10h] BYREF
  char v36; // [rsp+118h] [rbp+18h]
  __int64 v37; // [rsp+120h] [rbp+20h]

  v36 = 2;
  v35 = "hr";
  v33 = 18;
  v37 = a1 + 36;
  v30 = 12;
  v32 = "isConnectedStandby";
  v27 = 19;
  v34 = a1 + 32;
  v29 = "dontRelaunch";
  v31 = a1 + 28;
  v26 = "getInputAppIdFailed";
  v28 = a1 + 30;
  v23 = "anotherActivationStarted";
  v25 = a1 + 29;
  v20 = "relaunchAfterFewSeconds";
  v22 = a1 + 27;
  v17 = "relaunchImmediately";
  v19 = a1 + 26;
  v14 = "sessionShuttingDown";
  v16 = a1 + 25;
  v11 = "retryCountMaxReached";
  v13 = a1 + 24;
  v8 = "activated";
  v10 = a1 + 17;
  v5 = "inputAppIdInvalid";
  v7 = a1 + 16;
  v24 = 24;
  v21 = 23;
  v18 = 19;
  v15 = 19;
  v12 = 20;
  v9 = 9;
  v6 = 17;
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v5);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v8);
  *(_BYTE *)(a2 + 8) = 10;
  *(_QWORD *)a2 = "retryCount";
  tson::output_archive::operator()<int &>(a2, (int *)(a1 + 20));
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v11);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v14);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v17);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v20);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v23);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v26);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v29);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v32);
  return tson::output_archive::process<tson::nvp<long &>>(a2, (__int64 *)&v35);
}
