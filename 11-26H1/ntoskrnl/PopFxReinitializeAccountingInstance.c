/*
 * XREFs of PopFxReinitializeAccountingInstance @ 0x1404E23A0
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1404E1A2C (PopPepInitializeVetoMasks.c)
 *     PopFxClearDeviceConstraints @ 0x1404E2030 (PopFxClearDeviceConstraints.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1404E21D8 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PoFxStartDevicePowerManagement @ 0x1404EAC40 (PoFxStartDevicePowerManagement.c)
 *     PopFxDisableBasicAccountingWorker @ 0x140604D80 (PopFxDisableBasicAccountingWorker.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
  if ( a2 == 2 && !_InterlockedExchange((volatile __int32 *)&stru_140E66FF0.SchedulerAssistYieldBoostCount, 1) )
  {
    stru_140F12420.LastXStateSaveDebugInfo = 0LL;
    stru_140F12420.Spare18 = (unsigned __int64)PopFxDisableBasicAccountingWorker;
    *(_QWORD *)&stru_140F12420.WaitBlockFill11[160] = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140F12420.WaitBlockFill11[160], DelayedWorkQueue);
  }
}
