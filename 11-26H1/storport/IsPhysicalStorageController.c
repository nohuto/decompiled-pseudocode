/*
 * XREFs of IsPhysicalStorageController @ 0x140030880
 * Callers:
 *     NvmeAdapterMapBuffers @ 0x1400D9798 (NvmeAdapterMapBuffers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPhysicalStorageController(__int64 a1)
{
  if ( *(_DWORD *)a1 == 1094997074 )
    return *(unsigned __int8 *)(a1 + 4434);
  if ( *(_DWORD *)a1 == 1314275652 )
    return (*(_DWORD *)(a1 + 144) >> 12) & 1;
  return 0LL;
}
