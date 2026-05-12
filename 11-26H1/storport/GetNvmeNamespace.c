/*
 * XREFs of GetNvmeNamespace @ 0x14005CC1C
 * Callers:
 *     RaFlushDFxQueue @ 0x1400731D4 (RaFlushDFxQueue.c)
 *     RaInsertDFxQueue @ 0x1400732C0 (RaInsertDFxQueue.c)
 *     RaProcessDFxPendingIrp @ 0x140073508 (RaProcessDFxPendingIrp.c)
 *     RaProcessDFxQueuedRequests @ 0x140073A90 (RaProcessDFxQueuedRequests.c)
 *     NvmeNamespaceDereferenceDeviceObject @ 0x1401033C0 (NvmeNamespaceDereferenceDeviceObject.c)
 *     NvmeNamespaceStartBypassIo @ 0x140113AE0 (NvmeNamespaceStartBypassIo.c)
 *     NvmeNamespaceSetDevicePowerDownCompletion @ 0x1401295D0 (NvmeNamespaceSetDevicePowerDownCompletion.c)
 *     NvmeRegisterPerfStates @ 0x14012AEB0 (NvmeRegisterPerfStates.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall GetNvmeNamespace(__int64 a1)
{
  _DWORD *result; // rax

  if ( !a1 )
    return 0LL;
  result = *(_DWORD **)(a1 + 64);
  if ( *result != 1314278989 )
    return 0LL;
  return result;
}
