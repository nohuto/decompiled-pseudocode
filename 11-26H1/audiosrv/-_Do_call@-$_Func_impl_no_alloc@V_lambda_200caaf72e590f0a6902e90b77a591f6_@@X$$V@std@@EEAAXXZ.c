/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_200caaf72e590f0a6902e90b77a591f6_@@X$$V@std@@EEAAXXZ @ 0x1800DEBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800DC70C (--1-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1-release_operati.c)
 *     ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800DF00C (-acquire@operation_guard@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVope.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc<_lambda_200caaf72e590f0a6902e90b77a591f6_,void,>::_Do_call(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  volatile signed __int32 *v4; // [rsp+30h] [rbp+8h] BYREF

  wil::operation_guard::acquire(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL), &v4);
  if ( v4 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *(_QWORD *)(v2 + 128);
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v3 + 24LL))(v3, 0LL, v2 + 84);
  }
  __1__unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__QEAA_XZ(&v4);
}
