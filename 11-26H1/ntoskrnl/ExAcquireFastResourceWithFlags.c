/*
 * XREFs of ExAcquireFastResourceWithFlags @ 0x1406D1B40
 * Callers:
 *     <none>
 * Callees:
 *     KeAbEncodeLockHandle @ 0x14025FF70 (KeAbEncodeLockHandle.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x140274F40 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x140275C10 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1402763B0 (ExpAcquireFastResourceSharedSlow.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KeAbMarkCrossThreadReleasable @ 0x14052C0B0 (KeAbMarkCrossThreadReleasable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceWithFlags(struct _KTHREAD *a1, ULONG_PTR BugCheckParameter2, char a3)
{
  char v3; // di
  KSPIN_LOCK *CurrentThread; // r14
  struct _KLOCK_ENTRIES *v8; // r9
  int v9; // r15d
  unsigned __int8 v10; // dl
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v12; // r8
  volatile unsigned __int8 *v13; // rdx
  unsigned __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 *p_ThreadLock; // rcx
  char v18; // r15
  char v19; // r13
  int v20; // r12d
  bool v21; // r15
  int v22; // r13d
  char v23; // al
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  struct AutoBoost::_AB_BOOST_CONTEXT *v26; // r9
  __int64 v27; // rdx
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  void *v30; // rcx
  ULONG_PTR v31; // r9
  int v32; // r10d
  int v33; // r15d
  int v34; // r11d
  unsigned __int8 v35; // r8
  __int64 v36; // rdx
  struct _KTHREAD *v37; // rcx
  int v38; // ecx
  __int64 v39; // r13
  __int64 v40; // r14
  unsigned __int64 v41; // rax
  signed __int64 v42; // rax
  __int64 v43; // rtt
  char v44; // r15
  int v45; // r9d
  int v46; // r12d
  int v47; // r15d
  struct _KPRCB *v48; // rcx
  signed __int32 *v49; // r8
  struct AutoBoost::_AB_BOOST_CONTEXT *v50; // r9
  __int64 v51; // rdx
  signed __int32 v52; // eax
  signed __int32 v53; // ett
  int v55; // [rsp+70h] [rbp+18h]
  int v56; // [rsp+70h] [rbp+18h]

  v3 = 1;
  if ( (a3 & 1) != 0 )
  {
    CurrentThread = (KSPIN_LOCK *)KeGetCurrentThread();
    v8 = (struct _KLOCK_ENTRIES *)WORD1(a1->SListFaultAddress);
    v9 = a3 & 8;
    v10 = 2 - (v9 != 0);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v12 = KeGetCurrentThread();
      if ( CurrentIrql > v10 )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v10, 0LL);
      if ( CurrentIrql < 2u || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        if ( ((unsigned __int8)v8 & 8) != 0 || (v12->ApcState.InProgressFlags & 2) == 0 )
        {
          if ( CurrentIrql || (v12->MiscFlags & 0x400) != 0 || v12->WaitBlock[3].SpareLong )
          {
            v14 = KeAbPreAcquire((__int64)a1, 0LL, v9 == 0, v8);
            p_ThreadLock = &a1->ThreadLock;
            if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 1LL, 0LL) )
            {
              v18 = 3;
              if ( (a3 & 0x10) != 0 )
                v18 = 15;
              v19 = v18;
              v20 = v18 & 2;
              v21 = (v18 & 8) != 0;
              v22 = v19 & 4;
              *(_QWORD *)&a1->CurrentRunTime = (unsigned __int64)CurrentThread | (v22 != 0);
              LODWORD(a1->StateSaveArea) = 1;
              if ( v14 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                {
                  LOBYTE(v13) = 2;
                  AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v14 + 33), v13, 1);
                }
                else
                {
                  *(_BYTE *)(v14 + 10) = 1;
                }
                v23 = KeAbEncodeLockHandle(v14);
                p_ThreadLock = &a1->ThreadLock;
                BYTE4(a1->StateSaveArea) = v23;
              }
              if ( v20 )
                _disable();
              if ( v22 )
              {
                KxAcquireSpinLock(CurrentThread + 217);
                ExpAddFastOwnerEntryToThreadList((__int64)CurrentThread, v27, 1, &a1->ThreadLock);
                KxReleaseSpinLock(CurrentThread + 217);
              }
              else
              {
                ExpAddFastOwnerEntryToThreadList((__int64)CurrentThread, (__int64)v13, 0, p_ThreadLock);
              }
              if ( v20 )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
                if ( SchedulerAssist )
                {
                  _m_prefetchw(SchedulerAssist);
                  v28 = *SchedulerAssist;
                  do
                  {
                    v29 = v28;
                    v28 = _InterlockedCompareExchange(SchedulerAssist, v28 & 0xFFDFFFFF, v28);
                  }
                  while ( v29 != v28 );
                  if ( (v28 & 0x200000) != 0 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
                _enable();
              }
              if ( v22 )
              {
                if ( v21 && v14 )
                  KeAbMarkCrossThreadReleasable(
                    (LegacyAutoBoost *)CurrentPrcb,
                    (struct _KTHREAD *)v14,
                    SchedulerAssist,
                    v26);
                v30 = CurrentThread;
LABEL_103:
                ObfReferenceObjectWithTag(v30, 0x746C6644u);
                return v3;
              }
              return v3;
            }
            if ( *(KSPIN_LOCK **)&a1->CurrentRunTime == CurrentThread )
            {
              ++LODWORD(a1->StateSaveArea);
              if ( v14 )
                KeAbPostReleaseEx(a1, v14, v15, v16);
              return v3;
            }
            if ( v9 )
            {
              ExpAcquireFastResourceExclusiveSlow(a1, (__int64)v13, CurrentThread, (LegacyAutoBoost *)v14, a3);
              return v3;
            }
            if ( v14 )
              KeAbPostReleaseEx(a1, v14, v15, v16);
            return 0;
          }
LABEL_59:
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
        }
LABEL_55:
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      }
LABEL_52:
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    }
LABEL_47:
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)a1, 0LL, 0LL);
  }
  if ( (a3 & 6) == 0 )
    return 0;
  v31 = WORD1(a1->SListFaultAddress);
  v32 = a3 & 8;
  v33 = a3 & 4;
  v34 = a3 & 0x10;
  v55 = v34;
  v35 = 2 - (v32 != 0);
  if ( (v31 & 1) == 0 )
    goto LABEL_47;
  v36 = KeGetCurrentIrql();
  v37 = KeGetCurrentThread();
  if ( (unsigned __int8)v36 > v35 )
    KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)v36, v35, 0LL);
  if ( (unsigned __int8)v36 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    goto LABEL_52;
  if ( (v31 & 8) == 0 && (v37->ApcState.InProgressFlags & 2) != 0 )
    goto LABEL_55;
  if ( !(_BYTE)v36 && (v37->MiscFlags & 0x400) == 0 && !v37->WaitBlock[3].SpareLong )
    goto LABEL_59;
  if ( (struct _KTHREAD *)(*(_QWORD *)(BugCheckParameter2 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != v37 )
    KeBugCheckEx(0x1C6u, 9uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 16) & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 37) & 2) == 0 )
  {
    v31 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( v31 )
    {
      if ( (struct _KTHREAD *)v31 != a1 )
        KeBugCheckEx(0x1C6u, 2uLL, BugCheckParameter2, v31, 0LL);
      if ( (struct _KTHREAD *)(*(_QWORD *)(BugCheckParameter2 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != v37 )
        KeBugCheckEx(0x1C6u, 2uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 24), 0LL);
    }
  }
  v38 = *(_DWORD *)(BugCheckParameter2 + 32);
  if ( !v38 || (*(_BYTE *)(BugCheckParameter2 + 37) & 4) != 0 )
  {
    v39 = (__int64)KeGetCurrentThread();
    v40 = 0LL;
    if ( !*(_BYTE *)(BugCheckParameter2 + 36) )
    {
      v41 = KeAbPreAcquire((__int64)a1, 0LL, v32 == 0, (struct _KLOCK_ENTRIES *)v31);
      v34 = v55;
      v40 = v41;
    }
    do
    {
      _m_prefetchw(a1);
      v42 = *(_QWORD *)&a1->Header.Lock;
      if ( (*(_QWORD *)&a1->Header.Lock & 1) != 0 || !v33 && (v42 & 2) != 0 )
        return ExpAcquireFastResourceSharedSlow(a1, BugCheckParameter2, (unsigned __int32 *)v40, v39, a3);
      v43 = *(_QWORD *)&a1->Header.Lock;
    }
    while ( v43 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&a1->Header.Lock,
                     v42 ^ (v42 ^ (v42 + 4)) & 0xFFFFFFFFFFFFFFFCuLL,
                     v42) );
    v44 = 3;
    if ( v34 )
      v44 = 15;
    v45 = v44 & 2;
    v46 = v44 & 4;
    v47 = v44 & 8;
    v56 = v45;
    if ( (unsigned __int64 *)BugCheckParameter2 != &a1->ThreadLock )
      *(_QWORD *)(BugCheckParameter2 + 24) = a1;
    *(_QWORD *)(BugCheckParameter2 + 16) = v39 | (v46 != 0);
    *(_DWORD *)(BugCheckParameter2 + 32) = 1;
    if ( v40 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v36) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v40 + 33), (volatile unsigned __int8 *)v36, 1);
      }
      else
      {
        *(_BYTE *)(v40 + 10) = 1;
      }
      *(_BYTE *)(BugCheckParameter2 + 36) = KeAbEncodeLockHandle(v40);
    }
    if ( v45 )
      _disable();
    if ( v46 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)(v39 + 1736));
      ExpAddFastOwnerEntryToThreadList(v39, v51, 1, (_QWORD *)BugCheckParameter2);
      KxReleaseSpinLock((PKSPIN_LOCK)(v39 + 1736));
    }
    else
    {
      ExpAddFastOwnerEntryToThreadList(v39, v36, 0, (_QWORD *)BugCheckParameter2);
    }
    if ( v56 )
    {
      v48 = KeGetCurrentPrcb();
      v49 = (signed __int32 *)v48->SchedulerAssist;
      if ( v49 )
      {
        _m_prefetchw(v49);
        v52 = *v49;
        do
        {
          v53 = v52;
          v52 = _InterlockedCompareExchange(v49, v52 & 0xFFDFFFFF, v52);
        }
        while ( v53 != v52 );
        if ( (v52 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v48);
      }
      _enable();
    }
    if ( v46 )
    {
      if ( v47 && v40 )
        KeAbMarkCrossThreadReleasable((LegacyAutoBoost *)v48, (struct _KTHREAD *)v40, v49, v50);
      v30 = (void *)v39;
      goto LABEL_103;
    }
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 32) = v38 + 1;
  }
  return v3;
}
