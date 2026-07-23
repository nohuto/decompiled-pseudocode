/*
 * XREFs of CcAsyncLazywriteWorker @ 0x140387600
 * Callers:
 *     CcAsyncLazywriteWorkerThread @ 0x1404B4CA0 (CcAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcFreeWorkQueueEntry @ 0x1403853FC (CcFreeWorkQueueEntry.c)
 *     CcFindNextWorkQueueEntry @ 0x1403870A0 (CcFindNextWorkQueueEntry.c)
 *     CcWriteBehindAsync @ 0x1403879F4 (CcWriteBehindAsync.c)
 *     CcRepostToSynchronousLazywriter @ 0x140387C9C (CcRepostToSynchronousLazywriter.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14038B878 (CcPerfLogWorkItemEnqueue.c)
 *     CcPerfLogWorkItemDequeue @ 0x1404B8D3C (CcPerfLogWorkItemDequeue.c)
 *     CcPerfLogWorkItemComplete @ 0x1404BBC30 (CcPerfLogWorkItemComplete.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     CcReEngageWorkerThreads @ 0x14052DD54 (CcReEngageWorkerThreads.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CcDebugExceptionFilter @ 0x1405B3524 (CcDebugExceptionFilter.c)
 */

void __fastcall CcAsyncLazywriteWorker(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _QWORD *NextWorkQueueEntry; // rdi
  _DWORD *v5; // r12
  __int64 v6; // r14
  char v7; // r13
  unsigned __int64 *v8; // r12
  unsigned __int8 CurrentIrql; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // rcx
  _DWORD *v13; // rdx
  int v14; // eax
  struct _KTHREAD *CurrentThread; // rax
  int v16; // eax
  struct _KTHREAD *v17; // rax
  _QWORD *v18; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-B8h]
  __int64 v20; // [rsp+28h] [rbp-B0h]
  __int64 v21; // [rsp+30h] [rbp-A8h]
  __int64 v22; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD *v23; // [rsp+40h] [rbp-98h]
  _QWORD *v24; // [rsp+48h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-88h] BYREF
  int v26; // [rsp+68h] [rbp-70h]
  __int64 v27; // [rsp+70h] [rbp-68h]
  __int64 v28; // [rsp+78h] [rbp-60h]
  __int128 v29; // [rsp+80h] [rbp-58h] BYREF
  __int64 v30; // [rsp+90h] [rbp-48h]
  unsigned int v31; // [rsp+E0h] [rbp+8h]
  _DWORD *v32; // [rsp+E8h] [rbp+10h]

  v3 = 0LL;
  NextWorkQueueEntry = 0LL;
  LOBYTE(v21) = 0;
  v22 = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v23 = 0LL;
  if ( *(_DWORD *)(a1 + 32) != 7 )
    KeBugCheckEx(0x34u, 0x235uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = *(_DWORD **)(a1 + 56);
  v32 = v5;
  v6 = *(_QWORD *)(a1 + 72);
  v27 = v6;
LABEL_3:
  v7 = 0;
  v31 = 0;
  v8 = (unsigned __int64 *)(v5 + 208);
  LockHandle.LockQueue.Lock = v8;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v10 = _InterlockedExchange64((volatile __int64 *)v8, (__int64)&LockHandle);
    if ( v10 )
      KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v10, a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v8);
  }
  v5 = v32;
  if ( (_BYTE)v21 )
  {
    *(_BYTE *)(v6 + 196) = 0;
    LOBYTE(v21) = 0;
    CcReEngageWorkerThreads(v32, v6, *(unsigned int *)(v6 + 180), *(unsigned int *)(v6 + 184));
  }
  if ( v23 == (_QWORD *)35422 )
  {
    if ( *((_DWORD *)NextWorkQueueEntry + 32) == 7 )
      *(_QWORD *)(NextWorkQueueEntry[3] + 504LL) = NextWorkQueueEntry;
    v18 = (_QWORD *)v3[1];
    if ( (_QWORD *)*v18 != v3 )
      __fastfail(3u);
    *NextWorkQueueEntry = v3;
    NextWorkQueueEntry[1] = v18;
    *v18 = NextWorkQueueEntry;
    v3[1] = NextWorkQueueEntry;
    v23 = 0LL;
  }
  while ( !v7 )
  {
    v7 = 1;
    v3 = (_QWORD *)(v6 + 312);
    if ( (_QWORD *)*v3 == v3 )
      break;
    v11 = *(_QWORD *)(v6 + 16);
    if ( CcEnablePerVolumeLazyWriter )
    {
      v12 = (_DWORD *)(v11 + 808);
      v13 = (_DWORD *)(v11 + 776);
    }
    else
    {
      v12 = v32 + 218;
      v13 = v32 + 210;
    }
    if ( v3 == (_QWORD *)(v6 + 104) )
      goto LABEL_40;
    if ( !*v12 || (unsigned int)(*(_DWORD *)(v6 + 192) + 1) < *v13 || *(_DWORD *)(v6 + 152) )
    {
      if ( v3 == (_QWORD *)(v6 + 104) )
      {
LABEL_40:
        if ( (unsigned int)(*(_DWORD *)(v6 + 188) + 1) <= v32[322] )
          goto LABEL_20;
      }
      else
      {
LABEL_20:
        NextWorkQueueEntry = CcFindNextWorkQueueEntry((__int64)v12, v6, (_QWORD *)(v6 + 312));
        v24 = NextWorkQueueEntry;
        if ( NextWorkQueueEntry )
        {
          v28 = v6 + 188;
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 188));
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( (xmmword_140FC0C10 & 0x20000) != 0 )
            CcPerfLogWorkItemDequeue(NextWorkQueueEntry);
          v14 = *((_DWORD *)NextWorkQueueEntry + 32);
          if ( v14 == 4 )
          {
            KeSetEvent((PRKEVENT)NextWorkQueueEntry[2], 0, 0);
            LOBYTE(v21) = 1;
          }
          else if ( v14 == 7 )
          {
            CurrentThread = KeGetCurrentThread();
            *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
            do
            {
              v23 = NextWorkQueueEntry;
              v16 = CcWriteBehindAsync(NextWorkQueueEntry, &v22, &v29);
              a1 = v31;
              if ( v31 >= 0xA )
                break;
              a1 = v31 + 1;
              v31 = a1;
              v26 = a1;
            }
            while ( v23 == (_QWORD *)35422 );
            if ( v16 == 2 )
            {
              CcRepostToSynchronousLazywriter(NextWorkQueueEntry);
              NextWorkQueueEntry = 0LL;
              v24 = 0LL;
            }
            v17 = KeGetCurrentThread();
            *((_DWORD *)&v17[1].SwapListEntry + 3) &= ~2u;
          }
          _InterlockedDecrement((volatile signed __int32 *)(v6 + 188));
          if ( NextWorkQueueEntry )
          {
            if ( v23 == (_QWORD *)35422 )
            {
              if ( (xmmword_140FC0C10 & 0x20000) != 0 )
              {
                LOBYTE(a3) = 1;
                CcPerfLogWorkItemEnqueue(v3, NextWorkQueueEntry, a3, 0LL, BugCheckParameter4, v20, v21);
              }
            }
            else
            {
              if ( (xmmword_140FC0C10 & 0x20000) != 0 )
                CcPerfLogWorkItemComplete(NextWorkQueueEntry);
              CcFreeWorkQueueEntry((PSLIST_ENTRY)NextWorkQueueEntry);
            }
          }
          goto LABEL_3;
        }
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
