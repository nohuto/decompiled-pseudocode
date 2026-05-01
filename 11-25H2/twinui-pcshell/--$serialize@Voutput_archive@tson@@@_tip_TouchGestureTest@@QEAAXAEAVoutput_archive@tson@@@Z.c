/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_TouchGestureTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800DFFBC
 * Callers:
 *     ?serialize@?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805702A0 (-serialize@-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DE8C8 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DE920 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@000@Z @ 0x1800E0168 (--$process@V-$nvp@AEAJ@tson@@V12@V12@V12@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@000@Z.c)
 */

__int64 __fastcall _tip_TouchGestureTest::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  const char *v4; // [rsp+30h] [rbp-D0h] BYREF
  char v5; // [rsp+38h] [rbp-C8h]
  __int64 v6; // [rsp+40h] [rbp-C0h]
  const char *v7; // [rsp+48h] [rbp-B8h] BYREF
  char v8; // [rsp+50h] [rbp-B0h]
  __int64 v9; // [rsp+58h] [rbp-A8h]
  const char *v10; // [rsp+60h] [rbp-A0h] BYREF
  char v11; // [rsp+68h] [rbp-98h]
  __int64 v12; // [rsp+70h] [rbp-90h]
  const char *v13; // [rsp+78h] [rbp-88h] BYREF
  char v14; // [rsp+80h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-78h]
  const char *v16; // [rsp+90h] [rbp-70h] BYREF
  char v17; // [rsp+98h] [rbp-68h]
  __int64 v18; // [rsp+A0h] [rbp-60h]
  const char *v19; // [rsp+A8h] [rbp-58h] BYREF
  char v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  const char *v22; // [rsp+C0h] [rbp-40h] BYREF
  char v23; // [rsp+C8h] [rbp-38h]
  __int64 v24; // [rsp+D0h] [rbp-30h]
  const char *v25; // [rsp+D8h] [rbp-28h] BYREF
  char v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  const char *v28; // [rsp+F0h] [rbp-10h] BYREF
  char v29; // [rsp+F8h] [rbp-8h]
  __int64 v30; // [rsp+100h] [rbp+0h]
  const char *v31; // [rsp+108h] [rbp+8h] BYREF
  char v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  const char *v34; // [rsp+120h] [rbp+20h] BYREF
  char v35; // [rsp+128h] [rbp+28h]
  __int64 v36; // [rsp+130h] [rbp+30h]

  v26 = 12;
  v25 = "cancelResult";
  v29 = 27;
  v27 = a1 + 48;
  v32 = 26;
  v28 = "finishResultFromFinishSwipe";
  v30 = a1 + 44;
  v31 = "finishResultFromPointersUp";
  v33 = a1 + 40;
  v34 = "continueResult";
  v36 = a1 + 36;
  v22 = "startResultFromStartSwipe";
  v24 = a1 + 32;
  v19 = "startResultFromPointersDown";
  v21 = a1 + 28;
  v16 = "finished";
  v18 = a1 + 26;
  v13 = "hasTarget";
  v15 = a1 + 24;
  v10 = "hasException";
  v12 = a1 + 25;
  v7 = "contacts";
  v9 = a1 + 20;
  v4 = "type";
  v6 = a1 + 16;
  v35 = 14;
  v23 = 25;
  v20 = 27;
  v17 = 8;
  v14 = 9;
  v11 = 12;
  v8 = 8;
  v5 = 4;
  tson::output_archive::process<tson::nvp<unsigned int &>>(a2, (__int64 *)&v4);
  tson::output_archive::process<tson::nvp<unsigned int &>>(a2, (__int64 *)&v7);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v10);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v13);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v16);
  tson::output_archive::process<tson::nvp<long &>>(a2, (__int64 *)&v19);
  tson::output_archive::process<tson::nvp<long &>>(a2, (__int64 *)&v22);
  return tson::output_archive::process<tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
           a2,
           (unsigned int)&v34,
           (unsigned int)&v31,
           (unsigned int)&v28,
           (__int64)&v25);
}
