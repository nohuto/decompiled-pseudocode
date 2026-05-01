/*
 * XREFs of ?IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV?$shared_ptr@VPinRequestContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1802849C8
 * Callers:
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x1800F545C (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805DE960 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@1@XZ @ 0x180280FBC (--C-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802846CC (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ??$RequestorAllowedChecked@AEA_NW4RequestorAllowedCheckResult@PinManagerTelemetry@@@PinManagerTelemetry@@SAXAEA_N$$QEAW4RequestorAllowedCheckResult@0@@Z @ 0x180284AF8 (--$RequestorAllowedChecked@AEA_NW4RequestorAllowedCheckResult@PinManagerTelemetry@@@PinManagerTe.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180288564 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements @ 0x1805E580C (_anonymous_namespace_--DoesRequestorMeetPinningForegroundRequirements.c)
 *     _anonymous_namespace_::IsAppsFolderEntryPresent @ 0x1805E6E7C (_anonymous_namespace_--IsAppsFolderEntryPresent.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::IsPinRequestorAllowed(
        __int64 a1,
        void *a2,
        _QWORD *a3,
        char a4,
        __int64 a5)
{
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v9; // rcx
  void *v10[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v13[8]; // [rsp+50h] [rbp-10h] BYREF

  v10[0] = a3;
  v13[0] = a4;
  if ( a4 )
  {
    v11 = *(_OWORD *)PinRequestContext::RequestorBestAvailableAppId(*a3, v12);
    if ( !(unsigned __int8)anonymous_namespace_::IsAppsFolderEntryPresent(&v11) )
    {
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                     a5,
                     (__int64 *)v10)
                + 1316) = 5;
      tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v10);
      LODWORD(v10[0]) = 1;
LABEL_6:
      PinManagerTelemetry::RequestorAllowedChecked<bool &,enum PinManagerTelemetry::RequestorAllowedCheckResult>(
        v13,
        v10);
      v7 = (std::_Ref_count_base *)a3[1];
      if ( v7 )
        std::_Ref_count_base::_Decref(v7);
      return 0;
    }
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v11, a3);
    if ( !(unsigned __int8)anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements(a2) )
    {
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                     a5,
                     (__int64 *)v10)
                + 1316) = 4;
      tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v10);
      LODWORD(v10[0]) = 2;
      goto LABEL_6;
    }
  }
  LODWORD(v10[0]) = 0;
  PinManagerTelemetry::RequestorAllowedChecked<bool &,enum PinManagerTelemetry::RequestorAllowedCheckResult>(v13, v10);
  v9 = (std::_Ref_count_base *)a3[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return 1;
}
