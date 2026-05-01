/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_RecoverRemoteSessionTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180617F0C
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x18061CB80 (-deserialize@-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@EEAAXAEAVinput_a.c)
 * Callees:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180185064 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x18032A2CC (--$process@V-$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@V?$nvp@AEA_N@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x180616F5C (--$process@V-$nvp@AEA_K@tson@@V-$nvp@AEA_N@2@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@$$QEA.c)
 */

char __fastcall _tip_RecoverRemoteSessionTipTest::serialize<tson::input_archive>(__int64 a1, __int64 a2)
{
  const char *v5; // [rsp+20h] [rbp-29h] BYREF
  char v6; // [rsp+28h] [rbp-21h]
  __int64 v7; // [rsp+30h] [rbp-19h]
  const char *v8; // [rsp+38h] [rbp-11h] BYREF
  char v9; // [rsp+40h] [rbp-9h]
  __int64 v10; // [rsp+48h] [rbp-1h]
  const char *v11; // [rsp+50h] [rbp+7h] BYREF
  char v12; // [rsp+58h] [rbp+Fh]
  __int64 v13; // [rsp+60h] [rbp+17h]
  const char *v14; // [rsp+68h] [rbp+1Fh] BYREF
  char v15; // [rsp+70h] [rbp+27h]
  __int64 v16; // [rsp+78h] [rbp+2Fh]
  const char *v17; // [rsp+80h] [rbp+37h] BYREF
  char v18; // [rsp+88h] [rbp+3Fh]
  __int64 v19; // [rsp+90h] [rbp+47h]

  v15 = 9;
  v18 = 21;
  v14 = "isLocalPC";
  v12 = 22;
  v16 = a1 + 112;
  v9 = 15;
  v17 = "restoredHostProcesses";
  v19 = a1 + 104;
  v11 = "recoveredHostProcesses";
  v13 = a1 + 96;
  v8 = "restoredWindows";
  v10 = a1 + 88;
  v5 = "recoveredWindows";
  v7 = a1 + 80;
  v6 = 16;
  tson::input_archive::process<tson::nvp<unsigned __int64 &>>(a2, (__int64)&v5);
  tson::input_archive::process<tson::nvp<unsigned __int64 &>>(a2, (__int64)&v8);
  *(_BYTE *)(a2 + 24) = 15;
  *(_QWORD *)(a2 + 16) = "remoteDesktopId";
  tson::load_nothrow((tson::input_archive *)a2, (_WORD *)(a1 + 48));
  *(_BYTE *)(a2 + 24) = 8;
  *(_QWORD *)(a2 + 16) = "systemId";
  tson::load_nothrow((tson::input_archive *)a2, (_WORD *)(a1 + 16));
  tson::input_archive::process<tson::nvp<unsigned __int64 &>>(a2, (__int64)&v11);
  return tson::input_archive::process<tson::nvp<unsigned __int64 &>,tson::nvp<bool &>>(
           (tson::input_archive *)a2,
           (__int64)&v17,
           (__int64)&v14);
}
