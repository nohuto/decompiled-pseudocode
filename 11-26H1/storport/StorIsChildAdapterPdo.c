/*
 * XREFs of StorIsChildAdapterPdo @ 0x140059C94
 * Callers:
 *     RaDriverAddDevice @ 0x140072400 (RaDriverAddDevice.c)
 *     NvmeAdapterStartDevice @ 0x1400DDCA8 (NvmeAdapterStartDevice.c)
 *     RaInitializeMiniport @ 0x1401835AC (RaInitializeMiniport.c)
 *     RaidInitializeDma @ 0x140187C24 (RaidInitializeDma.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     memcmp @ 0x140138EA0 (memcmp.c)
 */

bool __fastcall StorIsChildAdapterPdo(PDEVICE_OBJECT Pdo)
{
  bool v1; // bl
  void *Data; // rdi
  ULONG RequiredSize; // [rsp+58h] [rbp+10h] BYREF
  ULONG Type; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0;
  RequiredSize = 0;
  Type = 0;
  if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_InstanceId, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
  {
    Data = (void *)RaidAllocatePool(256LL, RequiredSize, 1229218130LL, (__int64)Pdo);
    if ( Data )
    {
      if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_InstanceId, 0, 0, RequiredSize, Data, &RequiredSize, &Type) >= 0
        && RequiredSize >= 0x2E )
      {
        v1 = memcmp(Data, L"STORPORT\\CHILD_ADAPTER_", 0x2EuLL) == 0;
      }
      ExFreePoolWithTag(Data, 0x49446152u);
    }
  }
  return v1;
}
