/*
 * XREFs of StorpWatchForRegistryChanges @ 0x140077E70
 * Callers:
 *     RaidAdapterStartRegistryWatch @ 0x140069918 (RaidAdapterStartRegistryWatch.c)
 *     DllInitialize @ 0x1400ACAB0 (DllInitialize.c)
 *     NvmeAdapterStartRegistryWatch @ 0x1400DEAB0 (NvmeAdapterStartRegistryWatch.c)
 *     RaidUnitGetDeviceParameters @ 0x1401BB894 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall StorpWatchForRegistryChanges(__int64 a1)
{
  void *v2; // rcx
  __int16 v3; // bx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    if ( ZwNotifyChangeKey(v2, 0LL, (PIO_APC_ROUTINE)(a1 + 128), (PVOID)1, &IoStatusBlock, 5u, 1u, 0LL, 0, 1u) >= 0 )
      ++*(_WORD *)(a1 + 184);
    (*(void (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1);
  }
  v3 = --*(_WORD *)(a1 + 184);
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegion();
  if ( !v3 )
    KeSetEvent((PRKEVENT)(a1 + 160), 0, 0);
}
