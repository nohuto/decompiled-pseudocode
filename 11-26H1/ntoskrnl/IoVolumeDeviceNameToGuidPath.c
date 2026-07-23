/*
 * XREFs of IoVolumeDeviceNameToGuidPath @ 0x140A30100
 * Callers:
 *     IoVolumeDeviceNameToGuid @ 0x14079C070 (IoVolumeDeviceNameToGuid.c)
 *     IoVolumeDeviceToGuidPath @ 0x140A2FD20 (IoVolumeDeviceToGuidPath.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026A6C0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     IoGetDeviceObjectPointer @ 0x140A30960 (IoGetDeviceObjectPointer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoVolumeDeviceNameToGuidPath(const void **a1, unsigned __int16 *a2)
{
  int v2; // eax
  _DWORD *v5; // r14
  char v6; // r13
  ULONG v7; // r12d
  __int64 Pool2; // rax
  void *v9; // r15
  NTSTATUS DeviceObjectPointer; // ebx
  struct _DEVICE_OBJECT *v11; // rsi
  IRP *v12; // rax
  ULONG OutputBufferLength; // ebx
  IRP *v14; // rax
  NTSTATUS v15; // eax
  unsigned int v16; // esi
  char *v17; // r12
  unsigned __int16 v18; // ax
  void *v19; // rax
  char v21; // [rsp+50h] [rbp-59h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-51h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-49h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-19h] BYREF
  _DWORD OutputBuffer[8]; // [rsp+A0h] [rbp-9h] BYREF

  v2 = *(unsigned __int16 *)a1;
  v21 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  v5 = 0LL;
  v6 = 0;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  if ( (unsigned __int16)v2 > 0xF000u )
    return (unsigned int)-1073741811;
  v7 = v2 + 26;
  Pool2 = ExAllocatePool2(0x100uLL);
  v9 = (void *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_DWORD *)Pool2 = 0;
  *(_WORD *)(Pool2 + 4) = 0;
  *(_DWORD *)(Pool2 + 8) = 0;
  *(_WORD *)(Pool2 + 12) = 0;
  *(_DWORD *)(Pool2 + 16) = 24;
  *(_WORD *)(Pool2 + 20) = *(_WORD *)a1;
  memmove((void *)(Pool2 + 24), a1[1], *(unsigned __int16 *)a1);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( DeviceObjectPointer >= 0 )
  {
    v6 = 1;
    v5 = OutputBuffer;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = DeviceObject;
    v12 = IoBuildDeviceIoControlRequest(0x6D0008u, DeviceObject, v9, v7, OutputBuffer, 0x20u, 0, &Event, &IoStatusBlock);
    if ( !v12 )
    {
LABEL_27:
      DeviceObjectPointer = -1073741670;
      goto LABEL_20;
    }
    DeviceObjectPointer = IofCallDriver(v11, v12);
    if ( DeviceObjectPointer == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      DeviceObjectPointer = IoStatusBlock.Status;
    }
    if ( (int)(DeviceObjectPointer + 0x80000000) >= 0 && DeviceObjectPointer != -2147483643 )
      goto LABEL_20;
    OutputBufferLength = OutputBuffer[0] + 32;
    if ( (unsigned int)(OutputBuffer[0] + 32) <= 0xFFFF )
    {
      v5 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( v5 )
      {
        v21 = 1;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v14 = IoBuildDeviceIoControlRequest(0x6D0008u, v11, v9, v7, v5, OutputBufferLength, 0, &Event, &IoStatusBlock);
        if ( v14 )
        {
          v15 = IofCallDriver(v11, v14);
          v16 = 0;
          DeviceObjectPointer = v15;
          if ( v15 == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            DeviceObjectPointer = IoStatusBlock.Status;
          }
          if ( DeviceObjectPointer >= 0 )
          {
            DeviceObjectPointer = -1073741275;
            while ( v16 < v5[1] )
            {
              v17 = (char *)v5 + (unsigned int)v5[6 * v16 + 2];
              DeviceObject = (PDEVICE_OBJECT)(3LL * v16);
              if ( !wcsnicmp(L"\\??\\Volume", (const wchar_t *)v17, 0xAuLL) )
              {
                v18 = v5[2 * (_QWORD)DeviceObject + 3];
                *a2 = v18;
                a2[1] = v18 + 2;
                v19 = (void *)ExAllocatePool2(0x100uLL);
                *((_QWORD *)a2 + 1) = v19;
                if ( v19 )
                {
                  memmove(v19, v17, *a2);
                  DeviceObjectPointer = 0;
                  *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1)) = 0;
                }
                else
                {
                  *(_DWORD *)a2 = 0;
                  DeviceObjectPointer = -1073741670;
                }
                goto LABEL_20;
              }
              ++v16;
            }
          }
          goto LABEL_20;
        }
      }
      goto LABEL_27;
    }
    DeviceObjectPointer = -1073741306;
  }
LABEL_20:
  ExFreePoolWithTag(v9, 0);
  if ( v21 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    ObfDereferenceObject(FileObject);
  return (unsigned int)DeviceObjectPointer;
}
