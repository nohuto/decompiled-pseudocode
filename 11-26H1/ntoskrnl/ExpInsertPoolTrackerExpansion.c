/*
 * XREFs of ExpInsertPoolTrackerExpansion @ 0x1403CA7E4
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x14034CAE0 (ExAllocateContiguousHeapPool.c)
 *     ExpInsertPoolTracker @ 0x14034CF24 (ExpInsertPoolTracker.c)
 *     ExAllocateHeapPool @ 0x14039A530 (ExAllocateHeapPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403CA7E4 (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateHeapSpecialPool @ 0x1405140E8 (ExAllocateHeapSpecialPool.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAllocateHeapPages @ 0x1403480E0 (ExAllocateHeapPages.c)
 *     ExpInsertPoolTracker @ 0x14034CF24 (ExpInsertPoolTracker.c)
 *     ExpPoolTrackerChargeEntry @ 0x140399730 (ExpPoolTrackerChargeEntry.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403CA7E4 (ExpInsertPoolTrackerExpansion.c)
 *     ExpPlFindLimitEntry @ 0x1404D05D0 (ExpPlFindLimitEntry.c)
 *     ExPoolCleanupExpansionTable @ 0x140524D04 (ExPoolCleanupExpansionTable.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall ExpInsertPoolTrackerExpansion(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned __int64 QuantumTarget; // rdi
  int StackLimit; // r12d
  _QWORD *v9; // rbx
  __int64 v10; // r11
  int v11; // edx
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  size_t v14; // r13
  void *HeapPages; // rax
  ULONG_PTR v16; // r14
  __int64 v17; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
  v6 = 0LL;
  QuantumTarget = stru_140EFF2C0.QuantumTarget;
  StackLimit = (int)stru_140EFF2C0.StackLimit;
  v9 = (_QWORD *)PoolTrackTableExpansion;
  while ( 1 )
  {
    v10 = (unsigned int)v6;
    if ( (unsigned int)v6 >= (unsigned __int64)PoolTrackTableExpansionSize )
      break;
    v11 = *(_DWORD *)(PoolTrackTableExpansion + 80 * v6);
    if ( v11 == a1 )
      goto LABEL_8;
    if ( !v11 )
    {
      *(_DWORD *)(PoolTrackTableExpansion + 80 * v6) = a1;
      v9[10 * v6 + 9] = ExpPlFindLimitEntry(a1);
LABEL_8:
      ExpPoolTrackerChargeEntry((a3 & 0x100) == 0, a2, (__int64)&v9[10 * v10]);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return;
    }
    v6 = (unsigned int)(v6 + 1);
  }
  if ( (unsigned int)v6 != PoolTrackTableExpansionSize )
    goto LABEL_8;
  if ( *(_DWORD *)(stru_140EFF2C0.QuantumTarget + 80 * (__int64)stru_140EFF2C0.StackLimit - 80) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v12 = a3 & 0x100;
    v13 = QuantumTarget + 80LL * (unsigned int)(StackLimit - 1);
    _InterlockedIncrement64((volatile signed __int64 *)((v12 != 0 ? 0x18 : 0) + v13 + 16));
    _InterlockedAdd64((volatile signed __int64 *)(((unsigned int)v12 != 0LL ? 0x18 : 0) + v13 + 8), a2);
  }
  else
  {
    v19 = 80 * PoolTrackTableExpansionSize;
    v14 = (80 * PoolTrackTableExpansionSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
    HeapPages = (void *)ExAllocateHeapPages(v14 + 4096, v14 + 4096);
    v16 = (ULONG_PTR)HeapPages;
    if ( HeapPages )
    {
      if ( v9 )
        memmove(HeapPages, v9, v14);
      memset_0((void *)(v19 + v16), 0, v14 + 4096 - v19);
      PoolTrackTableExpansion = v16;
      PoolTrackTableExpansionSize = (v14 + 4096) / 0x50;
      ExpInsertPoolTracker(0x6C6F6F50u, v14 + 4096, 64LL, v16);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v9 )
        ExPoolCleanupExpansionTable((ULONG_PTR)v9);
      ExpInsertPoolTrackerExpansion(a1, a2, a3);
    }
    else
    {
      v17 = 80LL * (unsigned int)(StackLimit - 1);
      *(_DWORD *)(v17 + QuantumTarget) = 1818654287;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (a3 & 0x100) != 0 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v17 + QuantumTarget + 40));
        _InterlockedAdd64((volatile signed __int64 *)(v17 + QuantumTarget + 32), a2);
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v17 + QuantumTarget + 16));
        _InterlockedAdd64((volatile signed __int64 *)(v17 + QuantumTarget + 8), a2);
      }
    }
  }
}
