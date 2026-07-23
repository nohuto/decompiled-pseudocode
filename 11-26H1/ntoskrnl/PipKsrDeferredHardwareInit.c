/*
 * XREFs of PipKsrDeferredHardwareInit @ 0x1407B5E64
 * Callers:
 *     PipKsrCallback @ 0x1407B5D70 (PipKsrCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     IoInvalidateDeviceRelations @ 0x1404CC3D0 (IoInvalidateDeviceRelations.c)
 *     MmEnumerateSystemImages @ 0x1404DE6F0 (MmEnumerateSystemImages.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpWaitForQuiescentDeviceActionQueue @ 0x1407AFEE0 (PnpWaitForQuiescentDeviceActionQueue.c)
 *     PnpMarkHalDeviceNode @ 0x140CC9A24 (PnpMarkHalDeviceNode.c)
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
    stru_140E2D2D0.SchedulerApcFill3[9] = 1;
  }
  return result;
}
