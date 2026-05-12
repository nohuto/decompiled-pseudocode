/*
 * XREFs of SendAtaPassthrough @ 0x1400B6F84
 * Callers:
 *     StorpTelemetryDeviceStatisticsCommand @ 0x1400BA4F4 (StorpTelemetryDeviceStatisticsCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SendAtaPassthrough(
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        __int64 a3,
        void *a4,
        int a5,
        int a6,
        _DWORD *a7)
{
  IRP *v10; // rax
  unsigned int Status; // edx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v10 = IoBuildDeviceIoControlRequest(0x4D030u, DeviceObject, InputBuffer, 0x30u, a4, 0x30u, 0, &Object, &IoStatusBlock);
  if ( v10 )
  {
    if ( IofCallDriver(DeviceObject, v10) == 259 )
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
    if ( IoStatusBlock.Status >= 0 )
      *a7 = IoStatusBlock.Information;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return Status;
}
