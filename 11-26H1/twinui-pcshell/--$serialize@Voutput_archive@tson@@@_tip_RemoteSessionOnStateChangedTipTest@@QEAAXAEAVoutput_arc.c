/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_RemoteSessionOnStateChangedTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180657DE4
 * Callers:
 *     ?serialize@?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18065DD30 (-serialize@-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@EEAAXAEAVou.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V42@V12@V12@V12@V12@V42@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1200002@Z @ 0x180657884 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt_ea_180657884.c)
 */

__int64 __fastcall _tip_RemoteSessionOnStateChangedTipTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  const char *v4; // [rsp+60h] [rbp-A0h] BYREF
  char v5; // [rsp+68h] [rbp-98h]
  __int64 v6; // [rsp+70h] [rbp-90h]
  const char *v7; // [rsp+78h] [rbp-88h] BYREF
  char v8; // [rsp+80h] [rbp-80h]
  __int64 v9; // [rsp+88h] [rbp-78h]
  const char *v10; // [rsp+90h] [rbp-70h] BYREF
  char v11; // [rsp+98h] [rbp-68h]
  __int64 v12; // [rsp+A0h] [rbp-60h]
  const char *v13; // [rsp+A8h] [rbp-58h] BYREF
  char v14; // [rsp+B0h] [rbp-50h]
  __int64 v15; // [rsp+B8h] [rbp-48h]
  __int64 v16; // [rsp+C0h] [rbp-40h] BYREF
  char v17; // [rsp+C8h] [rbp-38h]
  __int64 v18; // [rsp+D0h] [rbp-30h]
  __int64 v19; // [rsp+D8h] [rbp-28h] BYREF
  char v20; // [rsp+E0h] [rbp-20h]
  __int64 v21; // [rsp+E8h] [rbp-18h]
  __int64 v22; // [rsp+F0h] [rbp-10h] BYREF
  char v23; // [rsp+F8h] [rbp-8h]
  __int64 v24; // [rsp+100h] [rbp+0h]
  __int64 v25; // [rsp+108h] [rbp+8h] BYREF
  char v26; // [rsp+110h] [rbp+10h]
  __int64 v27; // [rsp+118h] [rbp+18h]
  __int64 v28; // [rsp+120h] [rbp+20h] BYREF
  char v29; // [rsp+128h] [rbp+28h]
  __int64 v30; // [rsp+130h] [rbp+30h]
  __int64 v31; // [rsp+138h] [rbp+38h] BYREF
  char v32; // [rsp+140h] [rbp+40h]
  __int64 v33; // [rsp+148h] [rbp+48h]
  __int64 v34; // [rsp+150h] [rbp+50h] BYREF
  char v35; // [rsp+158h] [rbp+58h]
  __int64 v36; // [rsp+160h] [rbp+60h]

  v8 = 13;
  v7 = "correlationId";
  v11 = 19;
  v9 = a1 + 96;
  v14 = 28;
  v10 = "isAnyProviderActive";
  v12 = a1 + 93;
  v13 = "transitionScreenAlreadyShown";
  v15 = a1 + 91;
  v16 = (__int64)"transitionScreenAlreadyNotShowing";
  v18 = a1 + 92;
  v19 = (__int64)"systemIdNotFoundInRSWMMap";
  v21 = a1 + 88;
  v22 = (__int64)"systemId";
  v24 = a1 + 16;
  v25 = (__int64)"state";
  v27 = a1 + 80;
  v28 = (__int64)"remoteDesktopId";
  v30 = a1 + 48;
  v31 = (__int64)"oldState";
  v33 = a1 + 84;
  v34 = (__int64)"handleConnectionStateChangedDidNothing";
  v36 = a1 + 89;
  v4 = "failedToGetViewForHwnd";
  v6 = a1 + 90;
  v17 = 33;
  v20 = 25;
  v23 = 8;
  v26 = 5;
  v29 = 15;
  v32 = 8;
  v35 = 38;
  v5 = 22;
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v4);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::CloudPCState &>,tson::nvp<std::wstring &>,tson::nvp<enum winrt::Windows::Internal::Shell::CloudPCState &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v34,
           (__int64)&v31,
           (__int64)&v28,
           &v25,
           &v22,
           (__int64)&v19,
           (__int64)&v16,
           (__int64)&v13,
           (__int64)&v10,
           (__int64)&v7);
}
