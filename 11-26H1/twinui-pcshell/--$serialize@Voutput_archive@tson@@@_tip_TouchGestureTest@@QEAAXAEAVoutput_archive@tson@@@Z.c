/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_TouchGestureTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800E0B20
 * Callers:
 *     ?serialize@?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180593AB0 (-serialize@-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@000@Z @ 0x1800DE968 (--$process@V-$nvp@AEAJ@tson@@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@000@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DF098 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DF130 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

__int64 __fastcall _tip_TouchGestureTest::serialize<tson::output_archive>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  const char *v8; // [rsp+30h] [rbp-D0h] BYREF
  char v9; // [rsp+38h] [rbp-C8h]
  __int64 v10; // [rsp+40h] [rbp-C0h]
  const char *v11; // [rsp+48h] [rbp-B8h] BYREF
  char v12; // [rsp+50h] [rbp-B0h]
  __int64 v13; // [rsp+58h] [rbp-A8h]
  const char *v14; // [rsp+60h] [rbp-A0h] BYREF
  char v15; // [rsp+68h] [rbp-98h]
  __int64 v16; // [rsp+70h] [rbp-90h]
  const char *v17; // [rsp+78h] [rbp-88h] BYREF
  char v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  const char *v20; // [rsp+90h] [rbp-70h] BYREF
  char v21; // [rsp+98h] [rbp-68h]
  __int64 v22; // [rsp+A0h] [rbp-60h]
  const char *v23; // [rsp+A8h] [rbp-58h] BYREF
  char v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  const char *v26; // [rsp+C0h] [rbp-40h] BYREF
  char v27; // [rsp+C8h] [rbp-38h]
  __int64 v28; // [rsp+D0h] [rbp-30h]
  const char *v29; // [rsp+D8h] [rbp-28h] BYREF
  char v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  const char *v32; // [rsp+F0h] [rbp-10h] BYREF
  char v33; // [rsp+F8h] [rbp-8h]
  __int64 v34; // [rsp+100h] [rbp+0h]
  const char *v35; // [rsp+108h] [rbp+8h] BYREF
  char v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  const char *v38; // [rsp+120h] [rbp+20h] BYREF
  char v39; // [rsp+128h] [rbp+28h]
  __int64 v40; // [rsp+130h] [rbp+30h]

  v30 = 12;
  v29 = "cancelResult";
  v33 = 27;
  v31 = a1 + 48;
  v36 = 26;
  v32 = "finishResultFromFinishSwipe";
  v34 = a1 + 44;
  v35 = "finishResultFromPointersUp";
  v37 = a1 + 40;
  v38 = "continueResult";
  v40 = a1 + 36;
  v26 = "startResultFromStartSwipe";
  v28 = a1 + 32;
  v23 = "startResultFromPointersDown";
  v25 = a1 + 28;
  v20 = "finished";
  v22 = a1 + 26;
  v17 = "hasTarget";
  v19 = a1 + 24;
  v14 = "hasException";
  v16 = a1 + 25;
  v11 = "contacts";
  v13 = a1 + 20;
  v8 = "type";
  v10 = a1 + 16;
  v39 = 14;
  v27 = 25;
  v24 = 27;
  v21 = 8;
  v18 = 9;
  v15 = 12;
  v12 = 8;
  v9 = 4;
  tson::output_archive::process<tson::nvp<unsigned int &>>(a2, (__int64 *)&v8, a3);
  tson::output_archive::process<tson::nvp<unsigned int &>>(a2, (__int64 *)&v11, v4);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v14);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v17);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v20);
  tson::output_archive::process<tson::nvp<long &>>(a2, (__int64 *)&v23, v5);
  tson::output_archive::process<tson::nvp<long &>>(a2, (__int64 *)&v26, v6);
  return tson::output_archive::process<tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
           a2,
           (__int64)&v38,
           (__int64)&v35,
           (__int64)&v32,
           (__int64)&v29);
}
