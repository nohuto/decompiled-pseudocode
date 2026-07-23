/*
 * XREFs of EmonAllocateCounters @ 0x1405975E0
 * Callers:
 *     EmonInitializeProfilingBSP @ 0x140597F64 (EmonInitializeProfilingBSP.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall EmonAllocateCounters(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v5; // esi
  char *MemoryInternal; // rax
  char *v7; // rdi
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx

  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a3 )
  {
    v5 = 4 * a3;
    MemoryInternal = (char *)HalpMmAllocateMemoryInternal(4 * a3, 1u);
    v7 = MemoryInternal;
    if ( !MemoryInternal
      || (memset_0(MemoryInternal, 0, v5),
          v5 = 48 * a3,
          v8 = (void *)HalpMmAllocateMemoryInternal(48 * a3, 1u),
          (*(_QWORD *)(a1 + 16) = v8) == 0LL) )
    {
      KeBugCheckEx(0x5Cu, 0x9002uLL, v5, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\emon.c", 0x5C0uLL);
    }
    memset_0(v8, 0, v5);
    if ( a3 )
    {
      v9 = *(_QWORD *)(a1 + 16) + 16LL;
      v10 = a3;
      do
      {
        *(_QWORD *)v9 = v7;
        v7 += 4;
        *(_DWORD *)(v9 + 12) = 3;
        v9 += 48LL;
        --v10;
      }
      while ( v10 );
    }
  }
}
