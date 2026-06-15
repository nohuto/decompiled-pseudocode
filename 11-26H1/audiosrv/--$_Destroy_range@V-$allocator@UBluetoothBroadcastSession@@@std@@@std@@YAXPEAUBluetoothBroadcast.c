/*
 * XREFs of ??$_Destroy_range@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@YAXPEAUBluetoothBroadcastSession@@QEAU1@AEAV?$allocator@UBluetoothBroadcastSession@@@0@@Z @ 0x1800E86BC
 * Callers:
 *     ??$_Uninitialized_move@PEAUBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@YAPEAUBluetoothBroadcastSession@@QEAU1@0PEAU1@AEAV?$allocator@UBluetoothBroadcastSession@@@0@@Z @ 0x1800E8D94 (--$_Uninitialized_move@PEAUBluetoothBroadcastSession@@V-$allocator@UBluetoothBroadcastSession@@@.c)
 *     ??1BluetoothBroadcastProvider@@UEAA@XZ @ 0x1800EA010 (--1BluetoothBroadcastProvider@@UEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@UBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@QEAA@XZ @ 0x1800EA0D0 (--1_Reallocation_guard@-$vector@UBluetoothBroadcastSession@@V-$allocator@UBluetoothBroadcastSess.c)
 *     ?_Change_array@?$vector@UBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@AEAAXQEAUBluetoothBroadcastSession@@_K1@Z @ 0x1800ED834 (-_Change_array@-$vector@UBluetoothBroadcastSession@@V-$allocator@UBluetoothBroadcastSession@@@st.c)
 *     ?erase@?$vector@UBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UBluetoothBroadcastSession@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UBluetoothBroadcastSession@@@std@@@std@@@2@0@Z @ 0x1800EDDC4 (-erase@-$vector@UBluetoothBroadcastSession@@V-$allocator@UBluetoothBroadcastSession@@@std@@@std@.c)
 * Callees:
 *     ??1BluetoothBroadcastSession@@QEAA@XZ @ 0x1800EA0A8 (--1BluetoothBroadcastSession@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<BluetoothBroadcastSession>>(
        BluetoothBroadcastSession *this,
        BluetoothBroadcastSession *a2)
{
  BluetoothBroadcastSession *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      BluetoothBroadcastSession::~BluetoothBroadcastSession(v3);
      v3 = (BluetoothBroadcastSession *)((char *)v3 + 48);
    }
    while ( v3 != a2 );
  }
}
