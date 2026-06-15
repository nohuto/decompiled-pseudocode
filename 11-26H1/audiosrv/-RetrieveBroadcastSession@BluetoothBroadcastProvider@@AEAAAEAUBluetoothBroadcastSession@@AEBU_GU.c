/*
 * XREFs of ?RetrieveBroadcastSession@BluetoothBroadcastProvider@@AEAAAEAUBluetoothBroadcastSession@@AEBU_GUID@@W4RBS_OPTION@1@@Z @ 0x1800ED1F0
 * Callers:
 *     ?OnBluetoothRenderEndpointActivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800EC2E0 (-OnBluetoothRenderEndpointActivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PE.c)
 *     ?OnMulticastChildSessionDescriptorKeyChanged@BluetoothBroadcastProvider@@AEAAJPEBG@Z @ 0x1800EC7CC (-OnMulticastChildSessionDescriptorKeyChanged@BluetoothBroadcastProvider@@AEAAJPEBG@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??1BluetoothBroadcastSession@@QEAA@XZ @ 0x1800EA0A8 (--1BluetoothBroadcastSession@@QEAA@XZ.c)
 *     ?push_back@?$vector@UBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@QEAAX$$QEAUBluetoothBroadcastSession@@@Z @ 0x1800EE6FC (-push_back@-$vector@UBluetoothBroadcastSession@@V-$allocator@UBluetoothBroadcastSession@@@std@@@.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall BluetoothBroadcastProvider::RetrieveBroadcastSession(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *i; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v7 = v4;
  for ( i = *(_QWORD **)(a1 + 64); i != *(_QWORD **)(a1 + 72); i += 6 )
  {
    if ( *i == *a2 && i[1] == a2[1] )
      goto LABEL_7;
  }
  memset(&v8[1], 0, 32);
  v8[0] = *(_OWORD *)a2;
  std::vector<BluetoothBroadcastSession>::push_back(a1 + 64, v8);
  i = (_QWORD *)(*(_QWORD *)(a1 + 72) - 48LL);
  BluetoothBroadcastSession::~BluetoothBroadcastSession((void **)v8);
LABEL_7:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v7);
  return i;
}
