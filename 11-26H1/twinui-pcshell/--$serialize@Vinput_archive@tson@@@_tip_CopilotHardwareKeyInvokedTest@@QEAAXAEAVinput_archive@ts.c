/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_CopilotHardwareKeyInvokedTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180621AA4
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180636A00 (-deserialize@-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXAEAVinput.c)
 * Callees:
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00@Z @ 0x180176F98 (--$-RV-$nvp@AEA_N@tson@@V01@V01@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_N@1@00@Z.c)
 *     ??$process@V?$nvp@W4reason@_tip_CopilotHardwareKeyInvokedTest@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@W4reason@_tip_CopilotHardwareKeyInvokedTest@@@1@@Z @ 0x180621A30 (--$process@V-$nvp@W4reason@_tip_CopilotHardwareKeyInvokedTest@@@tson@@@input_archive@tson@@AEAAX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@QEAA_NXZ @ 0x18063682C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@QEAA_NX.c)
 */

char __fastcall _tip_CopilotHardwareKeyInvokedTest::serialize<tson::input_archive>(__int64 a1, __int64 a2)
{
  const char *v5; // [rsp+20h] [rbp-50h] BYREF
  char v6; // [rsp+28h] [rbp-48h]
  int v7; // [rsp+2Ch] [rbp-44h]
  __int64 v8; // [rsp+30h] [rbp-40h]
  const char *v9; // [rsp+38h] [rbp-38h] BYREF
  char v10; // [rsp+40h] [rbp-30h]
  int v11; // [rsp+44h] [rbp-2Ch]
  __int64 v12; // [rsp+48h] [rbp-28h]
  const char *v13; // [rsp+50h] [rbp-20h] BYREF
  char v14; // [rsp+58h] [rbp-18h]
  __int64 v15; // [rsp+60h] [rbp-10h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID60051841>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID60051841>::GetImpl'::`2'::impl) )
  {
    v10 = 14;
    v9 = "searchFallback";
    v6 = 16;
    v12 = a1 + 18;
    v14 = 27;
    v5 = "settingsFallback";
    v8 = a1 + 17;
    v13 = "isCopilotSupportedOSEdition";
    v15 = a1 + 16;
    return tson::input_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
             a2,
             (__int64)&v13,
             (__int64)&v5,
             (__int64 *)&v9);
  }
  else
  {
    v10 = 20;
    v9 = "reason::searchInvoke";
    v11 = 2;
    v5 = "reason::settingsInvoke";
    v6 = 22;
    v7 = 3;
    tson::input_archive::process<tson::nvp<enum _tip_CopilotHardwareKeyInvokedTest::reason>>(a2, (__int64)&v5);
    return tson::input_archive::process<tson::nvp<enum _tip_CopilotHardwareKeyInvokedTest::reason>>(a2, (__int64)&v9);
  }
}
