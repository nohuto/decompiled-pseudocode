/*
 * XREFs of CcCompleteAsyncWriteBehind @ 0x1405B5FF4
 * Callers:
 *     CcCompleteAsyncLazywriteWorker @ 0x1405B5E78 (CcCompleteAsyncLazywriteWorker.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcFreeWorkQueueEntry @ 0x1403853FC (CcFreeWorkQueueEntry.c)
 *     CcWriteBehindPostProcess @ 0x140386A84 (CcWriteBehindPostProcess.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall CcCompleteAsyncWriteBehind(PSLIST_ENTRY ListEntry, char a2)
{
  _SLIST_ENTRY *Next; // rdi
  __int64 v3; // r15
  char v4; // r14
  _SLIST_ENTRY *v5; // r13
  _SLIST_ENTRY *v7; // r12
  unsigned __int8 v8; // al
  unsigned __int8 v9; // bp
  unsigned __int8 *v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF

  Next = ListEntry[1].Next;
  v3 = *((_QWORD *)&ListEntry[9].Next + 1);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  v5 = Next->Next;
  v7 = Next[7].Next;
  if ( a2 )
  {
    v8 = CcWriteBehindPostProcess((__int64)Next, 1);
    v9 = v8;
    v10 = (unsigned __int8 *)&Next[8].Next + 9;
    if ( !v8 || *v10 )
      DbgPrintEx(
        0x7Fu,
        3u,
        "[%04x:%04x]CcCompleteAsyncWriteBehind: PostProc:%d, Retry:%d, PVCM:%p(vid:%2lx)\n",
        LODWORD(KeGetCurrentThread()[1].CycleTime),
        KeGetCurrentThread()[1].CurrentRunTime,
        v8,
        *v10,
        ListEntry[9].Next,
        *((_DWORD *)&ListEntry[9].Next[1].Next + 2));
    if ( !v9 && *v10 )
    {
      LODWORD(ListEntry[8].Next) = 7;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&v5[52], &LockHandle);
      v11 = (_QWORD *)(v3 + 312);
      v12 = *(_QWORD *)(v3 + 312);
      if ( *(_QWORD *)(v12 + 8) != v3 + 312 )
        goto LABEL_13;
      ListEntry->Next = (_SLIST_ENTRY *)v12;
      *((_QWORD *)&ListEntry->Next + 1) = v11;
      *(_QWORD *)(v12 + 8) = ListEntry;
      *v11 = ListEntry;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v4 = 1;
    }
  }
  if ( !v4 )
  {
    if ( *((_QWORD *)&v7->Next + 1) == 35422LL && (v13 = (unsigned int)Next[16].Next, v13 < 0xA) )
    {
      LODWORD(Next[16].Next) = v13 + 1;
      LODWORD(ListEntry[8].Next) = 7;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&v5[52], &LockHandle);
      v14 = (_QWORD *)(v3 + 312);
      v15 = *(_QWORD *)(v3 + 312);
      if ( *(_QWORD *)(v15 + 8) != v3 + 312 )
LABEL_13:
        __fastfail(3u);
      ListEntry->Next = (_SLIST_ENTRY *)v15;
      *((_QWORD *)&ListEntry->Next + 1) = v14;
      *(_QWORD *)(v15 + 8) = ListEntry;
      *v14 = ListEntry;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      if ( Next )
      {
        ExFreePoolWithTag(Next, 0x42576343u);
        ListEntry[1].Next = 0LL;
      }
      CcFreeWorkQueueEntry(ListEntry);
    }
  }
  return 1;
}
