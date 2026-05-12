/*
 * XREFs of PortFreeRegistryBuffer @ 0x14005B9D4
 * Callers:
 *     RaidDeleteAdapter @ 0x1400478CC (RaidDeleteAdapter.c)
 *     StorPortFreeRegistryBuffer @ 0x14007B5E0 (StorPortFreeRegistryBuffer.c)
 *     DeleteNvmeAdapter @ 0x1400D1764 (DeleteNvmeAdapter.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall PortFreeRegistryBuffer(__int64 a1)
{
  void *v2; // rdi
  __int64 result; // rax

  if ( *(_DWORD *)a1 != 64 )
    return 3221225485LL;
  if ( (*(_DWORD *)(a1 + 56) & 1) == 0 )
    return 3221225485LL;
  v2 = (void *)_InterlockedExchange64((volatile __int64 *)(a1 + 32), 0LL);
  if ( !v2 )
    return 3221225485LL;
  memset_0(v2, 0, *(unsigned int *)(a1 + 40));
  ExFreePoolWithTag(v2, 0x42526C50u);
  result = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}
