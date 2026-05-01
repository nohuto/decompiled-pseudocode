/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_OutOfProcDesktopSnapLayoutManagerTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180594DA0
 * Callers:
 *     ?serialize@?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805980D0 (-serialize@-$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@EEAAXAEA.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DE2F0 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DE8C8 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEA_N@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_N@1@1@Z @ 0x18047A8C8 (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEA_N@2@V32@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@$$.c)
 */

char __fastcall _tip_OutOfProcDesktopSnapLayoutManagerTest::serialize<tson::output_archive>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const char *v5; // [rsp+20h] [rbp-39h] BYREF
  char v6; // [rsp+28h] [rbp-31h]
  __int64 v7; // [rsp+30h] [rbp-29h]
  const char *v8; // [rsp+38h] [rbp-21h] BYREF
  char v9; // [rsp+40h] [rbp-19h]
  __int64 v10; // [rsp+48h] [rbp-11h]
  const char *v11; // [rsp+50h] [rbp-9h] BYREF
  char v12; // [rsp+58h] [rbp-1h]
  __int64 v13; // [rsp+60h] [rbp+7h]
  const char *v14; // [rsp+68h] [rbp+Fh] BYREF
  char v15; // [rsp+70h] [rbp+17h]
  __int64 v16; // [rsp+78h] [rbp+1Fh]
  const char *v17; // [rsp+80h] [rbp+27h] BYREF
  char v18; // [rsp+88h] [rbp+2Fh]
  __int64 v19; // [rsp+90h] [rbp+37h]
  const char *v20; // [rsp+98h] [rbp+3Fh] BYREF
  char v21; // [rsp+A0h] [rbp+47h]
  __int64 v22; // [rsp+A8h] [rbp+4Fh]

  *(_BYTE *)(a2 + 8) = 11;
  v14 = "gotExtensionStatics";
  v15 = 19;
  v16 = a1 + 49;
  v17 = "gotServiceProvider";
  v19 = a1 + 48;
  v20 = "workArea.right";
  v22 = a1 + 60;
  v11 = "workArea.left";
  v13 = a1 + 52;
  v8 = "workArea.bottom";
  v10 = a1 + 64;
  v5 = "workArea.top";
  v7 = a1 + 56;
  *(_QWORD *)a2 = "processName";
  v18 = 18;
  v21 = 14;
  v12 = 13;
  v9 = 15;
  v6 = 12;
  tson::save_nothrow(a2, (const void **)(a1 + 16), a3);
  tson::output_archive::process<tson::nvp<long &>>(a2, (__int64 *)&v5);
  tson::output_archive::process<tson::nvp<long &>>(a2, (__int64 *)&v8);
  tson::output_archive::process<tson::nvp<long &>>(a2, (__int64 *)&v11);
  return tson::output_archive::process<tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64 *)&v20,
           (__int64)&v17,
           (__int64)&v14);
}
