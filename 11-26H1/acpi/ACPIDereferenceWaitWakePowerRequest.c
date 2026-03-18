/*
 * XREFs of ACPIDereferenceWaitWakePowerRequest @ 0x140032B58
 * Callers:
 *     ACPIDeviceCompleteRequest @ 0x140019A30 (ACPIDeviceCompleteRequest.c)
 *     ACPIDeviceInitializePowerRequest @ 0x140025FA4 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1400328B0 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x140032AB0 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 *     ACPIWakeDisconnectWakeInterrupts @ 0x14003C468 (ACPIWakeDisconnectWakeInterrupts.c)
 * Callees:
 *     ACPIWakeEmulationDisable @ 0x140033520 (ACPIWakeEmulationDisable.c)
 *     ACPIFreeWaitWakePowerRequest @ 0x140033B30 (ACPIFreeWaitWakePowerRequest.c)
 */

void __fastcall ACPIDereferenceWaitWakePowerRequest(char *Entry)
{
  KIRQL v2; // al
  int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v3 = --*((_DWORD *)Entry + 28);
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  if ( !v3 )
  {
    ACPIWakeEmulationDisable(Entry);
    if ( KeGetCurrentIrql() > 1u )
    {
      *((_QWORD *)Entry + 18) = Entry;
      *((_QWORD *)Entry + 17) = ACPIFreeWaitWakePowerRequest;
      *((_QWORD *)Entry + 15) = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(Entry + 120), DelayedWorkQueue);
    }
    else
    {
      ACPIFreeWaitWakePowerRequest(Entry);
    }
  }
}
