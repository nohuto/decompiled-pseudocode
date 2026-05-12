/*
 * XREFs of PortRegistryWriteDeviceKey @ 0x1401B90B4
 * Callers:
 *     RaidUnitSavePowerCycleCount @ 0x140045B74 (RaidUnitSavePowerCycleCount.c)
 *     RaidAdapterHack @ 0x1400476EC (RaidAdapterHack.c)
 *     RaidUnitGetInitialTimestamp @ 0x140049ED0 (RaidUnitGetInitialTimestamp.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x140051AE8 (StorAdapterDeviceRegistryKeyProxy.c)
 *     RaDriverAddDevice @ 0x140072400 (RaDriverAddDevice.c)
 *     ShimGetMsftId @ 0x1400C50C0 (ShimGetMsftId.c)
 *     RaidInitializeAdapter @ 0x140186B24 (RaidInitializeAdapter.c)
 *     NvmeAdapterRetrieveRegistrySettings @ 0x14019EE64 (NvmeAdapterRetrieveRegistrySettings.c)
 * Callees:
 *     PortRegistryWriteWithHandle @ 0x1401B98A0 (PortRegistryWriteWithHandle.c)
 */

__int64 __fastcall PortRegistryWriteDeviceKey(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  NTSTATUS v9; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF

  Handle = 0LL;
  v9 = IoOpenDeviceRegistryKey(a1, 1u, 0x20006u, &Handle);
  if ( v9 >= 0 )
  {
    v9 = PortRegistryWriteWithHandle(Handle, a2, a3, a4, a5, a6);
    ZwClose(Handle);
  }
  return (unsigned int)v9;
}
