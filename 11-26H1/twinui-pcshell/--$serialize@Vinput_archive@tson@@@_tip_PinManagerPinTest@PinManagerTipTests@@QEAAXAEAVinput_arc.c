/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805E235C
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805ECB50 (-deserialize@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXA.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$process@V?$nvp@AEAW4ApiType@PinManagerTipTests@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAW4ConsentType@PinManagerTipTests@@@2@V?$nvp@AEA_N@2@V?$nvp@AEAK@2@V?$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4ApiType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAW4ConsentType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAK@1@$$QEAV?$nvp@AEAJ@1@@Z @ 0x1805E20E8 (--$process@V-$nvp@AEAW4ApiType@PinManagerTipTests@@@tson@@V-$nvp@AEAV-$basic_string@GU-$char_tra.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PinManagerTipTests::_tip_PinManagerPinTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  const char *v5; // [rsp+40h] [rbp-C0h] BYREF
  char v6; // [rsp+48h] [rbp-B8h]
  __int64 v7; // [rsp+50h] [rbp-B0h]
  const char *v8; // [rsp+58h] [rbp-A8h] BYREF
  char v9; // [rsp+60h] [rbp-A0h]
  __int64 v10; // [rsp+68h] [rbp-98h]
  const char *v11; // [rsp+70h] [rbp-90h] BYREF
  char v12; // [rsp+78h] [rbp-88h]
  __int64 v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h] BYREF
  char v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  __int64 v17; // [rsp+A0h] [rbp-60h] BYREF
  char v18; // [rsp+A8h] [rbp-58h]
  _QWORD *v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h] BYREF
  char v21; // [rsp+C0h] [rbp-40h]
  _QWORD *v22; // [rsp+C8h] [rbp-38h]
  __int64 v23; // [rsp+D0h] [rbp-30h] BYREF
  char v24; // [rsp+D8h] [rbp-28h]
  __int64 v25; // [rsp+E0h] [rbp-20h]
  _QWORD v26[4]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v27[4]; // [rsp+108h] [rbp+8h] BYREF

  std::wstring::wstring((__int64)v27, a1 + 20);
  std::wstring::wstring((__int64)v26, a1 + 540);
  v5 = "pinFailureResult";
  v6 = 16;
  v7 = a1 + 1072;
  v8 = "caller";
  v9 = 6;
  v10 = a1 + 1068;
  v11 = "consentDialogApproved";
  v12 = 21;
  v13 = a1 + 1064;
  v14 = (__int64)"consentType";
  v15 = 11;
  v16 = a1 + 1060;
  v17 = (__int64)"localRequestorProcessName";
  v18 = 25;
  v19 = v26;
  v20 = (__int64)"localRequestorAppId";
  v21 = 19;
  v22 = v27;
  v23 = (__int64)"apiType";
  v24 = 7;
  v25 = a1 + 16;
  tson::input_archive::process<tson::nvp<enum PinManagerTipTests::ApiType &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<enum PinManagerTipTests::ConsentType &>,tson::nvp<bool &>,tson::nvp<unsigned long &>,tson::nvp<long &>>(
    a2,
    (__int64)&v23,
    &v20,
    (__int64)&v17,
    (__int64)&v14,
    (__int64)&v11,
    (__int64)&v8,
    (__int64)&v5);
  std::wstring::_Tidy_deallocate(v26);
  return std::wstring::_Tidy_deallocate(v27);
}
