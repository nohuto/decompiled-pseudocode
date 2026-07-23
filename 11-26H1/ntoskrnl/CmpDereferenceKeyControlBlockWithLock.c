/*
 * XREFs of CmpDereferenceKeyControlBlockWithLock @ 0x1408C9F40
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpUnfreezeHive @ 0x14077DF2C (CmpUnfreezeHive.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpCleanupDiscardReplacePost @ 0x140864F00 (CmpCleanupDiscardReplacePost.c)
 *     CmpPrepareDiscardReplacePost @ 0x140865150 (CmpPrepareDiscardReplacePost.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408C2CA0 (CmpTransMgrFreeVolatileData.c)
 *     CmpCommitDiscardReplacePost @ 0x140A41418 (CmpCommitDiscardReplacePost.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     CmpArmDelayedCloseTimer @ 0x1403834F8 (CmpArmDelayedCloseTimer.c)
 *     ExFreeToLookasideListEx @ 0x14039FE30 (ExFreeToLookasideListEx.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     ExpAcquireFastMutexContended @ 0x14049A508 (ExpAcquireFastMutexContended.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1408C0438 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1408C051C (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C9E60 (CmpDelayDerefKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408CB390 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408CB8AC (CmpDoQueueLateUnloadWorker.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1408CBB28 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x140A76BF8 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

void __fastcall CmpDereferenceKeyControlBlockWithLock(ULONG_PTR BugCheckParameter4, __int64 a2, unsigned __int8 a3)
{
  struct _KLOCK_ENTRIES *v4; // r9
  __int64 v5; // rcx
  signed __int64 v7; // rax
  int v8; // r8d
  bool v9; // cl
  bool v10; // dl
  void *v11; // rdx
  struct _KLOCK_ENTRY *v12; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 *v14; // rax
  ULONG_PTR v15; // rsi
  __int64 v16; // rcx
  void *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  _QWORD *v21; // rcx
  ULONG_PTR v22; // rdi
  _DWORD *v23; // r14
  __int64 *i; // rdx
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r9
  bool v30; // r10
  unsigned __int64 v31; // rax
  __int64 *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rax
  unsigned __int64 ThreadLock; // rdx
  __int64 v37; // rdi
  int Flink_high; // eax
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r9
  bool v43; // r10
  unsigned __int64 v44; // rax
  __int64 *v45; // rax
  void *v46; // rcx
  unsigned __int64 v47; // rcx
  __int64 **v48; // rcx
  __int64 **v49; // rcx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v51[2]; // [rsp+70h] [rbp-58h] BYREF

  v4 = (struct _KLOCK_ENTRIES *)a3;
  v5 = *(_QWORD *)(BugCheckParameter4 + 32);
  v7 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter4);
  if ( v7 == 2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v5 + 2952) == 1 )
      CmpDoQueueLateUnloadWorker(v5);
    return;
  }
  if ( v7 )
    return;
  if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 )
  {
    v37 = *(_QWORD *)(BugCheckParameter4 + 32);
    CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
    *(_QWORD *)(v37 + 4184) = KeGetCurrentThread();
    *(_DWORD *)(v37 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 4244), 1u) & 0x7F) + 4248) = 31;
    if ( (*(_DWORD *)(v37 + 160) & 0x20) == 0 )
      CmpDereferenceHive((PVOID)v37);
    return;
  }
  v8 = *(_DWORD *)(BugCheckParameter4 + 8);
  v9 = 0;
  v10 = 0;
  if ( (v8 & 0x20000) == 0 )
    v9 = (_BYTE)v4 == 0;
  if ( (v8 & 0x20) == 0 )
    v10 = v9;
  if ( (!CmpHoldLazyFlush
     || (*(_DWORD *)(BugCheckParameter4 + 184) & 0x100000) != 0
     || (*(_DWORD *)(BugCheckParameter4 + 8) & 8) != 0)
    && v10 )
  {
    v12 = (struct _KLOCK_ENTRY *)KeAbPreAcquire((__int64)&CmpKeyLockTracker.StateSaveArea, 0LL, 0LL, v4);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = 1;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, (int)v11);
    }
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpKeyLockTracker.StateSaveArea, 0) )
      ExpAcquireFastMutexContended((struct _KTHREAD *)&CmpKeyLockTracker.StateSaveArea, v12);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire((AutoBoost *)v12, v11);
      else
        v12->AcquiredByte = 1;
    }
    CmpKeyLockTracker.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)KeGetCurrentThread();
    LODWORD(CmpKeyLockTracker.TrapFrame) = CurrentIrql;
    v14 = (unsigned __int64 *)(BugCheckParameter4 + 224);
    if ( (unsigned __int64 *)*v14 != v14 )
      KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter4, 0LL, 0LL);
    ThreadLock = CmpKeyLockTracker.ThreadLock;
    if ( *(struct _KTHREAD **)(CmpKeyLockTracker.ThreadLock + 8) == (struct _KTHREAD *)&CmpKeyLockTracker.ThreadLock )
    {
      *(_QWORD *)(BugCheckParameter4 + 232) = &CmpKeyLockTracker.ThreadLock;
      *v14 = ThreadLock;
      *(_QWORD *)(ThreadLock + 8) = v14;
      CmpKeyLockTracker.ThreadLock = BugCheckParameter4 + 224;
      Flink_high = HIDWORD(WheapPfaLock.Timer.Header.WaitListHead.Flink);
      *(_BYTE *)(BugCheckParameter4 + 64) |= 2u;
      ++KiSystemServiceTraceCallbackLock.KernelShadowStackBase;
      HIDWORD(WheapPfaLock.Timer.Header.WaitListHead.Flink) = Flink_high + 1;
      if ( Flink_high + 1 <= (unsigned int)CmpDelayedCloseSize )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
      }
      else
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
        CmpArmDelayedCloseTimer();
      }
      return;
    }
    goto LABEL_60;
  }
  v15 = 0LL;
  if ( *(_QWORD *)BugCheckParameter4 )
    goto LABEL_88;
  if ( CmpTraceRoutine )
  {
    memset(v51, 0, sizeof(v51));
    memset(&ApcState, 0, sizeof(ApcState));
    CmpAttachToRegistryProcess(&ApcState);
    v17 = (void *)CmpConstructName(BugCheckParameter4);
    if ( v17 )
    {
      LOBYTE(v16) = 23;
      guard_dispatch_icall_no_overrides(v16, (__int64)v51);
      CmpFreeTransientPoolWithTag(v17, 0x624E4D43u);
    }
    CmpDetachFromRegistryProcess(&ApcState);
  }
  if ( (*(_BYTE *)(BugCheckParameter4 + 8) & 8) != 0 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x400000) == 0 )
  {
    CmpDelayDerefKeyControlBlock(*(_QWORD *)(BugCheckParameter4 + 104), a2);
    *(_QWORD *)(BugCheckParameter4 + 104) = 0LL;
    *(_WORD *)(BugCheckParameter4 + 8) &= ~8u;
  }
  CmpDereferenceNameControlBlockWithLock(*(_QWORD *)(BugCheckParameter4 + 80));
  if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 4) != 0 )
    ExFreePoolWithTag(*(PVOID *)(BugCheckParameter4 + 112), 0x6E494D43u);
  v21 = *(_QWORD **)(BugCheckParameter4 + 192);
  if ( v21 )
  {
    v33 = v21[3];
    if ( v33 )
    {
      v34 = *v21;
      v15 = *(_QWORD *)(v33 + 16);
      if ( *(_QWORD **)(*v21 + 8LL) != v21 )
        goto LABEL_60;
      v35 = (_QWORD *)v21[1];
      if ( (_QWORD *)*v35 != v21 )
        goto LABEL_60;
      *v35 = v34;
      *(_QWORD *)(v34 + 8) = v35;
    }
    ExFreePoolWithTag(v21, 0);
    *(_QWORD *)(BugCheckParameter4 + 192) = 0LL;
  }
  v22 = *(_QWORD *)(BugCheckParameter4 + 72);
  v23 = (_DWORD *)(BugCheckParameter4 + 16);
  if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x20000) != 0 )
  {
    CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4, v18, v19, v20);
    CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(BugCheckParameter4 + 32), BugCheckParameter4 + 16);
    CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
  }
  else
  {
    for ( i = (__int64 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1648LL)
                        + 8
                        * (3
                         * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*v23 ^ (*v23 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v23 ^ (*v23 >> 9))) >> 9)))
                         + 2)); i; i = (__int64 *)(v25 + 8) )
    {
      v25 = *i;
      if ( !*i )
        break;
      if ( (_DWORD *)v25 == v23 )
      {
        *i = *(_QWORD *)(v25 + 8);
        break;
      }
    }
  }
  *(_DWORD *)(BugCheckParameter4 + 8) |= 0x80000u;
  if ( !v15 )
    goto LABEL_73;
  v26 = *(_QWORD *)(v15 + 32);
  v27 = *(_QWORD *)v15;
  do
  {
    v28 = v27;
    if ( v27 <= 1 )
    {
      v32 = (__int64 *)(v15 + 224);
      if ( (__int64 *)*v32 != v32 )
        KeBugCheckEx(0x51u, 0x34uLL, v15, 1uLL, 0LL);
      v48 = *(__int64 ***)(a2 + 8);
      if ( *v48 == (__int64 *)a2 )
      {
        *v32 = a2;
        *(_QWORD *)(v15 + 232) = v48;
        *v48 = v32;
        *(_QWORD *)(a2 + 8) = v32;
        *(_BYTE *)(v15 + 64) |= 1u;
        goto LABEL_73;
      }
LABEL_60:
      __fastfail(3u);
    }
    v29 = v27 - 1;
    v30 = v27 == 3 && (*(_DWORD *)(v15 + 184) & 0x40000) != 0 && *(_BYTE *)(v26 + 2952) == 1;
    v31 = _InterlockedCompareExchange64((volatile signed __int64 *)v15, v29, v27);
    v27 = v31;
  }
  while ( v31 != v28 );
  if ( v31 < v29 )
    KeBugCheckEx(0x51u, 0x25uLL, v15, 0LL, 0LL);
  if ( v30 )
    CmpDoQueueLateUnloadWorker(v26);
LABEL_73:
  if ( !v22 )
    goto LABEL_88;
  v39 = *(_QWORD *)(v22 + 32);
  v40 = *(_QWORD *)v22;
  while ( 2 )
  {
    v41 = v40;
    if ( v40 <= 1 )
    {
      v45 = (__int64 *)(v22 + 224);
      if ( (__int64 *)*v45 != v45 )
        KeBugCheckEx(0x51u, 0x34uLL, v22, 1uLL, 0LL);
      v49 = *(__int64 ***)(a2 + 8);
      if ( *v49 == (__int64 *)a2 )
      {
        *v45 = a2;
        *(_QWORD *)(v22 + 232) = v49;
        *v49 = v45;
        *(_QWORD *)(a2 + 8) = v45;
        *(_BYTE *)(v22 + 64) |= 1u;
        goto LABEL_88;
      }
      goto LABEL_60;
    }
    v42 = v40 - 1;
    v43 = v40 == 3 && (*(_DWORD *)(v22 + 184) & 0x40000) != 0 && *(_BYTE *)(v39 + 2952) == 1;
    v44 = _InterlockedCompareExchange64((volatile signed __int64 *)v22, v42, v40);
    v40 = v44;
    if ( v44 != v41 )
      continue;
    break;
  }
  if ( v44 < v42 )
    KeBugCheckEx(0x51u, 0x25uLL, v22, 0LL, 0LL);
  if ( v43 )
    CmpDoQueueLateUnloadWorker(v39);
LABEL_88:
  if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) != KeGetCurrentThread()
    && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x80000) != 0 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.KernelShadowStackInitial);
    if ( *(_QWORD *)(BugCheckParameter4 + 120) != BugCheckParameter4 + 120 )
      KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter4, 0LL, 0LL);
    if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x10000) != 0 )
      KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter4, 1uLL, 0LL);
    v46 = *(void **)(BugCheckParameter4 + 200);
    if ( (unsigned __int64)v46 > 1 )
      ExFreePoolWithTag(v46, 0x624E4D43u);
    v47 = *(_QWORD *)(BugCheckParameter4 + 296);
    if ( (v47 & 1) != 0 )
      v47 &= ~1uLL;
    if ( v47 )
      CmpFreeTransientPoolWithTag((void *)v47, 0x624E4D43u);
    *(_DWORD *)(BugCheckParameter4 + 8) |= 0x10000u;
    *(_QWORD *)(BugCheckParameter4 + 32) = 0LL;
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)&CmpKcbLookaside, (PVOID)BugCheckParameter4);
    _InterlockedDecrement64((volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.WpsFeedback);
  }
}
