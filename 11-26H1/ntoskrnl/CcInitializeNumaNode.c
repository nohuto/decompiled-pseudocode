/*
 * XREFs of CcInitializeNumaNode @ 0x1405B5BC0
 * Callers:
 *     CcInitializePartition @ 0x1405B506C (CcInitializePartition.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     ExAllocatePoolWithTagFromNode @ 0x140399FE0 (ExAllocatePoolWithTagFromNode.c)
 *     CcDeleteNumaNode @ 0x1403E7730 (CcDeleteNumaNode.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall CcInitializeNumaNode(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  char v6; // bl
  __int64 *v7; // rcx
  _QWORD *v8; // r15
  _DWORD *v9; // r14
  _DWORD *v10; // r12
  _DWORD *v11; // r13
  unsigned int v12; // ebp
  unsigned int v13; // eax
  __int64 PoolWithTagFromNode; // rax
  unsigned int v15; // ebp
  __int64 v16; // rax
  unsigned int v17; // ebp
  __int64 v18; // rax
  _QWORD *v19; // rcx
  int v21; // [rsp+28h] [rbp-50h]

  v6 = 0;
  memset_0(a2, 0, 0x190uLL);
  a2[6] = a4;
  v8 = a2 + 8;
  *a2 = 26215158;
  v9 = a2 + 14;
  a2[1] = 1;
  v10 = a2 + 34;
  *((_QWORD *)a2 + 1) = a1;
  v11 = a2 + 40;
  *((_QWORD *)a2 + 5) = a2 + 8;
  v12 = 0;
  *((_QWORD *)a2 + 4) = a2 + 8;
  *((_QWORD *)a2 + 8) = a2 + 14;
  *((_QWORD *)a2 + 7) = a2 + 14;
  *((_QWORD *)a2 + 10) = a2 + 18;
  *((_QWORD *)a2 + 9) = a2 + 18;
  *((_QWORD *)a2 + 12) = a2 + 22;
  *((_QWORD *)a2 + 11) = a2 + 22;
  *((_QWORD *)a2 + 14) = a2 + 26;
  *((_QWORD *)a2 + 13) = a2 + 26;
  *((_QWORD *)a2 + 18) = a2 + 34;
  *((_QWORD *)a2 + 17) = a2 + 34;
  *((_QWORD *)a2 + 16) = a2 + 30;
  *((_QWORD *)a2 + 15) = a2 + 30;
  v13 = a4 | 0x80000000;
  *((_QWORD *)a2 + 21) = a2 + 40;
  *((_QWORD *)a2 + 20) = a2 + 40;
  while ( v12 < *(_DWORD *)(a1 + 840) )
  {
    PoolWithTagFromNode = ExAllocatePoolWithTagFromNode((__int64)v7, 0x50uLL, 0x71576343u, v13);
    if ( !PoolWithTagFromNode )
    {
LABEL_16:
      CcDeleteNumaNode((__int64)a2);
      return v6;
    }
    *(_DWORD *)(PoolWithTagFromNode + 32) = 1;
    *(_QWORD *)(PoolWithTagFromNode + 56) = a1;
    *(_QWORD *)(PoolWithTagFromNode + 64) = 0LL;
    *(_QWORD *)(PoolWithTagFromNode + 72) = a2;
    *(_DWORD *)(PoolWithTagFromNode + 40) = v12;
    *(_DWORD *)(PoolWithTagFromNode + 36) = -1;
    *(_QWORD *)(PoolWithTagFromNode + 16) = CcWorkerThread;
    *(_QWORD *)(PoolWithTagFromNode + 24) = PoolWithTagFromNode;
    *(_QWORD *)PoolWithTagFromNode = 0LL;
    v7 = (__int64 *)*((_QWORD *)a2 + 8);
    if ( (_DWORD *)*v7 != v9 )
      goto LABEL_18;
    *(_QWORD *)PoolWithTagFromNode = v9;
    ++v12;
    *(_QWORD *)(PoolWithTagFromNode + 8) = v7;
    *v7 = PoolWithTagFromNode;
    *((_QWORD *)a2 + 8) = PoolWithTagFromNode;
    v13 = a4 | 0x80000000;
  }
  v15 = 0;
  while ( v15 < *(_DWORD *)(a1 + 864) )
  {
    v16 = ExAllocatePoolWithTagFromNode((__int64)v7, 0x50uLL, 0x71576343u, v13);
    if ( !v16 )
      goto LABEL_16;
    *(_DWORD *)(v16 + 32) = 2;
    *(_QWORD *)(v16 + 56) = a1;
    *(_QWORD *)(v16 + 64) = 0LL;
    *(_QWORD *)(v16 + 72) = a2;
    *(_DWORD *)(v16 + 40) = v15;
    *(_DWORD *)(v16 + 36) = -1;
    *(_QWORD *)(v16 + 16) = CcWorkerThread;
    *(_QWORD *)(v16 + 24) = v16;
    *(_QWORD *)v16 = 0LL;
    v7 = (__int64 *)*((_QWORD *)a2 + 18);
    if ( (_DWORD *)*v7 != v10 )
      goto LABEL_18;
    *(_QWORD *)v16 = v10;
    ++v15;
    *(_QWORD *)(v16 + 8) = v7;
    *v7 = v16;
    *((_QWORD *)a2 + 18) = v16;
    v13 = a4 | 0x80000000;
  }
  v17 = 0;
  while ( v17 < *(_DWORD *)(a1 + 868) )
  {
    v18 = ExAllocatePoolWithTagFromNode((__int64)v7, 0x50uLL, 0x71576343u, v13);
    if ( !v18 )
      goto LABEL_16;
    *(_DWORD *)(v18 + 32) = 5;
    *(_QWORD *)(v18 + 56) = a1;
    *(_QWORD *)(v18 + 64) = 0LL;
    *(_QWORD *)(v18 + 72) = a2;
    *(_DWORD *)(v18 + 40) = v17;
    *(_DWORD *)(v18 + 36) = -1;
    *(_QWORD *)(v18 + 16) = CcCachemapUninitWorkerThread;
    *(_QWORD *)(v18 + 24) = v18;
    *(_QWORD *)v18 = 0LL;
    v7 = (__int64 *)*((_QWORD *)a2 + 21);
    if ( (_DWORD *)*v7 != v11 )
      goto LABEL_18;
    *(_QWORD *)v18 = v11;
    ++v17;
    *(_QWORD *)(v18 + 8) = v7;
    *v7 = v18;
    *((_QWORD *)a2 + 21) = v18;
    v13 = a4 | 0x80000000;
  }
  v19 = *(_QWORD **)(a1 + 24);
  if ( *v19 != a1 + 16 )
LABEL_18:
    __fastfail(3u);
  *((_QWORD *)a2 + 5) = v19;
  *v8 = a1 + 16;
  v6 = 1;
  *v19 = v8;
  v21 = CcNumberNumaNodes;
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 8LL * a4 + 128) = a2;
  DbgPrintEx(
    0x7Fu,
    2u,
    "CcInitializeNumaNode: Initialized NumaNode=%p(id:%lu %% #nodes:%lu), Partition=%p \n",
    a2,
    a4,
    v21,
    (const void *)a1);
  return v6;
}
