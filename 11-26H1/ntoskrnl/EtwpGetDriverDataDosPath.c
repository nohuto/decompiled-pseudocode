/*
 * XREFs of EtwpGetDriverDataDosPath @ 0x140500A2C
 * Callers:
 *     EtwpExpandFileName @ 0x140A1586C (EtwpExpandFileName.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     IoQueryFileDosDeviceName @ 0x140920C50 (IoQueryFileDosDeviceName.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpGetDriverDataDosPath(_QWORD *a1)
{
  NTSTATUS v3; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE FileHandle; // [rsp+B0h] [rbp+30h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+B8h] [rbp+38h] BYREF

  ObjectNameInformation = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( EtwpDriverDataDosPath )
  {
    *a1 = EtwpDriverDataDosPath;
    return 0LL;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"\\DriverData\\");
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
    if ( v3 >= 0 )
    {
      Object = 0LL;
      v3 = ObReferenceObjectByHandle(FileHandle, 0x80u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      if ( v3 >= 0 )
      {
        v3 = IoQueryFileDosDeviceName((PFILE_OBJECT)Object, &ObjectNameInformation);
        if ( v3 >= 0 )
        {
          if ( _InterlockedCompareExchange64(&EtwpDriverDataDosPath, (signed __int64)ObjectNameInformation, 0LL) )
            ExFreePoolWithTag(ObjectNameInformation, 0);
          *a1 = EtwpDriverDataDosPath;
        }
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      }
      ZwClose(FileHandle);
    }
    return (unsigned int)v3;
  }
}
