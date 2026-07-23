/*
 * XREFs of IoGetDmaAdapter @ 0x1407A41E0
 * Callers:
 *     DifIoGetDmaAdapterWrapper @ 0x140660300 (DifIoGetDmaAdapterWrapper.c)
 *     VfGetDmaAdapter @ 0x140C2A8F0 (VfGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x1407A4504 (PiGetDmaAdapterFromBusInterface.c)
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 */

struct _DMA_ADAPTER *__stdcall IoGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  struct _DMA_ADAPTER *DmaAdapterFromBusInterface; // rdi
  _DWORD *DeviceNode; // rax
  _INTERFACE_TYPE InterfaceType; // eax
  size_t v8; // r8
  NTSTATUS DeviceProperty; // eax
  int v10; // edx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v14; // rcx
  unsigned __int16 *v15; // rsi
  _WORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v20[20]; // [rsp+40h] [rbp-78h] BYREF
  int PropertyBuffer[11]; // [rsp+54h] [rbp-64h] BYREF

  memset_0(v20, 0, 0x40uLL);
  DmaAdapterFromBusInterface = 0LL;
  ResultLength[0] = 0;
  if ( PhysicalDeviceObject )
  {
    DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock((ULONG)PhysicalDeviceObject, (PVOID)PhysicalDeviceObject->Size);
      DriverObject = PhysicalDeviceObject->DriverObject;
      if ( DriverObject )
      {
        IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
        p_DriverName = &PhysicalDeviceObject->DriverObject->DriverName;
        if ( p_DriverName->Length )
        {
          IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
          IoAddTriageDumpDataBlock(
            (ULONG)PhysicalDeviceObject->DriverObject->DriverName.Buffer,
            (PVOID)PhysicalDeviceObject->DriverObject->DriverName.Length);
        }
      }
      v14 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
      if ( v14 )
      {
        v15 = (unsigned __int16 *)(v14 + 40);
        IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)0x388);
        if ( *v15 )
        {
          IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v15 + 1), (PVOID)*v15);
        }
        v16 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 56;
        if ( *v16 )
        {
          IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
            (PVOID)*((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
        }
        v17 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
        if ( v17 && *(_WORD *)(v17 + 56) )
        {
          IoAddTriageDumpDataBlock(v17 + 56, (PVOID)2);
          v18 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v18 + 64), (PVOID)*(unsigned __int16 *)(v18 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
    }
    guard_dispatch_icall_no_overrides((__int64)KeGetCurrentThread(), (__int64)PhysicalDeviceObject);
    InterfaceType = DeviceDescription->InterfaceType;
    if ( InterfaceType == InterfaceTypeUndefined || InterfaceType == PNPBus )
    {
      if ( DeviceDescription->Version >= 3 )
      {
        v8 = 0LL;
        if ( DeviceDescription->Version == 3 )
          v8 = 64LL;
      }
      else
      {
        v8 = 40LL;
      }
      memmove(v20, DeviceDescription, v8);
      DeviceProperty = IoGetDeviceProperty(
                         PhysicalDeviceObject,
                         DevicePropertyLegacyBusType,
                         4u,
                         PropertyBuffer,
                         ResultLength);
      v10 = PropertyBuffer[0];
      if ( DeviceProperty < 0 )
        v10 = 1;
      PropertyBuffer[0] = v10;
    }
    DmaAdapterFromBusInterface = (struct _DMA_ADAPTER *)PiGetDmaAdapterFromBusInterface((ULONG)PhysicalDeviceObject);
    guard_dispatch_icall_no_overrides((__int64)KeGetCurrentThread(), 0LL);
  }
  return DmaAdapterFromBusInterface;
}
