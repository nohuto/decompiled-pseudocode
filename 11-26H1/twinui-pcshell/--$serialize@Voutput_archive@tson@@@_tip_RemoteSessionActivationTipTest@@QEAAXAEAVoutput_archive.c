/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_RemoteSessionActivationTipTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180657CFC
 * Callers:
 *     ?serialize@?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18065DC80 (-serialize@-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@EEAAXAEAVoutput.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DF188 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1@Z @ 0x1805C8588 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$a_ea_1805C8588.c)
 */

char __fastcall _tip_RemoteSessionActivationTipTest::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  const char *v7; // [rsp+20h] [rbp-60h] BYREF
  char v8; // [rsp+28h] [rbp-58h]
  __int64 v9; // [rsp+30h] [rbp-50h]
  const char *v10; // [rsp+38h] [rbp-48h] BYREF
  char v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-38h]
  const char *v13; // [rsp+50h] [rbp-30h] BYREF
  char v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-20h]
  const char *v16; // [rsp+68h] [rbp-18h] BYREF
  char v17; // [rsp+70h] [rbp-10h]
  __int64 v18; // [rsp+78h] [rbp-8h]

  v11 = 13;
  v14 = 8;
  v10 = "correlationId";
  v17 = 24;
  v12 = a1 + 120;
  v8 = 33;
  v13 = "systemId";
  v15 = a1 + 56;
  v16 = "registrationDataNotFound";
  v18 = a1 + 17;
  v7 = "hasExistingActivatedRemoteSession";
  v9 = a1 + 16;
  tson::output_archive::process<tson::nvp<bool &>>(a2, (__int64)&v7);
  *(_BYTE *)(a2 + 8) = 17;
  *(_QWORD *)a2 = "packageFamilyName";
  tson::save_nothrow(a2, (const void **)(a1 + 24), v4);
  *(_BYTE *)(a2 + 8) = 15;
  *(_QWORD *)a2 = "remoteDesktopId";
  tson::save_nothrow(a2, (const void **)(a1 + 88), v5);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>>(
           a2,
           (__int64)&v16,
           (__int64)&v13,
           (__int64)&v10);
}
