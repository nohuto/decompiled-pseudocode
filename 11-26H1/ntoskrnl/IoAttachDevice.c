/*
 * XREFs of IoAttachDevice @ 0x140798870
 * Callers:
 *     DifIoAttachDeviceWrapper @ 0x14065D490 (DifIoAttachDeviceWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     IoAttachDeviceToDeviceStackSafe @ 0x140446FD0 (IoAttachDeviceToDeviceStackSafe.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall IoAttachDevice(
        PDEVICE_OBJECT SourceDevice,
        PUNICODE_STRING TargetDevice,
        PDEVICE_OBJECT *AttachedDevice)
{
  NTSTATUS result; // eax
  int v6; // ebx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp+28h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+38h] BYREF

  ObjectAttributes.ObjectName = TargetDevice;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = IopCaseInsensitive != 0 ? 576 : 512;
  IoStatusBlock = 0LL;
  result = ZwOpenFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0, 0x80000040);
  if ( result >= 0 )
  {
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v6 < 0 )
    {
      ZwClose(FileHandle);
    }
    else
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
      ZwClose(FileHandle);
      v6 = IoAttachDeviceToDeviceStackSafe(SourceDevice, RelatedDeviceObject, AttachedDevice);
      ObfDereferenceObject(Object);
    }
    return v6;
  }
  return result;
}
