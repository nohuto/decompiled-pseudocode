/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_c14496d348cd0a3ba83c159c343acbdd_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x1800DECD0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnStreamStateChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x1800874A4 (-OnStreamStateChanged@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800DC70C (--1-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1-release_operati.c)
 *     ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800DF00C (-acquire@operation_guard@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVope.c)
 */

void __fastcall std::_Func_impl_no_alloc<_lambda_c14496d348cd0a3ba83c159c343acbdd_,void,bool>::_Do_call(
        __int64 a1,
        char *a2)
{
  char v3; // di
  volatile signed __int32 *v4; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  wil::operation_guard::acquire(*(_QWORD *)(a1 + 16), &v4);
  if ( v4 )
    BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::OnStreamStateChanged(
      *(_QWORD *)(a1 + 8),
      v3);
  __1__unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__QEAA_XZ(&v4);
}
