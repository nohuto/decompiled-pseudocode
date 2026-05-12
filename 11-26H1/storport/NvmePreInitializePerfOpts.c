/*
 * XREFs of NvmePreInitializePerfOpts @ 0x1400E2E20
 * Callers:
 *     NvmeAdapterStartMiniport @ 0x1400DE784 (NvmeAdapterStartMiniport.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmePreInitializePerfOpts(__int64 a1)
{
  void *Data; // rbx
  unsigned int v2; // edi
  __int64 ActiveGroupCount; // rbp
  __int64 v5; // rax
  __int64 *v6; // rsi
  __int64 v7; // rbx
  unsigned __int16 i; // r9
  unsigned int j; // r10d
  __int64 v10; // rax
  ULONG Type; // [rsp+40h] [rbp-48h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-44h] BYREF
  DEVPROPKEY PropertyKey; // [rsp+48h] [rbp-40h] BYREF

  Data = (void *)(a1 + 1024);
  v2 = 0;
  PropertyKey = DEVPKEY_Device_Numa_Proximity_Domain;
  Type = 0;
  *(_DWORD *)(a1 + 1024) = 0;
  ActiveGroupCount = KeQueryActiveGroupCount();
  RequiredSize = 4;
  IoGetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 32), &PropertyKey, 0, 0, 4u, Data, &RequiredSize, &Type);
  v5 = *(_QWORD *)(a1 + 144);
  if ( (v5 & 0x800) != 0 )
  {
    v6 = (__int64 *)(a1 + 600);
    if ( (v5 & 0x200) == 0 || !*(_QWORD *)(*v6 + 136) )
    {
      v7 = *v6;
      *(_QWORD *)(v7 + 136) = RaidAllocatePool(64LL, ActiveGroupCount << 6, 1917083986LL, *(_QWORD *)(a1 + 8));
    }
    if ( *(_QWORD *)(*v6 + 136) )
    {
      for ( i = 0; i < (unsigned __int16)ActiveGroupCount; ++i )
      {
        for ( j = 0; j < 0x40; ++j )
        {
          v10 = (i << 6) + j;
          *(_BYTE *)(v10 + *(_QWORD *)(*v6 + 136)) = -1;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
