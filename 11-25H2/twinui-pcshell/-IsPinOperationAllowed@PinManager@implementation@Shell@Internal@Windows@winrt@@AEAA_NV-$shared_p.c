/*
 * XREFs of ?IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV?$shared_ptr@VPinOperationContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18028A8C4
 * Callers:
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x1800AFF8C (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805BB040 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?IsPinOperationBlocked@PinHistory@@QEBA_NV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1801EBC78 (-IsPinOperationBlocked@PinHistory@@QEBA_NV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028A668 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A728 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uer.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18028A9BC (-reset@-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028A9E0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028ADE8 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??$OperationAllowedChecked@AEA_NW4OperationAllowedCheckResult@PinManagerTelemetry@@@PinManagerTelemetry@@SAXAEA_N$$QEAW4OperationAllowedCheckResult@0@@Z @ 0x18028FD9C (--$OperationAllowedChecked@AEA_NW4OperationAllowedCheckResult@PinManagerTelemetry@@@PinManagerTe.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::IsPinOperationAllowed(
        __int64 a1,
        _QWORD *a2,
        char a3,
        __int64 a4)
{
  _QWORD *v6; // rax
  RTL_SRWLOCK *v7; // r9
  __int64 v8; // rdi
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v11; // rcx
  void *v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v14[8]; // [rsp+38h] [rbp-30h] BYREF

  v14[0] = a3;
  v6 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v13, a2);
  if ( PinHistory::IsPinOperationBlocked(v7 + 16, (_QWORD **)v6) )
  {
    v8 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(a4);
    v12 = (void *)v8;
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 1328));
    tip2::details::shared_data<0,0,1>::begin_update(v8 + 8);
    *(_DWORD *)(v8 + 1308) = 3;
    tip2::details::shared_data<0,0,0>::end_update(v8 + 8);
    wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&v12);
    wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(&v12);
    LODWORD(v12) = 1;
    PinManagerTelemetry::OperationAllowedChecked<bool &,enum PinManagerTelemetry::OperationAllowedCheckResult>(
      v14,
      &v12);
    v9 = (std::_Ref_count_base *)a2[1];
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    return 0;
  }
  else
  {
    LODWORD(v12) = 0;
    PinManagerTelemetry::OperationAllowedChecked<bool &,enum PinManagerTelemetry::OperationAllowedCheckResult>(
      v14,
      &v12);
    v11 = (std::_Ref_count_base *)a2[1];
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    return 1;
  }
}
