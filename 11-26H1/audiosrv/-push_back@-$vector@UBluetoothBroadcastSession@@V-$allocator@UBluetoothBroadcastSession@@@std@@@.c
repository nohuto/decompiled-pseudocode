/*
 * XREFs of ?push_back@?$vector@UBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@QEAAX$$QEAUBluetoothBroadcastSession@@@Z @ 0x1800EE6FC
 * Callers:
 *     ?RetrieveBroadcastSession@BluetoothBroadcastProvider@@AEAAAEAUBluetoothBroadcastSession@@AEBU_GUID@@W4RBS_OPTION@1@@Z @ 0x1800ED1F0 (-RetrieveBroadcastSession@BluetoothBroadcastProvider@@AEAAAEAUBluetoothBroadcastSession@@AEBU_GU.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<BluetoothBroadcastSession>::push_back(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v5; // rcx
  char *result; // rax
  __int64 v7; // rdx

  v2 = a1[1];
  if ( v2 == a1[2] )
    return std::vector<BluetoothBroadcastSession>::_Emplace_reallocate<BluetoothBroadcastSession>(
             a1,
             a1[1],
             (__int128 *)a2);
  *(_OWORD *)v2 = *(_OWORD *)a2;
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 32);
  result = *(char **)(a2 + 24);
  *(_QWORD *)(a2 + 16) = 0LL;
  v7 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(v2 + 24) = result;
  *(_QWORD *)(v2 + 32) = v5;
  *(_QWORD *)(v2 + 40) = v7;
  a1[1] += 48LL;
  return result;
}
