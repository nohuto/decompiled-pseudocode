/*
 * XREFs of IoVolumeDeviceToGuidPath @ 0x140A2FD20
 * Callers:
 *     CmpVolumeContextStart @ 0x140A2E678 (CmpVolumeContextStart.c)
 *     IoVolumeDeviceToGuid @ 0x140A2FC90 (IoVolumeDeviceToGuid.c)
 *     IopValidateJunctionTarget @ 0x140B62430 (IopValidateJunctionTarget.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026A6C0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140A30100 (IoVolumeDeviceNameToGuidPath.c)
 */

__int64 __fastcall IoVolumeDeviceToGuidPath(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  unsigned __int64 DeviceType; // rax
  IRP *v5; // rax
  NTSTATUS Status; // ecx
  __int16 v7; // ax
  __int64 v9; // rcx
  __int64 v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h]
  __int128 v12; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  __int16 OutputBuffer; // [rsp+98h] [rbp-68h] BYREF
  char v16; // [rsp+9Ah] [rbp-66h] BYREF

  DeviceType = DeviceObject->DeviceType;
  v10 = 0LL;
  v11 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v12 = 0LL;
  if ( (_DWORD)DeviceType == 7 || (unsigned int)DeviceType <= 0x24 && (v9 = 0x1080000004LL, _bittest64(&v9, DeviceType)) )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v5 = IoBuildDeviceIoControlRequest(
           0x4D0008u,
           DeviceObject,
           0LL,
           0,
           &OutputBuffer,
           0x200u,
           0,
           &Event,
           &IoStatusBlock);
    if ( v5 )
    {
      Status = IofCallDriver(DeviceObject, v5);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        v7 = OutputBuffer;
        if ( (unsigned __int16)OutputBuffer >= 0x1FEu )
        {
          v7 = 510;
          LOWORD(v12) = 510;
        }
        else
        {
          LOWORD(v12) = OutputBuffer;
        }
        WORD1(v12) = v7;
        *((_QWORD *)&v12 + 1) = &v16;
        Status = IoVolumeDeviceNameToGuidPath(&v12, &v10);
        if ( Status >= 0 )
        {
          *(_DWORD *)a2 = v10;
          *(_QWORD *)(a2 + 8) = v11;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Status;
}
