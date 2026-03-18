/*
 * XREFs of CcUnmapInactiveViewsInternal @ 0x140414910
 * Callers:
 *     CcGetVacbMiss @ 0x1402E1EA0 (CcGetVacbMiss.c)
 *     MiObtainSystemCacheView @ 0x1402E4B60 (MiObtainSystemCacheView.c)
 *     CcUnmapInactiveViews @ 0x14041480C (CcUnmapInactiveViews.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1402E0E50 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402E0ED0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcSetVacbLargeOffset @ 0x1402E1620 (CcSetVacbLargeOffset.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     CcSetVacbInFreeList @ 0x1402E28F0 (CcSetVacbInFreeList.c)
 *     CcDecrementOpenCount @ 0x14039E74C (CcDecrementOpenCount.c)
 *     CcGetRandomVacbArrayWithReference @ 0x140414840 (CcGetRandomVacbArrayWithReference.c)
 *     CcReferenceVacbArray @ 0x140414F60 (CcReferenceVacbArray.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x140414FB4 (CcRecalculateVacbArrayHighwaterMark.c)
 *     CcReferenceSharedCacheMapByVacb @ 0x140414FE4 (CcReferenceSharedCacheMapByVacb.c)
 *     CcGetVacbLargeOffset @ 0x140415070 (CcGetVacbLargeOffset.c)
 *     CcDereferenceVacbArray @ 0x140415100 (CcDereferenceVacbArray.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     CcUnmapVacb @ 0x140AFAAD0 (CcUnmapVacb.c)
 */

