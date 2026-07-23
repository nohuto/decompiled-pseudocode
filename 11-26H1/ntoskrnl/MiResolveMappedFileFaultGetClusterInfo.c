/*
 * XREFs of MiResolveMappedFileFaultGetClusterInfo @ 0x1403715AC
 * Callers:
 *     MiResolveMappedFileFault @ 0x140371380 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiComputeFaultNode @ 0x140372808 (MiComputeFaultNode.c)
 *     MiComputeHardFaultCluster @ 0x14044FB00 (MiComputeHardFaultCluster.c)
 */

void __fastcall MiResolveMappedFileFaultGetClusterInfo(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r14
  unsigned __int64 *v4; // rcx
  int v5; // ebx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _LIST_ENTRY *v10; // rbp
  __int64 Flink; // rcx
  unsigned __int64 v12; // r9
  unsigned int Address; // ebp
  struct _LIST_ENTRY *v14; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v2 = *(_QWORD *)(a1 + 32);
  v4 = *(unsigned __int64 **)a1;
  v5 = 0;
  v14 = 0LL;
  v6 = *v4;
  v7 = v4[7];
  *(_DWORD *)(a1 + 80) = MiComputeFaultNode(v4, v1, &v14);
  if ( *(_DWORD *)(a1 + 56) == 1 )
  {
    v5 = 1;
  }
  else if ( v2 )
  {
    Address = (unsigned int)v14;
    if ( !v14 && v6 < 0x7FFFFFFF0000LL )
    {
      MiLockVadTree(1u, v8, v9);
      Address = (unsigned int)MiLocateAddress(v6);
      MiUnlockVadTree(1, 0x11u);
    }
    v5 = MiComputeHardFaultCluster(*(_QWORD *)(a1 + 120), v2, v6, Address, 2);
  }
  else if ( (*(_DWORD *)(a1 + 112) & 0x400LL) != 0
         && (*(_DWORD *)(v1 + 56) & 0x20) == 0
         && (*(_DWORD *)(v7 + 184) & 0xF) == 0 )
  {
    v10 = v14;
    if ( !v14 )
    {
      MiLockVadTree(1u, v8, v9);
      v10 = MiLocateAddress(v6);
      MiUnlockVadTree(1, 0x11u);
    }
    Flink = (__int64)v10[8].Flink;
    if ( Flink >= 0
      && ((unsigned __int64)v10[8].Flink & 0xFFF) >= 0x11
      && (v6 & 0xFFFFFFFFFFFFF000uLL) == (((__int64)v10[8].Flink & 0xFFF)
                                        + (((unsigned __int64)v10[8].Flink >> 12) & 0x7FFFFFFFFFFFFLL)
                                        - 1) << 12 )
    {
      v12 = *(_QWORD *)(a1 + 8) + 8LL;
      if ( (v12 & 0xFFF) != 0
        && v12 < *(_QWORD *)(a1 + 104)
               + 8
               * (unsigned __int64)(unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 96) + 44LL)
                                                - *(_DWORD *)(*(_QWORD *)(a1 + 96) + 52LL))
        && *(_QWORD *)v12 == *(_QWORD *)(a1 + 112) )
      {
        v5 = (Flink & 0xFFF) - 1;
      }
    }
  }
  *(_DWORD *)(a1 + 136) = v5;
}
