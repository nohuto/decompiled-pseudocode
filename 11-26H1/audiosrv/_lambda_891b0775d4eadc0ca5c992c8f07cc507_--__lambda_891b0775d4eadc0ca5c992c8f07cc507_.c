/*
 * XREFs of _lambda_891b0775d4eadc0ca5c992c8f07cc507_::__lambda_891b0775d4eadc0ca5c992c8f07cc507_ @ 0x1800E9F58
 * Callers:
 *     ?OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800EC560 (-OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_::_Delete_this @ 0x1800EDA40 (std--_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_--_Delete_this.c)
 *     _BluetoothBroadcastProvider::OnEndpointPropertyChanged_::_1_::dtor$2 @ 0x1801691F3 (_BluetoothBroadcastProvider--OnEndpointPropertyChanged_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall lambda_891b0775d4eadc0ca5c992c8f07cc507_::__lambda_891b0775d4eadc0ca5c992c8f07cc507_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  return wil::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>::~com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>(a1);
}
