/*
 * XREFs of MiDescribePageRun @ 0x140866208
 * Callers:
 *     MiAllocateInitialMemoryBlocks @ 0x1408659F8 (MiAllocateInitialMemoryBlocks.c)
 *     MiCreateNodeLists @ 0x140866094 (MiCreateNodeLists.c)
 * Callees:
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiPageToChannel @ 0x140295870 (MiPageToChannel.c)
 *     MiRestrictRangeToNode @ 0x1402CABF0 (MiRestrictRangeToNode.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 */

__int64 __fastcall MiDescribePageRun(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  ULONG_PTR v3; // rbx
  ULONG_PTR i; // rbp
  ULONG_PTR v6; // r14
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v9; // rdi
  __int64 *v10; // rax

  v3 = a2;
  for ( i = a2 + a3; v3 != i; a3 = i - v3 )
  {
    v6 = MiRestrictRangeToNode(v3, a3);
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(64LL, 0x28uLL, 1867410765, CurrentProcessorColor | 0x80000000);
    v9 = PoolMm;
    if ( !PoolMm )
      return 3221225626LL;
    *(_QWORD *)(PoolMm + 16) = v3;
    *(_QWORD *)(PoolMm + 24) = v6;
    *(_BYTE *)(PoolMm + 36) = MiPageToChannel(v3);
    *(_DWORD *)(v9 + 32) = MiPageToNode(v3);
    v10 = *(__int64 **)(a1 + 8);
    if ( *v10 != a1 )
      __fastfail(3u);
    *(_QWORD *)v9 = a1;
    v3 += v6;
    *(_QWORD *)(v9 + 8) = v10;
    *v10 = v9;
    *(_QWORD *)(a1 + 8) = v9;
    ++*(_DWORD *)(a1 + 16);
  }
  return 0LL;
}
