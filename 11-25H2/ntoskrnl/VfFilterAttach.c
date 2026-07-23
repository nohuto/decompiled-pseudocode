/*
 * XREFs of VfFilterAttach @ 0x140B8CDB0
 * Callers:
 *     VfDevObjPreAddDevice @ 0x140B99678 (VfDevObjPreAddDevice.c)
 *     VfDevObjPostAddDevice @ 0x140B996C4 (VfDevObjPostAddDevice.c)
 * Callees:
 *     IoGetAttachedDevice @ 0x1402A1E80 (IoGetAttachedDevice.c)
 *     IoAttachDeviceToDeviceStack @ 0x1402A1FB0 (IoAttachDeviceToDeviceStack.c)
 *     IoDeleteDevice @ 0x1402FDA50 (IoDeleteDevice.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     IoInitializeRemoveLockEx @ 0x1404BE530 (IoInitializeRemoveLockEx.c)
 *     IoCreateDevice @ 0x14099E640 (IoCreateDevice.c)
 *     IoCreateDriver @ 0x140AACA20 (IoCreateDriver.c)
 *     ViFilterIsDeviceExcluded @ 0x140B8D4A0 (ViFilterIsDeviceExcluded.c)
 */

void __fastcall VfFilterAttach(PDEVICE_OBJECT TargetDevice, int a2)
{
  int v4; // ebx
  int v5; // ebx
  PDEVICE_OBJECT AttachedDevice; // rax
  PDEVICE_OBJECT v7; // rbx
  struct _IO_REMOVE_LOCK *DeviceExtension; // rdi
  PDEVICE_OBJECT v9; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  PDEVICE_OBJECT SourceDevice; // [rsp+70h] [rbp+18h] BYREF

  DestinationString = 0LL;
  SourceDevice = 0LL;
  if ( !VfFilterCreated )
  {
    RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_FILTER");
    IoCreateDriver(&DestinationString, ViFilterDriverEntry);
    VfFilterCreated = 1;
  }
  if ( VfFilterDriverObject )
  {
    v4 = a2 - 2;
    if ( !v4 || (v5 = v4 - 1) == 0 || (unsigned int)(v5 - 2) <= 1 )
    {
      AttachedDevice = IoGetAttachedDevice(TargetDevice);
      if ( !(unsigned int)ViFilterIsDeviceExcluded(AttachedDevice)
        && IoCreateDevice(VfFilterDriverObject, 0x68u, 0LL, 0x22u, 0x100u, 0, &SourceDevice) >= 0 )
      {
        v7 = SourceDevice;
        DeviceExtension = (struct _IO_REMOVE_LOCK *)SourceDevice->DeviceExtension;
        IoInitializeRemoveLockEx(DeviceExtension + 1, 0x4C526656u, 0, 0, 0x20u);
        DeviceExtension[2].Common.RemoveEvent.Header.WaitListHead.Blink = 0LL;
        v9 = IoAttachDeviceToDeviceStack(v7, TargetDevice);
        *(_QWORD *)&DeviceExtension->Common.RemoveEvent.Header.Lock = v9;
        if ( v9 )
        {
          v7->Flags |= v9->Flags & 0x86014;
          v7->DeviceType = *(_DWORD *)(*(_QWORD *)&DeviceExtension->Common.RemoveEvent.Header.Lock + 72LL);
          v7->Characteristics = *(_DWORD *)(*(_QWORD *)&DeviceExtension->Common.RemoveEvent.Header.Lock + 52LL);
          v7->Flags &= ~0x80u;
          DeviceExtension->Common.RemoveEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v7;
          *(_QWORD *)&DeviceExtension->Common.Removed = TargetDevice;
          _InterlockedOr(&DeviceExtension[3].Common.IoCount, 1u);
        }
        else
        {
          IoDeleteDevice(v7);
        }
      }
    }
  }
}
