/*
 * XREFs of IoWMIDeviceObjectToInstanceName @ 0x140AEB150
 * Callers:
 *     IoWMIHandleToInstanceName @ 0x140B303B0 (IoWMIHandleToInstanceName.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14026E7D0 (IoGetDeviceAttachmentBaseRef.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140AEB244 (WmipGetGuidObjectInstanceInfo.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

NTSTATUS __stdcall IoWMIDeviceObjectToInstanceName(
        PVOID DataBlockObject,
        PDEVICE_OBJECT DeviceObject,
        PUNICODE_STRING InstanceName)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rbp
  NTSTATUS GuidObjectInstanceInfo; // ebx
  wchar_t *Pool2; // rax
  __int64 v8; // rax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0;
  v10 = 0LL;
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  GuidObjectInstanceInfo = WmipGetGuidObjectInstanceInfo(DataBlockObject, DeviceAttachmentBaseRef, &v10, &v11);
  if ( GuidObjectInstanceInfo >= 0 )
  {
    InstanceName->MaximumLength = v10 + 32;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    InstanceName->Buffer = Pool2;
    if ( Pool2 )
    {
      RtlStringCbPrintfW(Pool2, InstanceName->MaximumLength, L"%ws_%d", *((_QWORD *)&v10 + 1), v11);
      v8 = -1LL;
      do
        ++v8;
      while ( InstanceName->Buffer[v8] );
      GuidObjectInstanceInfo = 0;
      InstanceName->Length = 2 * v8;
    }
    else
    {
      GuidObjectInstanceInfo = -1073741670;
    }
    if ( *((_QWORD *)&v10 + 1) )
      ExFreePool(*((PVOID *)&v10 + 1));
  }
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  return GuidObjectInstanceInfo;
}
