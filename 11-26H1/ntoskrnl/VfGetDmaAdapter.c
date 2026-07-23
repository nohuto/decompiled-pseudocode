/*
 * XREFs of VfGetDmaAdapter @ 0x140C2A8F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IoGetDmaAdapter @ 0x1407A41E0 (IoGetDmaAdapter.c)
 *     IoGetDevicePropertyData @ 0x140A9C5D0 (IoGetDevicePropertyData.c)
 *     VF_ASSERT_IRQL @ 0x140C28EAC (VF_ASSERT_IRQL.c)
 *     VfIsPCIBus @ 0x140C2B274 (VfIsPCIBus.c)
 *     VfReleaseInactiveDmaAdapter @ 0x140C2BB94 (VfReleaseInactiveDmaAdapter.c)
 *     ViHookDmaAdapter @ 0x140C2D4FC (ViHookDmaAdapter.c)
 */

struct _DMA_ADAPTER *__fastcall VfGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  __int64 v6; // rdx
  int v7; // eax
  char v8; // bp
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdi
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
    VfReleaseInactiveDmaAdapter(PhysicalDeviceObject);
  if ( ViDoubleBufferDma && *NumberOfMapRegisters > 0x20 )
    *NumberOfMapRegisters = 32;
  v7 = guard_dispatch_icall_no_overrides((__int64)KeGetCurrentThread(), v6);
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
  v9 = guard_dispatch_icall_no_overrides((__int64)PhysicalDeviceObject, (__int64)DeviceDescription);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  v12 = ViHookDmaAdapter(
          v9,
          (_DWORD)DeviceDescription,
          *NumberOfMapRegisters,
          (_DWORD)PhysicalDeviceObject,
          retaddr,
          v8);
  if ( !v12 )
  {
    guard_dispatch_icall_no_overrides(v10, v11);
    return 0LL;
  }
  if ( PhysicalDeviceObject
    && IoGetDevicePropertyData(PhysicalDeviceObject, &DEVPKEY_Device_Capabilities, 0, 0, 4u, &Data, RequiredSize, &Type) >= 0
    && (Data & 0x400) != 0 )
  {
    *(_BYTE *)(v12 + 75) = 1;
  }
  return (struct _DMA_ADAPTER *)(v12 + 16);
}
