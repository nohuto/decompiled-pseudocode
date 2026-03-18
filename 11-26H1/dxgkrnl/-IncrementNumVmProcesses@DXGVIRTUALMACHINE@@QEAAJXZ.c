/*
 * XREFs of ?IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ @ 0x1401F6460
 * Callers:
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224650 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::IncrementNumVmProcesses(DXGVIRTUALMACHINE *this)
{
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this) <= 0xFFFF )
    return 0LL;
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 6720;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Too many VM processes created", 6720LL, 0LL, 0LL, 0LL, 0LL);
  return 3221225473LL;
}
