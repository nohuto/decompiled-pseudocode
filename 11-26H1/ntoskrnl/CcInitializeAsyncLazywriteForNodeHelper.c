/*
 * XREFs of CcInitializeAsyncLazywriteForNodeHelper @ 0x1404EEE50
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagFromNode @ 0x140399FE0 (ExAllocatePoolWithTagFromNode.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall CcInitializeAsyncLazywriteForNodeHelper(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  char v4; // bl
  __int64 v5; // r14
  __int64 v7; // r15
  __int64 PriorityFloorSummary; // rdx
  int v12; // r9d
  void *PoolWithTagFromNode; // rax
  __int64 *v14; // rcx
  unsigned int i; // esi
  __int64 v16; // rax
  unsigned int v17; // esi
  __int64 v18; // rax
  char result; // al

  v4 = 0;
  v5 = a3 + 288;
  *(_QWORD *)(a3 + 296) = a3 + 288;
  v7 = a3 + 360;
  *(_QWORD *)(a3 + 288) = a3 + 288;
  PriorityFloorSummary = EmpParseLock.PriorityFloorSummary;
  *(_QWORD *)(a3 + 368) = a3 + 360;
  *(_QWORD *)(a3 + 360) = a3 + 360;
  *(_QWORD *)(a3 + 320) = a3 + 312;
  *(_QWORD *)(a3 + 312) = a3 + 312;
  *(_QWORD *)(a3 + 392) = a3 + 384;
  *(_QWORD *)(a3 + 384) = a3 + 384;
  *(_WORD *)(a3 + 328) = 1;
  *(_BYTE *)(a3 + 330) = 6;
  *(_DWORD *)(a3 + 332) = 0;
  *(_QWORD *)(a3 + 344) = a3 + 336;
  *(_QWORD *)(a3 + 336) = a3 + 336;
  v12 = *(_DWORD *)(a3 + 24);
  *(_DWORD *)(a3 + 304) = 0;
  *(_DWORD *)(a3 + 376) = 0;
  PoolWithTagFromNode = (void *)ExAllocatePoolWithTagFromNode(
                                  a1,
                                  4 * PriorityFloorSummary,
                                  0x71576343u,
                                  v12 | 0x80000000);
  *(_QWORD *)(a3 + 352) = PoolWithTagFromNode;
  if ( PoolWithTagFromNode )
  {
    memset_0(PoolWithTagFromNode, 255, 4LL * EmpParseLock.PriorityFloorSummary);
    for ( i = 0; i < EmpParseLock.PriorityFloorSummary; ++i )
    {
      v16 = ExAllocatePoolWithTagFromNode((__int64)v14, 0x50uLL, 0x71576343u, *(_DWORD *)(a3 + 24) | 0x80000000);
      if ( !v16 )
        goto LABEL_15;
      *(_QWORD *)(v16 + 32) = 7LL;
      *(_QWORD *)(v16 + 56) = a1;
      *(_QWORD *)(v16 + 64) = a2;
      *(_QWORD *)(v16 + 72) = a3;
      *(_DWORD *)(v16 + 40) = i;
      *(_QWORD *)(v16 + 16) = CcAsyncLazywriteWorkerThread;
      *(_QWORD *)(v16 + 24) = v16;
      *(_QWORD *)v16 = 0LL;
      v14 = *(__int64 **)(v5 + 8);
      if ( *v14 != v5 )
LABEL_13:
        __fastfail(3u);
      *(_QWORD *)v16 = v5;
      *(_QWORD *)(v16 + 8) = v14;
      *v14 = v16;
      *(_QWORD *)(v5 + 8) = v16;
      if ( (*(_DWORD *)(a2 + 1616) & 2) != 0 )
        break;
    }
    v17 = 0;
    while ( v17 < *(_DWORD *)(a2 + 1612) )
    {
      v18 = ExAllocatePoolWithTagFromNode((__int64)v14, 0x50uLL, 0x71576343u, *(_DWORD *)(a3 + 24) | 0x80000000);
      if ( !v18 )
        goto LABEL_15;
      *(_QWORD *)(v18 + 32) = 8LL;
      *(_QWORD *)(v18 + 56) = a1;
      *(_QWORD *)(v18 + 64) = a2;
      *(_QWORD *)(v18 + 72) = a3;
      *(_DWORD *)(v18 + 40) = v17;
      *(_QWORD *)(v18 + 16) = CcCompleteAsyncLazywriteWorkerThread;
      *(_QWORD *)(v18 + 24) = v18;
      *(_QWORD *)v18 = 0LL;
      v14 = *(__int64 **)(v7 + 8);
      if ( *v14 != v7 )
        goto LABEL_13;
      *(_QWORD *)v18 = v7;
      ++v17;
      *(_QWORD *)(v18 + 8) = v14;
      *v14 = v18;
      *(_QWORD *)(v7 + 8) = v18;
    }
    v4 = 1;
  }
LABEL_15:
  result = v4;
  *a4 = v4;
  return result;
}
