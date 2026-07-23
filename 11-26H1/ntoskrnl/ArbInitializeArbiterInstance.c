/*
 * XREFs of ArbInitializeArbiterInstance @ 0x14078B52C
 * Callers:
 *     IopMemInitialize @ 0x1407A94C8 (IopMemInitialize.c)
 *     IopPortInitialize @ 0x1407A9964 (IopPortInitialize.c)
 *     IopDmaInitialize @ 0x1407A9A98 (IopDmaInitialize.c)
 *     IopIrqInitialize @ 0x1407A9BB8 (IopIrqInitialize.c)
 *     IopBusNumberInitialize @ 0x1407A9C98 (IopBusNumberInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     ArbBuildAssignmentOrdering @ 0x14078AC9C (ArbBuildAssignmentOrdering.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbInitializeArbiterInstance(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  struct _KEVENT *Pool2; // rax
  int v8; // edi
  PVOID *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  struct _KEVENT *v15; // rax
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx

  *(_DWORD *)a1 = 1935831617;
  *(_QWORD *)(a1 + 320) = 0LL;
  Pool2 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
  *(_QWORD *)(a1 + 8) = Pool2;
  if ( Pool2 )
  {
    KeInitializeEvent(Pool2, SynchronizationEvent, 1u);
    v10 = ExAllocatePool2(0x100uLL);
    v9 = (PVOID *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = v10;
    if ( !v10 )
      goto LABEL_4;
    *(_DWORD *)(a1 + 104) = 4096;
    v11 = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(a1 + 40) = v11;
    if ( !v11 )
      goto LABEL_4;
    v12 = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(a1 + 48) = v12;
    if ( !v12 )
      goto LABEL_4;
    v13 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(v13 + 8) = v13;
    *(_QWORD *)v13 = v13;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_DWORD *)(v13 + 24) = 0;
    v14 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v14 + 8) = v14;
    *(_QWORD *)v14 = v14;
    *(_QWORD *)(v14 + 16) = 0LL;
    *(_DWORD *)(v14 + 24) = 0;
    *(_BYTE *)(a1 + 296) = 0;
    v15 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
    *(_QWORD *)(a1 + 304) = v15;
    if ( v15 )
    {
      KeInitializeEvent(v15, NotificationEvent, 1u);
      *(_QWORD *)(a1 + 16) = a4;
      *(_QWORD *)(a1 + 24) = L"Root";
      *(_DWORD *)(a1 + 32) = a3;
      if ( !*(_QWORD *)(a1 + 152) )
        *(_QWORD *)(a1 + 152) = ArbTestAllocation;
      if ( !*(_QWORD *)(a1 + 160) )
        *(_QWORD *)(a1 + 160) = ArbRetestAllocation;
      if ( !*(_QWORD *)(a1 + 168) )
        *(_QWORD *)(a1 + 168) = ArbCommitAllocation;
      if ( !*(_QWORD *)(a1 + 176) )
        *(_QWORD *)(a1 + 176) = ArbRollbackAllocation;
      if ( !*(_QWORD *)(a1 + 208) )
        *(_QWORD *)(a1 + 208) = xHalAllocatePmcCounterSet;
      if ( !*(_QWORD *)(a1 + 224) )
        *(_QWORD *)(a1 + 224) = xHalGetInterruptTranslator;
      if ( !*(_QWORD *)(a1 + 232) )
        *(_QWORD *)(a1 + 232) = ArbAllocateEntry;
      if ( !*(_QWORD *)(a1 + 240) )
        *(_QWORD *)(a1 + 240) = ArbGetNextAllocationRange;
      if ( !*(_QWORD *)(a1 + 248) )
        *(_QWORD *)(a1 + 248) = ArbFindSuitableRange;
      if ( !*(_QWORD *)(a1 + 256) )
        *(_QWORD *)(a1 + 256) = ArbAddAllocation;
      if ( !*(_QWORD *)(a1 + 264) )
        *(_QWORD *)(a1 + 264) = ArbBacktrackAllocation;
      if ( !*(_QWORD *)(a1 + 272) )
        *(_QWORD *)(a1 + 272) = ArbOverrideConflict;
      if ( !*(_QWORD *)(a1 + 184) )
        *(_QWORD *)(a1 + 184) = ArbBootAllocation;
      if ( !*(_QWORD *)(a1 + 200) )
        *(_QWORD *)(a1 + 200) = ArbQueryConflict;
      if ( !*(_QWORD *)(a1 + 192) )
        *(_QWORD *)(a1 + 192) = xHalGetInterruptTranslator;
      if ( !*(_QWORD *)(a1 + 216) )
        *(_QWORD *)(a1 + 216) = ArbStartArbiter;
      if ( !*(_QWORD *)(a1 + 280) )
        *(_QWORD *)(a1 + 280) = ArbInitializeRangeList;
      if ( !*(_QWORD *)(a1 + 288) )
        *(_QWORD *)(a1 + 288) = ArbDeleteOwnerRanges;
      v8 = ArbBuildAssignmentOrdering(a1);
      if ( v8 >= 0 )
        return 0LL;
    }
    else
    {
LABEL_4:
      v8 = -1073741670;
    }
  }
  else
  {
    v8 = -1073741670;
    v9 = (PVOID *)(a1 + 112);
  }
  v16 = *(void **)(a1 + 8);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  v17 = *(void **)(a1 + 304);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  v18 = *(void **)(a1 + 40);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  v19 = *(void **)(a1 + 48);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( *v9 )
    ExFreePoolWithTag(*v9, 0);
  return (unsigned int)v8;
}
