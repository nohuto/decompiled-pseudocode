/*
 * XREFs of ??1?$com_ptr_t@VBluetoothBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E9FA0
 * Callers:
 *     _lambda_2123d8e56b275a4b963be45688bccc2c_::__lambda_2123d8e56b275a4b963be45688bccc2c_ @ 0x1800E9F28 (_lambda_2123d8e56b275a4b963be45688bccc2c_--__lambda_2123d8e56b275a4b963be45688bccc2c_.c)
 *     _lambda_891b0775d4eadc0ca5c992c8f07cc507_::__lambda_891b0775d4eadc0ca5c992c8f07cc507_ @ 0x1800E9F58 (_lambda_891b0775d4eadc0ca5c992c8f07cc507_--__lambda_891b0775d4eadc0ca5c992c8f07cc507_.c)
 *     ?OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800EC560 (-OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     ?OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800EC690 (-OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z.c)
 *     _BluetoothBroadcastProvider::OnEndpointPropertyChanged_::_1_::dtor$1 @ 0x1801691E1 (_BluetoothBroadcastProvider--OnEndpointPropertyChanged_--_1_--dtor$1.c)
 *     _BluetoothBroadcastProvider::OnEndpointStateChanged_::_1_::dtor$1 @ 0x180169242 (_BluetoothBroadcastProvider--OnEndpointStateChanged_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800ECD50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastProvid.c)
 */

__int64 __fastcall wil::com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>::~com_ptr_t<BluetoothBroadcastProvider,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMulticastProvider>::Release(v1);
  return result;
}
