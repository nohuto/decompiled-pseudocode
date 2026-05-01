/*
 * XREFs of ?on_result@_tip_SearchFullActivationTest@@QEAAXAEBUTipReportingInfo@@@Z @ 0x1803BD2B8
 * Callers:
 *     ?on_result@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXAEBUTipReportingInfo@@@Z @ 0x1803BD240 (-on_result@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXAEBUTipReporting.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x1801C55E4 (-to_hstring@winrt@@YA-AUhstring@1@AEBUguid@1@@Z.c)
 *     ??$UndockedSearchExperienceManager_ShowResult@AEA_NPEBGAEAW4FullActivationTestSource@@AEBIAEBG@UndockedSearchExperienceManagerTIPTelemetry@@SAXAEA_N$$QEAPEBGAEAW4FullActivationTestSource@@AEBIAEBG@Z @ 0x1803A81F8 (--$UndockedSearchExperienceManager_ShowResult@AEA_NPEBGAEAW4FullActivationTestSource@@AEBIAEBG@U.c)
 */

void __fastcall _tip_SearchFullActivationTest::on_result(
        _tip_SearchFullActivationTest *this,
        const struct TipReportingInfo *a2)
{
  char v4; // r14
  char v5; // r8
  char v6; // r9
  char v7; // r10
  char v8; // r11
  char v9; // bl
  char v10; // dl
  char v11; // cl
  char v12; // di
  bool v13; // al
  bool v14[8]; // [rsp+30h] [rbp-20h] BYREF
  const unsigned __int16 *v15; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+40h] [rbp-10h]
  char v17; // [rsp+41h] [rbp-Fh]
  char v18; // [rsp+42h] [rbp-Eh]
  char v19; // [rsp+43h] [rbp-Dh]
  char v20; // [rsp+44h] [rbp-Ch]
  char v21; // [rsp+45h] [rbp-Bh]
  char v22; // [rsp+46h] [rbp-Ah]
  char v23; // [rsp+47h] [rbp-9h]
  struct winrt::impl::shared_hstring_header *v24; // [rsp+48h] [rbp-8h] BYREF

  v4 = *((_BYTE *)a2 + 40);
  v5 = *((_BYTE *)a2 + 28);
  v6 = *((_BYTE *)a2 + 29);
  v7 = *((_BYTE *)a2 + 30);
  v8 = *((_BYTE *)a2 + 31);
  v9 = *((_BYTE *)a2 + 32);
  v10 = *((_BYTE *)a2 + 33);
  v11 = *((_BYTE *)a2 + 34);
  v12 = *((_BYTE *)a2 + 35);
  v15 = *(const unsigned __int16 **)((char *)a2 + 20);
  v16 = v5;
  v17 = v6;
  v18 = v7;
  v19 = v8;
  v20 = v9;
  v21 = v10;
  v22 = v11;
  v23 = v12;
  winrt::to_hstring(&v24, (unsigned int *)&v15);
  v13 = 1;
  if ( v4 != 1 )
    v13 = v4 == 2;
  v14[0] = v13;
  v15 = winrt::hstring::c_str((winrt::hstring *)&v24);
  UndockedSearchExperienceManagerTIPTelemetry::UndockedSearchExperienceManager_ShowResult<bool &,unsigned short const *,enum FullActivationTestSource &,unsigned int const &,unsigned short const &>(
    v14,
    (__int64 *)&v15,
    (int *)this + 4,
    (int *)a2 + 25,
    (unsigned __int16 *)a2 + 21);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v24);
}
