/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18044C924
 * Callers:
 *     ?serialize@?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180451340 (-serialize@-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@EEAAXA.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_J@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_J@1@@Z @ 0x18032A270 (--$process@V-$nvp@AEA_J@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_J@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEA_N@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x180449D40 (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEA_N@2@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@$$QEAV.c)
 */

char __fastcall _tip_StartMenuAutomaticInvokeDuringLogonTest::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  const char *v4; // [rsp+20h] [rbp-E0h] BYREF
  char v5; // [rsp+28h] [rbp-D8h]
  __int64 v6; // [rsp+30h] [rbp-D0h]
  const char *v7; // [rsp+38h] [rbp-C8h] BYREF
  char v8; // [rsp+40h] [rbp-C0h]
  __int64 v9; // [rsp+48h] [rbp-B8h]
  const char *v10; // [rsp+50h] [rbp-B0h] BYREF
  char v11; // [rsp+58h] [rbp-A8h]
  __int64 v12; // [rsp+60h] [rbp-A0h]
  const char *v13; // [rsp+68h] [rbp-98h] BYREF
  char v14; // [rsp+70h] [rbp-90h]
  __int64 v15; // [rsp+78h] [rbp-88h]
  const char *v16; // [rsp+80h] [rbp-80h] BYREF
  char v17; // [rsp+88h] [rbp-78h]
  __int64 v18; // [rsp+90h] [rbp-70h]
  const char *v19; // [rsp+98h] [rbp-68h] BYREF
  char v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  const char *v22; // [rsp+B0h] [rbp-50h] BYREF
  char v23; // [rsp+B8h] [rbp-48h]
  __int64 v24; // [rsp+C0h] [rbp-40h]
  const char *v25; // [rsp+C8h] [rbp-38h] BYREF
  char v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  const char *v28; // [rsp+E0h] [rbp-20h] BYREF
  char v29; // [rsp+E8h] [rbp-18h]
  __int64 v30; // [rsp+F0h] [rbp-10h]
  const char *v31; // [rsp+F8h] [rbp-8h] BYREF
  char v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  const char *v34; // [rsp+110h] [rbp+10h] BYREF
  char v35; // [rsp+118h] [rbp+18h]
  __int64 v36; // [rsp+120h] [rbp+20h]

  v32 = 22;
  v31 = "immersiveShellTeardown";
  v35 = 21;
  v33 = a1 + 44;
  v29 = 15;
  v34 = "startActivationResult";
  v36 = a1 + 40;
  v28 = "searchIsMissing";
  v30 = a1 + 37;
  v25 = "startCrashedDuringInvoke";
  v27 = a1 + 36;
  v22 = "timedOutAfterFiveSeconds";
  v24 = a1 + 35;
  v19 = "foregroundLostInvokeAbort";
  v21 = a1 + 34;
  v16 = "foregroundCouldNotBeClaimed";
  v18 = a1 + 33;
  v13 = "canceledForegroundLost";
  v15 = a1 + 32;
  v10 = "millisecondsSpentOpen";
  v12 = a1 + 24;
  v7 = "logonCompletedBeforeImmersiveShellInit";
  v9 = a1 + 17;
  v4 = "explorerBlackScreenLogon";
  v6 = a1 + 16;
  v26 = 24;
  v23 = 24;
  v20 = 25;
  v17 = 27;
  v14 = 22;
  v11 = 21;
  v8 = 38;
  v5 = 24;
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v4);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v7);
  tson::output_archive::process<tson::nvp<__int64 &>>(a2, (__int64 *)&v10);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v13);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v16);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v19);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v22);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v25);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v28);
  return tson::output_archive::process<tson::nvp<long &>,tson::nvp<bool &>>(a2, (__int64 *)&v34, (__int64)&v31);
}
