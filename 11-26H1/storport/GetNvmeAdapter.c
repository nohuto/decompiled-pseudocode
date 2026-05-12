/*
 * XREFs of GetNvmeAdapter @ 0x140072360
 * Callers:
 *     RaIsDeviceDFxPoweredDown @ 0x14001E5D8 (RaIsDeviceDFxPoweredDown.c)
 *     RaFlushDFxQueue @ 0x1400731D4 (RaFlushDFxQueue.c)
 *     RaInsertDFxQueue @ 0x1400732C0 (RaInsertDFxQueue.c)
 *     RaProcessDFxPendingIrp @ 0x140073508 (RaProcessDFxPendingIrp.c)
 *     RaProcessDFxQueuedRequests @ 0x140073A90 (RaProcessDFxQueuedRequests.c)
 *     NvmeAdapterQueryCapabilitiesIrpCompletion @ 0x1400DB190 (NvmeAdapterQueryCapabilitiesIrpCompletion.c)
 *     NvmeAdapterWaitForOutstandingIoComplete @ 0x1400E0D70 (NvmeAdapterWaitForOutstandingIoComplete.c)
 *     NvmeAdapterPowerDownDeviceCompletion @ 0x140124470 (NvmeAdapterPowerDownDeviceCompletion.c)
 *     NvmeAdapterPowerUpDeviceCompletion @ 0x140124D20 (NvmeAdapterPowerUpDeviceCompletion.c)
 *     NvmeAdapterQueryDevicePowerCompletionRoutine @ 0x140125430 (NvmeAdapterQueryDevicePowerCompletionRoutine.c)
 *     NvmeAdapterQuerySystemPowerCompletionRoutine @ 0x140125BB0 (NvmeAdapterQuerySystemPowerCompletionRoutine.c)
 *     NvmeAdapterSetDevicePowerCompletionRoutine @ 0x1401260E0 (NvmeAdapterSetDevicePowerCompletionRoutine.c)
 *     NvmeAdapterSetSystemPowerCompletion @ 0x140126A40 (NvmeAdapterSetSystemPowerCompletion.c)
 *     NvmeAdapterStopOnPowerdown @ 0x140126C80 (NvmeAdapterStopOnPowerdown.c)
 *     NvmeRegisterPerfStates @ 0x14012AEB0 (NvmeRegisterPerfStates.c)
 *     StorInitializeEventNotificationResources @ 0x1401AFE68 (StorInitializeEventNotificationResources.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall GetNvmeAdapter(__int64 a1)
{
  _DWORD *result; // rax

  if ( !a1 )
    return 0LL;
  result = *(_DWORD **)(a1 + 64);
  if ( *result != 1314275652 )
    return 0LL;
  return result;
}