__int64 __fastcall CcUnmapInactiveViewsInternal(__int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // r15d
  __int64 RandomVacbArrayWithReference; // rdi
  int v7; // r12d
  unsigned int v8; // r14d
  bool v9; // bl
  unsigned int v10; // ebx
  KIRQL v11; // si
  __int64 v12; // rax
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  _QWORD *v14; // rsi
  __int64 v15; // rax
  KIRQL v16; // al
  __int64 v17; // rcx
  KIRQL v18; // r14
  unsigned int v19; // r10d
  struct _KTHREAD *CurrentThread; // r9
  struct _LIST_ENTRY *Blink; // rdx
  unsigned __int64 v22; // r8
  char *v23; // rax
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r14
  int v27; // esi
  struct _KTHREAD *ReadTransferCount; // rbx
  __int64 v30; // rbx
  __int64 v31; // rsi
  int v32; // r15d
  __int64 v33; // r8
  struct _KLOCK_ENTRIES *v34; // r9
  __int64 v35; // r13
  __int64 v36; // r12
  __int64 VacbLargeOffset; // r14
  int v38; // r12d
  unsigned int v39; // ecx
  KIRQL v40; // al
  __int64 v41; // r8
  KIRQL v42; // bl
  __int64 v43; // rdx
  bool v44; // [rsp+20h] [rbp-98h]
  unsigned int v45; // [rsp+24h] [rbp-94h]
  unsigned int v46; // [rsp+28h] [rbp-90h]
  int v47; // [rsp+2Ch] [rbp-8Ch]
  int v48; // [rsp+30h] [rbp-88h]
  int v49; // [rsp+34h] [rbp-84h]
  struct _SINGLE_LIST_ENTRY v50; // [rsp+38h] [rbp-80h]
  unsigned int v51; // [rsp+40h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v54; // [rsp+C8h] [rbp+10h]
  int v55; // [rsp+D0h] [rbp+18h]

  v54 = a2;
  LODWORD(v4) = -1;
  v46 = 0;
  v51 = 0;
  v47 = 0;
  v49 = 0;
  v5 = 0;
  v48 = 0;
  RandomVacbArrayWithReference = 0LL;
  v50.Next = 0LL;
  v7 = 0;
  v8 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a4 )
  {
    *a4 = 0LL;
    v49 = 1;
  }
  v55 = a3 & 1;
  v9 = !(a3 & 1);
  v44 = v9;
  while ( 2 )
  {
    while ( 1 )
    {
      v45 = v8;
      if ( v5 >= a2 )
        break;
      while ( 1 )
      {
        if ( v8 > CcVacbArraysHighestUsedIndex )
        {
          a2 = v54;
          goto LABEL_36;
        }
        if ( RandomVacbArrayWithReference )
          goto LABEL_15;
        LODWORD(v4) = -1;
        if ( v9 )
          break;
        v10 = v8;
        v11 = KeAcquireQueuedSpinLock(4uLL);
        while ( 1 )
        {
          v12 = CcReferenceVacbArray(v10);
          RandomVacbArrayWithReference = v12;
          if ( v12 )
            break;
          if ( ++v10 >= 0x500 )
          {
            RandomVacbArrayWithReference = 0LL;
            goto LABEL_13;
          }
        }
        CcRecalculateVacbArrayHighwaterMark(v12);
LABEL_13:
        KeReleaseQueuedSpinLock(4uLL, v11);
        v9 = v44;
        v45 = ++v8;
        if ( RandomVacbArrayWithReference )
          goto LABEL_14;
      }
      RandomVacbArrayWithReference = CcGetRandomVacbArrayWithReference();
LABEL_14:
      if ( *(_DWORD *)(RandomVacbArrayWithReference + 4) == 1 )
      {
LABEL_35:
        CcDereferenceVacbArray(RandomVacbArrayWithReference, 0LL);
        RandomVacbArrayWithReference = 0LL;
LABEL_28:
        a2 = v54;
      }
      else
      {
LABEL_15:
        if ( !v9 )
        {
          if ( (_DWORD)v4 == -1 )
            LODWORD(v4) = *(_DWORD *)(RandomVacbArrayWithReference + 8) + 1;
          Next = v50.Next;
          while ( (_DWORD)v4 )
          {
            v4 = (unsigned int)(v4 - 1);
            v14 = (_QWORD *)(RandomVacbArrayWithReference + 8 * ((unsigned int)v4 + 2LL + 4 * v4));
            v15 = v14[1];
            if ( v15
              && v15 != -1
              && !*((_WORD *)v14 + 8)
              && *v14
              && (!v50.Next || (((unsigned __int64)v50.Next ^ *v14) & 0xFFFFFFE00000LL) == 0) )
            {
              if ( v14 )
                goto LABEL_26;
              break;
            }
          }
          v9 = v44;
          goto LABEL_35;
        }
        v19 = 0;
        while ( 2 )
        {
          CurrentThread = KeGetCurrentThread();
          Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
          v22 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
          v23 = (char *)Blink + v22;
          v24 = (unsigned __int64)Blink ^ v22;
          CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v24 ^ __ROL8__(Blink, 24) ^ (v24 << 16));
          CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v24, 37);
          v14 = (_QWORD *)(RandomVacbArrayWithReference
                         + 8
                         * (HIDWORD(v23) % (*(_DWORD *)(RandomVacbArrayWithReference + 8) + 1)
                          + 4LL * (HIDWORD(v23) % (*(_DWORD *)(RandomVacbArrayWithReference + 8) + 1))
                          + 2));
          v25 = v14[1];
          if ( !v25 || v25 == -1 || *((_WORD *)v14 + 8) || !*v14 )
          {
            ++v19;
LABEL_32:
            if ( v19 > 0x10 )
            {
              ++CcDbgRandomFailed;
              v9 = 0;
              v44 = 0;
              goto LABEL_35;
            }
            continue;
          }
          break;
        }
        if ( !v14 )
          goto LABEL_32;
        Next = v50.Next;
LABEL_26:
        v16 = KeAcquireQueuedSpinLock(4uLL);
        v17 = v14[1];
        v18 = v16;
        if ( !v17
          || v17 == -1
          || *((_WORD *)v14 + 8)
          || !*v14
          || Next && (((unsigned __int64)Next ^ *v14) & 0xFFFFFFE00000LL) != 0
          || !(unsigned __int8)CcReferenceSharedCacheMapByVacb(v14) )
        {
          v50.Next = 0LL;
          KeReleaseQueuedSpinLock(4uLL, v18);
          v8 = v45;
          v9 = v44;
          goto LABEL_28;
        }
        v30 = v14[2];
        v31 = v14[1];
        v32 = (*(_DWORD *)(v31 + 152) >> 9) & 1;
        KeReleaseQueuedSpinLock(4uLL, v18);
        CcAcquireBcbLockAndVacbLock(v32, v31, v33, v34);
        v35 = *(_QWORD *)(v31 + 536);
        if ( a1 != v35 || v30 < 0 )
          goto LABEL_84;
        v36 = *(_QWORD *)(v31 + 32);
        if ( v30 >= v36 )
        {
          v7 = v47;
LABEL_84:
          CcReleaseBcbLockAndVacbLock(v32, v31);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v35 + 768), &LockHandle);
          CcDecrementOpenCount(v31);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v5 = v46;
          goto LABEL_68;
        }
        if ( v36 <= 0x2000000 )
          VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(v31 + 88) + 8 * ((unsigned __int64)(unsigned int)v30 >> 18));
        else
          VacbLargeOffset = CcGetVacbLargeOffset(v31, v30);
        if ( !VacbLargeOffset || *(_WORD *)(VacbLargeOffset + 16) )
        {
          CcReleaseBcbLockAndVacbLock(v32, v31);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v35 + 768), &LockHandle);
          CcDecrementOpenCount(v31);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v5 = v46;
          goto LABEL_67;
        }
        if ( v36 > 0x2000000 )
          CcSetVacbLargeOffset(v31, v30, 0LL, 0LL);
        else
          *(_QWORD *)(*(_QWORD *)(v31 + 88) + 8 * ((unsigned __int64)(unsigned int)v30 >> 18)) = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(v31 + 548));
        if ( *(_DWORD *)(v35 + 1248) < *(_DWORD *)EmpParseLock.PriorityFloorCounts )
        {
          v38 = 1;
LABEL_81:
          v39 = v48 | 2;
          v50.Next = 0LL;
          v48 |= 2u;
          goto LABEL_63;
        }
        v38 = 0;
        if ( v49 )
          goto LABEL_81;
        v39 = v48 & 0xFFFFFFFD;
        v48 &= ~2u;
        if ( !v50.Next && v55 )
          v50.Next = *(struct _SINGLE_LIST_ENTRY **)VacbLargeOffset;
