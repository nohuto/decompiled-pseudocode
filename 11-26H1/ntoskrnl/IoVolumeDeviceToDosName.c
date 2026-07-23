/*
 * XREFs of IoVolumeDeviceToDosName @ 0x1409205E0
 * Callers:
 *     IopQueryNameInternal @ 0x140920D34 (IopQueryNameInternal.c)
 *     IopMountVolume @ 0x140B208FC (IopMountVolume.c)
 *     IopValidateJunctionTarget @ 0x140B62430 (IopValidateJunctionTarget.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026A6C0 (IoBuildDeviceIoControlRequest.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoVolumeDeviceToDosName(PVOID VolumeDeviceObject, PUNICODE_STRING DosName)
{
  unsigned __int64 v2; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r14
  PVOID v6; // rsi
  _WORD *Pool2; // rdi
  void *OutputBuffer; // r15
  IRP *v9; // rax
  int Status; // ebx
  struct _KTHREAD *CurrentThread; // rax
  IRP *v12; // rax
  ULONG OutputBufferLength; // ebx
  IRP *v14; // rax
  unsigned __int16 v15; // ax
  __int64 v17; // rcx
  HANDLE FileHandle; // [rsp+50h] [rbp-79h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-71h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-59h] BYREF
  PVOID Object; // [rsp+80h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK v24; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+Fh] BYREF

  v2 = *((unsigned int *)VolumeDeviceObject + 18);
  v25 = 0LL;
  RelatedDeviceObject = 0LL;
  v6 = 0LL;
  Pool2 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  if ( (_DWORD)v2 == 7 || (unsigned int)v2 <= 0x24 && (v17 = 0x1080000004LL, _bittest64(&v17, v2)) )
  {
    OutputBuffer = (void *)ExAllocatePool2(0x100uLL);
    if ( !OutputBuffer )
      return -1073741670;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v9 = IoBuildDeviceIoControlRequest(
           0x4D0008u,
           (PDEVICE_OBJECT)VolumeDeviceObject,
           0LL,
           0,
           OutputBuffer,
           0x200u,
           0,
           &Event,
           &IoStatusBlock);
    if ( !v9 )
    {
      Status = -1073741670;
LABEL_27:
      ExFreePoolWithTag(OutputBuffer, 0);
      return Status;
    }
    Status = IofCallDriver((PDEVICE_OBJECT)VolumeDeviceObject, v9);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
      goto LABEL_27;
    RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    FileHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = IopCaseInsensitive != 0 ? 576 : 512;
    v24 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    Status = ZwOpenFile(&FileHandle, 0x80u, &ObjectAttributes, &v24, 3u, 0x40u);
    if ( Status >= 0 )
    {
      Object = 0LL;
      Status = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      if ( Status >= 0 )
      {
        v6 = Object;
        RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
      }
      ZwClose(FileHandle);
    }
    KeLeaveCriticalRegion();
    if ( Status >= 0 )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v12 = IoBuildDeviceIoControlRequest(
              0x6D0030u,
              RelatedDeviceObject,
              OutputBuffer,
              0x200u,
              &v25,
              8u,
              0,
              &Event,
              &IoStatusBlock);
      if ( v12 )
      {
        Status = IofCallDriver(RelatedDeviceObject, v12);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( (int)(Status + 0x80000000) >= 0 && Status != -2147483643 )
          goto LABEL_23;
        OutputBufferLength = v25 + 8;
        if ( (unsigned int)(v25 + 8) > 0xFFFF )
        {
          Status = -1073741306;
          goto LABEL_23;
        }
        Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v14 = IoBuildDeviceIoControlRequest(
                  0x6D0030u,
                  RelatedDeviceObject,
                  OutputBuffer,
                  0x200u,
                  Pool2,
                  OutputBufferLength,
                  0,
                  &Event,
                  &IoStatusBlock);
          if ( v14 )
          {
            Status = IofCallDriver(RelatedDeviceObject, v14);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
            if ( Status >= 0 )
            {
              v15 = *Pool2 - 4;
              DosName->Buffer = Pool2;
              DosName->Length = v15;
              DosName->MaximumLength = v15 + 2;
              memmove(Pool2, Pool2 + 2, v15);
              Pool2 = 0LL;
              Status = 0;
              DosName->Buffer[(unsigned __int64)DosName->Length >> 1] = 0;
            }
            goto LABEL_23;
          }
        }
      }
      Status = -1073741670;
    }
LABEL_23:
    if ( v6 )
      ObfDereferenceObject(v6);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    goto LABEL_27;
  }
  return -1073741811;
}
