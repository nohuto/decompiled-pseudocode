/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_TouchEdgeGestureTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180570CB4
 * Callers:
 *     ?serialize@?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180571A00 (-serialize@-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@t.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DE920 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x1802C1304 (--$process@V-$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@V?$nvp@AEAJ@2@V32@V32@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@111@Z @ 0x18057076C (--$process@V-$nvp@AEAI@tson@@V-$nvp@AEAJ@2@V32@V32@V32@@output_archive@tson@@AEAAX$$QEAV-$nvp@AE.c)
 *     ??$process@V?$nvp@AEAM@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAM@1@@Z @ 0x180570820 (--$process@V-$nvp@AEAM@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAM@1@@Z.c)
 */

char __fastcall _tip_TouchEdgeGestureTest::serialize<tson::output_archive>(__int64 a1, __int64 a2)
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
  const char *v37; // [rsp+138h] [rbp+38h] BYREF
  char v38; // [rsp+140h] [rbp+40h]
  __int64 v39; // [rsp+148h] [rbp+48h]

  v26 = 18;
  v25 = "displayRect.bottom";
  v29 = 15;
  v27 = a1 + 56;
  v32 = 17;
  v28 = "displayRect.top";
  v30 = a1 + 48;
  v31 = "displayRect.right";
  v33 = a1 + 52;
  v34 = "displayRect.left";
  v36 = a1 + 44;
  v37 = "connectedMonitors";
  v39 = a1 + 40;
  v22 = "monitors";
  v24 = a1 + 36;
  v19 = "startAnimationResult";
  v21 = a1 + 34;
  v16 = "startGestureResult";
  v18 = a1 + 33;
  v13 = "queryMonitorFailure";
  v15 = a1 + 32;
  v10 = "position.Y";
  v12 = a1 + 28;
  v7 = "position.X";
  v9 = a1 + 24;
  v4 = "sourceId";
  v6 = a1 + 16;
  v35 = 16;
  v38 = 17;
  v23 = 8;
  v20 = 20;
  v17 = 18;
  v14 = 19;
  v11 = 10;
  v8 = 10;
  v5 = 8;
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>(a2, (__int64 *)&v4);
  tson::output_archive::process<tson::nvp<float &>>(a2, (__int64)&v7);
  tson::output_archive::process<tson::nvp<float &>>(a2, (__int64)&v10);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v13);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v16);
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v19);
  tson::output_archive::process<tson::nvp<unsigned int &>>(a2, (__int64 *)&v22);
  return tson::output_archive::process<tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
           a2,
           (__int64 *)&v37,
           (__int64 *)&v34,
           (__int64 *)&v31,
           (__int64 *)&v28,
           (__int64 *)&v25);
}
