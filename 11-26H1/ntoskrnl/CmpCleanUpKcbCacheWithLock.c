/*
 * XREFs of CmpCleanUpKcbCacheWithLock @ 0x1408CB390
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x1408B6020 (CmpCleanUpKCBCacheTable.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C9F40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpDelayCloseWorker @ 0x1408D4CD0 (CmpDelayCloseWorker.c)
 *     CmpCommitDiscardReplacePost @ 0x140A41418 (CmpCommitDiscardReplacePost.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140ADE3F8 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1408C0438 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1408C051C (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C9E60 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408CB8AC (CmpDoQueueLateUnloadWorker.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x140A76BF8 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

void __fastcall CmpCleanUpKcbCacheWithLock(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // rsi
  __int64 v7; // rcx
  void *v8; // rbp
  _WORD *v9; // r15
  __int64 v10; // r14
  unsigned __int64 *v11; // rbp
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rdi
  struct _LIST_ENTRY **i; // rcx
  struct _LIST_ENTRY *v17; // rax
  struct _LIST_ENTRY *v18; // rdi
  signed __int64 Flink; // rax
  signed __int64 v20; // rdx
  struct _LIST_ENTRY *v21; // rtt
  __int64 v22; // rdx
  __int64 v23; // r8
  struct _KLOCK_ENTRIES *v24; // r9
  _QWORD *v25; // rcx
  _DWORD *v26; // r14
  ULONG_PTR v27; // rdi
  __int64 *j; // rdx
  __int64 v29; // rax
  __int64 v30; // r9
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // rdx
  bool v34; // r8
  unsigned __int64 v35; // rax
  __int64 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rdx
  __int64 v40; // r9
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // r10
  unsigned __int64 v43; // rdx
  bool v44; // r8
  unsigned __int64 v45; // rax
  __int64 *v46; // rax
  __int64 **v47; // rcx
  __int64 **v48; // rcx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-98h] BYREF
  _OWORD v50[2]; // [rsp+70h] [rbp-68h] BYREF

  v4 = 0LL;
  if ( *(_QWORD *)BugCheckParameter4 )
    return;
  if ( CmpTraceRoutine )
  {
    memset(v50, 0, sizeof(v50));
    memset(&ApcState, 0, sizeof(ApcState));
    CmpAttachToRegistryProcess(&ApcState);
    v8 = (void *)CmpConstructName(BugCheckParameter4);
    if ( v8 )
    {
      LOBYTE(v7) = 23;
      guard_dispatch_icall_no_overrides(v7, (__int64)v50);
      CmpFreeTransientPoolWithTag(v8, 0x624E4D43u);
    }
    CmpDetachFromRegistryProcess(&ApcState);
  }
  if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x400000) == 0 && (*(_DWORD *)(BugCheckParameter4 + 8) & 8) != 0 )
  {
    CmpDelayDerefKeyControlBlock(*(_QWORD *)(BugCheckParameter4 + 104), a2);
    *(_QWORD *)(BugCheckParameter4 + 104) = 0LL;
    *(_WORD *)(BugCheckParameter4 + 8) &= ~8u;
  }
  v9 = *(_WORD **)(BugCheckParameter4 + 80);
  v10 = ((unsigned __int16)(-30045 * (v9[4] ^ (*((_DWORD *)v9 + 2) >> 9))) ^ (unsigned __int16)((unsigned __int64)(unsigned int)(101027 * (*((_DWORD *)v9 + 2) ^ (*((_DWORD *)v9 + 2) >> 9))) >> 9)) & 0x7FF;
  v11 = (unsigned __int64 *)&CmpKeyLockTracker.WaitListEntry.Flink[v10];
  v12 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpKeyLockTracker.WaitListEntry.Flink[v10], 0LL, 0LL, a4);
  v14 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    ExfAcquirePushLockExclusiveEx(v11, v12, (__int64)v11);
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v14, v13);
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  if ( (*(_QWORD *)v9)-- == 1LL )
  {
    for ( i = &CmpKeyLockTracker.WaitListEntry.Flink[v10].Blink; i; i = &v17->Blink )
    {
      v17 = *i;
      if ( !*i )
        break;
      if ( v17 == (struct _LIST_ENTRY *)(v9 + 4) )
      {
        *i = v17->Blink;
        break;
      }
    }
    CmpFreeTransientPoolWithTag(v9, 0x624E4D43u);
  }
  v18 = &CmpKeyLockTracker.WaitListEntry.Flink[v10];
  _m_prefetchw(&CmpKeyLockTracker.WaitListEntry.Flink[v10]);
  Flink = (signed __int64)v18->Flink;
  v20 = (signed __int64)&v18->Flink[-1];
  if ( ((unsigned __int64)v18->Flink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v20 = 0LL;
  if ( (Flink & 2) != 0
    || (v21 = v18->Flink,
        v21 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64((volatile signed __int64 *)v18, v20, Flink)) )
  {
    ExfReleasePushLock(v18);
  }
  KeAbPostRelease((unsigned __int64)v18);
  if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 4) != 0 )
    ExFreePoolWithTag(*(PVOID *)(BugCheckParameter4 + 112), 0x6E494D43u);
  v25 = *(_QWORD **)(BugCheckParameter4 + 192);
  if ( v25 )
  {
    v37 = v25[3];
    if ( v37 )
    {
      v4 = *(_QWORD *)(v37 + 16);
      v38 = *v25;
      if ( *(_QWORD **)(*v25 + 8LL) != v25 )
        goto LABEL_56;
      v39 = (_QWORD *)v25[1];
      if ( (_QWORD *)*v39 != v25 )
        goto LABEL_56;
      *v39 = v38;
      *(_QWORD *)(v38 + 8) = v39;
    }
    ExFreePoolWithTag(v25, 0);
    *(_QWORD *)(BugCheckParameter4 + 192) = 0LL;
  }
  v26 = (_DWORD *)(BugCheckParameter4 + 16);
  v27 = *(_QWORD *)(BugCheckParameter4 + 72);
  if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x20000) != 0 )
  {
    CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4, v22, v23, v24);
    CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(BugCheckParameter4 + 32), BugCheckParameter4 + 16);
    CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
  }
  else
  {
    for ( j = (__int64 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1648LL)
                        + 8
                        * (3
                         * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*v26 ^ (*v26 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v26 ^ (*v26 >> 9))) >> 9)))
                         + 2)); j; j = (__int64 *)(v29 + 8) )
    {
      v29 = *j;
      if ( !*j )
        break;
      if ( (_DWORD *)v29 == v26 )
      {
        *j = *(_QWORD *)(v29 + 8);
        break;
      }
    }
  }
  *(_DWORD *)(BugCheckParameter4 + 8) |= 0x80000u;
  if ( !v4 )
    goto LABEL_60;
  v30 = *(_QWORD *)(v4 + 32);
  v31 = *(_QWORD *)v4;
  do
  {
    v32 = v31;
    if ( v31 <= 1 )
    {
      v36 = (__int64 *)(v4 + 224);
      if ( (__int64 *)*v36 != v36 )
        KeBugCheckEx(0x51u, 0x34uLL, v4, 1uLL, 0LL);
      v47 = *(__int64 ***)(a2 + 8);
      if ( *v47 == (__int64 *)a2 )
      {
        *v36 = a2;
        *(_QWORD *)(v4 + 232) = v47;
        *v47 = v36;
        *(_QWORD *)(a2 + 8) = v36;
        *(_BYTE *)(v4 + 64) |= 1u;
        goto LABEL_60;
      }
LABEL_56:
      __fastfail(3u);
    }
    v33 = v31 - 1;
    v34 = v31 == 3 && (*(_DWORD *)(v4 + 184) & 0x40000) != 0 && *(_BYTE *)(v30 + 2952) == 1;
    v35 = _InterlockedCompareExchange64((volatile signed __int64 *)v4, v33, v31);
    v31 = v35;
  }
  while ( v35 != v32 );
  if ( v35 < v33 )
    KeBugCheckEx(0x51u, 0x25uLL, v4, 0LL, 0LL);
  if ( v34 )
    CmpDoQueueLateUnloadWorker(v30);
LABEL_60:
  if ( !v27 )
    return;
  v40 = *(_QWORD *)(v27 + 32);
  v41 = *(_QWORD *)v27;
  while ( 2 )
  {
    v42 = v41;
    if ( v41 <= 1 )
    {
      v46 = (__int64 *)(v27 + 224);
      if ( (__int64 *)*v46 != v46 )
        KeBugCheckEx(0x51u, 0x34uLL, v27, 1uLL, 0LL);
      v48 = *(__int64 ***)(a2 + 8);
      if ( *v48 == (__int64 *)a2 )
      {
        *v46 = a2;
        *(_QWORD *)(v27 + 232) = v48;
        *v48 = v46;
        *(_QWORD *)(a2 + 8) = v46;
        *(_BYTE *)(v27 + 64) |= 1u;
        return;
      }
      goto LABEL_56;
    }
    v43 = v41 - 1;
    v44 = v41 == 3 && (*(_DWORD *)(v27 + 184) & 0x40000) != 0 && *(_BYTE *)(v40 + 2952) == 1;
    v45 = _InterlockedCompareExchange64((volatile signed __int64 *)v27, v43, v41);
    v41 = v45;
    if ( v45 != v42 )
      continue;
    break;
  }
  if ( v45 < v43 )
    KeBugCheckEx(0x51u, 0x25uLL, v27, 0LL, 0LL);
  if ( v44 )
    CmpDoQueueLateUnloadWorker(v40);
}
