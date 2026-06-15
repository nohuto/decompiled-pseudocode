/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_69d42108dd5c64e5ae696b969e6cde78_@@X$$V@std@@EEAAXXZ @ 0x1800DEC30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800DC70C (--1-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1-release_operati.c)
 *     ?OnBidirectionalModeChanged@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@AEAAXXZ @ 0x1800DD45C (-OnBidirectionalModeChanged@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@Bluetoot.c)
 *     ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800DF00C (-acquire@operation_guard@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVope.c)
 */

void __fastcall std::_Func_impl_no_alloc<_lambda_69d42108dd5c64e5ae696b969e6cde78_,void,>::_Do_call(__int64 a1)
{
  volatile signed __int32 *v2; // [rsp+30h] [rbp+8h] BYREF

  wil::operation_guard::acquire(*(_QWORD *)(a1 + 16), &v2);
  if ( v2 )
    BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::OnBidirectionalModeChanged(*(_QWORD *)(a1 + 8));
  __1__unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__QEAA_XZ(&v2);
}
