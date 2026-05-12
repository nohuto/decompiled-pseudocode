/*
 * XREFs of NvmeAdapterUpdateDynamicRegistrySettings @ 0x1400E0D00
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterAcquireRemoveLock @ 0x14004B464 (NvmeAdapterAcquireRemoveLock.c)
 *     MiniportGetNvmeAdapter @ 0x140058B94 (MiniportGetNvmeAdapter.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall NvmeAdapterUpdateDynamicRegistrySettings(_QWORD *a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *NvmeAdapter; // rax
  PEX_RUNDOWN_REF_CACHE_AWARE *v3; // rbx
  void (__fastcall *v4)(_QWORD); // rax

  NvmeAdapter = (PEX_RUNDOWN_REF_CACHE_AWARE *)MiniportGetNvmeAdapter(*(_DWORD **)(*a1 - 16LL));
  v3 = NvmeAdapter;
  if ( NvmeAdapter
    && *(_DWORD *)NvmeAdapter == 1314275652
    && (int)NvmeAdapterAcquireRemoveLock((__int64)NvmeAdapter) >= 0 )
  {
    v4 = (void (__fastcall *)(_QWORD))a1[1];
    if ( v4 )
      v4(*a1);
    ExReleaseRundownProtectionCacheAware(v3[19]);
  }
}
