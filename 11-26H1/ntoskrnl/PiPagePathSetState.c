/*
 * XREFs of PiPagePathSetState @ 0x1407A6950
 * Callers:
 *     IoIsPagingFileUsable @ 0x140799034 (IoIsPagingFileUsable.c)
 *     PpPagePathAssign @ 0x1407A6AA0 (PpPagePathAssign.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x14085D7D0 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     MiCreatePagingFile @ 0x140871844 (MiCreatePagingFile.c)
 *     MiDeletePagefile @ 0x140871A84 (MiDeletePagefile.c)
 *     CmpVolumeContextCleanup @ 0x140A2E5A8 (CmpVolumeContextCleanup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IoQueueThreadIrp @ 0x1404E9F20 (IoQueueThreadIrp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x1407B5B94 (PpIrpAllocateDeviceUsageNotification.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 *     IoGetRelatedTargetDevice @ 0x140AF49F8 (IoGetRelatedTargetDevice.c)
 */

__int64 __fastcall PiPagePathSetState(struct _FILE_OBJECT *Object, char a2)
{
  IRP *v4; // rax
  IRP *v5; // rbx
  NTSTATUS v7; // ebx
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  PDEVICE_OBJECT DeviceObject; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+38h] [rbp-38h]
  char v15; // [rsp+3Ch] [rbp-34h]
  struct _FILE_OBJECT *v16; // [rsp+40h] [rbp-30h]
  NTSTATUS v17; // [rsp+48h] [rbp-28h]
  _BYTE Objecta[24]; // [rsp+58h] [rbp-18h] BYREF
  PVOID v19; // [rsp+80h] [rbp+10h] BYREF

  memset_0(&DeviceObject, 0, 0x40uLL);
  v19 = 0LL;
  PsReferenceSiloContext(Object);
  DeviceObject = IoGetRelatedDeviceObject(Object);
  v14 = 1;
  v15 = a2;
  v16 = Object;
  v4 = (IRP *)PpIrpAllocateDeviceUsageNotification(&DeviceObject);
  v5 = v4;
  if ( v4 )
  {
    IoQueueThreadIrp(v4);
    PpDevNodeLockTree(1LL);
    v7 = IofCallDriver(DeviceObject, v5);
    if ( v7 == 259 )
    {
      KeWaitForSingleObject(Objecta, Executive, 0, 0, 0LL);
      v7 = v17;
    }
    if ( v7 >= 0 && (int)IoGetRelatedTargetDevice(Object, &v19) >= 0 )
    {
      DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)v19, 0x64446F50u);
      v9 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
      {
        v10 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
        if ( v10 )
        {
          v11 = *(_DWORD *)(v10 + 768);
          if ( a2 )
            v12 = v11 + 1;
          else
            v12 = v11 - 1;
          *(_DWORD *)(v10 + 768) = v12;
        }
      }
      ObfDereferenceObjectWithTag(v9, 0x64446F50u);
      ObfDereferenceObject(v19);
    }
    PpDevNodeUnlockTree(1LL);
    return (unsigned int)v7;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225495LL;
  }
}
