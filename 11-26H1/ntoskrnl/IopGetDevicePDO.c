/*
 * XREFs of IopGetDevicePDO @ 0x14026E760
 * Callers:
 *     IoAllowExecution @ 0x14026E724 (IoAllowExecution.c)
 *     IoRevokeHandlesForProcess @ 0x14052DB88 (IoRevokeHandlesForProcess.c)
 *     IopGetNumaNodeInformation @ 0x14077C8EC (IopGetNumaNodeInformation.c)
 *     IoRegisterContainerNotification @ 0x140799D90 (IoRegisterContainerNotification.c)
 *     IopGetSetSecurityObject @ 0x1408F2A10 (IopGetSetSecurityObject.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 * Callees:
 *     IopGetDeviceAttachmentBase @ 0x14026E884 (IopGetDeviceAttachmentBase.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
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
