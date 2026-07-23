/*
 * XREFs of MmFreeBootRegistry @ 0x14086A188
 * Callers:
 *     CmpFreeBootRegistry @ 0x1406E7E00 (CmpFreeBootRegistry.c)
 *     MiPageBootRegistry @ 0x1406E8744 (MiPageBootRegistry.c)
 *     HvpDropPagedBins @ 0x140A8EFC0 (HvpDropPagedBins.c)
 * Callees:
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     MiDeleteBootRange @ 0x1406E827C (MiDeleteBootRange.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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

  v0 = (size_t *)_InterlockedCompareExchange64((volatile signed __int64 *)((char *)&stru_140E366D8.116 + 4), 1LL, 0LL);
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
    *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&stru_140E366D8.116 + 4) = 0LL;
  }
}
