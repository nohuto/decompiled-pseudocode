/*
 * XREFs of IoDetachDevice @ 0x140437B10
 * Callers:
 *     DifIoDetachDeviceWrapper @ 0x14065B8F0 (DifIoDetachDeviceWrapper.c)
 *     ViFilterDispatchPnp @ 0x140C3C0A0 (ViFilterDispatchPnp.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     IopCompleteUnloadOrDelete @ 0x140437F84 (IopCompleteUnloadOrDelete.c)
 *     IovDetachDevice @ 0x140C20E4C (IovDetachDevice.c)
 */

void __stdcall IoDetachDevice(PDEVICE_OBJECT TargetDevice)
{
  KIRQL v2; // di
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (MmVerifierData & 0x10) != 0 )
    IovDetachDevice(TargetDevice, retaddr);
  TargetDevice->AttachedDevice->DeviceObjectExtension->AttachedTo = 0LL;
  DeviceObjectExtension = TargetDevice->DeviceObjectExtension;
  TargetDevice->AttachedDevice = 0LL;
  if ( (DeviceObjectExtension->ExtensionFlags & 7) == 0 || TargetDevice->ReferenceCount )
    KeReleaseQueuedSpinLock(0xAuLL, v2);
  else
    IopCompleteUnloadOrDelete((ULONG_PTR)TargetDevice);
}
