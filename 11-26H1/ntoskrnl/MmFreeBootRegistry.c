/*
 * XREFs of MmFreeBootRegistry @ 0x140863DA8
 * Callers:
 *     CmpFreeBootRegistry @ 0x1406E3154 (CmpFreeBootRegistry.c)
 *     MiPageBootRegistry @ 0x1406E3A98 (MiPageBootRegistry.c)
 *     HvpDropPagedBins @ 0x140A87E90 (HvpDropPagedBins.c)
 * Callees:
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     qsort @ 0x140536F00 (qsort.c)
 *     MiDeleteBootRange @ 0x1406E35D0 (MiDeleteBootRange.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void MmFreeBootRegistry()
{
  size_t *v0; // rax
  size_t *v1; // r14
  size_t v2; // rsi
  unsigned __int64 *v3; // rbx
  __int64 v4; // rdx
  size_t i; // rdi
  unsigned __int64 v6; // rcx
  __int64 PteAddress; // rax
  __int64 v8; // rdx

  v0 = (size_t *)_InterlockedCompareExchange64((volatile signed __int64 *)((char *)&stru_140E36558.116 + 4), 1LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    v2 = *v0;
    v3 = v0 + 1;
    qsort(v0 + 1, *v0, 8uLL, MiRegistryVaSort);
    v4 = 0LL;
    for ( i = 0LL; i < v2; ++i )
    {
      v6 = *v3;
      ++v4;
      ++v3;
      if ( i == v2 - 1 || v6 + 4096 != *v3 )
      {
        PteAddress = MiGetPteAddress(v6);
        MiDeleteBootRange(8 - 8 * v8 + PteAddress, v8);
        v4 = 0LL;
      }
    }
    ExFreePoolWithTag(v1, 0);
    *($353D57E818BB6F967B4B818D974CF463 *)((char *)&stru_140E36558.116 + 4) = 0LL;
  }
}
