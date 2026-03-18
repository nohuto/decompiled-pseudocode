/*
 * XREFs of CcInitializePartitionVacbs @ 0x1405B2EE8
 * Callers:
 *     CcInitializePartition @ 0x1405B285C (CcInitializePartition.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     CcSetVacbInFreeList @ 0x1402E28F0 (CcSetVacbInFreeList.c)
 *     CcGetVacbFromFreeList @ 0x140461210 (CcGetVacbFromFreeList.c)
 *     CcInsertVacbArray @ 0x1404D120C (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x1404D943C (CcAllocateInitializeVacbArray.c)
 *     MmReserveViewInSystemCache @ 0x14086AB08 (MmReserveViewInSystemCache.c)
 */

char __fastcall CcInitializePartitionVacbs(__int64 a1)
{
  char v1; // di
  KIRQL v3; // bl
  struct _SINGLE_LIST_ENTRY *VacbFromFreeList; // r14
  char *InitializeVacbArray; // rbx
  KIRQL v6; // bp
  KIRQL v7; // dl
  __int64 v8; // rax
  KIRQL v9; // al
  __int64 v10; // r8
  KIRQL v11; // bl
  KIRQL v12; // bl

  v1 = 1;
  while ( *(_DWORD *)(a1 + 1248) < *(_DWORD *)EmpParseLock.PriorityFloorCounts )
  {
    v3 = KeAcquireQueuedSpinLock(4uLL);
    VacbFromFreeList = CcGetVacbFromFreeList(a1, 0);
    KeReleaseQueuedSpinLock(4uLL, v3);
    if ( VacbFromFreeList )
    {
      v8 = MmReserveViewInSystemCache(*(_QWORD *)(a1 + 8));
      VacbFromFreeList->Next = (struct _SINGLE_LIST_ENTRY *)v8;
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
      if ( LODWORD(EmpParseLock.MutantListHead.Blink) == 1 )
        *((_DWORD *)InitializeVacbArray + 1) = 1;
      v7 = v6;
    }
    KeReleaseQueuedSpinLock(4uLL, v7);
  }
  return v1;
}
