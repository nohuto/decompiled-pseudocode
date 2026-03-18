/*
 * XREFs of CmpVolumeContextStart @ 0x140906340
 * Callers:
 *     CmpVolumeContextCreate @ 0x1409062A8 (CmpVolumeContextCreate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateFile @ 0x140723E90 (ZwCreateFile.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     IoVolumeDeviceToGuid @ 0x140907B30 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceToGuidPath @ 0x140907BC0 (IoVolumeDeviceToGuidPath.c)
 *     CmpUuidCreate @ 0x140A7622C (CmpUuidCreate.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVolumeContextStart(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  NTSTATUS v5; // ebx
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp+17h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp+6Fh] BYREF

  Handle = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  RtlInitUnicodeString(&DestinationString, 0LL);
  *(_QWORD *)(a1 + 16) = &KiSystemServiceTraceCallbackLock.1008;
  if ( a3 )
  {
    v5 = IoVolumeDeviceToGuid(a3, a1 + 32);
    if ( v5 >= 0 )
    {
      v5 = IoVolumeDeviceToGuidPath(a3);
      if ( v5 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v5 = ZwCreateFile(&Handle, 0x180u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x40u, 0LL, 0);
        if ( v5 >= 0 )
        {
          Object = 0LL;
          v5 = ObReferenceObjectByHandle(
                 Handle,
                 0x180u,
                 **(POBJECT_TYPE **)&CmpCallbackListLock.ApcStateFill[40],
                 0,
                 &Object,
                 0LL);
          *(_QWORD *)(a1 + 48) = Object;
          if ( v5 >= 0 )
            v5 = 0;
        }
      }
    }
  }
  else
  {
    v5 = CmpUuidCreate((UUID *)(a1 + 32));
    if ( v5 >= 0 )
      v5 = 0;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v5;
}
