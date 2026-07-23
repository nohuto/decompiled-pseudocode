/*
 * XREFs of VfGetDmaAdapter @ 0x140B76960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IoGetDmaAdapter @ 0x140713ED0 (IoGetDmaAdapter.c)
 *     IoGetDevicePropertyData @ 0x1409A2450 (IoGetDevicePropertyData.c)
 *     VF_ASSERT_IRQL @ 0x140B74F60 (VF_ASSERT_IRQL.c)
 *     VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x140B750E0 (VF_FIND_INACTIVE_ADAPTER_AND_REMOVE.c)
 *     VfIsPCIBus @ 0x140B772A4 (VfIsPCIBus.c)
 *     ViHookDmaAdapter @ 0x140B79408 (ViHookDmaAdapter.c)
 *     ViReleaseDmaAdapter @ 0x140B79A3C (ViReleaseDmaAdapter.c)
 */

struct _DMA_ADAPTER *__fastcall VfGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  _LIST_ENTRY *v6; // rax
  int v7; // eax
  char v8; // bp
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  ULONG Type; // [rsp+40h] [rbp-28h] BYREF
  ULONG RequiredSize[3]; // [rsp+44h] [rbp-24h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  int Data; // [rsp+88h] [rbp+20h] BYREF

  Data = 0;
  RequiredSize[0] = 0;
  Type = 0;
  if ( !ViVerifyDma || (unsigned int)VfIsPCIBus() )
    return IoGetDmaAdapter(PhysicalDeviceObject, DeviceDescription, NumberOfMapRegisters);
  if ( (MmVerifierData & 0x20000) == 0 )
    VF_ASSERT_IRQL(0);
  if ( PhysicalDeviceObject )
  {
    while ( 1 )
    {
      v6 = VF_FIND_INACTIVE_ADAPTER_AND_REMOVE((struct _LIST_ENTRY *)PhysicalDeviceObject);
      if ( !v6 )
        break;
      ViReleaseDmaAdapter((__int64)v6);
    }
  }
  if ( ViDoubleBufferDma && *NumberOfMapRegisters > 0x20 )
    *NumberOfMapRegisters = 32;
  v7 = guard_dispatch_icall_no_overrides(KeGetCurrentThread());
  if ( v7 < 0 )
  {
    if ( v7 != -1073741275 )
      return 0LL;
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  v9 = guard_dispatch_icall_no_overrides(PhysicalDeviceObject);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  v11 = ViHookDmaAdapter(
          v9,
          (_DWORD)DeviceDescription,
          *NumberOfMapRegisters,
          (_DWORD)PhysicalDeviceObject,
          retaddr,
          v8);
  if ( !v11 )
  {
    guard_dispatch_icall_no_overrides(v10);
    return 0LL;
  }
  if ( PhysicalDeviceObject
    && IoGetDevicePropertyData(PhysicalDeviceObject, &DEVPKEY_Device_Capabilities, 0, 0, 4u, &Data, RequiredSize, &Type) >= 0
    && (Data & 0x400) != 0 )
  {
    *(_BYTE *)(v11 + 75) = 1;
  }
  return (struct _DMA_ADAPTER *)(v11 + 16);
}
