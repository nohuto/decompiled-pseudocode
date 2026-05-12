/*
 * XREFs of StorFreeContiguousMemory @ 0x140188BF4
 * Callers:
 *     RaidDeleteAdapter @ 0x1400478CC (RaidDeleteAdapter.c)
 *     StorpUpdateUncachedExtensionAllocationRegion @ 0x14007DA18 (StorpUpdateUncachedExtensionAllocationRegion.c)
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1400AAD70 (StorPortReleaseAdditionalCrashDumpArea.c)
 *     DeleteNvmeAdapter @ 0x1400D1764 (DeleteNvmeAdapter.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E74A8 (NvmeAdapterDeleteNvmeController.c)
 *     NvmeDumpFreeDumpAdapterInfo @ 0x1401A2108 (NvmeDumpFreeDumpAdapterInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall StorFreeContiguousMemory(_QWORD *a1, __int64 a2)
{
  char v3; // [rsp+20h] [rbp-18h]

  if ( *((_BYTE *)a1 + 8) && *((_DWORD *)a1 + 7) == 3 )
  {
    v3 = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(*a1 + 8LL) + 24LL))(
      *a1,
      *(unsigned int *)(a2 + 16),
      *(_QWORD *)(a2 + 8),
      *(_QWORD *)a2,
      v3);
  }
  else
  {
    MmFreeContiguousMemory(*(PVOID *)a2);
  }
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
}
