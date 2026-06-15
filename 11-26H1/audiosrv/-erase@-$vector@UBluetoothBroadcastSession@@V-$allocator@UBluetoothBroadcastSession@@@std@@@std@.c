/*
 * XREFs of ?erase@?$vector@UBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UBluetoothBroadcastSession@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UBluetoothBroadcastSession@@@std@@@std@@@2@0@Z @ 0x1800EDDC4
 * Callers:
 *     ?OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@PEA_N@Z @ 0x1800EC484 (-OnBluetoothRenderEndpointInactivation@BluetoothBroadcastProvider@@AEAAJPEBGPEAUIPropertyStore@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@YAXPEAUBluetoothBroadcastSession@@QEAU1@AEAV?$allocator@UBluetoothBroadcastSession@@@0@@Z @ 0x1800E86BC (--$_Destroy_range@V-$allocator@UBluetoothBroadcastSession@@@std@@@std@@YAXPEAUBluetoothBroadcast.c)
 *     ??4BluetoothBroadcastSession@@QEAAAEAU0@$$QEAU0@@Z @ 0x1800EA26C (--4BluetoothBroadcastSession@@QEAAAEAU0@$$QEAU0@@Z.c)
 */

BluetoothBroadcastSession **__fastcall std::vector<BluetoothBroadcastSession>::erase(
        __int64 a1,
        BluetoothBroadcastSession **a2,
        BluetoothBroadcastSession *a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v8; // r15
  BluetoothBroadcastSession *v9; // rdi
  BluetoothBroadcastSession **result; // rax

  v4 = a4;
  if ( a3 != (BluetoothBroadcastSession *)a4 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = a3;
    if ( a4 != v8 )
    {
      do
      {
        BluetoothBroadcastSession::operator=((__int64)v9, v4);
        v9 = (BluetoothBroadcastSession *)((char *)v9 + 48);
        v4 += 48LL;
      }
      while ( v4 != v8 );
    }
    std::_Destroy_range<std::allocator<BluetoothBroadcastSession>>(v9, *(BluetoothBroadcastSession **)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
