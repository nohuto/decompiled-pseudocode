/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180621B84
 * Callers:
 *     ?serialize@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1806375C0 (-serialize@-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXAEAVoutput_.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DF434 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00@Z @ 0x1800DF810 (--$-RV-$nvp@AEA_N@tson@@V01@V01@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_N@1@00@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@QEAA_NXZ @ 0x18063682C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@QEAA_NX.c)
 */

void __fastcall _tip_CopilotHardwareKeyInvokedTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  const char *v6; // [rsp+20h] [rbp-50h] BYREF
  char v7; // [rsp+28h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-40h]
  const char *v9; // [rsp+38h] [rbp-38h] BYREF
  char v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-28h]
  const char *v12; // [rsp+50h] [rbp-20h] BYREF
  char v13; // [rsp+58h] [rbp-18h]
  __int64 v14; // [rsp+60h] [rbp-10h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID60051841>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID60051841>::GetImpl'::`2'::impl) )
  {
    v7 = 14;
    v6 = "searchFallback";
    v10 = 16;
    v8 = a1 + 18;
    v13 = 27;
    v9 = "settingsFallback";
    v11 = a1 + 17;
    v12 = "isCopilotSupportedOSEdition";
    v14 = a1 + 16;
    tson::output_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
      (__int64)a2,
      (__int64)&v12,
      (__int64)&v9,
      (__int64)&v6);
  }
  else
  {
    *((_BYTE *)a2 + 8) = 22;
    *(_QWORD *)a2 = "reason::settingsInvoke";
    tson::output_archive::saveValue(a2, 3LL, v4);
    *((_BYTE *)a2 + 8) = 20;
    *(_QWORD *)a2 = "reason::searchInvoke";
    tson::output_archive::saveValue(a2, 2LL, v5);
  }
}
