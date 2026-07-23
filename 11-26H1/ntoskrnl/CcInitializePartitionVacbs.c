/*
 * XREFs of CcInitializePartitionVacbs @ 0x1405B56F8
 * Callers:
 *     CcInitializePartition @ 0x1405B506C (CcInitializePartition.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     CcSetVacbInFreeList @ 0x1402C49B0 (CcSetVacbInFreeList.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     CcGetVacbFromFreeList @ 0x14045A1D0 (CcGetVacbFromFreeList.c)
 *     CcInsertVacbArray @ 0x1404CAC3C (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x1404D2B1C (CcAllocateInitializeVacbArray.c)
 *     MmReserveViewInSystemCache @ 0x140870EE8 (MmReserveViewInSystemCache.c)
 */

char __fastcall CcInitializePartitionVacbs(__int64 a1)
{
  char v1; // di
  KIRQL v3; // bl
  __int64 *VacbFromFreeList; // r14
  char *InitializeVacbArray; // rbx
  KIRQL v6; // bp
  KIRQL v7; // dl
  __int64 v8; // rax
  KIRQL v9; // al
  __int64 v10; // r8
  KIRQL v11; // bl
  KIRQL v12; // bl

  v1 = 1;
  while ( *(_DWORD *)(a1 + 1248) < LODWORD(EmpParseLock.PropagateBoostsEntry.Next) )
  {
    v3 = KeAcquireQueuedSpinLock(4uLL);
    VacbFromFreeList = CcGetVacbFromFreeList(($04F135B480AA75E9F84DA8531FC1BADA *)a1, 0);
    KeReleaseQueuedSpinLock(4uLL, v3);
    if ( VacbFromFreeList )
    {
      v8 = MmReserveViewInSystemCache(*(_QWORD *)(a1 + 8));
      *VacbFromFreeList = v8;
      if ( !v8 )
      {
        v1 = 0;
        v12 = KeAcquireQueuedSpinLock(4uLL);
        CcSetVacbInFreeList(a1, VacbFromFreeList, 0LL);
        KeReleaseQueuedSpinLock(4uLL, v12);
        return v1;
      }
      v9 = KeAcquireQueuedSpinLock(4uLL);
      LOBYTE(v10) = 1;
      v11 = v9;
      CcSetVacbInFreeList(a1, VacbFromFreeList, v10);
      v7 = v11;
    }
    else
    {
      InitializeVacbArray = CcAllocateInitializeVacbArray();
      if ( !InitializeVacbArray )
        return 0;
      v6 = KeAcquireQueuedSpinLock(4uLL);
      CcInsertVacbArray(a1, InitializeVacbArray);
      if ( *(_DWORD *)&EmpParseLock.PriorityFloorCounts[24] == 1 )
        *((_DWORD *)InitializeVacbArray + 1) = 1;
      v7 = v6;
    }
    KeReleaseQueuedSpinLock(4uLL, v7);
  }
  return v1;
}
