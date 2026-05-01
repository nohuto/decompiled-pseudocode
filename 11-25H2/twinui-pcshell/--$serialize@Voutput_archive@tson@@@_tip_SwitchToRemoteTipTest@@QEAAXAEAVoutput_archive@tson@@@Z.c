/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_SwitchToRemoteTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180622560
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18062F1B0 (-serialize@-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DE2F0 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@2@V?$nvp@AEA_N@2@V42@V?$nvp@AEAH@2@V52@V42@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@$$QEAV?$nvp@AEA_N@1@2$$QEAV?$nvp@AEAH@1@320@Z @ 0x180621AC4 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_180621AC4.c)
 */

char __fastcall _tip_SwitchToRemoteTipTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2,
        __int64 a3)
{
  __int64 v5; // [rsp+50h] [rbp-B0h] BYREF
  char v6; // [rsp+58h] [rbp-A8h]
  __int64 v7; // [rsp+60h] [rbp-A0h]
  __int64 v8; // [rsp+68h] [rbp-98h] BYREF
  char v9; // [rsp+70h] [rbp-90h]
  __int64 v10; // [rsp+78h] [rbp-88h]
  __int64 v11; // [rsp+80h] [rbp-80h] BYREF
  char v12; // [rsp+88h] [rbp-78h]
  __int64 v13; // [rsp+90h] [rbp-70h]
  __int64 v14; // [rsp+98h] [rbp-68h] BYREF
  char v15; // [rsp+A0h] [rbp-60h]
  __int64 v16; // [rsp+A8h] [rbp-58h]
  __int64 v17; // [rsp+B0h] [rbp-50h] BYREF
  char v18; // [rsp+B8h] [rbp-48h]
  __int64 v19; // [rsp+C0h] [rbp-40h]
  const char *v20; // [rsp+C8h] [rbp-38h] BYREF
  char v21; // [rsp+D0h] [rbp-30h]
  __int64 v22; // [rsp+D8h] [rbp-28h]
  const char *v23; // [rsp+E0h] [rbp-20h] BYREF
  char v24; // [rsp+E8h] [rbp-18h]
  __int64 v25; // [rsp+F0h] [rbp-10h]
  const char *v26; // [rsp+F8h] [rbp-8h] BYREF
  char v27; // [rsp+100h] [rbp+0h]
  __int64 v28; // [rsp+108h] [rbp+8h]

  *((_BYTE *)a2 + 8) = 8;
  v5 = (__int64)"correlationId";
  v6 = 13;
  v7 = a1 + 104;
  v8 = (__int64)"isLocalPC";
  v10 = a1 + 96;
  v11 = (__int64)"hostProcessCount";
  v13 = a1 + 92;
  v14 = (__int64)"providerWindowCount";
  v16 = a1 + 88;
  v17 = (__int64)"switchDelivered";
  v19 = a1 + 85;
  v20 = "remoteSystemFound";
  v22 = a1 + 84;
  v23 = "state";
  v25 = a1 + 80;
  v26 = "remoteDesktopId";
  v28 = a1 + 48;
  *(_QWORD *)a2 = "systemId";
  v9 = 9;
  v12 = 16;
  v15 = 19;
  v18 = 15;
  v21 = 17;
  v24 = 5;
  v27 = 15;
  tson::save_nothrow((__int64)a2, (const void **)(a1 + 16), a3);
  return tson::output_archive::process<tson::nvp<std::wstring &>,tson::nvp<enum winrt::Windows::Internal::Shell::CloudPCState &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v26,
           (__int64)&v23,
           (__int64)&v20,
           (__int64)&v17,
           &v14,
           &v11,
           (__int64)&v8,
           (__int64)&v5);
}
