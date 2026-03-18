/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x14026F260
 * Callers:
 *     PipSetDevNodeStateFlags @ 0x1407A5540 (PipSetDevNodeStateFlags.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1407B8904 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PopRegisterTargetDeviceProtection @ 0x1407CB3E4 (PopRegisterTargetDeviceProtection.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1407CBED8 (PopRegisterCoolingExtensionProtection.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1409BB670 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x140A56BA0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140A5D320 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x140A5D5D0 (FsRtlReleaseFileForCcFlush.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140AE8F00 (IoWMIDeviceObjectToInstanceName.c)
 * Callees:
 *     IopGetDeviceAttachmentBase @ 0x14026F314 (IopGetDeviceAttachmentBase.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  KIRQL v2; // di
  struct _DEVICE_OBJECT *DeviceAttachmentBase; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (struct _DEVICE_OBJECT *)IopGetDeviceAttachmentBase(DeviceObject);
  ObfReferenceObjectWithTag(DeviceAttachmentBase, 0x746C6644u);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return DeviceAttachmentBase;
}
