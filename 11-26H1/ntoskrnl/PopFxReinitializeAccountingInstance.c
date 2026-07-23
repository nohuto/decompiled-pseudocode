/*
 * XREFs of PopFxReinitializeAccountingInstance @ 0x1404DBA80
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1404DB10C (PopPepInitializeVetoMasks.c)
 *     PopFxClearDeviceConstraints @ 0x1404DB710 (PopFxClearDeviceConstraints.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1404DB8B8 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PoFxStartDevicePowerManagement @ 0x1404E3FF0 (PoFxStartDevicePowerManagement.c)
 *     PopFxDisableBasicAccountingWorker @ 0x140607880 (PopFxDisableBasicAccountingWorker.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall PopFxReinitializeAccountingInstance(__int64 a1, int a2)
{
  if ( !a2 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
  }
  memset_0((void *)(a1 + 32), 0, 0x60uLL);
  memset_0((void *)(a1 + 128), 0, 0x60uLL);
  *(_DWORD *)(a1 + 16) = a2;
  if ( a2 == 2 && !_InterlockedExchange(&dword_140E676DC, 1) )
  {
    PopFxBlockingDeviceListLock.OtherOperationCount = 0LL;
    PopFxBlockingDeviceListLock.WriteOperationCount = (__int64)PopFxDisableBasicAccountingWorker;
    PopFxBlockingDeviceListLock.InGlobalForegroundList = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopFxBlockingDeviceListLock.InGlobalForegroundList, DelayedWorkQueue);
  }
}
