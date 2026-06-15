/*
 * XREFs of ??1_Reallocation_guard@?$vector@UBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@QEAA@XZ @ 0x1800EA0D0
 * Callers:
 *     ??$_Emplace_reallocate@UBluetoothBroadcastSession@@@?$vector@UBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@AEAAPEAUBluetoothBroadcastSession@@QEAU2@$$QEAU2@@Z @ 0x1800E872C (--$_Emplace_reallocate@UBluetoothBroadcastSession@@@-$vector@UBluetoothBroadcastSession@@V-$allo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@YAXPEAUBluetoothBroadcastSession@@QEAU1@AEAV?$allocator@UBluetoothBroadcastSession@@@0@@Z @ 0x1800E86BC (--$_Destroy_range@V-$allocator@UBluetoothBroadcastSession@@@std@@@std@@YAXPEAUBluetoothBroadcast.c)
 */

void __fastcall std::vector<BluetoothBroadcastSession>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<BluetoothBroadcastSession>>(
      *(BluetoothBroadcastSession **)(a1 + 24),
      *(BluetoothBroadcastSession **)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(48LL * *(_QWORD *)(a1 + 16)));
  }
}
