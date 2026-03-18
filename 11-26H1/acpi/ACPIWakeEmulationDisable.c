/*
 * XREFs of ACPIWakeEmulationDisable @ 0x140033520
 * Callers:
 *     ACPIDereferenceWaitWakePowerRequest @ 0x140032B58 (ACPIDereferenceWaitWakePowerRequest.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x140032C00 (ACPIDeviceCancelWaitWakeIrp.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x14004E18C (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     ACPIDisconnectWakeInterrupt @ 0x140050B2C (ACPIDisconnectWakeInterrupt.c)
 */

__int64 __fastcall ACPIWakeEmulationDisable(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rdi

  result = *(unsigned int *)(a1 + 116);
  if ( (_DWORD)result )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (unsigned int)result > 1 )
      v2 = (_QWORD *)*v2;
    v3 = *(unsigned int *)(a1 + 116);
    do
    {
      result = ACPIDisconnectWakeInterrupt(v2);
      v2 += 5;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
