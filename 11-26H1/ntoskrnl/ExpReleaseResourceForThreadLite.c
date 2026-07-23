/*
 * XREFs of ExpReleaseResourceForThreadLite @ 0x140304020
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x140494B10 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     ExpCommitWakeResourceShared @ 0x140273420 (ExpCommitWakeResourceShared.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PerfLogExecutiveResourceRelease @ 0x1403047A0 (PerfLogExecutiveResourceRelease.c)
 *     ExpFreeOwnerEntry @ 0x140304B10 (ExpFreeOwnerEntry.c)
 *     RtlRemoveEntryCircularList @ 0x140440580 (RtlRemoveEntryCircularList.c)
 *     RtlInsertHeadCircularList @ 0x1404405D0 (RtlInsertHeadCircularList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall ExpReleaseResourceForThreadLite(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter3, __int64 a3)
{
  volatile __int64 *v3; // r14
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // r8
  bool v9; // r15
  ULONG_PTR v10; // rdx
  unsigned int v11; // edi
  unsigned int v12; // r14d
  __int64 v13; // rdi
  char v14; // dl
  int v15; // ecx
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // esi
  unsigned int v20; // ecx
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rdx
  volatile signed __int32 *v28; // rax
  __int64 v29; // rdi
  char v30; // r10
  unsigned int v31; // r9d
  int v32; // ecx
  volatile signed __int32 *v33; // rax
  unsigned int v34; // esi
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v40; // [rsp+90h] [rbp+40h]
  volatile signed __int32 *v41; // [rsp+A0h] [rbp+50h] BYREF

  v3 = (volatile __int64 *)(BugCheckParameter1 + 96);
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v7 = _InterlockedExchange64(v3, (__int64)&LockHandle);
    if ( v7 )
      KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v7, a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v3);
  }
  CurrentThread = KeGetCurrentThread();
  if ( ((*(_BYTE *)(BugCheckParameter1 + 26) & 1) != 0 || LODWORD(ExSaPageGroupDescriptorArrayLock.AutoBoostThreadState))
    && (BugCheckParameter3 & 3) != 3
    && (struct _KTHREAD *)BugCheckParameter3 != CurrentThread )
  {
    KeBugCheckEx(0x16Eu, BugCheckParameter1, (ULONG_PTR)CurrentThread, BugCheckParameter3, 0LL);
  }
  if ( *(char *)(BugCheckParameter1 + 26) < 0 )
  {
    v9 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    if ( (*(_BYTE *)(BugCheckParameter1 + 26) & 1) != 0
      || LODWORD(ExSaPageGroupDescriptorArrayLock.AutoBoostThreadState) )
    {
      v10 = BugCheckParameter1 + 48;
      if ( *(_QWORD *)(BugCheckParameter1 + 48) != BugCheckParameter3 )
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter3, *(_QWORD *)(BugCheckParameter1 + 16), 1uLL);
    }
    else
    {
      v10 = BugCheckParameter1 + 48;
    }
    v11 = (*(_DWORD *)(v10 + 8) >> 3) - 1;
    *(_DWORD *)(BugCheckParameter1 + 56) = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | (8 * v11);
    if ( v11 )
    {
      v12 = *(_DWORD *)(BugCheckParameter1 + 68);
      v19 = 65586;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      ExpFreeOwnerEntry(v10);
      v12 = *(_DWORD *)(BugCheckParameter1 + 68);
      v13 = 0LL;
      v14 = *(_BYTE *)(BugCheckParameter1 + 26);
      v15 = *(_DWORD *)(BugCheckParameter1 + 72);
      if ( v15 )
      {
        v28 = *(volatile signed __int32 **)(BugCheckParameter1 + 32);
        *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
        *(_DWORD *)(BugCheckParameter1 + 72) = 0;
        *(_BYTE *)(BugCheckParameter1 + 26) = v14 & 0x7F;
        v41 = v28;
        *(_DWORD *)(BugCheckParameter1 + 64) = *(_DWORD *)(BugCheckParameter1 + 64) - 1 + v15;
      }
      else
      {
        v41 = 0LL;
        if ( *(_DWORD *)(BugCheckParameter1 + 76) )
        {
          if ( *(_QWORD *)(BugCheckParameter1 + 40) )
          {
            RtlRemoveEntryCircularList(BugCheckParameter1 + 40);
            v13 = *(_QWORD *)(v27 + 16);
            RtlInsertHeadCircularList(&v41, v27);
          }
          --*(_DWORD *)(BugCheckParameter1 + 76);
          *(_DWORD *)(BugCheckParameter1 + 64) = *(_DWORD *)(BugCheckParameter1 + 64);
        }
        else
        {
          *(_BYTE *)(BugCheckParameter1 + 26) = v14 & 0x7F;
          *(_DWORD *)(BugCheckParameter1 + 64) = 0;
          *(_WORD *)(BugCheckParameter1 + 24) = 0;
        }
      }
      if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
        *(_BYTE *)(BugCheckParameter1 + 26) &= 0xF9u;
      v16 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
      if ( v13 )
      {
        *(_QWORD *)(BugCheckParameter1 + 48) = v13;
        *(_DWORD *)(BugCheckParameter1 + 56) = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | 8;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ExpCommitWakeResourceShared(v17, &v41, v18, v16, v13 != 0);
      v19 = 65570;
      v11 = 0;
    }
    __incgsdword(0x90ACu);
    goto LABEL_26;
  }
  v9 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  v20 = 0;
  if ( (BugCheckParameter3 & 3) == 0 )
    v20 = *(unsigned __int8 *)(BugCheckParameter3 + 1120);
  v21 = BugCheckParameter1 + 48;
  if ( *(_QWORD *)(BugCheckParameter1 + 48) != BugCheckParameter3 )
  {
    v22 = *(_QWORD *)(BugCheckParameter1 + 48) != 0LL;
    if ( !v20
      || (v23 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
      || v20 >= *(_DWORD *)(v23 + 8)
      || (v21 = 16LL * v20 + v23, *(_QWORD *)v21 != BugCheckParameter3) )
    {
      v24 = *(_QWORD *)(BugCheckParameter1 + 16);
      v25 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( !v24 || (v26 = v24 + 16LL * *(unsigned int *)(v24 + 8), v21 = v24 + 16, v22 >= v25) )
LABEL_38:
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter3, *(_QWORD *)(BugCheckParameter1 + 16), 2uLL);
      while ( *(_QWORD *)v21 != BugCheckParameter3 )
      {
        if ( !*(_QWORD *)v21 || (++v22, v22 != v25) )
        {
          v21 += 16LL;
          if ( v21 != v26 )
            continue;
        }
        goto LABEL_38;
      }
      KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v21 - *(_DWORD *)(BugCheckParameter1 + 16)) >> 4;
    }
  }
  if ( !v21 )
    goto LABEL_38;
  v40 = *(_DWORD *)(v21 + 8) & 7 | (8 * (*(_DWORD *)(v21 + 8) >> 3) - 8);
  v11 = v40 >> 3;
  *(_DWORD *)(v21 + 8) = v40;
  if ( v40 >> 3 )
  {
    v12 = *(_DWORD *)(BugCheckParameter1 + 68);
    v19 = 65618;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x90B0u);
    goto LABEL_26;
  }
  ExpFreeOwnerEntry(v21);
  v12 = *(_DWORD *)(BugCheckParameter1 + 68);
  v29 = 0LL;
  v30 = *(_BYTE *)(BugCheckParameter1 + 26);
  v31 = *(_DWORD *)(BugCheckParameter1 + 64);
  if ( v31 > 1 )
    goto LABEL_54;
  if ( *(_DWORD *)(BugCheckParameter1 + 76) )
  {
    v37 = *(_QWORD *)(BugCheckParameter1 + 40);
    v41 = 0LL;
    if ( v37 )
    {
      RtlRemoveEntryCircularList(BugCheckParameter1 + 40);
      v29 = *(_QWORD *)(v38 + 16);
      RtlInsertHeadCircularList(&v41, v38);
    }
    v32 = 1;
    --*(_DWORD *)(BugCheckParameter1 + 76);
    *(_BYTE *)(BugCheckParameter1 + 26) = v30 | 0x80;
    goto LABEL_56;
  }
  v32 = *(_DWORD *)(BugCheckParameter1 + 72);
  if ( v32 )
  {
    v33 = *(volatile signed __int32 **)(BugCheckParameter1 + 32);
    *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
    *(_DWORD *)(BugCheckParameter1 + 72) = 0;
  }
  else
  {
LABEL_54:
    v33 = 0LL;
    v32 = 0;
  }
  v41 = v33;
LABEL_56:
  *(_DWORD *)(BugCheckParameter1 + 64) = v32 + v31 - 1;
  if ( !(v32 + v31 - 1) )
    *(_WORD *)(BugCheckParameter1 + 24) = 0;
  if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
    *(_BYTE *)(BugCheckParameter1 + 26) &= 0xF9u;
  v34 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
  if ( v29 )
  {
    *(_QWORD *)(BugCheckParameter1 + 48) = v29;
    *(_DWORD *)(BugCheckParameter1 + 56) = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | 8;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ExpCommitWakeResourceShared(v35, &v41, v36, v34, v29 != 0);
  __incgsdword(0x90B0u);
  v19 = 65602;
  v11 = 0;
LABEL_26:
  if ( v9 )
    PerfLogExecutiveResourceRelease(v19, BugCheckParameter1, v11, v12);
}
