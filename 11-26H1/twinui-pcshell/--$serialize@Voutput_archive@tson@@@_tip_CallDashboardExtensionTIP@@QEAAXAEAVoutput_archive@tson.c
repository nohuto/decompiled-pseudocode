/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800E09B8
 * Callers:
 *     ?serialize@?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18028B8E0 (-serialize@-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXAEAVoutput_arch.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1800DE900 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ??$?RV?$nvp@AEA_N@tson@@V01@V01@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$nvp@AEAJ@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAJ@1@@Z @ 0x1805C3FB0 (--$-RV-$nvp@AEA_N@tson@@V01@V01@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59874629@@@details@wil@@QEAA_NXZ @ 0x1805DAD48 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59874629@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall _tip_CallDashboardExtensionTIP::serialize<tson::output_archive>(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  const char *v9; // [rsp+38h] [rbp-39h] BYREF
  char v10; // [rsp+40h] [rbp-31h]
  __int64 v11; // [rsp+48h] [rbp-29h]
  const char *v12; // [rsp+50h] [rbp-21h] BYREF
  char v13; // [rsp+58h] [rbp-19h]
  __int64 v14; // [rsp+60h] [rbp-11h]
  const char *v15; // [rsp+68h] [rbp-9h] BYREF
  char v16; // [rsp+70h] [rbp-1h]
  __int64 v17; // [rsp+78h] [rbp+7h]
  const char *v18; // [rsp+80h] [rbp+Fh] BYREF
  char v19; // [rsp+88h] [rbp+17h]
  __int64 v20; // [rsp+90h] [rbp+1Fh]
  const char *v21; // [rsp+98h] [rbp+27h] BYREF
  char v22; // [rsp+A0h] [rbp+2Fh]
  __int64 v23; // [rsp+A8h] [rbp+37h]

  v4 = a1 + 24;
  v5 = a1 + 18;
  v6 = a1 + 17;
  v7 = a1 + 16;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59874629>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59874629>::GetImpl'::`2'::impl) )
  {
    v22 = 2;
    v21 = "hr";
    v10 = 15;
    v23 = a1 + 20;
    v11 = v4;
    v9 = "packageFullName";
    v13 = 16;
    v12 = "isCallSuccessful";
    v15 = "isDashboardExtensionPresent";
    v18 = "isDashboardExtensionNull";
    v14 = v5;
    v16 = 27;
    v17 = v6;
    v19 = 24;
    v20 = v7;
    return tson::output_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<long &>>(
             a2,
             (unsigned int)&v18,
             (unsigned int)&v15,
             (unsigned int)&v12,
             (__int64)&v9,
             (__int64)&v21);
  }
  else
  {
    v19 = 15;
    v18 = "packageFullName";
    v20 = v4;
    v15 = "isCallSuccessful";
    v16 = 16;
    v12 = "isDashboardExtensionPresent";
    v17 = v5;
    v9 = "isDashboardExtensionNull";
    v13 = 27;
    v14 = v6;
    v10 = 24;
    v11 = v7;
    return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
             a2,
             (__int64)&v9,
             (__int64)&v12,
             (__int64)&v15,
             (__int64)&v18);
  }
}
