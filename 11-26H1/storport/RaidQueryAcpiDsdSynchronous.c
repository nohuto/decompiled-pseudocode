/*
 * XREFs of RaidQueryAcpiDsdSynchronous @ 0x140045DC8
 * Callers:
 *     RaidQueryAcpiDsdStorageD3Property @ 0x140045CF4 (RaidQueryAcpiDsdStorageD3Property.c)
 * Callees:
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 */

__int64 __fastcall RaidQueryAcpiDsdSynchronous(PDEVICE_OBJECT DeviceObject, PVOID InputBuffer, __int64 a3, void *a4)
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
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            16LL,
            &WPP_fc235f9cd02a3c4256abef97e62f1829_Traceguids,
            DeviceObject);
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
