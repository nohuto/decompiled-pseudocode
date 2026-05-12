/*
 * XREFs of sub_14003BD50 @ 0x14003BD50
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_14008C28C @ 0x14008C28C (sub_14008C28C.c)
 *     sub_14008DA54 @ 0x14008DA54 (sub_14008DA54.c)
 * Callees:
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 */

__int64 __fastcall sub_14003BD50(
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PLARGE_INTEGER Timeout,
        ULONG OutputBufferLength,
        _DWORD *a6)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v11; // rax
  NTSTATUS Status; // ebx
  _DWORD *v13; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  AttachedDeviceReference = 0LL;
  IoStatusBlock = 0LL;
  if ( KeGetCurrentIrql() )
  {
    Status = -1073741496;
    goto LABEL_22;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v11 = IoBuildDeviceIoControlRequest(
          0x32C000u,
          AttachedDeviceReference,
          InputBuffer,
          InputBufferLength,
          Timeout,
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v11 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x10) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_1400680F0(off_140168120->AttachedDevice, 17LL, &unk_140148B00, DeviceObject, AttachedDeviceReference);
    }
    Status = -1073741670;
LABEL_22:
    v13 = a6;
    if ( !a6 )
      goto LABEL_7;
    goto LABEL_23;
  }
  v11->IoStatus.Status = -1073741637;
  Status = IofCallDriver(AttachedDeviceReference, v11);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 && !IoStatusBlock.Information && OutputBufferLength )
    Status = -1073741823;
  v13 = a6;
  if ( a6 )
  {
    if ( Status >= 0 )
    {
      *a6 = IoStatusBlock.Information;
      goto LABEL_7;
    }
LABEL_23:
    *v13 = 0;
  }
LABEL_7:
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)Status;
}
