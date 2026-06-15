/*
 * XREFs of ??4BluetoothBroadcastSession@@QEAAAEAU0@$$QEAU0@@Z @ 0x1800EA26C
 * Callers:
 *     ?OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800EC484 (-OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@.c)
 *     ?erase@?$vector@UBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UBluetoothBroadcastSession@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UBluetoothBroadcastSession@@@std@@@std@@@2@0@Z @ 0x1800EDDC4 (-erase@-$vector@UBluetoothBroadcastSession@@V-$allocator@UBluetoothBroadcastSession@@@std@@@std@.c)
 * Callees:
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180053E8C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?_Tidy@?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1800B09D8 (-_Tidy@-$vector@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemF.c)
 */

__int64 __fastcall BluetoothBroadcastSession::operator=(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx

  *(_OWORD *)a1 = *(_OWORD *)a2;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
    (_QWORD *)(a1 + 16),
    (_QWORD *)(a2 + 16));
  v4 = (_QWORD *)(a2 + 24);
  if ( (_QWORD *)(a1 + 24) != v4 )
  {
    std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::_Tidy(a1 + 24);
    *(_QWORD *)(a1 + 24) = *v4;
    *(_QWORD *)(a1 + 32) = v4[1];
    *(_QWORD *)(a1 + 40) = v4[2];
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
  }
  return a1;
}
