/*
 * XREFs of sub_14003AAE8 @ 0x14003AAE8
 * Callers:
 *     sub_14003AA14 @ 0x14003AA14 (sub_14003AA14.c)
 * Callees:
 *     sub_140055C18 @ 0x140055C18 (sub_140055C18.c)
 */

__int64 __fastcall sub_14003AAE8(PDEVICE_OBJECT DeviceObject, PVOID InputBuffer, __int64 a3, void *a4)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v8; // rax
  NTSTATUS Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( KeGetCurrentIrql() )
  {
    return (unsigned int)-1073741496;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
    if ( AttachedDeviceReference )
    {
      v8 = IoBuildDeviceIoControlRequest(
             0x32C038u,
             AttachedDeviceReference,
             InputBuffer,
             0x9Bu,
             a4,
             0x20u,
             0,
             &Event,
             &IoStatusBlock);
      if ( v8 )
      {
        v8->IoStatus.Status = -1073741637;
        Status = IofCallDriver(AttachedDeviceReference, v8);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status >= 0 && !IoStatusBlock.Information )
          Status = -1073741823;
      }
      else
      {
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
          && (HIDWORD(off_140168120->Timer) & 0x10) != 0
          && BYTE1(off_140168120->Timer) >= 2u )
        {
          sub_140055C18(off_140168120->AttachedDevice, 16LL, &unk_140148B00, DeviceObject);
        }
        Status = -1073741670;
      }
      ObfDereferenceObject(AttachedDeviceReference);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)Status;
}
