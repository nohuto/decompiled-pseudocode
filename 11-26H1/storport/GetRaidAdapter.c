/*
 * XREFs of GetRaidAdapter @ 0x140010A8C
 * Callers:
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x14000EF90 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x14000F6F0 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x14000F980 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidAdapterStopOnPowerdown @ 0x140010A10 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x140045360 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x14004B660 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidRegisterPerfStates @ 0x140051DCC (RaidRegisterPerfStates.c)
 *     RaFlushDFxQueue @ 0x1400731D4 (RaFlushDFxQueue.c)
 *     RaInsertDFxQueue @ 0x1400732C0 (RaInsertDFxQueue.c)
 *     RaProcessDFxPendingIrp @ 0x140073508 (RaProcessDFxPendingIrp.c)
 *     RaProcessDFxQueuedRequests @ 0x140073A90 (RaProcessDFxQueuedRequests.c)
 *     StorInitializeEventNotificationResources @ 0x1401AFE68 (StorInitializeEventNotificationResources.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall GetRaidAdapter(__int64 a1)
{
  _DWORD *result; // rax

  if ( !a1 )
    return 0LL;
  result = *(_DWORD **)(a1 + 64);
  if ( *result != 1094997074 )
    return 0LL;
  return result;
}
