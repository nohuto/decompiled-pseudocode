/*
 * XREFs of sub_140055690 @ 0x140055690
 * Callers:
 *     sub_140045574 @ 0x140045574 (sub_140045574.c)
 *     StorPortFreeRegistryBuffer @ 0x140073D20 (StorPortFreeRegistryBuffer.c)
 *     sub_1400C9020 @ 0x1400C9020 (sub_1400C9020.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140055690(__int64 a1)
{
  void *v2; // rdi

  if ( *(_DWORD *)a1 != 64 )
    return 3221225485LL;
  if ( (*(_DWORD *)(a1 + 56) & 1) == 0 )
    return 3221225485LL;
  v2 = (void *)_InterlockedExchange64((volatile __int64 *)(a1 + 32), 0LL);
  if ( !v2 )
    return 3221225485LL;
  memset_0(v2, 0, *(unsigned int *)(a1 + 40));
  ExFreePoolWithTag(v2, 0x42526C50u);
  *(_DWORD *)(a1 + 40) = 0;
  return 0LL;
}
