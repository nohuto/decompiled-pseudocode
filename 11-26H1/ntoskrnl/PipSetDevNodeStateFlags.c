/*
 * XREFs of PipSetDevNodeStateFlags @ 0x1407A8080
 * Callers:
 *     IopQueueDeviceResetEvent @ 0x1407A5514 (IopQueueDeviceResetEvent.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14026E7D0 (IoGetDeviceAttachmentBaseRef.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 */

__int64 __fastcall PipSetDevNodeStateFlags(PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  unsigned int v3; // ebx
  PDEVICE_OBJECT v4; // rdx
  _DWORD *DeviceNode; // rcx
  int v6; // eax
  int v7; // eax

  PpDevNodeLockTree(1LL);
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  v3 = 0;
  v4 = DeviceAttachmentBaseRef;
  if ( DeviceAttachmentBaseRef )
  {
    DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    if ( !DeviceNode || (v6 = DeviceNode[75], v6 == 789) || v6 == 790 )
    {
      v3 = -1073741738;
    }
    else
    {
      v7 = DeviceNode[176];
      if ( (v7 & 0x8000) != 0 )
        v3 = 255;
      else
        DeviceNode[176] = v7 | 0x8000;
    }
    ObfDereferenceObject(v4);
  }
  else
  {
    v3 = -1073741808;
  }
  PpDevNodeUnlockTree(1LL);
  return v3;
}
