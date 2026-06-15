/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800DC70C
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800DC700 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1.c)
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x1800DC740 (--1operation_guard@wil@@QEAA@XZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_0e0ad7cefe12d27d8cbf1129b6f60fff_@@X$$V@std@@EEAAXXZ @ 0x1800DEB70 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_0e0ad7cefe12d27d8cbf1129b6f60fff_@@X$$V@std@@EEAAXXZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_200caaf72e590f0a6902e90b77a591f6_@@X$$V@std@@EEAAXXZ @ 0x1800DEBC0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_200caaf72e590f0a6902e90b77a591f6_@@X$$V@std@@EEAAXXZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_69d42108dd5c64e5ae696b969e6cde78_@@X$$V@std@@EEAAXXZ @ 0x1800DEC30 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_69d42108dd5c64e5ae696b969e6cde78_@@X$$V@std@@EEAAXXZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_a5707e8136b0bf7dfeec04d35a40fcb5_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x1800DEC80 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_a5707e8136b0bf7dfeec04d35a40fcb5_@@X_N@std@@EEAAX$$QEA_.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_c14496d348cd0a3ba83c159c343acbdd_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x1800DECD0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_c14496d348cd0a3ba83c159c343acbdd_@@X_N@std@@EEAAX$$QEA_.c)
 * Callees:
 *     <none>
 */

void __fastcall __1__unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__QEAA_XZ(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx

  v1 = *a1;
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 1, 0xFFFFFFFF) == 1 )
    {
      *v1 = 1;
      WakeByAddressAll((PVOID)v1);
    }
  }
}
