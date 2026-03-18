/*
 * XREFs of ExpGetSystemWriteConstraintInformation @ 0x140B6476C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1407234D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateEvent @ 0x140723CF0 (ZwCreateEvent.c)
 *     ZwCreateFile @ 0x140723E90 (ZwCreateFile.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 */

__int64 __fastcall ExpGetSystemWriteConstraintInformation(void *a1, char a2)
{
  NTSTATUS v4; // eax
  NTSTATUS Status; // ebx
  __int64 OutputBuffer; // [rsp+68h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES v10; // [rsp+B0h] [rbp-48h] BYREF
  HANDLE FileHandle; // [rsp+110h] [rbp+18h] BYREF
  HANDLE EventHandle; // [rsp+118h] [rbp+20h] BYREF

  FileHandle = 0LL;
  EventHandle = 0LL;
  *(_QWORD *)&v10.Length = 48LL;
  v10.RootDirectory = 0LL;
  v10.ObjectName = (PUNICODE_STRING)L"*,";
  *(_QWORD *)&v10.Attributes = 576LL;
  *(_OWORD *)&v10.SecurityDescriptor = 0LL;
  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  OutputBuffer = 0LL;
  v4 = ZwCreateFile(&FileHandle, 0x100000u, &v10, &IoStatusBlock, 0LL, 0x80u, 0, 1u, 0x20u, 0LL, 0);
  Status = v4;
  if ( v4 == -1073741772 )
  {
    Status = 0;
  }
  else if ( v4 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    Status = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
    if ( Status >= 0 )
    {
      Status = ZwDeviceIoControlFile(
                 FileHandle,
                 EventHandle,
                 0LL,
                 0LL,
                 &IoStatusBlock,
                 0x220A0Cu,
                 0LL,
                 0,
                 &OutputBuffer,
                 8u);
      if ( Status >= 0 )
        Status = IoStatusBlock.Status;
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( EventHandle )
    ZwClose(EventHandle);
  if ( a2 )
    RtlCopyToUser(a1, &OutputBuffer, 8uLL);
  else
    RtlCopyVolatileMemory(a1, &OutputBuffer, 8uLL);
  return (unsigned int)Status;
}
