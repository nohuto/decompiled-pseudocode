/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_TouchGestureTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18059042C
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180593600 (-deserialize@-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson.c)
 * Callees:
 *     ??$process@V?$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x180326BC0 (--$process@V-$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V32@V32@V32@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@11111@Z @ 0x1805901B4 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAJ@2@V32@V32@V32@V32@V32@@input_archive@tson@@AEA.c)
 */

__int64 __fastcall _tip_TouchGestureTest::serialize<tson::input_archive>(__int64 a1, __int64 *a2)
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

  v11 = 12;
  v10 = "cancelResult";
  v14 = 27;
  v12 = a1 + 48;
  v17 = 26;
  v13 = "finishResultFromFinishSwipe";
  v15 = a1 + 44;
  v16 = "finishResultFromPointersUp";
  v18 = a1 + 40;
  v19 = "continueResult";
  v21 = a1 + 36;
  v22 = "startResultFromStartSwipe";
  v24 = a1 + 32;
  v25 = "startResultFromPointersDown";
  v27 = a1 + 28;
  v28 = "finished";
  v30 = a1 + 26;
  v31 = "hasTarget";
  v33 = a1 + 24;
  v34 = "hasException";
  v36 = a1 + 25;
  v7 = "contacts";
  v9 = a1 + 20;
  v4 = "type";
  v6 = a1 + 16;
  v20 = 14;
  v23 = 25;
  v26 = 27;
  v29 = 8;
  v32 = 9;
  v35 = 12;
  v8 = 8;
  v5 = 4;
  tson::input_archive::process<tson::nvp<unsigned int &>>((__int64)a2, (__int64)&v4);
  tson::input_archive::process<tson::nvp<unsigned int &>>((__int64)a2, (__int64)&v7);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
           a2,
           (__int64)&v34,
           (int)&v31,
           (int)&v28,
           (__int64)&v25,
           (__int64)&v22,
           (__int64)&v19,
           (__int64)&v16,
           (__int64)&v13,
           (__int64)&v10);
}
