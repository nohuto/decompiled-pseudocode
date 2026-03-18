/*
 * XREFs of PipKsrDeferredHardwareInit @ 0x1407B2E04
 * Callers:
 *     PipKsrCallback @ 0x1407B2D10 (PipKsrCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     PnpRequestDeviceAction @ 0x140482588 (PnpRequestDeviceAction.c)
 *     IoInvalidateDeviceRelations @ 0x1404D2B60 (IoInvalidateDeviceRelations.c)
 *     MmEnumerateSystemImages @ 0x1404E5150 (MmEnumerateSystemImages.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpWaitForQuiescentDeviceActionQueue @ 0x1407ACE7C (PnpWaitForQuiescentDeviceActionQueue.c)
 *     PnpMarkHalDeviceNode @ 0x140CC3950 (PnpMarkHalDeviceNode.c)
 */

__int64 PipKsrDeferredHardwareInit()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 result; // rax

  if ( !IopInitHalDeviceNode )
  {
    KeWaitForSingleObject(&KiPhase1InitializationComplete, Executive, 0, 0, 0LL);
    PnpRequestDeviceAction(0LL, 0x1Cu, 0, 0LL, 0LL, 0LL, 0LL);
    KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
    guard_dispatch_icall_no_overrides(v1, v0);
    guard_dispatch_icall_no_overrides(58LL, 8LL);
    PnpMarkHalDeviceNode(0LL);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(IopInitHalDeviceNode + 32), BusRelations);
    PnpWaitForQuiescentDeviceActionQueue();
    result = MmEnumerateSystemImages((__int64)MiFreeBootDriverInitializationCode, 0LL);
    stru_140E2D150.SchedulerApcFill3[9] = 1;
  }
  return result;
}
