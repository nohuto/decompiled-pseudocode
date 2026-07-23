/*
 * XREFs of MiCreateNodeLists @ 0x14086C474
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x1408829D4 (MiMakePartitionMemoryBlock.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140CF9A64 (MiInitializePhysicalMemoryBlocks.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiDescribePageRun @ 0x14086C5E8 (MiDescribePageRun.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateNodeLists(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v5; // ebx
  ULONG_PTR v6; // rbx
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rsi
  _QWORD *i; // rbx
  PVOID *v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rax
  PVOID P[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+30h] [rbp-10h]

  v2 = 0LL;
  P[1] = P;
  v18 = 0LL;
  P[0] = P;
  v5 = 0;
  do
  {
    if ( (int)MiDescribePageRun(P, *(_QWORD *)(a2 + 16LL * v5 + 16), *(_QWORD *)(a2 + 16LL * v5 + 24)) < 0 )
      goto LABEL_10;
    ++v5;
  }
  while ( v5 != *(_DWORD *)a2 );
  v6 = 8 * ((unsigned int)v18 + 6LL + 2LL * (unsigned int)(v18 - 1));
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, v6, 1817013581, CurrentProcessorColor | 0x80000000);
  if ( !PoolMm )
    goto LABEL_10;
  v2 = PoolMm + 16;
  *(_QWORD *)(PoolMm + 8) = 1LL;
  *(_QWORD *)PoolMm = a1;
  v9 = (unsigned int)v18;
  *(_DWORD *)(PoolMm + 16) = v18;
  v10 = *(_QWORD *)(a2 + 8);
  v11 = (_QWORD *)(v2 + 16);
  *(_QWORD *)(v2 + 8) = v10;
  for ( i = (_QWORD *)(v2 + 16 * (v9 + 1)); ; ++i )
  {
    v13 = (PVOID *)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v14 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
LABEL_15:
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v14 + 8) = P;
    *v11 = v13[2];
    v11[1] = v13[3];
    v11 += 2;
    *i = v13[4];
    ExFreePoolWithTag(v13, 0);
  }
  while ( v13 != P )
  {
    if ( v13[1] != P )
      goto LABEL_15;
    v15 = *v13;
    if ( *((PVOID **)*v13 + 1) != v13 )
      goto LABEL_15;
    P[0] = *v13;
    v15[1] = P;
    ExFreePoolWithTag(v13, 0);
LABEL_10:
    v13 = (PVOID *)P[0];
  }
  return v2;
}
