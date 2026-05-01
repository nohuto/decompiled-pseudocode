/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805BE79C
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805C8DA0 (-deserialize@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXA.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$process@V?$nvp@AEAW4ApiType@PinManagerTipTests@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAW4ConsentType@PinManagerTipTests@@@2@V?$nvp@AEA_N@2@V?$nvp@AEAK@2@V?$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4ApiType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAW4ConsentType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAK@1@$$QEAV?$nvp@AEAJ@1@@Z @ 0x1805BE508 (--$process@V-$nvp@AEAW4ApiType@PinManagerTipTests@@@tson@@V-$nvp@AEAV-$basic_string@GU-$char_tra.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PinManagerTipTests::_tip_PinManagerPinTest::serialize<tson::input_archive>(
        __int64 a1,
        tson::input_archive *a2)
{
  const char *v4; // [rsp+40h] [rbp-C0h] BYREF
  char v5; // [rsp+48h] [rbp-B8h]
  __int64 v6; // [rsp+50h] [rbp-B0h]
  const char *v7; // [rsp+58h] [rbp-A8h] BYREF
  char v8; // [rsp+60h] [rbp-A0h]
  __int64 v9; // [rsp+68h] [rbp-98h]
  const char *v10; // [rsp+70h] [rbp-90h] BYREF
  char v11; // [rsp+78h] [rbp-88h]
  __int64 v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h] BYREF
  char v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  __int64 v16; // [rsp+A0h] [rbp-60h] BYREF
  char v17; // [rsp+A8h] [rbp-58h]
  void **v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h] BYREF
  char v20; // [rsp+C0h] [rbp-40h]
  void **v21; // [rsp+C8h] [rbp-38h]
  __int64 v22; // [rsp+D0h] [rbp-30h] BYREF
  char v23; // [rsp+D8h] [rbp-28h]
  __int64 v24; // [rsp+E0h] [rbp-20h]
  void *v25[4]; // [rsp+E8h] [rbp-18h] BYREF
  void *v26[4]; // [rsp+108h] [rbp+8h] BYREF

  std::wstring::wstring((char **)v26, (_WORD *)(a1 + 20));
  std::wstring::wstring((char **)v25, (_WORD *)(a1 + 540));
  v4 = "pinFailureResult";
  v5 = 16;
  v6 = a1 + 1072;
  v7 = "caller";
  v8 = 6;
  v9 = a1 + 1068;
  v10 = "consentDialogApproved";
  v11 = 21;
  v12 = a1 + 1064;
  v13 = (__int64)"consentType";
  v14 = 11;
  v15 = a1 + 1060;
  v16 = (__int64)"localRequestorProcessName";
  v17 = 25;
  v18 = v25;
  v19 = (__int64)"localRequestorAppId";
  v20 = 19;
  v21 = v26;
  v22 = (__int64)"apiType";
  v23 = 7;
  v24 = a1 + 16;
  tson::input_archive::process<tson::nvp<enum PinManagerTipTests::ApiType &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<enum PinManagerTipTests::ConsentType &>,tson::nvp<bool &>,tson::nvp<unsigned long &>,tson::nvp<long &>>(
    a2,
    (__int64)&v22,
    &v19,
    (__int64)&v16,
    (__int64)&v13,
    (__int64)&v10,
    (__int64)&v7,
    (__int64)&v4);
  std::wstring::_Tidy_deallocate(v25);
  std::wstring::_Tidy_deallocate(v26);
}
