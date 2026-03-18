/*
 * XREFs of ExpInsertPoolTrackerExpansion @ 0x1403C08E4
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x14034AA60 (ExAllocateContiguousHeapPool.c)
 *     ExpInsertPoolTracker @ 0x14034AEA4 (ExpInsertPoolTracker.c)
 *     ExAllocateHeapPool @ 0x1403987D0 (ExAllocateHeapPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403C08E4 (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateHeapSpecialPool @ 0x14051A678 (ExAllocateHeapSpecialPool.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAllocateHeapPages @ 0x140346060 (ExAllocateHeapPages.c)
 *     ExpInsertPoolTracker @ 0x14034AEA4 (ExpInsertPoolTracker.c)
 *     ExpPoolTrackerChargeEntry @ 0x1403979B0 (ExpPoolTrackerChargeEntry.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403C08E4 (ExpInsertPoolTrackerExpansion.c)
 *     ExpPlFindLimitEntry @ 0x1404D6E00 (ExpPlFindLimitEntry.c)
 *     ExPoolCleanupExpansionTable @ 0x140522698 (ExPoolCleanupExpansionTable.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall ExpInsertPoolTrackerExpansion(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // r12d
  _QWORD *ThreadLock; // rbx
  __int64 v10; // r11
  int v11; // edx
  __int64 v12; // rsi
  __int64 v13; // rdx
  size_t v14; // r13
  void *HeapPages; // rax
  unsigned __int64 v16; // r14
  __int64 v17; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140EFEF90.Header.WaitListHead.Blink, &LockHandle);
  v6 = 0LL;
  v7 = PoolTrackTable;
  v8 = PoolTrackTableSize;
  ThreadLock = (_QWORD *)stru_140EFEF90.ThreadLock;
  while ( 1 )
  {
    v10 = (unsigned int)v6;
    if ( (void *)(unsigned int)v6 >= stru_140EFEF90.InitialStack )
      break;
    v11 = *(_DWORD *)(stru_140EFEF90.ThreadLock + 80 * v6);
    if ( v11 == a1 )
      goto LABEL_8;
    if ( !v11 )
    {
      *(_DWORD *)(stru_140EFEF90.ThreadLock + 80 * v6) = a1;
      ThreadLock[10 * v6 + 9] = ExpPlFindLimitEntry(a1);
LABEL_8:
      ExpPoolTrackerChargeEntry((a3 & 0x100) == 0, a2, (__int64)&ThreadLock[10 * v10]);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return;
    }
    v6 = (unsigned int)(v6 + 1);
  }
  if ( (void *)(unsigned int)v6 != stru_140EFEF90.InitialStack )
    goto LABEL_8;
  if ( *(_DWORD *)(PoolTrackTable + 80 * PoolTrackTableSize - 80) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v12 = a3 & 0x100;
    v13 = v7 + 80LL * (unsigned int)(v8 - 1);
    _InterlockedIncrement64((volatile signed __int64 *)((v12 != 0 ? 0x18 : 0) + v13 + 16));
    _InterlockedAdd64((volatile signed __int64 *)(((unsigned int)v12 != 0LL ? 0x18 : 0) + v13 + 8), a2);
  }
  else
  {
    v19 = 80 * (__int64)stru_140EFEF90.InitialStack;
    v14 = (80 * (__int64)stru_140EFEF90.InitialStack + 4095) & 0xFFFFFFFFFFFFF000uLL;
    HeapPages = (void *)ExAllocateHeapPages(v14 + 4096, v14 + 4096);
    v16 = (unsigned __int64)HeapPages;
    if ( HeapPages )
    {
      if ( ThreadLock )
        memmove(HeapPages, ThreadLock, v14);
      memset_0((void *)(v19 + v16), 0, v14 + 4096 - v19);
      stru_140EFEF90.ThreadLock = v16;
      stru_140EFEF90.InitialStack = (void *)((v14 + 4096) / 0x50);
      ExpInsertPoolTracker(0x6C6F6F50u, v14 + 4096, 64LL, v16);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( ThreadLock )
        ExPoolCleanupExpansionTable((ULONG_PTR)ThreadLock);
      ExpInsertPoolTrackerExpansion(a1, a2, a3);
    }
    else
    {
      v17 = 80LL * (unsigned int)(v8 - 1);
      *(_DWORD *)(v17 + v7) = 1818654287;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (a3 & 0x100) != 0 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v17 + v7 + 40));
        _InterlockedAdd64((volatile signed __int64 *)(v17 + v7 + 32), a2);
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v17 + v7 + 16));
        _InterlockedAdd64((volatile signed __int64 *)(v17 + v7 + 8), a2);
      }
    }
  }
}
