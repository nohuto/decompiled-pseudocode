/*
 * XREFs of MiAdjustCachedStacks @ 0x1402A8504
 * Callers:
 *     MiFindContiguousPagesInOptimizedCandidates @ 0x14028EB58 (MiFindContiguousPagesInOptimizedCandidates.c)
 *     MiPartitionPeriodicTick @ 0x1402A703C (MiPartitionPeriodicTick.c)
 *     MiWorkingSetManager @ 0x1404BE000 (MiWorkingSetManager.c)
 *     MiDefragmentSlabWorker @ 0x1407063E4 (MiDefragmentSlabWorker.c)
 *     MiDeletePartitionResources @ 0x140868E28 (MiDeletePartitionResources.c)
 *     MiScrubNode @ 0x140AC642C (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x140B6D1F4 (MmRelocatePfnList.c)
 * Callees:
 *     MiDeleteCachedKernelStack @ 0x14028FE5C (MiDeleteCachedKernelStack.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     MiPruneCachedStackList @ 0x140292358 (MiPruneCachedStackList.c)
 *     MiAdjustCachedStackList @ 0x1402A8660 (MiAdjustCachedStackList.c)
 *     MiDeleteCachedKernelShadowStack @ 0x1402A97A0 (MiDeleteCachedKernelShadowStack.c)
 */

char __fastcall MiAdjustCachedStacks(__int64 a1, char a2)
{
  ULONG *v3; // rax
  unsigned int v5; // ebp
  unsigned int i; // edi
  volatile __int64 *v7; // rbx
  unsigned int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // r14
  union _SLIST_HEADER *v11; // rdx
  __int64 v12; // rdx
  int v13; // r9d

  LOBYTE(v3) = a2 & 3;
  if ( (a2 & 3) != 1 || (byte_140E2D689 & 1) == 0 )
  {
    v3 = &MiSystemPartition;
    if ( (ULONG *)a1 == &MiSystemPartition )
    {
      v5 = KeNumberProcessors_0;
      for ( i = 0; i < v5; ++i )
      {
        v7 = (volatile __int64 *)(KeGetPrcb(i) + 34608);
        if ( *v7 )
        {
          v12 = _InterlockedExchange64(v7, 0LL);
          if ( v12 )
            MiDeleteCachedKernelStack(a1, v12);
        }
        v3 = (ULONG *)*((_QWORD *)v7 + 1);
        if ( v3 && _InterlockedExchange64(v7 + 1, 0LL) )
          LOBYTE(v3) = MiDeleteCachedKernelShadowStack(a1);
      }
    }
    v8 = 0;
    if ( KeNumberNodes )
    {
      while ( 1 )
      {
        v9 = 0;
        v10 = *(_QWORD *)(a1 + 16) + 56320LL * v8;
        while ( 1 )
        {
          v11 = (union _SLIST_HEADER *)(v10 + ((unsigned __int64)v9 << 6) + 14240);
          if ( (a2 & 1) != 0 )
            break;
          MiAdjustCachedStackList(a1, v11, v9, v8);
LABEL_11:
          if ( (int)++v9 >= 8 )
            goto LABEL_12;
        }
        if ( v9 < 3 )
          break;
        if ( (a2 & 2) != 0 )
        {
          v13 = 1;
LABEL_24:
          MiPruneCachedStackList((union _SLIST_HEADER *)a1, v11, 0, v13);
          goto LABEL_11;
        }
LABEL_12:
        LOBYTE(v3) = KeNumberNodes;
        if ( ++v8 >= (unsigned __int16)KeNumberNodes )
          return (char)v3;
      }
      v13 = 0;
      goto LABEL_24;
    }
  }
  return (char)v3;
}
