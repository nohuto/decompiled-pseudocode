/*
 * XREFs of MiniportGetNvmeAdapter @ 0x140058B94
 * Callers:
 *     StorpAllocateHostMemoryBuffer @ 0x140051374 (StorpAllocateHostMemoryBuffer.c)
 *     StorpFreeHostMemoryBuffer @ 0x140058A68 (StorpFreeHostMemoryBuffer.c)
 *     StorPortGetDeviceBase @ 0x14007B6E0 (StorPortGetDeviceBase.c)
 *     StorPortGetUncachedExtension @ 0x14007B850 (StorPortGetUncachedExtension.c)
 *     NvmeAdapterUpdateDynamicRegistrySettings @ 0x1400E0D00 (NvmeAdapterUpdateDynamicRegistrySettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiniportGetNvmeAdapter(_DWORD *a1)
{
  if ( a1 && (a1[62] & 1) != 0 )
    return *(_QWORD *)a1;
  else
    return 0LL;
}
