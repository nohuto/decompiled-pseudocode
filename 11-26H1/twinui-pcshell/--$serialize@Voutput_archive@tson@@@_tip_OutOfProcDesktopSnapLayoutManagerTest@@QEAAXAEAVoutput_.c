/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_OutOfProcDesktopSnapLayoutManagerTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805B8F60
 * Callers:
 *     ?serialize@?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805BC320 (-serialize@-$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@EEAAXAEA.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DF130 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DF188 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEA_N@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_N@1@1@Z @ 0x18048B30C (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEA_N@2@V32@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@$$.c)
 */

__int64 __fastcall _tip_OutOfProcDesktopSnapLayoutManagerTest::serialize<tson::output_archive>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  const char *v8; // [rsp+20h] [rbp-39h] BYREF
  char v9; // [rsp+28h] [rbp-31h]
  __int64 v10; // [rsp+30h] [rbp-29h]
  const char *v11; // [rsp+38h] [rbp-21h] BYREF
  char v12; // [rsp+40h] [rbp-19h]
  __int64 v13; // [rsp+48h] [rbp-11h]
  const char *v14; // [rsp+50h] [rbp-9h] BYREF
  char v15; // [rsp+58h] [rbp-1h]
  __int64 v16; // [rsp+60h] [rbp+7h]
  const char *v17; // [rsp+68h] [rbp+Fh] BYREF
  char v18; // [rsp+70h] [rbp+17h]
  __int64 v19; // [rsp+78h] [rbp+1Fh]
  const char *v20; // [rsp+80h] [rbp+27h] BYREF
  char v21; // [rsp+88h] [rbp+2Fh]
  __int64 v22; // [rsp+90h] [rbp+37h]
  const char *v23; // [rsp+98h] [rbp+3Fh] BYREF
  char v24; // [rsp+A0h] [rbp+47h]
  __int64 v25; // [rsp+A8h] [rbp+4Fh]

  v18 = 19;
  v21 = 18;
  v24 = 14;
  v17 = "gotExtensionStatics";
  v15 = 13;
  v19 = a1 + 49;
  v20 = "gotServiceProvider";
  v22 = a1 + 48;
  v16 = a1 + 52;
  v23 = "workArea.right";
  v12 = 15;
  v9 = 12;
  v25 = a1 + 60;
  v14 = "workArea.left";
  v11 = "workArea.bottom";
  v13 = a1 + 64;
  v8 = "workArea.top";
  v10 = a1 + 56;
  *(_BYTE *)(a2 + 8) = 11;
  *(_QWORD *)a2 = "processName";
  tson::save_nothrow(a2, (const void **)(a1 + 16), a3);
  tson::output_archive::process<tson::nvp<long &>>(a2, (__int64 *)&v8, v4);
  tson::output_archive::process<tson::nvp<long &>>(a2, (__int64 *)&v11, v5);
  tson::output_archive::process<tson::nvp<long &>>(a2, (__int64 *)&v14, v6);
  return tson::output_archive::process<tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64 *)&v23,
           (__int64)&v20,
           (__int64)&v17);
}
