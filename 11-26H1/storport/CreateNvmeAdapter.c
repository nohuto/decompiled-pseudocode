/*
 * XREFs of CreateNvmeAdapter @ 0x1400D162C
 * Callers:
 *     RaDriverAddDevice @ 0x140072400 (RaDriverAddDevice.c)
 * Callees:
 *     RaidCreateDeferredQueue @ 0x14007213C (RaidCreateDeferredQueue.c)
 *     NvmeAdapterPowerInitialize @ 0x140124528 (NvmeAdapterPowerInitialize.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     RaCreateMiniport @ 0x1401887B8 (RaCreateMiniport.c)
 */

__int64 __fastcall CreateNvmeAdapter(_DWORD *a1, struct _DEVICE_OBJECT *a2, char a3)
{
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  __int64 result; // rax
  PIO_WORKITEM WorkItem; // rax

  memset_0(a1, 0, 0x5A0uLL);
  *a1 = 1314275652;
  a1[14] = -1;
  CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x6D526152u);
  *((_QWORD *)a1 + 19) = CacheAwareRundownProtection;
  if ( !CacheAwareRundownProtection )
    return 3221225495LL;
  RaCreateMiniport(a1 + 42);
  RaidCreateDeferredQueue((union _SLIST_HEADER *)a1 + 39);
  RaidCreateDeferredQueue((union _SLIST_HEADER *)a1 + 47);
  InitializeSListHead((PSLIST_HEADER)a1 + 70);
  a1[104] ^= ((unsigned __int8)a1[104] ^ (unsigned __int8)(a3 << 6)) & 0x40;
  if ( a3 )
  {
    ExInitializeResourceLite((PERESOURCE)(a1 + 298));
    *((_BYTE *)a1 + 1296) = 1;
    *((_QWORD *)a1 + 164) = a1 + 326;
    *((_QWORD *)a1 + 163) = a1 + 326;
    a1[330] = 0;
    WorkItem = IoAllocateWorkItem(a2);
    *((_QWORD *)a1 + 166) = WorkItem;
    if ( !WorkItem )
      return 3221225495LL;
  }
  result = NvmeAdapterPowerInitialize(a1, a2);
  if ( (int)result >= 0 )
  {
    a1[104] |= 1u;
    a1[21] = 2;
  }
  return result;
}