LABEL_63:
        CcUnmapVacb(VacbLargeOffset, v31, v39);
        CcReleaseBcbLockAndVacbLock(v32, v31);
        v5 = v46;
        if ( !v38 )
        {
          v5 = v46 + 1;
          v51 = 1;
          ++v46;
          if ( v49 )
          {
            v49 = 0;
            *a4 = *(_QWORD *)VacbLargeOffset;
            *(_QWORD *)VacbLargeOffset = 0LL;
          }
        }
        v40 = KeAcquireQueuedSpinLock(4uLL);
        LOBYTE(v41) = v38;
        *(_QWORD *)(VacbLargeOffset + 8) = 0LL;
        v42 = v40;
        CcSetVacbInFreeList(v35, (struct _SINGLE_LIST_ENTRY *)VacbLargeOffset, v41);
        KeReleaseQueuedSpinLock(4uLL, v42);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v35 + 768), &LockHandle);
        CcDecrementOpenCount(v31);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_67:
        v7 = v47;
LABEL_68:
        a2 = v54;
        v8 = v45;
        v9 = v44;
      }
    }
LABEL_36:
    if ( RandomVacbArrayWithReference )
    {
      CcDereferenceVacbArray(RandomVacbArrayWithReference, 0LL);
      a2 = v54;
      RandomVacbArrayWithReference = 0LL;
    }
    if ( !v7 && v5 < a2 )
    {
      v7 = 1;
      v26 = (a2 - v5) << 18;
      v27 = 0;
      v47 = 1;
      ExAcquireFastMutex((PKGUARDED_MUTEX)&EmpParseLock.ThreadTimerDelay);
      ReadTransferCount = (struct _KTHREAD *)EmpParseLock.ReadTransferCount;
      if ( (__int64 *)EmpParseLock.ReadTransferCount != &EmpParseLock.ReadTransferCount )
      {
        do
        {
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)&EmpParseLock.ThreadTimerDelay);
          v27 |= guard_dispatch_icall_no_overrides(v26, v43);
          ExAcquireFastMutex((PKGUARDED_MUTEX)&EmpParseLock.ThreadTimerDelay);
          ReadTransferCount = *(struct _KTHREAD **)&ReadTransferCount->Header.Lock;
        }
        while ( ReadTransferCount != (struct _KTHREAD *)&EmpParseLock.ReadTransferCount );
        v7 = 1;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&EmpParseLock.ThreadTimerDelay);
      v8 = v45;
      v9 = v44;
      a2 = v54;
      if ( v27 )
        continue;
    }
    break;
  }
  _InterlockedIncrement(&CcDbgNumberOfCcUnmapInactiveViews);
  return v51;
}
