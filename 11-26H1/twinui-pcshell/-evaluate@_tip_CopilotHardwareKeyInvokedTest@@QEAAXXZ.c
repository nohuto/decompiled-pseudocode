/*
 * XREFs of ?evaluate@_tip_CopilotHardwareKeyInvokedTest@@QEAAXXZ @ 0x180636E48
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXXZ @ 0x180636B60 (-evaluate@-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?__fail_if_complete_not_called@?$test_data_base@U_tip_CopilotHardwareKeyInvokedTest_id@@@tip2@@IEBA_NXZ @ 0x1802C12C0 (-__fail_if_complete_not_called@-$test_data_base@U_tip_CopilotHardwareKeyInvokedTest_id@@@tip2@@I.c)
 *     ?__fail_if_errors_reported@?$test_data_base@U_tip_EyeControllerAppLaunchTest_id@@@tip2@@IEBA_NXZ @ 0x18048EB64 (-__fail_if_errors_reported@-$test_data_base@U_tip_EyeControllerAppLaunchTest_id@@@tip2@@IEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@QEAA_NXZ @ 0x18063682C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@QEAA_NX.c)
 */

void __fastcall _tip_CopilotHardwareKeyInvokedTest::evaluate(_tip_CopilotHardwareKeyInvokedTest *this)
{
  __int64 v2; // rcx
  const char *v3; // rdx
  __int64 v4; // r9
  char v5; // al
  char v6; // r8
  tip2::details *v7; // rax
  char v8; // r8
  __int64 v9; // rdx
  char v10; // r9
  tip2::details *v11; // rax
  __int16 v12; // r8
  __int64 v13; // rcx
  char v14; // r9
  char v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  char v18; // r9

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID60051841>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ID60051841>::GetImpl'::`2'::impl) )
  {
    if ( !tip2::test_data_base<_tip_CopilotHardwareKeyInvokedTest_id>::__fail_if_complete_not_called((__int64)this)
      && !tip2::test_data_base<_tip_EyeControllerAppLaunchTest_id>::__fail_if_errors_reported(v2) )
    {
      v5 = *((_BYTE *)this + 17);
      v6 = v4 + 1;
      if ( v5 == (_BYTE)v4 + 1 )
      {
LABEL_5:
        v7 = tip2::details::reason_string((tip2::details *)"reason::settingsInvoke", v3);
        v9 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v9 + 152) != v10 )
          return;
        *(_BYTE *)(v9 + 152) = v8;
        *(_WORD *)(v9 + 154) = 3;
        goto LABEL_7;
      }
      if ( *((_BYTE *)this + 18) == v6 )
        goto LABEL_9;
      if ( *((_BYTE *)this + 21) == (_BYTE)v4 && !v5 && *((_BYTE *)this + 18) == (_BYTE)v4 )
      {
        v7 = tip2::details::reason_string((tip2::details *)"reason::launchOrTogglePackagedAppFailed", v3);
        v9 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v9 + 152) == v15 )
        {
          *(_BYTE *)(v9 + 152) = 3;
          *(_WORD *)(v9 + 154) = 4;
LABEL_7:
          *(_QWORD *)(v9 + 160) = v7;
        }
      }
      else
      {
        v16 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v16 + 152) == (_BYTE)v4 )
        {
          *(_BYTE *)(v16 + 152) = v6;
          *(_WORD *)(v16 + 154) = 0x8000;
          *(_QWORD *)(v16 + 160) = v4;
        }
      }
    }
  }
  else if ( !tip2::test_data_base<_tip_CopilotHardwareKeyInvokedTest_id>::__fail_if_complete_not_called((__int64)this)
         && !tip2::test_data_base<_tip_EyeControllerAppLaunchTest_id>::__fail_if_errors_reported(v17) )
  {
    if ( *((_BYTE *)this + 17) == 1 )
      goto LABEL_5;
    if ( *((_BYTE *)this + 18) != 1 )
    {
      v11 = tip2::details::reason_string((tip2::details *)"reason::hardwareKeyFallback", v3);
      v13 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v13 + 152) != v18 )
        return;
      *(_WORD *)(v13 + 154) = v12;
      goto LABEL_24;
    }
LABEL_9:
    v11 = tip2::details::reason_string((tip2::details *)"reason::searchInvoke", v3);
    v13 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v13 + 152) != v14 )
      return;
    *(_WORD *)(v13 + 154) = 2;
LABEL_24:
    *(_QWORD *)(v13 + 160) = v11;
    *(_BYTE *)(v13 + 152) = v12;
  }
}
