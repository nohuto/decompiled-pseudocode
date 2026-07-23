/*
 * XREFs of HalpDmaAllocateTranslationBuffer @ 0x140CB653C
 * Callers:
 *     HalpDmaInitializeMasterAdapter @ 0x140CB6CB8 (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpDmaAllocateTranslationBuffer(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 result; // rax
  void *v6; // rax
  __int64 v7; // rcx
  void *v8; // rdi

  v4 = HalpMmAllocCtxAlloc(a1, 24LL);
  if ( !v4 )
    return 0LL;
  v6 = (void *)HalpMmAllocCtxAlloc(v3, 0x4000LL);
  v8 = v6;
  if ( !v6 )
  {
    HalpMmAllocCtxFree(v7, v4);
    return 0LL;
  }
  *(_QWORD *)v4 = 0LL;
  *(_DWORD *)(v4 + 12) = 0;
  memset_0(v6, 0, 0x4000uLL);
  *(_DWORD *)(v4 + 8) = 227;
  result = v4;
  *(_QWORD *)(v4 + 16) = v8;
  *(_QWORD *)a2 = v4;
  *(_DWORD *)(a2 + 8) = 0;
  return result;
}
