/*
 * XREFs of StorpUpdateUncachedExtensionAllocationRegion @ 0x14007DA18
 * Callers:
 *     StorPortGetUncachedExtension @ 0x14007B850 (StorPortGetUncachedExtension.c)
 * Callees:
 *     RaidDmaAllocateUncachedExtension @ 0x140072258 (RaidDmaAllocateUncachedExtension.c)
 *     StorFreeContiguousMemory @ 0x140188BF4 (StorFreeContiguousMemory.c)
 */

__int64 __fastcall StorpUpdateUncachedExtensionAllocationRegion(__int64 a1, int *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  __int64 v4; // r14
  int UncachedExtension; // esi
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rcx

  v2 = a1 + 928;
  v3 = 0x80000000;
  v4 = a1 + 896;
  do
  {
    UncachedExtension = RaidDmaAllocateUncachedExtension(
                          v4,
                          v3,
                          *(_QWORD *)(a1 + 4360),
                          *(_QWORD *)(a1 + 4352),
                          *(_QWORD *)(a1 + 4368),
                          *(_DWORD *)(a1 + 4344),
                          *a2,
                          v2);
    if ( UncachedExtension >= 0 )
    {
      v10 = *(_QWORD *)(a1 + 936);
      *(_QWORD *)(a1 + 4360) = v10 & 0xFFFFFFFF00000000uLL;
      *(_QWORD *)(a1 + 4352) = v10 | 0xFFFFFFFFLL;
      goto LABEL_11;
    }
    v3 >>= 1;
  }
  while ( v3 >= 0x8000000 );
  if ( *a2 == 0x80000000 )
    return (unsigned int)UncachedExtension;
  v8 = 0x80000000;
  while ( 1 )
  {
    UncachedExtension = RaidDmaAllocateUncachedExtension(
                          v4,
                          v8,
                          *(_QWORD *)(a1 + 4360),
                          *(_QWORD *)(a1 + 4352),
                          *(_QWORD *)(a1 + 4368),
                          *(_DWORD *)(a1 + 4344),
                          0x80000000,
                          v2);
    if ( UncachedExtension >= 0 )
      break;
    v8 >>= 1;
    if ( v8 < 0x8000000 )
      return (unsigned int)UncachedExtension;
  }
  v9 = *(_QWORD *)(a1 + 936);
  *a2 = 0x80000000;
  *(_QWORD *)(a1 + 4360) = v9 & 0xFFFFFFFF00000000uLL;
  *(_QWORD *)(a1 + 4352) = v9 | 0xFFFFFFFFLL;
LABEL_11:
  StorFreeContiguousMemory(v4);
  return (unsigned int)UncachedExtension;
}
