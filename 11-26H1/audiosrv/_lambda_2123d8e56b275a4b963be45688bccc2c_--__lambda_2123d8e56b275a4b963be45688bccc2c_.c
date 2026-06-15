/*
 * XREFs of _lambda_2123d8e56b275a4b963be45688bccc2c_::__lambda_2123d8e56b275a4b963be45688bccc2c_ @ 0x1800E9F28
 * Callers:
 *     ?OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800EC690 (-OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z.c)
 *     std::_Func_impl_no_alloc__lambda_2123d8e56b275a4b963be45688bccc2c__void_::_Delete_this @ 0x1800EDA00 (std--_Func_impl_no_alloc__lambda_2123d8e56b275a4b963be45688bccc2c__void_--_Delete_this.c)
 *     _BluetoothBroadcastProvider::OnEndpointStateChanged_::_1_::dtor$2 @ 0x180169254 (_BluetoothBroadcastProvider--OnEndpointStateChanged_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VBluetoothBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E9FA0 (--1-$com_ptr_t@VBluetoothBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall lambda_2123d8e56b275a4b963be45688bccc2c_::__lambda_2123d8e56b275a4b963be45688bccc2c_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  wil::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>::~com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>(a1 + 32);
  v2 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
