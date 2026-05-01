/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_DeactivateRemoteDesktopTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180647938
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180653630 (-deserialize@-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@EEAAXAEAVinpu.c)
 * Callees:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180176D74 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805C7EDC (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_tr_ea_1805C7EDC.c)
 */

__int64 __fastcall _tip_DeactivateRemoteDesktopTipTest::serialize<tson::input_archive>(__int64 a1, __int64 a2)
{
  const char *v4; // [rsp+88h] [rbp+Fh] BYREF
  char v5; // [rsp+90h] [rbp+17h]
  __int64 v6; // [rsp+98h] [rbp+1Fh]
  const char *v7; // [rsp+A0h] [rbp+27h] BYREF
  char v8; // [rsp+A8h] [rbp+2Fh]
  __int64 v9; // [rsp+B0h] [rbp+37h]
  const char *v10; // [rsp+B8h] [rbp+3Fh] BYREF
  char v11; // [rsp+C0h] [rbp+47h]
  __int64 v12; // [rsp+C8h] [rbp+4Fh]

  *(_BYTE *)(a2 + 24) = 8;
  v4 = "didAnyHwndFailToClose";
  v6 = a1 + 50;
  v7 = "remoteDesktopSuccessfullyRemoved";
  v9 = a1 + 49;
  v10 = "remoteSystemNotFound";
  v12 = a1 + 48;
  *(_QWORD *)(a2 + 16) = "systemId";
  v5 = 21;
  v8 = 32;
  v11 = 20;
  tson::load_nothrow((tson::input_archive *)a2, (_QWORD *)(a1 + 16));
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           (tson::input_archive *)a2,
           (__int64)&v10,
           (__int64)&v7,
           (__int64)&v4);
}
