/*
 * XREFs of ?_Change_array@?$vector@UBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@AEAAXQEAUBluetoothBroadcastSession@@_K1@Z @ 0x1800ED834
 * Callers:
 *     ??$_Emplace_reallocate@UBluetoothBroadcastSession@@@?$vector@UBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@AEAAPEAUBluetoothBroadcastSession@@QEAU2@$$QEAU2@@Z @ 0x1800E872C (--$_Emplace_reallocate@UBluetoothBroadcastSession@@@-$vector@UBluetoothBroadcastSession@@V-$allo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@YAXPEAUBluetoothBroadcastSession@@QEAU1@AEAV?$allocator@UBluetoothBroadcastSession@@@0@@Z @ 0x1800E86BC (--$_Destroy_range@V-$allocator@UBluetoothBroadcastSession@@@std@@@std@@YAXPEAUBluetoothBroadcast.c)
 */

__int64 __fastcall std::vector<BluetoothBroadcastSession>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  BluetoothBroadcastSession *v6; // rcx
  __int64 result; // rax

  v6 = *(BluetoothBroadcastSession **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<BluetoothBroadcastSession>>(v6, *(BluetoothBroadcastSession **)(a1 + 8));
    std::_Deallocate<16>(
      *(void **)a1,
      (struct std::nothrow_t *)(16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4)));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 48 * a3;
  result = a2 + 48 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
