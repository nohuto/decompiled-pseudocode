/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_OutOfProcDesktopSnapLayoutManagerTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180594C94
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805979E0 (-deserialize@-$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@EEAAXA.c)
 * Callees:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180185064 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x18032A0F4 (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEA_N@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_N@1@1@Z @ 0x18047A888 (--$process@V-$nvp@AEAJ@tson@@V-$nvp@AEA_N@2@V32@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@$$Q.c)
 */

char __fastcall _tip_OutOfProcDesktopSnapLayoutManagerTest::serialize<tson::input_archive>(__int64 a1, __int64 a2)
{
  const char *v4; // [rsp+20h] [rbp-39h] BYREF
  char v5; // [rsp+28h] [rbp-31h]
  __int64 v6; // [rsp+30h] [rbp-29h]
  const char *v7; // [rsp+38h] [rbp-21h] BYREF
  char v8; // [rsp+40h] [rbp-19h]
  __int64 v9; // [rsp+48h] [rbp-11h]
  const char *v10; // [rsp+50h] [rbp-9h] BYREF
  char v11; // [rsp+58h] [rbp-1h]
  __int64 v12; // [rsp+60h] [rbp+7h]
  const char *v13; // [rsp+68h] [rbp+Fh] BYREF
  char v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  const char *v16; // [rsp+80h] [rbp+27h] BYREF
  char v17; // [rsp+88h] [rbp+2Fh]
  __int64 v18; // [rsp+90h] [rbp+37h]
  const char *v19; // [rsp+98h] [rbp+3Fh] BYREF
  char v20; // [rsp+A0h] [rbp+47h]
  __int64 v21; // [rsp+A8h] [rbp+4Fh]

  *(_BYTE *)(a2 + 24) = 11;
  v13 = "gotExtensionStatics";
  v14 = 19;
  v15 = a1 + 49;
  v16 = "gotServiceProvider";
  v18 = a1 + 48;
  v19 = "workArea.right";
  v21 = a1 + 60;
  v10 = "workArea.left";
  v12 = a1 + 52;
  v7 = "workArea.bottom";
  v9 = a1 + 64;
  v4 = "workArea.top";
  v6 = a1 + 56;
  *(_QWORD *)(a2 + 16) = "processName";
  v17 = 18;
  v20 = 14;
  v11 = 13;
  v8 = 15;
  v5 = 12;
  tson::load_nothrow((tson::input_archive *)a2, (_WORD *)(a1 + 16));
  tson::input_archive::process<tson::nvp<long &>>(a2, (__int64)&v4);
  tson::input_archive::process<tson::nvp<long &>>(a2, (__int64)&v7);
  tson::input_archive::process<tson::nvp<long &>>(a2, (__int64)&v10);
  return tson::input_archive::process<tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v19,
           (__int64)&v16,
           (__int64)&v13);
}
