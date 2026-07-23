/*
 * XREFs of CcAllocateInitializeVacbArray @ 0x1404D2B1C
 * Callers:
 *     CcGetVirtualAddress @ 0x1402C2D60 (CcGetVirtualAddress.c)
 *     CcInitializePartitionVacbs @ 0x1405B56F8 (CcInitializePartitionVacbs.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 */

char *CcAllocateInitializeVacbArray()
{
  KIRQL v0; // al
  char *PoolWithTag; // rax
  char *v3; // rbx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  KIRQL v6; // al

  v0 = KeAcquireQueuedSpinLock(4uLL);
  if ( *(_DWORD *)&EmpParseLock.PriorityFloorCounts[24] < 0x500u )
  {
    ++*(_DWORD *)&EmpParseLock.PriorityFloorCounts[24];
    KeReleaseQueuedSpinLock(4uLL, v0);
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x20000uLL, 0x61566343u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      v4 = PoolWithTag + 48;
      v5 = 3276LL;
      do
      {
        *v4 = v3;
        v4 += 5;
        --v5;
      }
      while ( v5 );
    }
    else
    {
      v6 = KeAcquireQueuedSpinLock(4uLL);
      --*(_DWORD *)&EmpParseLock.PriorityFloorCounts[24];
      KeReleaseQueuedSpinLock(4uLL, v6);
    }
    return v3;
  }
  else
  {
    KeReleaseQueuedSpinLock(4uLL, v0);
    return 0LL;
  }
}
