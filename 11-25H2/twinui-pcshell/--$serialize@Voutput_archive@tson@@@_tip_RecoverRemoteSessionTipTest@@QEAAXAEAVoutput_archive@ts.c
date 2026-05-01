/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_RecoverRemoteSessionTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180618298
 * Callers:
 *     ?serialize@?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18061D960 (-serialize@-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_ar.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DE2F0 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x1802C1304 (--$process@V-$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@V?$nvp@AEA_N@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x180616FD8 (--$process@V-$nvp@AEA_K@tson@@V-$nvp@AEA_N@2@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@$$QE.c)
 */

char __fastcall _tip_RecoverRemoteSessionTipTest::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  const char *v7; // [rsp+20h] [rbp-29h] BYREF
  char v8; // [rsp+28h] [rbp-21h]
  __int64 v9; // [rsp+30h] [rbp-19h]
  const char *v10; // [rsp+38h] [rbp-11h] BYREF
  char v11; // [rsp+40h] [rbp-9h]
  __int64 v12; // [rsp+48h] [rbp-1h]
  const char *v13; // [rsp+50h] [rbp+7h] BYREF
  char v14; // [rsp+58h] [rbp+Fh]
  __int64 v15; // [rsp+60h] [rbp+17h]
  const char *v16; // [rsp+68h] [rbp+1Fh] BYREF
  char v17; // [rsp+70h] [rbp+27h]
  __int64 v18; // [rsp+78h] [rbp+2Fh]
  const char *v19; // [rsp+80h] [rbp+37h] BYREF
  char v20; // [rsp+88h] [rbp+3Fh]
  __int64 v21; // [rsp+90h] [rbp+47h]

  v17 = 9;
  v20 = 21;
  v16 = "isLocalPC";
  v14 = 22;
  v18 = a1 + 112;
  v11 = 15;
  v19 = "restoredHostProcesses";
  v21 = a1 + 104;
  v13 = "recoveredHostProcesses";
  v15 = a1 + 96;
  v10 = "restoredWindows";
  v12 = a1 + 88;
  v7 = "recoveredWindows";
  v9 = a1 + 80;
  v8 = 16;
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>(a2, (__int64 *)&v7);
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>(a2, (__int64 *)&v10);
  *(_BYTE *)(a2 + 8) = 15;
  *(_QWORD *)a2 = "remoteDesktopId";
  tson::save_nothrow(a2, (const void **)(a1 + 48), v4);
  *(_BYTE *)(a2 + 8) = 8;
  *(_QWORD *)a2 = "systemId";
  tson::save_nothrow(a2, (const void **)(a1 + 16), v5);
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>(a2, (__int64 *)&v13);
  return tson::output_archive::process<tson::nvp<unsigned __int64 &>,tson::nvp<bool &>>(
           a2,
           (__int64 *)&v19,
           (__int64)&v16);
}
