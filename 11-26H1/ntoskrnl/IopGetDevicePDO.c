/*
 * XREFs of IopGetDevicePDO @ 0x14026F1F0
 * Callers:
 *     IoAllowExecution @ 0x14026F1B4 (IoAllowExecution.c)
 *     IoRevokeHandlesForProcess @ 0x14052B668 (IoRevokeHandlesForProcess.c)
 *     IopGetNumaNodeInformation @ 0x1407799BC (IopGetNumaNodeInformation.c)
 *     IoRegisterContainerNotification @ 0x140797260 (IoRegisterContainerNotification.c)
 *     IopGetSetSecurityObject @ 0x1408EC450 (IopGetSetSecurityObject.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 * Callees:
 *     IopGetDeviceAttachmentBase @ 0x14026F314 (IopGetDeviceAttachmentBase.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 */

_DWORD *__fastcall IopGetDevicePDO(__int64 a1)
{
  KIRQL v2; // di
  _DWORD *DeviceAttachmentBase; // rax
  _DWORD *v4; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (_DWORD *)IopGetDeviceAttachmentBase(a1);
  v4 = DeviceAttachmentBase;
  if ( (DeviceAttachmentBase[12] & 0x1000) != 0 )
    ObfReferenceObjectWithTag(DeviceAttachmentBase, 0x746C6644u);
  else
    v4 = 0LL;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v4;
}
