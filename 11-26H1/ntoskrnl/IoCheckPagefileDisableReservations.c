/*
 * XREFs of IoCheckPagefileDisableReservations @ 0x1407989CC
 * Callers:
 *     MiCreatePagingFile @ 0x140871844 (MiCreatePagingFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026A6C0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PoCallDriver @ 0x1404CE2E0 (PoCallDriver.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     IoGetRelatedTargetDevice @ 0x140AF49F8 (IoGetRelatedTargetDevice.c)
 */

__int64 __fastcall IoCheckPagefileDisableReservations(__int64 a1, _DWORD *a2)
{
  int RelatedTargetDevice; // ebx
  IRP *v4; // rax
  NTSTATUS Status; // eax
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-9h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-1h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+17h] BYREF
  __int64 InputBuffer; // [rsp+80h] [rbp+27h] BYREF
  int v11; // [rsp+88h] [rbp+2Fh]
  __int64 OutputBuffer; // [rsp+90h] [rbp+37h] BYREF
  int v13; // [rsp+98h] [rbp+3Fh]

  *a2 = 0;
  OutputBuffer = 0LL;
  v13 = 0;
  InputBuffer = 0LL;
  v11 = 0;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  DeviceObject = 0LL;
  RelatedTargetDevice = IoGetRelatedTargetDevice(a1, &DeviceObject);
  if ( RelatedTargetDevice >= 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    InputBuffer = 7LL;
    v4 = IoBuildDeviceIoControlRequest(
           0x2D1400u,
           DeviceObject,
           &InputBuffer,
           0xCu,
           &OutputBuffer,
           0xCu,
           0,
           &Event,
           &IoStatusBlock);
    if ( v4 )
    {
      Status = PoCallDriver(DeviceObject, v4);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 && !(_BYTE)v13 )
        *a2 = 1;
      RelatedTargetDevice = 0;
    }
    else
    {
      RelatedTargetDevice = -1073741670;
    }
  }
  if ( DeviceObject )
    ObfDereferenceObject(DeviceObject);
  return (unsigned int)RelatedTargetDevice;
}
